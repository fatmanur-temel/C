#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int sayi=10;
    int *s=&sayi; //* isareti pointer oldugunu belirtir.
    //sayinin adresini s'ye gönderdik.

    printf("%d\n",sayi); //10

    printf("%p\n",&sayi);//0028FF0C

    printf("%x\n",&sayi);//28ff0c

    printf("%u\n",&sayi);//2686732

    printf("%x\n",s);//28ff0c

    return 0;
}*/


/*int main()
{
    int i,j=1;
    int *jp1,*jp2=&j;

    jp1=jp2;

    i=++(*jp2);

    *jp2=*jp1+i;

    printf("i = %d, j=%d, *jp1=%d, *jp2=%d\n",i,j,*jp1,*jp2);// 2 4 4 4


    return 0;
}*/

/*void degerdegistir(int a,int b)
{
    int c=a;
    a=b;
    b=c;

    printf("a:%d, b:%d\n",a,b);//a:10, b:5
}
int main()
{
    int x=5,y=10;

    degerdegistir(x,y);

    printf("x:%d, y:%d\n",x,y);//x:5, y:10

    return 0;
}*/

//YUKARIDAKI FONKSIYONUN ISE YARAMASI ICIN POINTER KULLANMAK GEREK:

/*void degerdegistir(int *a,int *b)
{
    int c=*a;
    *a=*b;
    *b=c;

    printf("a:%d, b:%d\n",a,b);//a:2686732, b:2686728 (x ve y'nin adresleri)
}
int main()
{
    int x=5,y=10;

    degerdegistir(&x,&y);

    printf("x:%d, y:%d\n",x,y);//x:10, y:5

    return 0;
}*/


/*int main()
{
    int sayilar[5]={1,2,3,4,5};
    int *p=sayilar;//=int *p=sayilar[0];

    printf("%d\n",p);//2686712 (dizinin 0. indeksinin adresi)
    printf("%d\n",p+1);//2686716 (dizinin 1. indeksinin adresi)(int degerler 4 bit yer kaplar)

    printf("%d\n",*p);//1
    printf("%d\n",*p+1);//2
    //*p+1 = p[1]

    return 0;
}*/

/*int max(int *a,int uzunluk)//dizinin en buyuk elemanini bulan fonksiyon
{
    int maks=a[0];
    int i;

    for(i=1;i<uzunluk;i++)
    {
        if(a[i]>maks)
        {
            maks=a[i];
        }
    }
    return maks;
}

int main()
{
    int sayilar[5]={3,1,76,45,26};
    int maks=max(sayilar,5);

    printf("Dizinin en buyuk elemani: %d\n",maks);

    return 0;
}*/
#include<string.h>
/*char *fonksiyon(char *p,int indeks)
{
    int uzunluk=strlen(p);

    if(indeks>uzunluk)
    {
        return 0;
    }
    else{
        return p+indeks;
    }
}


int main()
{
    char dizi[]="yazilim";
    char *k=fonksiyon(dizi,2);

    if(k==0)
    {
        printf("Pointer NULL");
    }
    else
    {
        printf("%s",k);//zilim
    }

    return 0;
}*/

/*char *gunismi(char *dizi[],int uzunluk,int hangigun)
{
    if(hangigun>=1 && hangigun<=7)
    {
        return dizi[hangigun-1];
    }
    else
    {
        return 0;
    }
}
int main()//pointer array
{
    char *gunler[7]={"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};

    char *p=gunismi(gunler,7,5);
    printf("%s",p);

    return 0;
}*/


