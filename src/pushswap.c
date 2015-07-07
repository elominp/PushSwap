/*
** pushswap.c for pushswap in 
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Dec 14 18:49:27 2014 Guillaume Pirou
** Last update Sat May 30 09:42:09 2015 guigui
*/

#include <stdlib.h>
#include "../include/pushswap.h"
#include "../include/my_printf.h"

void	disp_list(t_plt *l_a)
{
  t_lst	*cpy;

  if (l_a == NULL)
    return;
  if (l_a->begin == NULL)
    return;
  cpy = l_a->begin;
  while (cpy != NULL)
    {
      my_printf("%d\n", cpy->val);
      cpy = cpy->next;
    }
}

void	free_list(t_plt	**list)
{
  t_lst	*lst;

  if (list == NULL)
    return;
  lst = (*list)->begin;
  while (lst != (*list)->end)
    {
      lst = lst->next;
      free(lst->prev);
    }
  free(*list);
}

int	pushswap(t_plt **l_a, t_opt *opts)
{
  t_plt	*l_b;

  if (l_a == NULL || opts == NULL)
    return (-1);
  if ((l_b = init_plt()) == NULL)
    return (-2);
  first_step(l_a, &l_b, opts);
  second_step(l_a, &l_b, opts);
  l_b->end = l_b->begin;
  free_list(l_a);
  free_list(&l_b);
  return (TRUE);
}

int	main(int argc, char **argv)
{
  t_plt	*l_a;
  t_opt	*opts;

  if (argc < 2)
    return (0);
  l_a = get_list(argc, argv);
  if (l_a == NULL)
    my_printf("erreur l_a est null\n");
  opts = get_options(argc, argv);
  pushswap(&l_a, opts);
  free(opts);
  my_printf("\n");
  return (0);
}
