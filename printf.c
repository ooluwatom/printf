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
  int flagg = 0;
  va_list args;
  va_start(args, format);
  while (format[i])
    {
      while (format[i] == "%")
	{
	  switch (format[i + 1])
	    {
	    case "c";
	            flagg += print_char(args);
	            i += 2;
	    break;
	    
	    case "s";
	            flagg += print_char(args);
	            i += 1;
	    break;
	    }
	  i++;
	}
      if (format[i])
	{
	  _putchar(format[i]);
	  flagg++;
        }
      i++;
    }
  va_ends(args);
  return (flagg);
}
