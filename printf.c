#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - function to print my printf of "c" "s" and "i".
 * @format: getting the my printf argument
 * Return the specifier if found true
 */
int _print(const char *format, ...)
{
  
  int i = 0;
  int flag = 0;
  
  va_list args;
  
  va_start(args, format);
  while (format[i])
    {
      while (format[i] == '%')
	{
	  switch (format[i + 1])
	    {
	    case 'c':
	            flag += print_char(args);
	            i += 2;
	    break;
	    
	    case 's':
	    flag += print_string(args);
	            i += 1;
	    break;
	    }
	  i++;
	}
      if (format[i])
	{
	  _putchar(format[i]);
	  flag++;
        }
      i++;
    }
  va_end(args);
  return (flag);
}
