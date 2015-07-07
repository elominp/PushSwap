/*
** my_putblank.c for push_swap in 
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Dec 14 18:46:30 2014 Guillaume Pirou
** Last update Sat May 30 09:30:14 2015 guigui
*/

#include "my_printf.h"
#include "pushswap.h"

void	my_putblank(int nb)
{
  int	i;

  i = -1;
  if (nb < 0)
    return;
  while (++i < nb)
    my_putchar(' ');
}

void	my_putzero(int nb)
{
  int	i;

  i = -1;
  if (nb < 0)
    return;
  while (++i < nb)
    my_putchar('0');
}
