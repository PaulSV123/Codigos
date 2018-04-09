#include <iostream>
using namespace std;

int Arreglo1(int *x)
{
    if (*x=='\0') //El puntero de x es diferente del vacio.
        return 0; //Si este es vacio retornara 0
    else //Si x no es vacio entonces:
    {
        return 1+Arreglo1(++x); //Retornaria uno mas la funcion arreglo aumentado la variable en prefijo 
    }
}
int Arreglo2(int x[])
{
    int cont=0;  //Creamos un contador
    while(x[cont]!='\0') //el arreglo de x[cont] es diferente del vacio
    {
        cont++; //cont aumentara en uno hasta terminar el arreglo retornando su tamaño
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
