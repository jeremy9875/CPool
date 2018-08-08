/*
** my_strncmp.c for strncmp in /home/jeremy.el-kaim/CPool_Day06
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Mon Oct 10 17:10:49 2016 jeremy elkaim
** Last update Mon Oct 10 17:58:51 2016 jeremy elkaim
*/


int	strncmp(char *s1, char *s2, int n)
{
  int a;
  a = strncmp(s1, s2, n);
  if (a > 0)
    my_putchar("%a > %a", s1, s2);
  else
    if (a == 0)
      my_putchar("%a == %a", s1, s2);
    else
      my_putchar("%a < %a", s1, s2);
  return (0);
}
