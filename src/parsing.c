/*
** parsing.c for push_swap in 
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Dec 14 18:48:21 2014 Guillaume Pirou
** Last update Sat May 30 09:23:02 2015 guigui
*/

#include <stdlib.h>
#include "../include/pushswap.h"
#include "../include/my_printf.h"

t_plt	*init_plt()
{
  t_plt	*l_a;

  if ((l_a = malloc(sizeof(t_plt))) == NULL)
    return (NULL);
  l_a->begin = NULL;
  l_a->end = l_a->begin;
  return (l_a);
}

int	plt_fwdappend(t_plt **l_a, char *str)
{
  if ((*l_a)->begin == NULL)
    {
      if (((*l_a)->begin = malloc(sizeof(t_lst))) == NULL)
	return (-1);
      (*l_a)->end = (*l_a)->begin;
    }
  else
    {
      if (((*l_a)->end->next = malloc(sizeof(t_lst))) == NULL)
	return (-1);
      (*l_a)->end->next->prev = (*l_a)->end;
      (*l_a)->end = (*l_a)->end->next;
    }
  (*l_a)->end->next = NULL;
  (*l_a)->end->val = my_atoi(str);
  return (1);
}

int	plt_strappend(t_plt **l_a, char *str)
{
  if (str == NULL)
    return (-1);
  if (*l_a == NULL)
    {
      if ((*l_a = init_plt()) == NULL)
	return (-1);
      plt_strappend(l_a, str);
    }
  else
    return (plt_fwdappend(l_a, str));
  return (1);
}

t_plt	*get_list(int ac, char **av)
{
  int	i;
  t_plt	*l_a;

  i = 0;
  if (av == NULL)
    return (NULL);
  l_a = NULL;
  while (++i < ac)
    {
      if (av[i][0] == '-')
	{
	  if (av[i][1] >= '0' && av[i][1] <= '9')
	    {
	      if (plt_strappend(&l_a, av[i]) < 0)
		return (NULL);
	    }
	}
      else
	{
	  if (plt_strappend(&l_a, av[i]) < 0)
	    return (NULL);
	}
    }
  return (l_a);
}
