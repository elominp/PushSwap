/*
** push_fct_1.c for push_swap in 
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Dec 14 18:48:46 2014 Guillaume Pirou
** Last update Sun Dec 14 18:48:47 2014 Guillaume Pirou
*/

#include <stdlib.h>
#include "../include/pushswap.h"

int	sa(t_plt *l_a)
{
  t_lst	*temp;

  if (l_a == NULL)
    return (-1);
  if (l_a->begin == NULL)
    return (-1);
  if (l_a->begin->next == NULL)
    return (0);
  temp = l_a->begin;
  temp->next = l_a->begin->next->next;
  l_a->begin = l_a->begin->next;
  temp->prev = l_a->begin;
  l_a->begin->prev = NULL;
  l_a->begin->next = temp;
  return (1);
}

int	sb(t_plt *l_b)
{
  t_lst *temp;

  if (l_b == NULL)
    return (-1);
  if (l_b->begin == NULL)
    return (-1);
  if (l_b->begin->next== NULL)
    return (0);
  temp = l_b->begin;
  temp->next = l_b->begin->next->next;
  l_b->begin = l_b->begin->next;
  temp->prev = l_b->begin;
  l_b->begin->prev = NULL;
  l_b->begin->next = temp;
  return (1);
}

int	ss(t_plt *l_a, t_plt *l_b)
{
  if (l_a == NULL || l_b == NULL)
    return (-1);
  if ((sa(l_a) < 0) || (sb(l_b) < 0))
    return (-1);
  return (1);
}

int	pa(t_plt *l_a, t_plt *l_b)
{
  t_lst	*temp;

  if (l_a == NULL)
    return (-1);
  if (l_b == NULL)
    return (0);
  temp = l_b->begin;
  l_b->begin = l_b->begin->next;
  temp->next = l_a->begin;
  l_a->begin = temp;
  return (1);
}

int	pb(t_plt **l_a, t_plt **l_b)
{
  t_lst *temp;

  if (l_b == NULL)
    return (-1);
  if (l_a == NULL)
    return (0);
  temp = (*l_a)->begin;
  (*l_a)->begin = (*l_a)->begin->next;
  if ((*l_b)->begin != NULL)
    {
      temp->next = (*l_b)->begin;
      (*l_b)->begin = temp;
    }
  else
    {
      temp->next = NULL;
      (*l_b)->begin = temp;
    }
  return (1);
}
