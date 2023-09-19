#include "main.h"
/**
 * handle_buffer - concatenate buffe chaacte
 * @buffer: buffer pointer
 * @c: character to concatenate
 * buffIndex: indexto buff pointer
 * Return: index of buffer pointer
*/
unsigned int handle_buffer(char *buffer, char c, unsigned int buffIndex)
{
    if (buffIndex == 1024)
    {
        /* code */
        print_output(buffer, buffIndex);
        buffIndex = 0;
    }
    buffer[buffIndex] = c;
    buffIndex++;
    return (buffIndex);
}