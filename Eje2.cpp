#include <iostream>
using namespace std;

int recursiva (int *V,int length) //Iniciamos con la funcion de un puntero y el tamaño en enteros 
{
    if (length==1) //Si el tamaño es 1 nos retornara a la posicion 0.
    {
        return V[0];
    }
    else
        length--; //Si no es asi el tamaño se reducira y retornara el tamaño mas la funcion recursiva.
        return V[length]+recursiva(V,length);
}
int iterativa (int *S,int tam) //Iniciamos con la funcion de un puntero y el tamaño de igual modo
{
    int cont;
    cont=S[0]; //cont se iguala a la posicion 0 de S.
    for(int i=1;i<tam;i++)
    {
        cont=cont+S[i]; //aumenta el valor de cont 
    }
    return cont;
}
int tamaint(int *x) //x es un puntero de enteros
{
    int var=0;
    while (*x!='\0') //el puntero de x es diferente del vacio
    {
        var++;  //aumenta var en 1
        x++;    //aumenta x en 1
    }
    return var;
}
int main()
{
    int arr[]={1,7,8,2,'\0'};
    int *ptr=arr;
    int arra[]={1,4,5,2,'\0'};
    int *prt=arra;
    cout<<recursiva(arra,tamaint(ptr))<<" recursiva ";
    cout<<iterativa(arr,tamaint(ptr))<<" iterativa ";
}
