#include "main.h"
/**
 * print_unsigned - print unsigned integer
 * @arguments: numbers
 * @buffer: buffer pointer
 * @buffSize: buffer pointer index
 * Return: number
*/
int print_unsigned(va_list arguments, char *buffer, unsigned int buffSize)
{
    unsigned int integer, temp_int, x, i;

    integer = va_arg(arguments, unsigned int);
    temp_int = integer;
    x = 1;
    while (temp_int > 9)
    {
        /* code */
        x *= 10;
        temp_int /= 10;
    }
    for (i = 0; x > 0; x /= 10, i++)
    {
        /* code */
        buffSize = handle_buffer(buffer, ((integer / x) % 10) + '0', buffSize);
    }
    return (i);
}
