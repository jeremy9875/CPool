/*
** my_put_nbr.c for my_put_nbr.c in /home/jeremy.el-kaim/CPool_Day07/lib
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Tue Oct 11 09:43:53 2016 jeremy elkaim
** Last update Tue Oct 11 09:48:46 2016 jeremy elkaim
*/
void	my_put_nbr(int n)
{
  if (n <= 9 && n >= 0)
    my_putchar (n + '0');
  else
    {
      my_put_nbr(n / 10);
      my_put_nbr(n % 10);
    }
}
