#include "main.h"
/**
 * get_print - select the right printing function
 * depending on the convertion specifier passed to _printf
 * @s: hold conversion specifier
 * @index: index of conversion specifier
 * Return: pointer to matching printing function
*/
int (*get_print(const char *s, int index))(va_list, char *, unsigned int)
{
    print arr[] = {
        {"c", print_char},
        {"s", print_str}, 
        {"%", print_percent},
        {"b", print_binary},
        {"d", print_int}, {"i", print_int},
        {"r", print_reverse}, {"R", print_rot13}
    };
    int i = 0, j = 0, first_input;

    first_input = index;
    while (arr[i].c)
    {
        if (s[index] == arr[i].c[j])
        {
            if (arr[i].c[j + 1] != '\0')
            {
                index++;
                j++;
            }
            else
                break;
        }
        else
        {
            j = 0;
            i++;
            index = first_input;
        }   
    }
    return (arr[i].f);
}