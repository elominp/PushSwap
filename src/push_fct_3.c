/*
** push_fct_3.c for push_swap in 
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Dec 14 18:49:16 2014 Guillaume Pirou
** Last update Sun Dec 14 18:49:17 2014 Guillaume Pirou
*/

#include <stdlib.h>
#include "../include/pushswap.h"

int	rra(t_plt *l_a)
{
  t_lst *temp;

  if (l_a == NULL)
    return (-1);
  temp = l_a->end;
  l_a->end = l_a->end->prev;
  l_a->end->next = NULL;
  l_a->begin->prev = temp;
  l_a->begin->prev->next = l_a->begin;
  l_a->begin = l_a->begin->prev;
  l_a->begin->prev = NULL;
  return (1);
}

int	rrb(t_plt *l_b)
{
  t_lst *temp;

  if (l_b == NULL)
    return (-1);
  temp = l_b->end;
  l_b->end = l_b->end->prev;
  l_b->end->next = NULL;
  l_b->begin->prev = temp;
  l_b->begin->prev->next = l_b->begin;
  l_b->begin = l_b->begin->prev;
  l_b->begin->prev = NULL;
  return (1);
}

int	rrr(t_plt *l_a, t_plt *l_b)
{
  if (l_a == NULL || l_b == NULL)
    return (-1);
  if ((rra(l_a) < 0) || (rrb(l_b) < 0))
    return (0);
  return (1);
}
