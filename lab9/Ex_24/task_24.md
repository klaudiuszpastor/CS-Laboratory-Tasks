The task is to extend the set of functions from Task 2 with a function address_status_t copy_memory(memory_sector_t *, int *destination, int *source, size_t size), which copies data of size size located at the address source to the address destination, if the address destination belongs to the memory_sector_t structure. The function returns the enumerator NO_ERROR if the data write succeeded, or ADDRESS_OUT_OF_RANGE otherwise.

As part of the task:

Add the declaration of the copy_memory() function to the file memory_sector.h.
Add the definition of the function to the file memory_sector.c (use the memcpy() or memmove() functions from the standard library).
Extend the main() function with tests for the newly implemented function.