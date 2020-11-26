#include <stdio.h>

void main()
{
    int height, maxStars;
    printf("please enter height: ");
    scanf("%d", &height);
    maxStars = 2*height + 1;

    for (int i = 0;i < height ;i++)
    {
        int stars = 2 * i + 1;
        for (int j = 0, start = (maxStars-stars)/2; (j < maxStars && stars != 0); j++)
        {
            if (j >= start)
            {
                printf("*");
                stars--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}