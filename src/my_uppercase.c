/*
** my_uppercase.c for push_swap in 
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Dec 14 18:48:08 2014 Guillaume Pirou
** Last update Sun Dec 14 18:48:08 2014 Guillaume Pirou
*/

#include <stdlib.h>
#include "../include/my_printf.h"

char	*my_uppercase(char *temp)
{
  int	i;
  char	*buff;

  if (temp == NULL)
    return (NULL);
  if ((buff = my_strdup(temp)) == NULL)
    return (NULL);
  i = -1;
  while (buff[++i] != '\0')
    {
      if (buff[i] >= 'a' && buff[i] <= 'z')
	buff[i] -= 32;
    }
  buff[i] = '\0';
  return (buff);
}
