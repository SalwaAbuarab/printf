#include "main.h"
/**
 * print_reverse - print strings in reverse order.
 * @arguments: inputs
 * @buffer: buffer pointer
 * @buffIndex: buffer index
 * Return: number of chars printed.
*/
int print_reverse(va_list arguments, char *buffer, unsigned int buffIndex)
{
    unsigned int i;
    char *str;
    int x = 0;
    char arr[] = "(llun)";
    str = va_arg(arguments, char *);
    if (str == NULL)
    {
       for (i = 0; arr[i]; i++)
       {
        /* code */
          buffIndex = handle_buffer(buffer, arr[i], buffIndex);
       }
       return (8);    
    }
    for (i = 0; str[i]; i++)
       ;
    x = i - 1;
    for (; x >= 0; x--)
    {
       /* code */
       buffIndex = handle_buffer(buffer, str[x], buffIndex);
    }
    return (i);
}
