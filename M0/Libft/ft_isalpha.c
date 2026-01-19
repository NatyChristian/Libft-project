/*#include <stdio.h>*/
int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*int main(void) {
    char a = 'A';

    for (int i = 65; i <= 122; i++)
    {
        printf("%c: %d \n", a, ft_isalpha(a));
        a += 1;
    }
    return (0);
}*/
