/*
** pushswap.h for pushswap in /home/pirou_g/pushswap
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Fri Dec  5 14:31:41 2014 Guillaume Pirou
** Last update Sat May 30 09:37:37 2015 guigui
*/

#ifndef PUSHSWAP_H_
  #define PUSHSWAP_H_
  #define FALSE 0
  #define TRUE 1

struct s_list
{
  int		val;
  struct s_list	*next;
  struct s_list	*prev;
};

typedef struct s_list t_lst;

struct s_pushlist
{
  t_lst		*begin;
  t_lst		*end;
};

typedef struct s_pushlist t_plt;

struct s_options
{
  char	opt[2];
};

typedef struct s_options t_opt;

int     sa(t_plt *);
int     sb(t_plt *);
int     ss(t_plt *, t_plt *);
int     pa(t_plt *, t_plt *);
int     pb(t_plt **, t_plt **);
int     ra(t_plt **);
int     rb(t_plt **);
int     rr(t_plt **, t_plt **);
int     rrb(t_plt *);
int     rrr(t_plt *, t_plt *);
t_plt   *get_list(int, char **);
int     plt_strappend(t_plt **, char *);
t_plt   *init_plt();
t_opt   *get_options(int, char **);
void	set_option(char*, t_opt *);
void	disp_list(t_plt *);
void	free_list(t_plt	**);
int	pushswap(t_plt **, t_opt *);
int	is_the_littlest(t_plt **);
void	opt_list(t_plt *, t_plt *);
int	first_step(t_plt **, t_plt **, t_opt *);
int	second_step(t_plt **, t_plt **, t_opt *);
int	my_atoi(char *);
void	my_putchar(char);
void	my_putstr(char *);

#endif
