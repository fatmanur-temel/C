#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    //SWÝTCH: if-elseif-elseif-else mantýginda calisir.
    int day=3;

    switch(day)
    {
        case 1:printf("Pazartesi");
        break;
        case 2:printf("Sali");
        break;
        case 3:printf("Carsamba");
        break;
        case 4:printf("Persembe");
        break;
        case 5:printf("Cuma");
        break;
        case 6:printf("Cumartesi");
        break;
        case 7:printf("Pazar");
        break;
        default :printf("Gecersiz gun\n");
        break;
    }
    return 0;
}*/


/*int main()
{
    int day=3;

    if(day==1)
    {
        printf("Pazartesi");
    }
    else if(day==2)
    {
        printf("Sali");
    }
    else if(day==3)
    {
        printf("Carsamba");
    }
    else if(day==4)
    {
        printf("Persembe");
    }
    else if(day==5)
    {
        printf("Cuma");
    }
    else if(day==6)
    {
        printf("Cumartesi");
    }
    else if(day==7)
    {
        printf("Pazar");
    }
    else
    {
        printf("Gecersiz gun\n");
    }


    return 0;
}*/


int main()
{
    float a,b;
    char op; //+,- gibi kavramlar karakterdir.
    printf("Bir operator giriniz:");
    scanf("%c",&op);

    printf("Lutfen iki adat sayi giriniz:\n");
    scanf("%f%f",&a,&b);

    switch(op)
    {
        case '+': printf("%.2f + %.2f =%.2f",a,b,a+b);
        break;
        case '-':printf("%.2f - %.2f =%.2f",a,b,a-b);
        break;
        case '/' :printf("%.2f / %.2f =%.2f",a,b,a/b);
        break;
        case '*' :printf("%.2f * %.2f =%.2f",a,b,a*b);
        break;
        default :printf("Hatali karakter girdiniz.\n");
        break;

    }



    return 0;
}
