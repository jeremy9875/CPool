/*
** my_strncpy.c for my_strncpy in /home/jeremy.el-kaim/CPool_Day06
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Mon Oct 10 10:30:02 2016 jeremy elkaim
** Last update Tue Oct 11 17:03:40 2016 jeremy elkaim
*/

char	*my_strncpy(char *dest, char *src)
{
  int	n;
  
  n = 0;
  while (src[n] != '\0')
    {
      my_putchar(src[n]);
      n = n + 1;
    }  
  dest[n] = src[n];
  return (dest);
}
