/*
** my_strcpy.c for my_strcpy in /home/jeremy.el-kaim/CPool_Day06
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Mon Oct 10 09:50:37 2016 jeremy elkaim
** Last update Tue Oct 11 17:03:18 2016 jeremy elkaim
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      my_putchar(src[i]);
      i = i + 1;
    }  
  dest[i] = src[i];
  return (dest);
}
