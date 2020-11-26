#include <stdio.h>

void main()
{
	int id, password, try = 2;
	printf("please enter id: ");
	scanf("%d", &id);
	switch (id)
	{
		case 1234:
			printf("please enter password: ");
			scanf("%d", &password);
			while (try > 0)
			{
				if ( password != 7788 )
				{
					try--;
					printf("try again: ");
					scanf("%d", &password);
				}
				else
				{
					printf("welcome Ahmed");
					break;
				}
			}
		break;

		case 5678:
			printf("please enter password: ");
			scanf("%d", &password);
			while (try > 0)
			{
				if ( password != 5566 )
				{
					try--;
					printf("try again: ");
					scanf("%d", &password);
				}
				else
				{
					printf("welcome Amr");
					break;
				}
			}
		break;

		case 9870:
			printf("please enter password: ");
			scanf("%d", &password);
			while (try > 0)
			{
				if ( password != 1122 )
				{
					try--;
					printf("try again: ");
					scanf("%d", &password);
				}
				else
				{
					printf("welcome Wael");
					break;
				}
			}
		break;

		default:
		printf("You are not registered");

	}

	if (try <= 0)
	{
		printf("No more tries");
	}

}

