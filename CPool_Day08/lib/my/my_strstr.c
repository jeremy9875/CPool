/*
** strstr.c for strstr in /home/jeremy.el-kaim/CPool_Day07/lib
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Tue Oct 11 10:30:49 2016 jeremy elkaim
** Last update Tue Oct 11 15:11:55 2016 jeremy elkaim
*/
char	*strstr(char *str, char *to_find)
{
  int	i;
  int	j;
  int	s;

  i = 0;
  j = 0;
  while(str[i] != '\0' && str[i] != to_find[i])
    {
     i = i + 1;
    }
      if (str[i] != to_find[j])
	{
	  return (0);
	}
  if (str[i] == to_find[j])
    {
      return (&str[j]);
    }
}
