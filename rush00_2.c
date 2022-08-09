#include <stdio.h>

void	ft_putchar(char c);

void	print_top_down(int width, char left, char middle, char right)
{
	int	i;

	ft_putchar(left);
	i = 0;
	while (++i <= width - 2)
		ft_putchar(middle);
	ft_putchar(right);
	ft_putchar('\n');
}

void	case_width(int height)
{
		int i;

		ft_putchar('o');
		i = 0;
		while (++i <= height - 2)
		{
			ft_putchar('\n');
			ft_putchar('|');
		}
		ft_putchar('\n');
		ft_putchar('o');
		ft_putchar('\n');
}

void	case_height(int width, char wall, char filler)
{
	int i;

	ft_putchar(wall);
	i = 0;
	while (++i <= width - 2)
		ft_putchar(filler);
	ft_putchar(wall);
	ft_putchar('\n');
}

void	rush(int width, int height)
{
	int i;

	if (width <= 0 || height <= 0)
		return ;
	if (width == 1)
		case_width(height);
	else if (height == 1)
		case_height(width, 'o', '-');
	else
	{
		print_top_down(width, 'o', '-', 'o');
		i = 0;
		while (++i <= height - 2)
			case_height(width, '|', ' ');
		print_top_down(width, 'o', '-', 'o');
 }
}
