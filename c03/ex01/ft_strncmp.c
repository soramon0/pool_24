
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned char	*c1;
	unsigned char	*c2;

	i = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (c1[i] && c2[i] && c1[i] == c2[i])
		i++;
	return (c1[i] - c2[i]);
}
/*
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned char	*c1;
	unsigned char	*c2;
	int				diff;

	i = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (c1[i] && c2[i])
	{
		diff = (c1[i] - '0') - (c2[i] - '0');
		if (diff != 0)
			return (diff);
		i++;
	}
	diff = c1[i];
	if (c2[i] && !c1[i])
		diff = c2[i] * -1;
	return (diff);
}
*/
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char *s1 = "abd";
	char *s2 = "abe";
	int r1 = strcmp(s1, s2);
	int r2 = ft_strcmp(s1, s2);
	printf("Org: %d\n", r1);
	printf("Mine: %d\n", r2);
	return (0);
}
*/
