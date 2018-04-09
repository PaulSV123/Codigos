#include <iostream>
using namespace std;

void concatena1(char *s,char *t)
{
    int a=0,b=0;
    while(*(s+a)!='\0')
    {
        a++;
    }
    while(*(t+b)!='\0')
    {
        b++;
    }
    for(int i=0;i<a+b;i++)
        *(s+b+i)=*(t+i) ;

}
void concatena2(char a[], char b[])
{
	int x=0, y=0;
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
