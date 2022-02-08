#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

/*int main()
{
    float num=3.14;
    printf("%f\n",num); //3.140000

    return 0;
}*/

/*int main()
{
    float num=3.14;
    printf("%.2f\n",num); //3.14

    return 0;
}*/

/*int main()
{
//sizeof fonksiyonu deðiþkenin bellekte ne kadar yer tuttuðunu söyler.
    char karakter;
    int tamsayi;
    float ondaliksayi1;
    double ondaliksayi2;

    printf("char: %d\n",sizeof(char)); //char: 1
    printf("int: %d\n",sizeof(int)); //int: 4
    printf("float: %d\n",sizeof(float)); //float: 4
    printf("double: %d\n",sizeof(double)); //double: 8

    return 0;
}*/


int main()
{
    string name = get_string("What is your name?\n");
    printf("hello, %s\n",name);
}
