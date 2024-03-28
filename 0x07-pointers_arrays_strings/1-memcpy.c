#include "main.h"
/**
 *_memcpy -   copy number bytes form adress "from" to adress "to"
 *@dest: content is to be copied
 *@src: Source of data to be copied
 *@n: bytes of the memory
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest; // Store the original destination pointer
    while (n--) {
        *dest++ = *src++; // Copy byte by byte
    }
    return (original_dest);
}
