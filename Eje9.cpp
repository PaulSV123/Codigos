#include <iostream>
using namespace std;

char palindromo(char *x) //Creamos una cadena
{
    int a=0,b=0; 
    while(*(x+a)!='\0')
    {
        a++;
    }
    for(int i=0;i<a/2;i++)

        if (*(x+i)==*(x-i+a-1))
            {b++;}

    if (b==a/2)
        cout<<"es palindromo"<<endl;
    else
        cout<<"no es palindromo"<<endl;
}

int main()
{
    char *ab="oso";
    palindromo(ab);
}

