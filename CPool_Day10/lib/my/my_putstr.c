/*
** my_putstr.c for my_putstr in /home/jeremy.el-kaim/CPool_Day07
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Tue Oct 11 08:52:47 2016 jeremy elkaim
** Last update Tue Oct 11 08:54:11 2016 jeremy elkaim
*/
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
