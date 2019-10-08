#include <stdio.h>
#define SIZE 50

int main()
{
    printf("Hello DSC!\n");
    printf("This is your Intro to Git!\n");

    printf("What is Git?\n");
    printf("\n");
    printf("Git is a free and open source distributed version control system designed to handle everything from small to very large projects with speed and efficiency.\n");

    int proceed;
    scanf("%i", &proceed);

    if (proceed == 1)
    {
        printf("Why use Git?\n");
    }
    
    int q;
    scanf("%i", &q);

    if (q == 1)
    {
        printf("Test your Knowledge");  
    }

//question 1
    int num1, num2, num3, max;

	printf("Input: \n");
	printf("A: ");
	scanf("%d", &num1);
	printf("B: ");
	scanf("%d", &num2);
	printf("C: ");
	scanf("%d", &num3);

	max = num1;

	if (num2>max)
	{
		num2=max;
	}
	if (num3>max)
	{
		num3=max;
	}

	printf("Answer: %d\n", max);

// question 2

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

	printf("Answer:", vctr);
    printf("\n");

    printf("Thank You for listening!\n");
    printf("Any Questions?\n");

    int next;
    printf("Next?");
    scanf("%i", &next);

    if (next == 1)
    {
        printf("Let's Git It\n");
    }

    printf("Proceed to this link: https://learngitbranching.js.org/");
    
return 0;
}


