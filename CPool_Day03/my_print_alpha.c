/*
** my_print_alpha.c for my_print_alpha in /home/jeremy.el-kaim/CPool_Day03
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Wed Oct  5 09:07:07 2016 jeremy elkaim
** Last update Fri Oct  7 07:47:42 2016 jeremy elkaim
*/

int my_print_alpha()
{
  char c;
  
  c = 97;
  
  while (c <= 122)
  {
    write(1, &c, 1);
   c++;
  }

  return (0);
}
