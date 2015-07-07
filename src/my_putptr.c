/*
** my_putptr.c for push_swap in 
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Dec 14 18:47:21 2014 Guillaume Pirou
** Last update Sat May 30 09:33:04 2015 guigui
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my_printf.h"
#include "pushswap.h"

int	my_ptrprintnbr(unsigned long nb, char *base, int bs)
{
  if (nb > -bs && nb < bs)
    {
      (nb < 0) ? my_putchar(base[-1 * nb]) : my_putchar(base[nb]);
      return (0);
    }
  my_printnbr(nb / bs, base, bs);
  (nb < 0) ? my_putchar(base[-(nb % bs)]) : my_putchar(base[nb % bs]);
  return (0);
}

int	my_putptr(unsigned long nbr)
{
  if (nbr == 0)
    {
      my_putchar('0');
      return (0);
    }
  else if (nbr < 0)
      my_putchar('-');
  my_putstr("0x");
  my_printnbr(nbr, "0123456789abcdef", 16);
  return (0);
}
