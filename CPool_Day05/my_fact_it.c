/*
** my_fact_it.c for my_fact_it in /home/jeremy.el-kaim/day04
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Fri Oct  7 08:48:07 2016 jeremy elkaim
** Last update Fri Oct  7 15:24:34 2016 jeremy elkaim
*/

int fib(int n)
{
  int result;
  if (n == 0)
    return (0);
  if (n == 1)
    return (1);
  result = fib(n - 1) + fib(n - 2);
  return (result);
}

int	my_fact_it(int nb)
{
  int	res;

  res = fib(15);
  my_putnbr(res);

  return (0);
}
