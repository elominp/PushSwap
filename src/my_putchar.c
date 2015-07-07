/*
** my_putchar.c for push_swap in 
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Dec 14 18:46:41 2014 Guillaume Pirou
** Last update Sun Dec 14 18:46:42 2014 Guillaume Pirou
*/

#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}
