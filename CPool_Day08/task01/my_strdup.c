/*
** my_strdup.c for my_strdup in /home/jeremy.el-kaim/CPool_Day08/lib/my
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Wed Oct 12 08:36:17 2016 jeremy elkaim
** Last update Thu Oct 13 11:43:29 2016 jeremy elkaim
*/

char*	my_strdup(char *str)
{
  char	*nstr;

  nstr = (char *) malloc (strlen (str) + 1);
  if (nstr == '\0')
    strcpy (nstr, str);
  return (nstr);
}

int my_strlen(char *str)
{
  int len;

  len = 0;
  while(str[len] != '\0')
    {
      len = len + 1;
    }
  return (len);
}

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
