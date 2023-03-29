#include "main.h"


/**
 * handl_buf - buffer concatenation
 *
 * @buf: pointer
 *
 * @c: character to concatenate
 *
 * @ibuf: index pointer
 *
 * Return: index of buffer pointer
 */

unsigned int handl_buf(char *buf, char c, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
	print_buf(buf, ibuf);
	ibuf = 0;
	}
	buf[ibuf] = c;
	return (++ibuf);
}
