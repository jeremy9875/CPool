/*
** my_strncat.c for my_strncat in /home/jeremy.el-kaim/CPool_Day07/lib
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Tue Oct 11 18:27:39 2016 jeremy elkaim
** Last update Tue Oct 11 18:27:42 2016 jeremy elkaim
*/

char *my_strncat(char *dest, char *src, int nb)
{
	int n;
	int i;

	i = 0;
	n = my_strlen(dest);
	while(nb > i && src[i])
	{
		dest[n + i] = src[i];
		i = i + 1;
	}
	dest[n + i] = '\0';
	return (dest);
}
