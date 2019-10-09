#include <stdio.h>
#define SIZE 50

int main()
{
    printf("\n");
    printf("Hello DSC!\n");
    printf("This is your Intro to Git!\n");
    printf("\n");
    printf("What is Git?\n");
    printf("\n");
    printf("Git is a free and open source distributed version control system designed to handle everything from small to very large projects with speed and efficiency.\n");
    printf("\n");

    int proceed;
    scanf("%i", &proceed);

    if (proceed == 1)
    {
        printf("\n");
        printf("Why use Git?\n");
        printf("\n");
    }

    int q;
    printf("\n");
    scanf("%i", &q);

    if (q == 1)
    {
        printf("\n");
        printf("Test your Knowledge\n");  
        printf("\n");
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
		max = num2;
	}
	if (num3>max)
	{
		max = num3;
	}

	printf("Answer: %d\n", max);
    printf("\n");

// question 2

    char str[SIZE];
	int vctr = 0;
	int ctr = 0;

	printf("Input: ");
	scanf("%s", str);

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

	printf("Answer: %i", vctr);
    printf("\n");

    printf("\n");
    printf("Thank You for listening!\n");
    printf("Any Questions?\n");

    int next;
    printf("\n");
    printf("Next?\n");
    printf("\n");
    scanf("%i", &next);

    if (next == 1)
    {
        printf("\n");
        printf("Let's Git It\n");
    }

    printf("\n");
    printf("Proceed to this link: https://learngitbranching.js.org/\n");

    int try;
    printf("\n");
    printf("Can You Make Your Own Branch?\n");
    scanf("%i", &try);

    if (try == 1)
    {
        printf("\n");
        printf("Okay! So make a branch named 'Workshop', make a commit, and push it.\n");
    }

    int Justin;
    printf("\n");
    scanf("%i", &Justin);

    if (Justin == 1)
    {
        printf("\n");
        printf("Time For HTML and CSS!\n");
    }

    printf("gwapo si justin po");

return 0;
}


