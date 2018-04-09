#include <iostream>
using namespace std;

void cadena1(char *x,char *y)
{
    iwhile(*t)
    {
	    *s=*t;
	    t++;
	    s++;
    }
    *s='/0';
}
void cadena2(char x[],char y[])
{
    int a=0,b=0;
    while(x[a]!='\0')
    {
        a++;
    }
    while(y[b]!='\0')
    {
        b++;
    }
    for(int i=0;i<a;i++)
    {
        y[i]=x[i];
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
