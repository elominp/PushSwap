/*
** ps_option.c for push_swap in 
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Dec 14 18:48:31 2014 Guillaume Pirou
** Last update Sun Dec 14 18:48:33 2014 Guillaume Pirou
*/

#include <stdlib.h>
#include "../include/pushswap.h"
#include "../include/my_printf.h"

void	set_option(char *str, t_opt *opt)
{
  int	i;

  if (str == NULL || opt == NULL)
    return;
  i = 0;
  while (str[++i] != '\0')
    {
      if (str[i] == 'v')
	opt->opt[0] = 1;
      else if (str[i] == 't')
	opt->opt[1] = 1;
      else if (str[i] >= '0' && str[i] <= '9')
	return;
      else
	my_printf("Unknow option : %c\nOptions are : -v and -t\n", str[i]);
    }
}

t_opt	*get_options(int ac, char **av)
{
  t_opt	*opt;
  int	i;

  if (av == NULL)
    return (NULL);
  if ((opt = malloc(sizeof(t_opt))) == NULL)
    return (NULL);
  opt->opt[0] = 0;
  opt->opt[1] = 0;
  i = 0;
  while (++i < ac)
    {
      if (av[i][0] == '-')
	set_option(av[i], opt);
    }
  return (opt);
}
