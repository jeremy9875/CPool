/*
** my_isgneg.c for my_isneg in /home/jeremy.el-kaim/CPool_Day03
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Wed Oct  5 14:30:10 2016 jeremy elkaim
** Last update Tue Jan 31 17:07:00 2017 jeremy elkaim
*/

int	my_isneg(int n)
{
  if (n < 0)
    {
      write(1, 'N', 1);
    }
  else
    {
      write(1, 'P', 1);
    }
  return (0);
}
