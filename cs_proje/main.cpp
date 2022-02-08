#include<iostream>

using namespace std;

//Disaridan alinan sayinin rakamlari toplamini bulma
int main()
{
    int sum = 0,n,numb;

    cout<<"Girilecek sayi sayisi: "<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<i<< ". sayi: ";
        cin>>numb;
        sum += numb;
    }

    cout<<"Toplam: " <<sum<<endl;

    return 0;
}
