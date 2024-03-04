#include <stdio.h>

int main()
{
	int var;
	printf("Enter a Value: \n");
	printf("\'1\'\n");

		printf("\'2\'\n");

			printf("\'3\'\n");

				printf("\'4\'\n");

				scanf("%d",&var);


	switch (var) {
		case 1:
			printf("You are Dumb.");
			break;

		case 2:
			printf("You are Genius.");
			break;

		case 3:
			printf("You are Great.");
			break;

        case 4:
			printf("You are Cool.");
			break;

		default:
			printf("Default case is Matched.");
			break;
	}

	return 0;
}

