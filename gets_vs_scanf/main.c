#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[100];

    printf("Bir yazi giriniz:\n"); //> sdjncjds dsjnchj djnvjhdf
    gets(dizi); //sadece karakter dizilerinde kullanilir.

    printf("%s\n",dizi); //sdjncjds dsjnchj djnvjhdf

    printf("Bir yazi giriniz:\n"); //>sdjncjds dsjnchj djnvjhdf
    scanf("%s",&dizi); //bosluktan sonrasini almaz.

    printf("%s\n",dizi); //sdjncjds
    return 0;
}
