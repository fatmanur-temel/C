#include <stdio.h>
#include <stdlib.h>

//geriye dondurmeyen fonksiyonlarda void kullanilir
/*void tekmiciftmi(int dizi)
{
    if(dizi%2==0)
    {
        printf("sayi cifttir");
    }
    else
    {
        printf("sayi tektir");
    }

}


int main()
{
    int sayi;
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
    tekmiciftmi(sayi); //geriye dondurmez



    return 0;
}*/

//geriye donduren fonksiyonlar

/*int tekmiciftmi(int dizi)
{
    if(dizi%2==0)
    {
        return 1;
    }
    else
    {
       return 0;
    }

}


int main()
{
    int sayi,sonuc;
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
    sonuc=tekmiciftmi(sayi); //geriye dondurur
    if(sonuc==1)
    {
        printf("sayi cifttir");
    }
    if(sonuc==0)
    {
        printf("sayi tektir");
    }


    return 0;
}*/

/*int faktoriyel(int sayi)//girilen sayinin faktoriyelini bulan program
{
    int fakt=1;
    for(;sayi>0;sayi--)
    {
        fakt*=sayi;
    }
    return fakt;
}

int main()
{
    int n;
    printf("Bir sayi giriniz: ");
    scanf("%d",&n);

    printf("faktoriyel: %d",faktoriyel(n));

    return 0;
}*/

    //Degisken,deger,adres
/*void kare(int *sonuc,int *y)
{
    *sonuc=*y**y;
}


int main()
{
    int x=4,karesi,sonucum;

    kare(&sonucum,&x);

    printf("%d\n",sonucum); //16
}*/

    //degisken,adres,deger örnek

/*int ussunu_al(int a,int b)
{
    int i,sonuc=1;
    for(i=0;i<b;i++)
    {
        sonuc=sonuc*a;
    }
    return sonuc;
}


int main()
{
    int x=3,y=5,sonuc;
    sonuc=ussunu_al(x,y);
    printf("%d\n",sonuc); //243

    return 0;
}*/

    //degisken,adres,deger örnek2

/*void ussunu_al(int a,int b,int *deger)
{
    int i;
    *deger=1;
    for(i=0;i<b;i++)
    {
        *deger=*deger*a;
    }
}


int main()
{
    int x=3,y=5,sonuc;
    ussunu_al(x,y,&sonuc);
    printf("%d\n",sonuc); //243

    return 0;
}*/
