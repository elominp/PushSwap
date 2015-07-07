/*
** my_strdup.c for push_swap in 
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Dec 14 18:47:44 2014 Guillaume Pirou
** Last update Sun Dec 14 18:47:45 2014 Guillaume Pirou
*/

#include <stdlib.h>
#include "../include/my_printf.h"

char	*my_strdup(char *src)
{
  int	len;
  int	lp;
  char	*dest;

  len = my_strlen(src);
  lp = 0;
  dest = malloc(sizeof(src) * len);
  while (lp < len)
    {
      dest[lp] = src[lp];
      ++lp;
    }
  return (dest);
}
