#include "memory_operations.h"
#include <cstring>


int * get_left_fence_address(memory_sector_t * memory_sector){
    return &(memory_sector->l_fence); 
    }

int * get_right_fence_address(memory_sector_t * memory_sector){
    return &(memory_sector->r_fence);
}

size_t get_memory_buffer_size(memory_sector_t * memory_sector){
    return sizeof(memory_sector->buffer)/sizeof(unsigned int);
}


void initialize_memory(memory_sector_t * memory_sector){
    memory_sector->l_fence = FENCE_INITIALIZER;
    memory_sector->r_fence = FENCE_INITIALIZER;
    for(int i = 0; i < sizeof(memory_sector->buffer)/sizeof(unsigned int); i++)
        memory_sector->buffer[i] = BUFFER_INITIALIZER;
}

address_status_t validate_address(memory_sector_t * memory_sector, const int * address){
    bool bNoError;
    bNoError = (address <= get_right_fence_address(memory_sector) && address >= get_left_fence_address(memory_sector)) ? true : false;
    
    if(bNoError)
        return address_status::NO_ERROR;
    else 
        return address_status::ADDRESS_OUT_OF_RANGE; 
}

address_status_t read_memory(memory_sector_t * memory_sector, const int * address, int * buffer){

    if(validate_address(memory_sector, address) == address_status::NO_ERROR){
        * buffer = * address;
        return address_status::NO_ERROR;
    } else{
        return address_status::ADDRESS_OUT_OF_RANGE;
    }
}

address_status_t write_memory(memory_sector_t * memory_sector, int * address, int value){
    if(validate_address(memory_sector, address) == address_status::NO_ERROR){
        * address = value;
        return address_status::NO_ERROR;
    } else{
        return address_status::ADDRESS_OUT_OF_RANGE;
    }
}

address_status_t copy_memory(memory_sector_t *, int *destination, int *source, size_t size)
{
    if(validate_address(memory_sector, destination) == address_status::NO_ERROR){
    memcpy(destination, source, size);  
        return address_status::NO_ERROR;
    } else {
        return address_status::ADDRESS_OUT_OF_RANGE;
    }
}
