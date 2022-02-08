#include <stdio.h>
#include <stdlib.h>
#define max 40

void cumleyi_oku(char tab[max])
{
    int i=0;
    scanf("%c",&tab[i]);
    while((tab[i]!='\n')&&i<max)
    {
        i++;
        scanf("%c",&tab[i]);
    }
    tab[i]='\0';
}
void boslugu_kaldir(char tab[max])
{
    int i,j=0;
    for(i=0;tab[i]!='\0';i++)
        if(tab[i]!=' ')
    {
        tab[j]=tab[i];
        j++;
    }
    tab[j]='\0';
    printf("Boslugu kaldirdikten sonra dizimiz: ");
    for(i=0;tab[i]!='\0';i++)
    {
        printf("%c",tab[i]);
    }
}
int dizinin_boyu(char tab[max])
{
    int i;
    for(i=0;tab[i]!='\0';i++);
    return i;
}
void tersine_cevir(char dizi1[max],char ters[max])
{
    int i;
    int j=dizinin_boyu(dizi1)-1;
    for(i=0;dizi1[i]!='\0';i++)
    {
        ters[i]=dizi1[j];
        j--;
    }
    printf("\nDizinin tersine cevrilmis hali: ");
    for(i=0;i<dizinin_boyu(ters);i++)
    {
        printf("%c",ters[i]);
    }
}

int palindrome(char dizi[max])
{
    char gecici[max];
    int L,i=0,test=0;
    boslugu_kaldir(dizi);
    L=dizinin_boyu(dizi);
    tersine_cevir(dizi,gecici);
    for(i=0;i<L;i++)
    {
        if(gecici[i]!=dizi[i])
            test=0;
        else
            test=1;
    }
    return test;
}

int main()
{
    char cumle[max];
    int a;
    printf("Bir cumle giriniz\n");
    cumleyi_oku(cumle);
    a=palindrome(cumle);
    if(a==1)
        printf("\nBu bir palindromdur.");
    if(a==0)
        printf("\nBu bir palindrom degildir.");

    return 0;
}
