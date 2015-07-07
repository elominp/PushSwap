/*
** is_option.c for push_swap in 
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Dec 14 18:45:37 2014 Guillaume Pirou
** Last update Sun Dec 14 18:45:38 2014 Guillaume Pirou
*/

int	is_specifier(char c)
{
  if (c == 'd' || c == 'i' || c == 'u' || c == 'o' || c == 'x' || c == 'X'||
      c == 'c' || c == 's' || c == 'p' || c == 'b' || c == 'S')
    return (1);
  return (0);
}

int	is_flags(char c)
{
  if (c == '-' || c == '+' || c == ' ' || c == '#' || c == '0')
    return (1);
  return (0);
}

int	is_width(char c)
{
  if ((c > '0' && c <= '9') || c == '*')
    return (1);
  return (0);
}

int	is_precision(char c, char c1)
{
  if (c == '.' && (c1 >= '0' && c1 <= '9'))
    return (1);
  return (0);
}
