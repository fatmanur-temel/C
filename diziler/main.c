#include <stdio.h>
#include <stdlib.h>

    //TEK BOYUTLU DIZILER

/*int main()
{

    int dizi[5]={1,3,5,7,9};
    printf("%d\n",dizi[0]); //1
    printf("%d\n",dizi[1]); //3
    printf("%d\n",dizi[2]); //5
    printf("%d\n",dizi[3]); //7
    printf("%d\n",dizi[4]); //9
    printf("%d\n",dizi[5]); //hata verir
    return 0;
}*/


/*int main()
{
    int dizi[10];
    int i;

    for(i=0;i<10;i++)
    {
        dizi[i]=2*i;
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",dizi[i]);
    }

    return 0;
}*/


/*int main() //kullanicidan 4 sayi alarak bunlari toplama
{
    int dizi[4];
    int i,toplam=0;

    i=0;
    while(i<4)
    {
        printf("Bir tamsayi giriniz:");
        scanf("%d",&dizi[i]);
        printf("\n");
        i++;
    }

    for(i=0;i<4;i++)
    {
        toplam=toplam+dizi[i];

    }
    printf("Dizinin toplami %d\n",toplam);

    return 0;
}*/

/*int main()//diziye karakter atama
{
    char isim[20];
    printf("isminizi giriniz: ");
    scanf("%s",isim);//scanf ile diziye atama yaparken & kullanılmaz.

    printf("isminiz: %s",isim);

    return 0;
}*/

/*int carp(int matris[],int size)//parametre olarak diziler
{
    int carpim=1;
    int i=0;
    for(;i<size;i++)
    {
        carpim*=matris[i];
    }
    return carpim;
}

int main()
{
    int sayilar[5]={1,2,3,4,5};

    printf("%d",carp(sayilar,5));

    return 0;
}*/



    //COK BOYUTLU DIZILER
/*int main()
{
    int dizi[2][2]={{4,6},{2,3}};

    printf("%d\n",dizi[0][0]); //4
    printf("%d\n",dizi[0][1]); //6
    printf("%d\n",dizi[1][0]); //2
    printf("%d\n",dizi[1][1]); //3


    return 0;
}*/

/*int main()//matris
{
    int i,j;
    int dizi[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",dizi[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/

//diziye eleman atama scanf ile yapilir


/*int main() //dioganal matris
{
    int mat[10][10];
    int i,j;

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i==j)
            {
                mat[i][j]=1;
            }
            else
            {
                mat[i][j]=0;
            }
            printf("%4d",mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/

/*int main() //cok boyutlu iki dizinin toplami.
{
    int dizi1[3][4]={{1,5,3,7},{4,2,8,4},{5,9,7,3}};
    int dizi2[3][4]={{1,6,4,7},{7,2,8,1},{4,5,1,8}};
    int toplam[3][4];
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            toplam[i][j]=dizi1[i][j]+dizi2[i][j];
            printf("toplam %d\t",toplam[i][j]);
        }
        printf("\n");
    }
}*/

/*int main()//dizinin sutunlarindaki sayılari toplayan program
{
    int i,j,sum=0;
    int dizi[3][5];

    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&dizi[i][j]);
        }
    }
    for(j=0;j<5;j++)
    {
        for(i=0;i<3;i++)
        {
            sum+=dizi[i][j];
        }
        printf("%d ",sum);

        sum=0;
    }

    return 0;
}*/

/*void bastir(int matriss[][4],int size)//parametre olarak cokboyutlu diziler
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",matriss[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matris[3][4];
    int i,j;

    printf("Matrisi doldurunuz: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&matris[i][j]);
        }
    }
    bastir(matris,3);

    return 0;
}*/

     //KARAKTER DIZILERI
/*int main()
{
    char dizi[]={'c','a','n','a','n','\0'}; // \0 kullanimi zorunlu
    char dizi1[]="canan"; //dizileri iki sekilde de atayabiliriz
    char dizi2[50];

    printf("%s\n",dizi1); //canan

    printf("bir isim giriniz:\n");
    scanf("%s",&dizi2);
    printf("%s",dizi2); //'girilen isim'
}*/

/*int uzunlukdon(char name[])//parametre olarak karakter dizisi
{
    int uzunluk=0,i;
    for(i=0;name[i]!='\0';i++)
    {
       uzunluk++;
    }
    return uzunluk;
}

int main()
{
    char isim[]="Fatmanur";
    printf("%d",uzunlukdon(isim));

    return 0;
}*/

/*void terscevir(char dizi[])//kullanicidan alinan kelimeyi tersine cevirme
{
    int i,uzunluk;

    uzunluk=strlen(dizi);

    for(i=uzunluk-1;i>=0;i--)
    {
        printf("%c",dizi[i]);
    }

}

int main()
{
    char text[200];

    scanf("%s",text);

    terscevir(text);

    return 0;
}*/

#include <string.h>

    //Strlen Fonksiyonu: Karakter dizisinin boyunu bulmayi saglar.

/*int main()
{
    char dizi[]="Ekim";

    printf("Dizinin boyu %d\n",strlen(dizi)); //4
    printf("Dizinin boyu %d\n",sizeof(dizi)); //5 ('\0' da sayilir.)

    return 0;
}*/

    //Strcmp Fonksiyonu: iki karakter dizisini ASCII kodlarina gore kiyaslar.

/*int main()
{
    int sonuc;
    char dizi1[15]="abcd"; //kucuk harflerin ASCII kodu 97 den baslar.
    char dizi2[15]="ABCD"; //buyuk harflerin ASCII kodu 65 den baslar.

    sonuc=strcmp(dizi1,dizi2);

    if(sonuc<0) //daha kucukse -1 degerini verir.
    {
        printf("dizi1 dizi2'den daha kucuktur.\n");
    }
    else if(sonuc>0) //daha buyukse 1 degerini verir.
    {
        printf("dizi1 dizi2'den daha buyuktur.\n");
    }
    else //esitse 0 degerini verir.
    {
        printf("dizi1 dizi2'ye esittir.\n");
    }
    //ekran: dizi1 dizi2'den daha buyuktur.
}*/

    //Strncmp: strcmp ile ayni isi yapr. tek fark n karaktere kadar karsilastir demektir.

/*int main()
{
    int sonuc;
    char dizi1[15]="abcd"; //kucuk harflerin ASCII kodu 97 den baslar.
    char dizi2[15]="ABCD"; //buyuk harflerin ASCII kodu 65 den baslar.

    sonuc=strncmp(dizi1,dizi2,3); //ilk uc karakteri karsilastir.

    if(sonuc<0) //daha kucukse -1 degerini verir.
    {
        printf("dizi1 dizi2'den daha kucuktur.\n");
    }
    else if(sonuc>0) //daha buyukse 1 degerini verir.
    {
        printf("dizi1 dizi2'den daha buyuktur.\n");
    }
    else //esitse 0 degerini verir.
    {
        printf("dizi1 dizi2'ye esittir.\n");
    }
    //ekran: dizi1 dizi2'den daha buyuktur.
}*/

    //Strcpy Fonksiyonu: bir karakter dizisinin icerigini baska bir karakter dizisinin icine atmayı saglar.

/*int main()
{
    char dizi1[]="Benim adim Fatmanur.";
    char dizi2[100];

    strcpy(dizi2,dizi1);

    printf("%s\n",dizi2); //Benim adim Fatmanur.
}*/

    //Strncpy Fonksiyonu: n karaktere kadar kopyalar.

/*int main()
{
    char dizi1[]="Benim adim Fatmanur.";
    char dizi2[100];

    strncpy(dizi2,dizi1,7);

    printf("%s\n",dizi2); //Benim a
}*/

    //Strcat Fonksiyonu: iki karakter dizisini birlestirir.

/*int main()
{
    char bos[100];

    strcpy(bos,"Benim"); //bos bir diziye srtcat yapilmaz.Ilk atama yapmak gerek.
    strcat(bos," adim");
    strcat(bos," Fatmanur.");

    printf("%s\n",bos); //Benim adim Fatmanur.
}*/

    //Strncat Fonksiyonu: n karakter sayisina gore iki diziyi birlestirir.

/*int main()
{
    char dizi1[100],dizi2[100];
    int a;

    printf("Lutfen bir yazi giriniz:"); //>Benim adim
    gets(dizi1);
    printf("\nLutfen ikinci bir yazi giriniz:"); //> Fatma Nur
    gets(dizi2);
    printf("\nBirinci yazinin sonuna kac karakter eklemek istersiniz:"); //>6
    scanf("%d",&a);

    printf("%s\n",dizi1);//Benim adim

    strncat(dizi1,dizi2,a);
    printf("%s\n",dizi1);//Benim adim Fatma
}*/

/*int main()
{
    char dizi1[]="iyidir";
    char dizi2[]="gecelerim";
    char sonuc[100]="";

    strcpy(sonuc,dizi1);
    strncpy(sonuc+3,dizi2,7); //+n yapistirilacak yer
    printf("%s\n",sonuc); //iyigeceler
}*/

/*int main()
{
    char dizi[100][100]={"bir","iki","uc","dort","bes"};

    printf("Dizinin dorduncu elemani %s\n",dizi[3]); //dizinin dorduncu elemani dort
    printf("Dizinin dorduncu elemaninin ucuncu karakteri %c",dizi[3][2]); //dizinin dorduncu elemaninin ucuncu karakteri r

}*/
