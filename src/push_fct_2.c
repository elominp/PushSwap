/*
** push_fct_2.c for push_swap in 
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Dec 14 18:48:59 2014 Guillaume Pirou
** Last update Sun Dec 14 18:49:00 2014 Guillaume Pirou
*/

#include <stdlib.h>
#include "../include/pushswap.h"

int	ra(t_plt **l_a)
{
  t_lst	*temp;

  if (l_a == NULL)
    return (-1);
  temp = (*l_a)->begin;
  (*l_a)->begin = (*l_a)->begin->next;
  (*l_a)->begin->prev = NULL;
  (*l_a)->end->next = temp;
  (*l_a)->end = (*l_a)->end->next;
  (*l_a)->end->next = NULL;
  return (1);
}

int	rb(t_plt **l_b)
{
  t_lst *temp;

  if (l_b == NULL)
    return (-1);
  temp = (*l_b)->begin;
  (*l_b)->begin = (*l_b)->begin->next;
  (*l_b)->begin->prev = NULL;
  (*l_b)->end->next = temp;
  (*l_b)->end->next = NULL;
  return (1);
}

int	rr(t_plt **l_a, t_plt **l_b)
{
  if (l_a == NULL || l_b == NULL)
    return (-1);
  if ((ra(l_a) < 0) || (rb(l_b) < 0))
    return (0);
  return (1);
}
