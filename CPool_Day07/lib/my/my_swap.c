/*
** my_swap.c for my_swap in /home/jeremy.el-kaim/CPool_Day07/lib
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Tue Oct 11 13:42:21 2016 jeremy elkaim
** Last update Tue Oct 11 15:11:13 2016 jeremy elkaim
*/

int	my_swap(char *a, char *b)
{
  char	t;

  t = *a;
  *a = *b;
  *b = t;
}
