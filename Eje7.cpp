#include <iostream>
using namespace std;

void concatena1(char *x,char *y) //Se crean dos cadenas
{
    while(*x) //x recorre todo el arreglo hasta el ultimo elemento
    {
	x++; //x aumenta en 1
    }
    while(*y) //y recorre todo el arreglo hasta el ultimo elemento
    {
        *x=*y; //x copiara el contenido de y
	x++; //x aumenta en 1
	y++; //y aumenta en 1
    }
    *x='\0'; //x es igual al vacio

}
void concatena2(char a[], char b[]) // Se crean 2 cadenas
{
    int x=0, y=0; //Creamos dos 
    while(a[x])
    {
       x++;
    }
    while(b[y])
    {
       a[x]=b[y];
       x++;
       y++;
    }
    a[x]='\0';
}
int main()
{
    char pt[]="Listado";
    char *ptr=pt;
    char st[]="Interno";
    char inc[]="Resaltado";
    char cop[]="elplumon";
    concatena1(st,pt);
    cout<<st<<endl;
    concatena2(inc,cop);
    cout<<inc<<endl;

}
