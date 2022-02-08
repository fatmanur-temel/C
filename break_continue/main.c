#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    //BREAK: programi sonlandýrýr.

    int i;

    for(i=0;i<10;i++)
    {
        if(i==5)
        {
            break;
        }
        printf("%d\n",i); //0'dan 5'e kadar olan sayilari bastirir.
    }


    return 0;
}*/


/*int main()
{
    //CONTÝNUE: o adimi atlar.

    int i;

    for(i=0;i<10;i++)
    {
        if(i==5)
        {
            continue;
        }
        printf("%d\n",i); //0 1 2 3 4 6 7 8 9
    }


    return 0;
}*/


int main()
{
    int i;

    for(i=0;i<10;i++)
    {
        if(i==2)
        {
            continue;
        }
        if(i==7)
        {
            break;
        }
        printf("%d\n",i); //0 1 3 4 5 6
    }


    return 0;
}
