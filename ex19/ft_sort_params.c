void ft_putchar(char c);

void ft_putstr(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int     ft_strcmp(char *s1, char *s2) 
{         
	int i;         
	i = 0;          
	
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])         
		i++;         
	return(s1[i] - s2[i]);
}

int main(int argc, char **argv)
{
	int i;
	int j;
	int tmp;	
	j = 0;
	tmp = 0;

	while(j < argc)
	{
		i = 1;
		while(i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				{
					tmp = *argv[i];
					*argv[i] = *argv[i+1];
					*argv[i+1] = tmp;
				}
			i++;
		}
		j++;
	}
	i = 1;
	while(i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}
