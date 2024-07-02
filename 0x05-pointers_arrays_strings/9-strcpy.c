#include "main.h"

/**
 * this is the documentation
 *
 * it needs to be more than one line
 *
 * this is the last one
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
