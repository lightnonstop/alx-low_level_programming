#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * _realloc - Reallocates a memory block
  * @ptr: Pointer to the memory previously allocated
  * @old_size: Original size, in bytes, of the allocated space for pointer
  * @new_size: New size, in bytes of the new memory block
  * Return: Newly allocated memory block, NULL 
  * if new size of memory block is zero,
  * Pointer to old memory if pointer is NULL, NULL if newly
  * allocated size of memory is equal old size of memory block.
  */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char *p;
    int i;

    p = malloc(sizeof(char) * 10);
    p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
    i = 0;
    while (i < 98)
    {
        p[i++] = 98;
    }
    simple_print_buffer(p, 98);
    free(p);
    return (0);
}
