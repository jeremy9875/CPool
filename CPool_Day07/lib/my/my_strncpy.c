/*
** my_strncpy.c for my_strncpy in /home/jeremy.el-kaim/CPool_Day07/lib
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Tue Oct 11 15:45:21 2016 jeremy elkaim
** Last update Tue Oct 11 16:54:03 2016 jeremy elkaim
*/

char	*my_strncpy(char *dest, char *src)
{
  int	n;

  n = 0;
  while (src[n] != '\0')
    {
      my_putchar(src[n]);
      n = n +1;
    }
  dest[n] = src[n];
  return (dest);
}
