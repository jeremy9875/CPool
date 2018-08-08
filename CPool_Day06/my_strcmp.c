/*
** my_strcmp.c for my_strcmp in /home/jeremy.el-kaim/CPool_Day06
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Mon Oct 10 16:59:38 2016 jeremy elkaim
** Last update Mon Oct 10 17:58:11 2016 jeremy elkaim
*/

int	my_strcmp(char *s1, char *s2)
{
  int a;

  a = strcmp(s1, s2);
  if (a > 0)
    my_putchar("%a == %a\n", s1, s2);
  else
    if (a == 0)
      my_putchar("%a < %a\n", s1, s2);
  return (0);
}
