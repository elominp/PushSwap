/*
** my_putnbr_base.c for push_swap in 
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Dec 14 18:47:10 2014 Guillaume Pirou
** Last update Sun Dec 14 18:47:11 2014 Guillaume Pirou
*/

#include "../include/my_printf.h"

int	my_printnbr(long nb, char *base, int bs)
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

int	my_putnbr_base(long nbr, char *base)
{
  if (nbr == 0)
    {
      my_putchar('0');
      return (0);
    }
  else if (nbr < 0)
      my_putchar('-');
  my_printnbr(nbr, base, my_strlen(base));
  return (0);
}

int	my_printunbr(unsigned long nb, char *base, int bs)
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

int	my_putunbr_base(unsigned long nbr, char *base)
{
  if (nbr == 0)
    {
      my_putchar('0');
      return (0);
    }
  else if (nbr < 0)
      my_putchar('-');
  my_printnbr(nbr, base, my_strlen(base));
  return (0);
}
