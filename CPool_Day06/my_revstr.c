/*
** my_revstr.c for my_revstr in /home/jeremy.el-kaim/CPool_Day06
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Mon Oct 10 10:35:21 2016 jeremy elkaim
** Last update Tue Oct 11 08:01:55 2016 jeremy elkaim
*/

int	my_strlen(char *str);

char	*my_revstr(char *str)
{
  int i;
  int lenght = my_strlen(str)-1;

  i = 0;
  while (str[i] != '\0')
    {
      i + 1;
    }
  return (i);			     
  while(str[lenght] != '\0')
    {
      my_putchar(str[lenght--]);
      my_putchar('\n');
    }
  {
    return (0);
  }
}
