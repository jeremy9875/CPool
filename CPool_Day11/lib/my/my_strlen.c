/*
** my_strlen.c for my_strlen in /home/jeremy.el-kaim/CPool_Day07/lib
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Tue Oct 11 15:06:33 2016 jeremy elkaim
** Last update Tue Oct 11 15:06:36 2016 jeremy elkaim
*/

int	my_strlen(char *str)
{
  int	m;
	  
  m = 0;
  while (str[m] != '\0')
    {
      m = m++;
    }
  return (m);
}
