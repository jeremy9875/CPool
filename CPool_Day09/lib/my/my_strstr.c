/*
** my_strstr.c for my_strstr in /home/jeremy.el-kaim/CPool_Day07/lib/my
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Wed Oct 12 16:53:58 2016 jeremy elkaim
** Last update Wed Oct 12 16:54:01 2016 jeremy elkaim
*/

char	*my_strstr(char *str, char *to_find)
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
