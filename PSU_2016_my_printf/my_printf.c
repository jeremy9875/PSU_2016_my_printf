/*
** my_printf.c for my_printf in /home/jeremy.elkaim/PSU_2016_my_printf
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Wed Nov 16 14:17:01 2016 jeremy elkaim
** Last update Sat Nov 19 19:18:31 2016 jeremy elkaim
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int	percentd(int **av)
{
  int	a;

  a = 0;
  while (av[a] != '\0')
    {
      if (av[a] == '%d')
	{
	  my_putstr(a);
	}
      a = a + 1;
    }
  return (0);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	main(char **av)
{
  percentd(av);
  return (0);
}
