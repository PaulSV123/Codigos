#include <iostream>
using namespace std;

void cadena1(char *x,char *y) //Se crean 2 cadenas 
{
    while(*x) //x recorre toda la cadena hasta el final
    {
	    *y=*x; //el contenido de "y" copia el contenido de "x"
	    x++; //x aumenta en 1
 	    y++; //y aumenta en 1
    }
    *y='\0'; //y se igualara al vacio.
}
void cadena2(char x[],char y[]) //Se crean 2 cadenas
{
    int a=0,b=0; //Se crean 2 comtandores
    while(x[a]!='\0') // x[a] si es diferente del vacio
    {
        a++; //a aumenta en 1
    }
    while(y[b]!='\0') // y[b] si es diferente del vacio
    {
        b++; //b aumenta en 1
    }
    for(int i=0;i<a;i++)
    {
        y[i]=x[i]; //el contenido de y[i] copiara el de x[i]
    }

}
int main()
{
    char *tpr=new char[10];
    tpr="bebidas";
    char str[]="gratis";
    char trps[]="pan";
    char strs[]="jamon";
    cadena1(trps,strs);cout<<strs<<endl;
    cadena2(tpr,str);cout<<str<<endl;
}
