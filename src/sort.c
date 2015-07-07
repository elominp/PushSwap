/*
** sort.c for push_swap in 
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Dec 14 18:49:40 2014 Guillaume Pirou
** Last update Sun Dec 14 18:49:41 2014 Guillaume Pirou
*/

#include <stdlib.h>
#include "../include/pushswap.h"
#include "../include/my_printf.h"

int	is_the_littlest(t_plt **l_a)
{
  int	max;
  t_lst	*list;

  if (l_a == NULL)
    return (FALSE);
  if ((*l_a)->begin == NULL)
    return (TRUE);
  max = (*l_a)->begin->val;
  list = (*l_a)->begin;
  while (list != NULL)
    {
      if (list->val < max)
	max = list->val;
      list = list->next;
    }
  if (max == (*l_a)->begin->val)
    return (TRUE);
  return (FALSE);
}

void	opt_list(t_plt *l_a, t_plt *l_b)
{
  my_printf("\nl_a :\n");
  disp_list(l_a);
  my_printf("l_b :\n");
  disp_list(l_b);
}

int	first_step(t_plt **l_a, t_plt **l_b, t_opt *opts)
{
  t_lst	*list;

  list = (*l_a)->begin;
  while (list != NULL)
  {
    while (is_the_littlest(l_a) == FALSE)
      {
	ra(l_a);
	my_printf("ra ");
	if (opts->opt[0])
	  opt_list(*l_a, *l_b);
      }
    pb(l_a, l_b);
    my_printf("pb ");
    if (opts->opt[0])
      opt_list(*l_a, *l_b);
    list = ((*l_a)->begin == NULL) ? NULL : list;
  }
  return (TRUE);
}

int	second_step(t_plt **l_a, t_plt **l_b, t_opt *opts)
{
  while ((*l_b)->begin != NULL)
    {
      pa(*l_a, *l_b);
      my_printf("pa ");
      if (opts->opt[0])
	opt_list(*l_a, *l_b);
    }
  (*l_a)->begin = (*l_a)->begin->next;
  return (TRUE);
}
