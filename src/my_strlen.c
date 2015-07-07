/*
** my_strlen.c for push_swap in 
** 
** Made by Guillaume Pirou
** Login   <pirou_g@epitech.net>
** 
** Started on  Sun Dec 14 18:47:53 2014 Guillaume Pirou
** Last update Sun Dec 14 18:47:56 2014 Guillaume Pirou
*/

int	my_strlen(char *str)
{
  int	loop;

  loop = 0;
  while (str[loop] != '\0')
      ++loop;
  return (loop);
}
