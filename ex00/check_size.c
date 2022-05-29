#include <stdio.h>

int	check_count(int count, char *argv);

int	check_size(char *argv)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while(argv[i])
	{
		if(i % 2 == 1)
			if(argv[i] != ' ') // 인자에 공백이 제대로 되어 있지 않으면 에러
				return (1);
		if(i % 2 == 0)
			count++;
		i++;
	}

	if (count % 4 != 0) // 인자의 길이가 4의 배수가 아니라면 에러
		return (1);
	
	count = check_count(count, argv);
	return (count);
}

int	check_count(int count, char *argv)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	
	while (argv[i])
	{
		if(argv[i] >= '0' && argv[i] <= '9')
			if(!(argv[i] - '0' > 0 && argv[i] - '0' <= count / 4)) // 인자가 최대값보다 크면 에러
				return (1);
		i++ ;
	}
	return (count);
}
