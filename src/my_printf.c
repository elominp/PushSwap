/*
** my_printf.c for push_swap in 
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Dec 14 18:46:03 2014 Guillaume Pirou
** Last update Sat May 30 09:29:18 2015 guigui
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my_printf.h"
#include "pushswap.h"

int		my_printf(const char *format, ...)
{
  int		i;
  va_list	list;
  int		cp;

  if (format == NULL)
    return (-1);
  i = -1;
  va_start(list, format);
  while (format[++i] != '\0')
    {
      if (format[i] != '%')
	my_putchar(format[i]);
      else
	{
	  cp = i;
	  i += my_parse_format(format + i, &list);
	  if (i < cp)
	    return (-1);
	}
    }
  va_end(list);
  return (0);
}
