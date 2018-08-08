/*
** my_strcat.c for my_strcat in /home/jeremy.el-kaim/CPool_Day07/lib
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Tue Oct 11 18:28:07 2016 jeremy elkaim
** Last update Tue Oct 11 18:28:15 2016 jeremy elkaim
*/

char *my_strcat(char *dest, char *src)
{
	int n;
	int i;

	i = 0;
	n = my_strlen(dest);
	while (src[i])
	{
		dest[n + i] = src[i];
		i = i + 1;
	}
	dest[n + i] = '\0';
	return (dest);
}
