#include "main.h"
/**
 *_memcpy -   copy number bytes form adress "from" to adress "to"
 *@dest: content is to be copied
 *@src: Source of data to be copied
 *@n: bytes of the memory
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int y)

{
	unsigned int a;

	a = 0;
	while (a < y)  /*Declaring WHILE*/
	{
		*(dest + a) = *(src + a); /*add 1 position dest and src*/
		a++;

	} /*END WHILE*/


	return (dest);
}
