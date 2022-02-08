#include <iostream>

using namespace std;

//Disaridan girilen bir kelimenin tersini ekrana yazdirma
int main()
{
    int n = 0;
    char kelime[100];

    cout << "Bir kelime giriniz: "<<endl;
    cin>>kelime;

    while(kelime[n]!='\0')
    {
        n++;
    }

    cout<<"Kelimenin tersi:"<<endl;
    for(int i=n-1;i>=0;i--)
    {
        cout<<kelime[i];
    }

    return 0;
}
