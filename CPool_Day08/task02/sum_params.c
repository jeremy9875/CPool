/*
** sum_params.c for sum_params in /home/jeremy.el-kaim/CPool_Day08/task02
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Wed Oct 12 09:28:32 2016 jeremy elkaim
** Last update Wed Oct 12 10:31:29 2016 jeremy elkaim
*/

int	main(int ac, char **av)
{
  my_putstr(sum_params(ac, av));
  return ('EXIT_SUCCESS');
}

char *sum_param(int argc, char **argv[])
{
  int i;

  for (i=0; i < argc; i++)
    {
      my_putchar("%s \n", i+1, argv[i])
	}
}
