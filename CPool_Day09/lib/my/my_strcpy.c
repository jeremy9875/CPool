/*
** my_strcpy.c for my_strcpy.c in /home/jeremy.el-kaim/CPool_Day07/lib
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Tue Oct 11 15:26:47 2016 jeremy elkaim
** Last update Wed Oct 12 10:41:28 2016 jeremy elkaim
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
