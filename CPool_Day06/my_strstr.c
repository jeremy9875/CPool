/*
** my_strstr.c for my_strstr in /home/jeremy.el-kaim/CPool_Day06
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Mon Oct 10 13:59:21 2016 jeremy elkaim
** Last update Tue Oct 11 16:45:53 2016 jeremy elkaim
*/

char	*my_strstr(char *str, char *to_find)
{
  int a;
  int b;
  int s;
  while(str[a] && to_find[b])
    {
      if(a == 0)
	s = a;
      a = a++;
      a = 0;
      b = b + 1;
    }
  if(to_find[a] == '\0')
    return (&str[s]);
  else
    return (0);
}
