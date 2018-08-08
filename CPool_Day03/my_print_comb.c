/*
** my_print_comb.c for my_print_comb in /home/jeremy.el-kaim/CPool_Day03
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Wed Oct  5 15:24:41 2016 jeremy elkaim
** Last update Thu Oct  6 08:58:07 2016 jeremy elkaim
*/
void    my_putchar(char c)
{  
  write(1, &c, 1);
}

int	myprint_comb(void)
{
  int		a;
  int		b;  
  int		c;
  
  c = '0';
  a = '0';
  b = '0';
  
  while (a <= '1')      
    {
      my_putchar(a);
      a++;
    }
  
  while (b <= '3')
     {
      my_putchar(b);
      b++;
     }
  
  while (c <= '9')
      {      
	my_putchar(c);
	c++;
      }
  return (0);
}
