/*
** my_params_in_list.c for my_params_in_list in /home/jeremy.el-kaim/CPool_Day11
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Mon Oct 17 14:22:57 2016 jeremy elkaim
** Last update Tue Oct 18 08:42:44 2016 jeremy elkaim
*/

#include <stdlib.h>

t_list	*my_params_in_list(int ac, char **av)
{
  struct	s_list *element;

  element = malloc(sizeof(*element));
  element ->ac = ac;
  return (0);
}

void	my_putchar(char c)
{
  write (1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

void	my_show_list(struct s_list *list)
{
  struct	s_list *tmp;

  tmp = list;
  while (tmp != NULL)
    {
      my_putstr(tmp->ac);
      my_putchar('\n');
      tmp = tmp->next;
    }
}
