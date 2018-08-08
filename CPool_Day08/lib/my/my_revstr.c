/*
** my_revstr.c for my_revstr in /home/jeremy.el-kaim/CPool_Day07/lib
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Tue Oct 11 13:44:36 2016 jeremy elkaim
** Last update Tue Oct 11 13:48:43 2016 jeremy elkaim
*/

char	my_revstr(char *str)
{
  int i;
    int j;

    i = 0;
    j = my_strlen(str);
    while (i < j)
      {
	my_swap(&str[i], &str[j]);
	i = i + 1;
	j = j + 1;
      }
}
