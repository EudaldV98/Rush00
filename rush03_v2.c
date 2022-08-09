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

void	case_width(int height, char top, char filler, char bottom)
{
	int i;

	ft_putchar(top);
	i = 0;
	while (++i <= height - 2)
	{
		ft_putchar('\n');
		ft_putchar(filler);
	}
	ft_putchar('\n');
	ft_putchar(bottom);
	ft_putchar('\n');
}

void	case_height(int width, char left, char filler, char right)
{
	int i;

	ft_putchar(left);
	i = 0;
	while (++i <= width - 2)
		ft_putchar(filler);
	ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int width, int height)
{
	int i;

	if (width == 1 && height == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	else if (width <= 0 || height <= 0)
		return ;
	else if (width == 1)
		case_width(height, 'A', 'B', 'A');
	else if (height == 1)
		case_height(width, 'A', 'B', 'C');
	else
	{
		print_top_down(width, 'A', 'B', 'C');
		i = 0;
		while (++i <= height - 2)
			case_height(width, 'B', ' ', 'B');
		print_top_down(width, 'A', 'B', 'C');
	}
}
