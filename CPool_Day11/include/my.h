/*
** my.h for my in /home/jeremy.el-kaim/CPool_Day09/include
** 
** Made by jeremy elkaim
** Login   <jeremy.el-kaim@epitech.net>
** 
** Started on  Thu Oct 13 15:08:38 2016 jeremy elkaim
** Last update Fri Oct 14 13:35:54 2016 jeremy elkaim
*/

#ifndef	MY_H_
#define MY_H_
void	my_putchar(char c);
int	my_isneg(int nb);
int	my_put_nbr(int nb);
int	my_swap(int *a, int *b);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_getnbr(char *str);
void	my_sort_int_tab(int *tab, int size);
int	my_power_rec(int nb, int power);
int	my_square_root(int nb);
int	my_is_prime(int nombre);
int	my_find_prime_sup(int nb);
char	*mystrcpy(char *dest, char *src);
char	*strncpy(char *dest, char *src, int n);
char	*my_revstr(char *str);
char	*my_strstr(char *str, char *to_find);
int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1,char *s2, int n);
char	*my_strupcase(char *str);
int	*my_strlowcase(char *str);
int	*my_strcapitalize(char *str);
int	mu_str_isalpha(char *str);
int	my_str_isnum(char *str);
int	my_str_islower(char *str);
int	my_str_isupper(char *str);
int	my_str_isprintable(char *str);
int	my_showstr(char *str);
int	my_showmem(char *str, int size);
char	*my_strcat(char *dest, char *src);
char	*my_strncat(char *dest, char *src, int nb);
#endif
