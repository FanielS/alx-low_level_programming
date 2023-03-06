#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *yolo;

	yolo = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (yolo);
}
