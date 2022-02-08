#include <stdio.h>
#include <stdlib.h>

/*int main() //aritmatik islemler
{
    int a,b,c,x;
    printf("a,b,c ve x sayilarini giriniz:");
    scanf("%d%d%d%d",&a,&b,&c,&x);

    printf("sonuc: %d",(a*x*x)+(b*x)+c);//375

    return 0;
}*/


/*int main()//Dikdortgen prizma alan-hacim hesabý
{
    int a,b,h;
    printf("Dikdortgen prizmanin a,b ve h uzunluklarini giriniz:");
    scanf("%d%d%d",&a,&b,&h);

    printf("Dikdortgen prizmanin:\n");
    printf("\tTaban alani: %d\n",a*b);
    printf("\tYanal alanlar toplami: %d\n",2*b*h+2*a*h);
    printf("\tToplam yuzey alani: %d\n",2*a*h+2*b*h+2*a*b);
    printf("\tHacmi: %d\n",a*b*h);

    return 0;
}*/

/*int main()//max min sayi bulma
{
    int a,b,c,min,max;
    printf("Uc farkli sayi giriniz:\n");
    scanf("%d%d%d",&a,&b,&c);

    max=a;
    if(max<b)
    {
        max=b;
    }
    if(max<c)
    {
        max=c;
    }
    printf("en buyuk sayi %d\n",max);

    min=a;
    if(min>b)
    {
        min=b;
    }
    if(min>c);
    {
        min=c;
    }
    printf("en kucuk sayi %d\n",min);

    return 0;
}*/

/*int main()//tamsayi kiyaslama
{
    int a,b;
    printf("iki tamsayi giriniz:");
    scanf("%d%d",&a,&b);

    if(a!=b)
    {
        printf("iki sayi birbirine esit degildir\n");
    }
    if(a<b)
    {
        printf("%d kucuktur %d",a,b);
    }
    else if(a>b)
    {
        printf("%d kucuktur %d",b,a);
    }
    else{
        printf("iki sayi birbirine esittir.");}

    return 0;
}*/

/*int main()//tamsayi kiyaslama2
{
    int a,b;
    printf("iki sayi giriniz:");
    scanf("%d%d",&a,&b);

    if(a%b==0)
    {
        printf("%d sayisi %d sayisinin %d katidir.",a,b,a/b);
    }
    else if(b%a==0)
    {
        printf("%d sayisi %d sayisinin %d katidir.",b,a,b/a);
    }
    else
    {
        printf("%d sayisi %d sayisinin kati degildir.",a,b);
    }
    return 0;
}*/


/*int main()
{
    int a;
    printf("Bir sayi giriniz:");
    scanf("%d",&a);

    while(a>0)
    {
        printf("%d ",a);
        a--;
    }

    return 0;
}*/


/*int main() //toplam degerleri hesaplama
{
    int a,i,sonuc=0;
    printf("Pozitif bir sayi giriniz:");
    scanf("%d",&a);

    i=1;
    while(i<=a)
    {
        if(i!=a)
        {
            printf("%d + ",i);
        }
        else
        {
            printf("%d ",a);
        }
        sonuc=sonuc+i;
        i++;
    }

    printf("= %d",sonuc);

    return 0;
}*/


/*int main()//Fonksiyon degeri hesaplama
{
    float a,f;
    printf("Bir reel sayi giriniz:");
    scanf("%f",&a);

    f=a*a*a+13*a*a+47*a+5;
    printf(">> f(%.3f) = %.3f",a,f);

    return 0;
}*/


/*int main()//carpma islemi isareti
{
    int a,b;
    printf("iki sayi giriniz:");
    scanf("%d%d",&a,&b);

    if((a>0 && b>0) || (a<0 && b<0))
    {
        printf(">> sign(%d*%d)=+1",a,b);
    }
    else if((a>0 && b<0) || (a<0 && b>0))
    {
        printf(">> sign(%d*%d)=-1",a,b);
    }
    else
    {
        printf(">> sign(%d*%d)=0",a,b);
    }

    return 0;
}*/


/*int main()//while dongusunde 17nin katlari
{
    int i,a;
    printf("Bir deger siniri giriniz:");
    scanf("%d",&a);

    i=0;
    while((i*17)<a)
    {
        printf("%d\t",i*17);
        i++;
        if(i%10==0)
        {
            printf("\n");
        }
    }

    return 0;
}*/

/*int main()//sayi basamagı bulma
{
    int sayi,a,b;
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);

    a=sayi%10;
    b=sayi%100/10;
    printf("Birler basamagi: %d\n",a);
    printf("Onlar basamagi: %d\n",b);

    return 0;
}*/


/*int main()//milden kmye cevirme
{
    float mil,km;
    printf("Arabanin gittigi yol: ");
    scanf("%f",&mil);

    km=mil*1.609;
    printf("Araba %f km yol gitmistir.",km);

    return 0;
}*/


/*int main()//dairenin alani
{
    float pi,r;
    printf("Dairenin yaricapini giriniz: ");
    scanf("%f",&r);

    pi=3.141;
    printf("Dairenin alani: %.2f",pi*r*r);

    return 0;
}*/


/*int main()//havuz-hacim problemi
{
    float n,b,y;
    printf("Havuzun eni, boyu, yuksekligi: ");
    scanf("%f%f%f",&n,&b,&y);

    printf("Havuzun %.2f litre su alir.",n*b*y);

    return 0;
}*/


/*int main()//tip ve ucret alma
{
    int a,ucret;
    char tip;

    printf("Halinin tipi: ");
    scanf("%c",&tip);
    printf("Kaplanacak alan: ");
    scanf("%d",&a);
    if(tip=='t')
    {
        printf("Haliciya odenecek tutar: %d\n",a*18+200);
    }
    else if(tip=='b')
    {
        printf("Haliciya odenecek tutar: %d\n",a*17+200);
    }
    else if(tip=='s')
    {
        printf("Haliciya odenecek tutar: %d\n",a*19+200);
    }
    else
    {
        printf("Gecersiz kod");
    }

    return 0;
}*/


/*int main()
{
    int a;
    printf("Pozitif bir sayi giriniz: ");
    scanf("%d",&a);

    if(a%13==0 && a%17==0)
    {
        printf("Bu sayi 13 ve 17'ye bolunur.");
    }
    else if(a%13==0)
    {
        printf("Bu sayi 13'e bolunur.");
    }
    else if(a%17==0)
    {
        printf("Bu sayi 17'ye bolunur.");
    }
    else
    {
        printf("Bu sayi 13 veya 17'ye bolunmez.");
    }

    return 0;
}*/

/*int main()
{
    int a,b,c;
    printf("Uc aci giriniz: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a+b+c==180)
    {
        if(a==60 && b==60)
        {
            printf("Bu bir eskenar ucgendir.\n");
        }
        else if(a==b || a==c || b==c)
        {
            printf("Bu bir ikizkenar ucgendir.\n");
        }
        else
        {
            printf("Bu bir cesitkenar ucgendir.\n");
        }
    }
    else{
        printf("Acilar ucgen olusturmaz.");
    }


    return 0;
}*/


/*int main()
{
    float t;
    printf("Konusma sureniz: ");
    scanf("%f",&t);

    if(t<=3)
    {
        printf("Konusma ucretiniz 0.25");
    }
    else
    {
        printf("Konusma ucretiniz %.2f",(t-3)*0.08+0.25);
    }

    return 0;
}*/


/*int main()
{
    int a,b;
    char i;
    printf("islemi seciniz(+,-): ");
    scanf("%c",&i);
    printf("iki tamsayi giriniz: ");
    scanf("%d%d",&a,&b);

    if((a==0)||(b==0))
    {
        printf("bu islem yapilamaz.");
    }
    else
    {
        printf("1/%d%c1/%d=",a,i,b);
        switch(i)
        {
            case '+':{printf("%d/%d",a+b,a*b);}
            break;
            case '-':{printf("%d/%d",a-b,a*b);}
            break;
            default: {printf("Yanlis operator girdiniz.");}
        }
    }

    return 0;
}*/


/*int main()//girilen harfin alfabede kacinci sirada oldugunu bulma
{
    char ch;
    printf("Bir karakter giriniz: ");
    scanf("%c",&ch);

    int sira;
    if((ch>='A')&&(ch<='Z'))
    {
        sira=(int)ch-(int)'A'+1;
    }
    else if((ch>='a')&&(ch<='z'))
    {
        sira=(int)ch-(int)'a'+1;
    }
    printf("%d. harftir.",sira);

    return 0;
}*/


/*int main() //girilen n ogrenciden 150ye en yakini bulma.
{
    int i,boy,no,minboy,minno,fark;
    printf("Ogrenci no: ");
    scanf("%d",&no);
    minno=no;
    fark=100;

    while(no>0)
    {
        printf("Ogrenci boy: ");
        scanf("%d",&boy);
        if(abs(boy-150)<fark)
        {
            fark=abs(boy-150);
            minboy=boy;
            minno=no;
        }
        printf("Ogrenci no: ");
        scanf("%d",&no);
    }
    printf("%d numarali ogrenci %d cm boyuyla 150'ye en yakindir.",minno,minboy);

    return 0;
}*/


/*int main()//bir cumledeki harf sayisini bulma
{
    int i=0,sayac=0;
    char cumle[100];

    printf("Bir cumle giriniz: ");
    gets(cumle);

    while(cumle[i])
    {
        if(cumle[i]==32)//32 space tusunun ASCII kodu
        {
            sayac++;
        }
        i++;
    }
    printf("Cumlede %d kelime vardir.",sayac+1);

    return 0;
}*/


/*int main()//sekil sukullu yazi
{
    int i,j,sayac=0;
    char cumle[100];
    printf("Bir cumle yaziniz: ");
    gets(cumle);

    for(i=0;cumle[i];i++)
    {
        printf("%c",cumle[i]);
        if(cumle[i]==32)
        {
            printf("\n");
            sayac++;
            for(j=0;j<sayac;j++)
            {
                printf("\t");
            }
        }
    }

    return 0;
}*/


/*int main()//harfleri ucgen seklinde yazdirma
{
    int i,j;
    char cumle[100];
    printf("Bir cumle yaziniz: ");
    gets(cumle);

    for(i=0;cumle[i];i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c ",cumle[j]);
        }
        printf("\n");
    }


    return 0;
}*/


/*int main()//cumlede en fazla kullanilan harfi bulma
{
    char cumle[150],tekrarharf[26]={0},harf;
    int i,encok;
    printf("Bir cumle giriniz: ");
    gets(cumle);

    while(cumle[i])
    {
        if((cumle[i]>='a')&&(cumle[i]<='z'))
        {
            tekrarharf[cumle[i]-'a']++;
        }
        i++;
    }

    encok=tekrarharf[0];
    for(i=1;i<26;i++)
    {
        if(tekrarharf[i]!=0)
        {
            if(tekrarharf[i]>encok)
            {
                encok=tekrarharf[i];
                harf=i+'a';
            }
        }
    }

    printf("en fazla kullanilan harf: %c",harf);
    return 0;
}*/

