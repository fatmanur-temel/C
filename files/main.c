#include <stdio.h>
#include <stdlib.h>

// fopen("dosya_adi","mod") :dosyayi acar ve islem yapar
// fclose(filep); :bir file pointer i aliyor ve buna gore gidip dosyayi kapatiyor
// fputc(character,filep); :karakteri alarak file pointer inin gosterdigi dosyayi buluyor ve karakteri bastiriyor

#include <string.h>
/*int main()
{
    char veri[25]="merhaba";
    int uzunluk=strlen(veri);
    int i;

    FILE *filep=fopen("yazilimdosyasi.txt","w");

    if(filep==NULL)
        printf("dosya olusturulmadi.\n");
    else
    {
        for(i=0;i<uzunluk;i++)
        {
            fputc(veri[i],filep);// metni dosyaya yazdirir
        }
        printf("dosya olusturuldu.");
        fclose(filep);
    }


    return 0;
}*/


int main()
{
    char text[140];
    FILE *filep;
    filep=fopen("yazilimdosyasi.txt","a");

    if(filep==NULL)
        printf("dosya olusturulmadi.");
    else
    {
        printf("Metni giriniz: ");
        gets(text);
        fputs(text,filep);
        printf("dosyaya yazildi.");
        fclose(filep);
    }


    return 0;
}
