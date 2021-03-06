/*
** worknb.c for push_swap in 
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Dec 14 18:49:52 2014 Guillaume Pirou
** Last update Sun Dec 14 18:49:53 2014 Guillaume Pirou
*/

#include <stdlib.h>

int	my_nbchiff(long nb, int base)
{
  int	i;

  i = 1;
  while ((nb /= base) > (base - 1))
    {
      ++i;
      nb /= 10;
    }
  return (i);
}

int	my_absatoi(const char *str)
{
  int	nb;
  int	i;

  if (str == NULL)
    return (0);
  i = 0;
  nb = 0;
  while (!(str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
    ++i;
  --i;
  while (str[++i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  nb *= 10;
	  nb += str[i] - 48;
	}
    }
  return (nb);
}
