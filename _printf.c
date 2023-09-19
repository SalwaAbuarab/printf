#include "main.h"
/**
 * _printf - function to simulate original printf
 * @format: input string.
 * Return: printed chars.
*/
int _printf(const char *format, ...)
{
    unsigned int i = 0, count = 0, buffSize = 0;
    va_list arguments;
    int (*pfunc)(va_list, char *, unsigned int);
    char *buffer;
    buffer = malloc(sizeof(char) * 1024);
    va_start(arguments, format);
    if (!format || (format[i] == '%' && !format[i + 1]) || !buffer)
        return (-1);
    if (!format[i])
        return (0);
    for (i = 0; format && format[i]; i++)
    {
        if (format[i] == '%')
        {
            if (format[i + 1] == '\0')
            {
                print_output(buffer, buffSize);
                free(buffer);
                va_end(arguments);
                return (-1);
            }
            else
            {
                pfunc = get_print(format, i + 1);
                if (pfunc == NULL)
                {
                    if (format[i + 1] == ' ' && !format[i + 2])
                        return (-1);
                    handle_buffer(buffer, format[i], buffSize);
                    count++;
                    i--;
                }
                else
                {
                    count += pfunc(arguments, buffer, buffSize);
                    i += printy(format, i + 1);
                }
            }
            i++;
        }
        else
        {
            handle_buffer(buffer, format[i], buffSize);
            count++;
        }
        for (buffSize = count; buffSize > 1024; buffSize -= 1024)
                ;       
    }
    print_output(buffer, buffSize);
    free(buffer);
    va_end(arguments);
    return (count);      
}