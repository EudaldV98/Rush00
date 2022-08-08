void	ft_putchar(char c);

void	rush(int width, int height)
{
	int	y;
	int	x;

	y = 0;
	while (y < height)
	{
		x = 0;
		while (x < width)
		{
			if ((x == 0 && y == 0))
				ft_putchar('/');
			else if ((x == width - 1 && y == 0) || (x == 0 && y == height - 1))
				ft_putchar(92);
			else if (x == width - 1 && y == height - 1)
				ft_putchar('/');
			else if ((y == 0 || y == height - 1) || (x == 0 || x == width - 1))
				ft_putchar('*');
			else
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
