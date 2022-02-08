#include <iostream>

using namespace std;

//Bir sayi dizisindeki en büyük degeri bulma
int main()
{
    int num[6]={5,41,25,84,1,17};
    int maks = num[0];

    for(int i=0;i<5;i++)
    {
        if(maks<num[i+1])
        {
            maks = num[i+1];
        }
    }

    cout<<"En buyuk sayi:"<<maks<<endl;

    return 0;
}
