void	ft_putstr(char *str)
{
	while (str != '\0')
	{
		ft_putchar(str);
		str++;
	}
}

int main()
{
	ft_putstr("test");
	return(0);
}
