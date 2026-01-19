/*#include <stdio.h>*/

int	ft_isalpha(char c);

int	ft_isalpha(char c)
{
	if ((c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
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
