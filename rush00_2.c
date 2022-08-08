#include <stdio.h>

void	ft_putchar(char c);

void	print_top_down(int x, char left, char middle, char right)
{
	int	i;

	ft_putchar(left);
	i = 0;
	while (i <= x - 2)
	{
		ft_putchar(middle);
		i++;
	}
	ft_putchar(right);
	ft_putchar('\n');
}

void	print_middle(int x, int y, char wall)
{

}

void	rush(int height, int width)
{
	if (width <= 0 || height <= 0)
		return ;
	print_top_down(width, 'o', '-', 'o');
}
