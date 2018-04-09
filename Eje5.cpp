#include <iostream>
using namespace std;

int Arreglo1(int *x)
{
    if (*x=='\0')
        return 0;
    else
    {
        return 1+Arreglo1(++x);
    }
}
int Arreglo2(int x[])
{
    int cont=0;
    while(x[cont]!='\0')
    {
        cont++;
    }
    return cont;
}

int main()
{
	int arr[]={1,2,3,'\0'};
    int *ptr=arr;
    int arra[]={2,4,5,65,4,1,5,1,'\0'};
    cout<<"Tamaño del arreglo en punteros -> "<<Arreglo1(ptr)<<endl;
    cout<<"Tamaño del arreglo con arreglos -> "<<Arreglo2(arra);
}
