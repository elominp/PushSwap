/*
** my_putstr.c for push_swap in 
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Dec 14 18:47:33 2014 Guillaume Pirou
** Last update Sun Dec 14 18:47:33 2014 Guillaume Pirou
*/

#include <unistd.h>
#include "../include/my_printf.h"

int	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
  return (0);
}
