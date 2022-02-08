#include <stdio.h>
#include <stdlib.h>
/*
struct etiketadi{
      degiskentipi degisken1;
      degiskentipi degisken2;
      degiskentipi degisken3;
      ...
      ...
      ...

};
*/

struct student
{
    char isim[15];
    char soyisim[15];
    int numara;
    int yas;

};

int main()
{
    struct student first={"Fatmanur","Temel",538,21};

    printf("%s %s %d %d\n",first.isim,first.soyisim,first.numara,first.yas);//veri tipinin icicdeki degerlere nokta ile ulasýyoruz


    return 0;
}

#include <string.h>

/*struct adres
{
    char mahelle[15];
    char sokak[15];
    char cadde[23];

};
struct student
{
    char isim[15];
    char soyisim[15];
    int numara;
    int yas;
    struct adres adres1;

};

int main()
{
    struct student ogrenci1;

    strcpy(ogrenci1.isim,"Fatmanur");
    strcpy(ogrenci1.soyisim,"Temel");
    ogrenci1.numara=538;
    ogrenci1.yas=21;
    strcpy(ogrenci1.adres1.mahelle,"cakirlar");
    strcpy(ogrenci1.adres1.cadde,"namik kemal");
    strcpy(ogrenci1.adres1.sokak,"2. sok.");


    printf("%s %s %d %d %s %s %s\n",ogrenci1.isim,ogrenci1.soyisim,ogrenci1.numara,ogrenci1.yas,ogrenci1.adres1.mahelle,ogrenci1.adres1.cadde,ogrenci1.adres1.sokak);//veri tipinin icicdeki degerlere nokta ile ulasýyoruz


    return 0;
}*/


/*struct student//structure dizileri
{
    char isim[23];
    char soyisim[23];
    int numara;
};

int main()
{
    struct student ogrenciler[3];
    int i;

    for(i=0;i<3;i++)
    {
        printf("%d. ogrencinin ismini giriniz: ",i+1);
        scanf("%s",&ogrenciler[i].isim);
        printf("%d. ogrencinin soyismini giriniz: ",i+1);
        scanf("%s",&ogrenciler[i].soyisim);
        printf("%d. ogrencinin numarasini giriniz: ",i+1);
        scanf("%d",&ogrenciler[i].numara);
    }
    for(i=0;i<3;i++)
    {
        printf("\n%d. ogrencinin;\nIsmi: %s\nSoyismi: %s\nNumarasi: %d\n\n***\n\n",i+1,ogrenciler[i].isim,ogrenciler[i].soyisim,ogrenciler[i].numara);
    }

    return 0;
}*/

/*struct student//Fonksiyonlar ve yapilar
{
    char isim[23];
    char soyisim[23];
    int numara;
};

void goster(struct student ogrenci)
{
    printf("Ogrencinin bilgileri: %s %s %d",ogrenci.isim,ogrenci.soyisim,ogrenci.numara);
}

int main()
{
    struct student ogrenci1={"Fatmanur","Temel",538};

    goster(ogrenci1);

    return 0;
}*/


/*struct student//struct lari hem void hem int olarak gonderme
{
    char isim[23];
    char soyisim[23];
    int numara;
};

void goster(struct student ogrenci)
{
    printf("\nOgrencinin bilgileri: %s %s %d",ogrenci.isim,ogrenci.soyisim,ogrenci.numara);
}

struct student degeral()
{
    struct student yeni;
    printf("Bilgileri girin: ");
    scanf("%s%s%d",&yeni.isim,&yeni.soyisim,&yeni.numara);

    return yeni;

};
int main()
{
    struct student ogrenci1=degeral();
    goster(ogrenci1);

    return 0;
}*/

/*struct student
{
    char isim[23];
    char soyisim[23];
    int numara;
};

int main()
{
    struct student ogrenci;
    strcpy(ogrenci.isim,"fatmanur");
    strcpy(ogrenci.soyisim,"temel");
    ogrenci.numara=538;

    struct student *tut;

    tut=&student;

    printf("%s%s%d\n",ogrenci.isim,ogrenci.soyisim,ogrenci.numara);
    printf("%s%s%d\n",*tut.isim,*tut.soyisim,*tut.numara);

    return 0;
}*/
