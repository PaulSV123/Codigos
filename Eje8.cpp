#include <iostream>
using namespace std;

void cambio(char z[],int x,int y)
{
    char cam=z[x]; //el contenido de z[x] se guardara en cam
    z[x]=z[y]; //z[x] copiara el contenido de z[y]
    z[y]=cam; //z[y] copiara el contenido de cam
}
void cambio2(char *z,int y,int x)
{
    char ptr[2]={z[y],z[x]}; //el tamaño del arreglo ptr es 2
    char *puntero=ptr; //el puntero char se iguala a ptr
    z[x]=*puntero; //z[x] copiara el contenido del puntero
    puntero++; //puntero aumentara en 1
    z[y]=*puntero; //z[y] copiara el contenido del puntero
}

int main()
{
    char arra[]={'d','a','d','o','\0'};
    char *ptrarra=arra;
    cout<<"Inicializando cambios de la palabra dado"<<endl;
    cout<<endl;
    cout<<"Letras a cambiar el arreglo."<<endl;
	cout<<ptrarra[3]<<","<<ptrarra[1]<<endl;
	cout<<"Cambio ocurrido"<<endl;
    cout<<ptrarra<<endl;
    cambio(ptrarra,3,1);
    cout<<"Letras a cambiar el arreglo."<<endl;
    cout<<ptrarra[1]<<","<<ptrarra[3]<<endl;
    cout<<"Cambio ocurrido"<<endl;
    cout<<ptrarra<<endl;
    cambio2(ptrarra,1,3);
}
