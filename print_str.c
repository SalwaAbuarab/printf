#include "main.h"
/**
 * print_str - print string to stdout.
 * @arguments: string inputs
 * @buffSize: buffer pointer index
 * @buffer: buffer pointer
 * Return: On success 1.
*/
int print_str(va_list arguments, char *buffer, unsigned int buffSize)
{
    char *str;
    unsigned int i;
    char arr[] = "(null)";
    str = va_arg(arguments, char *);
    if (str == NULL)
    {
        for (i = 0; arr[i]; i++)
        {
            buffSize = handle_buffer(buffer, arr[i], buffSize);
        }
        return (2);
        
    }
    for (i = 0; str[i]; i++)
    {
        buffSize = handle_buffer(buffer, str[i], buffSize);
    }   
    return (i);
}