#include <cstring>
#include "memory_operations.h"


int * get_left_fence_address(memory_sector_t * memory_sector){
    return &(memory_sector->l_fence); //-> operator dostępu do składowej
    //return &((*memory_sector).l_fence) ewentualnie tak. tyle nawiasów wynika z kolejności pierwszeństwa operatorów
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

