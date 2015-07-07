/*
** my_put.c for push_swap in 
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Dec 14 18:46:19 2014 Guillaume Pirou
** Last update Sat May 30 09:29:41 2015 guigui
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my_printf.h"
#include "pushswap.h"

int	my_putinteger(t_data *data, va_list *list)
{
  char	c;

  if (data == NULL || list == NULL)
    return (-1);
  c = data->specifier;
  if (data->flag == '+')
    my_putchar('+');
  if (c == 'd' || c == 'i')
    return (my_putdecint(data, list, 4));
  else if (c == 'u')
    return (my_putudecint(data, list, 4));
  else if (c == 'o')
    return (my_putuoctint(data, list));
  else if (c == 'x' || c == 'X')
    return (my_putuhexint(data, list, 4));
  else
    return (-1);
}

int	my_putallchar(char *buff)
{
  int	i;

  if (buff == NULL)
    return (0);
  i = -1;
  while (buff[++i] != '\0')
    {
      if (buff[i] < 32 || buff[i] >= 127)
	{
	  my_putchar('\\');
	  my_putchar('0');
	  my_putnbr_base(buff[i], "01234567");
	}
      else
	my_putchar(buff[i]);
    }
  return (1);
}

int	my_putstring(t_data *data, va_list *list)
{
  char	c;
  char	*buff;
  int	len;

  if (data == NULL || list == NULL)
    return (-1);
  c = data->specifier;
  buff = va_arg(*list, char*);
  len = my_strlen(buff);
  if (len != 0 && (len < data->width))
    my_putblank(data->width - len);
  if (c == 's')
    my_putstr(buff);
  else if (c == 'S')
    {
      if (my_putallchar(buff))
	return (0);
      else
	return (-1);
    }
  else
    return (-1);
  return (0);
}

int		my_putpointer(t_data *data, va_list *list)
{
  unsigned long	ptr;

  if (data == NULL || list == NULL)
    return (-1);
  ptr = (unsigned long)va_arg(*list, void*);
  my_putptr(ptr);
  return (0);
}
