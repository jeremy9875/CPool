/*
** my_fact_rec.c for my_fact_rec in /home/jeremy.el-kaim/CPool_Day05
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Fri Oct  7 15:12:11 2016 jeremy elkaim
** Last update Fri Oct  7 15:23:02 2016 jeremy elkaim
*/
int fib(int n)
{
  int result;
  int i;
  i = 1;
  if (n == 0)
    return (0);
  if (n == 1)
    return (1);
  while (i != 999)
    i++;
   result = fib(n - i);
  return (result);
}
int my_fact_rec(int nb)
{
  int	rec;
  
  rec = fib(15);
  my_putnbr(rec);

  return (0);
}
