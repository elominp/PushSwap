/*
** get_option.c for push_swap in 
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Dec 14 18:45:27 2014 Guillaume Pirou
** Last update Sat May 30 09:27:53 2015 guigui
*/

#include <stdlib.h>
#include <stdarg.h>
#include "../include/my_printf.h"

int	get_flags(const char *fmt, t_data *data)
{
  if (fmt == NULL || data == NULL)
    return (-1);
  data->flag = (char)fmt[0];
  return (1);
}

int	get_width(const char *fmt, t_data *data, va_list *list)
{
  if (fmt == NULL || data == NULL)
    return (-1);
  if (fmt[0] > '0' && fmt[0] <= '9')
    {
      data->width = my_absatoi(fmt);
      return (my_nbchiff(data->width, 10));
    }
  else if (fmt[0] == '*')
    {
      if (list == NULL)
	return (-1);
      data->width = va_arg(*list, int);
      return (my_nbchiff(data->width, 10));
    }
  return (-1);
}

int	get_precision(const char *fmt, t_data *data, va_list *list)
{
  if (fmt == NULL || data == NULL)
    return (-1);
  if (fmt[0] != '.')
    return (-1);
  if (fmt[1] >= '0' && fmt[1] <= '9')
    {
      data->precision = my_absatoi(fmt + 1);
    }
  else if (fmt[1] == '*')
    {
      if (list == NULL)
	return (-1);
      data->precision = va_arg(*list, int);
      return (my_nbchiff(data->precision, 10));
    }
  return (-1);
}

int	get_specifier(char c, t_data *data)
{
  if (data == NULL)
    return (0);
  if (is_specifier(c))
    {
      data->specifier = c;
      return (1);
    }
  return (0);
}
