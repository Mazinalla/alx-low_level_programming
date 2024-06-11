#include <stdio.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to the pointer to be set.
 * @to: Pointer to the value to be set.
 *
 * Description: This function sets the value of the pointer 's' to the address
 * pointed to by 'to'.
 */
void set_string(char **s, char *to)
{
	*s = to; /* Assigns the value of 'to' 
		    (the address it points to)
		    to the pointer 's' */
}
