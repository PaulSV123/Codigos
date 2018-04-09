#include <iostream>
using namespace std;

char palindromo(char *x) //Creamos una cadena
{
    int a=0,b=0; //creamos dos contadores
    while(*(x+a)!='\0') //el puntero de x+a si es diferente del vacio
    {
        a++; //a aumenta en 1
    }
    for(int i=0;i<a/2;i++)
    {
        if (*(x+i)==*(x-i+a-1)) //si el puntero de x+1 es igual al puntero de (x-i+a-1) 
            {
            b++; //b aumenta en 1
            }
    }
    if (b==a/2) //Pero si b es igual a la mitad de a
        cout<<"es palindromo"<<endl; //sera palindromo
    else
        cout<<"no es palindromo"<<endl; //no sera palindomo
}

int main()
{
    char *ab="oso";
    palindromo(ab);
}

