/*
** my_print_digits.c for my_print_digits in /home/jeremy.el-kaim/CPool_Day03
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Wed Oct  5 11:23:25 2016 jeremy elkaim
** Last update Thu Oct  6 10:32:18 2016 jeremy elkaim
*/

int	my_print_digits ()
{
char	c; 
  c = 48 ;
  while (c <= 57 )
    {
      write(1, &c, 1);
      c++;
    }  
 return (0);
}
