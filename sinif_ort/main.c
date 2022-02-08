#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float dollars = -1;
    while(dollars<0)
    {
        printf("Change owed:");
        scanf("%f",&dollars);
        printf("%f\n",dollars);
    }
    int cents = dollars*10*10;
    int count=0;
    printf("cents: %d\n",cents);
    /*while(25<=cents)
    {
        cents -= 25;
        count++;
        printf("25: %d\n",cents);
    }
    while(10<=cents)
    {
        cents -= 10;
        count++;
        printf("10: %d\n",cents);
    }
    while(5<=cents)
    {
        cents -= 5;
        count++;
        printf("5: %d\n",cents);
    }
    while(0<cents)
    {
        cents -= 1;
        count++;
        printf("1: %d\n",cents);
    }
    printf("%d\n",count);*/
}
