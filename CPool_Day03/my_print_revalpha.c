/*
** my_print_revalpha.c for my_print_revalpha in /home/jeremy.el-kaim/CPool_Day03
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Wed Oct  5 10:50:46 2016 jeremy elkaim
** Last update Fri Oct  7 07:49:28 2016 jeremy elkaim
*/

int my_print_revalpha()
{
  int	c;
  
  c=122;
  
  while(c >= 97)    
    {
      write(1, &c, 1);
      c--;
    }
  return (0);
}
