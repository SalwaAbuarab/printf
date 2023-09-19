#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct printhandler - struct for print function
 * @c: identifer
 * @f: pointer to printfunc
 * Description: store pointers to print func
*/

typedef struct printHandler
{
    char *c;
    int (*f)(va_list, char *, unsigned int);

} print;

/*printf*/
int _printf(const char *format, ...);
/*print %*/
int print_percent(va_list c __attribute__((unused)), char *buffer, unsigned int i);
/*print c*/
int print_char(va_list arguments, char *buffer, unsigned int buffSize);
/*print s*/
int print_str(va_list arguments, char *buffer, unsigned int buffSize);
/*print i*/
int print_int(va_list arguments, char *buffer, unsigned int buffIndex);
/*print b*/
int print_binary(va_list arguments, char *buffer, unsigned int buffIndex);
/*print u*/
int print_unsigned(va_list arguments, char *buffer, unsigned int buffSize);
int printy(const char *s, int index);
int (*get_print(const char *s, int index))(va_list, char *, unsigned int);
int print_output(char *buffer, unsigned int buffSize);
unsigned int handle_buffer(char *buffer, char c, unsigned int buffIndex);
char *binary_list(char *binary, int isNegative, long int integer, int binarySize);
#endif