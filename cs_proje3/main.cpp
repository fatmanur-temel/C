#include <iostream>

using namespace std;

//Bir sayi dizisindeki en küçük degeri bulma
int main()
{
    int dizi[8]={17,5,32,4,65,45,3,8};
    int minn = dizi[0];

    for(int i=0;i<7;i++)
    {
        if(minn>dizi[i+1])
            minn = dizi[i+1];
    }

    cout<<"En kucuk sayi:"<<minn<<endl;

    return 0;
}
