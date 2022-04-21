#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h> /* va_list */
#include <stdlib.h> /* malloc, free */
#include <unistd.h> /* write */

/* helper functions */
char* (*get_func(char i))(va_list);
char *create_buffer(void);
void write_buffer(char *buffer, int len, va_list list);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/* printf functions */
int _printf(const char *format, ...);
char *print_s(va_list list);
char *print_c(va_list list);
char *print_d(va_list list);
char *itob(va_list list);
char *rot13(va_list list);
char *rev_string(va_list list);
char *itoOctal(va_list list);

/**
 * struct types - struct
 * @id: identifier of type to print (e.g. c means char)
 * @func: ptr to functions that print according to identifier (e.g. print_c)
 */

typedef struct types
{
	char id;
	char* (*func)(va_list);
} print;


/* converter */
char *convert(unsigned long int num, int base, int lowercase);

/* _printf */
int _printf(const char *format, ...);

/* get_print */
int (*get_print(char s))(va_list, mods *);

/* get_flags */
int get_flags(char s, mods *f);

/* print_alpha */
int print_string(va_list l, mods *f);
int print_char(va_list l, mods *f);

/* write_funcs */
int _putchar(char c);
int _puts(char *str);

/* print_custom */
int print_rot13(va_list l, mods *f);
int print_rev(va_list l, mods *f);
int print_bigS(va_list l, mods *f);
_Bool isNonAlphaNumeric(char c);

/* print_address */
int print_address(va_list l, mods *f);

/* print_percent */
int print_percent(va_list l, mods *f);

/* assertions */
_Bool invalidInputs(const char *p);

/* unit_tests */
void tusBasicTester(void);
void tusAdvancedTester(void);
void tusSuperAdvanced(void);

#endif
