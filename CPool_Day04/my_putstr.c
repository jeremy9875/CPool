/*
** my_putstr.c for my_putstr in /home/jeremy.el-kaim/CPool_Day04
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Thu Oct  6 11:06:12 2016 jeremy elkaim
** Last update Fri Oct  7 14:58:57 2016 jeremy elkaim
*/

int	my_putstr(char *str)
{
  int	i;
  i = 0;
  while (str[i] != '\0')
    {
    my_putchar(str[i]);
      i = i++;
      write (1, &c, 1);
    }
  return (0);
}
