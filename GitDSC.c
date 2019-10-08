#include <stdio.h>
#define SIZE 50

int main()
{
    printf("Hello DSC!");
    printf("This is your Intro to Git!");

    char str[SIZE];
	int vctr = 0;
	int ctr = 0;

	printf("Input: ");
	scanf("%[^\n]s", str);

	while (str[ctr] != '\0')
	{
		if (str[ctr] == 'a' || str[ctr] == 'A')
		{
			vctr++;
		}
		else if (str[ctr] == 'e' || str[ctr] == 'E')
		{
			vctr++;
		}
		else if (str[ctr] == 'i' || str[ctr] == 'I')
		{
			vctr++;
		}
		else if (str[ctr] == 'o' || str[ctr] == 'O')
		{
			vctr++;
		}
		else if (str[ctr] == 'u' || str[ctr] == 'U')
		{
			vctr++;
		}
		ctr++;
	}

	printf("Answer", vctr);
	
return 0;
}


