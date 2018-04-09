#include <iostream>
using namespace std;

int recursiva (int *V,int length)
{
    if (length==1)
    {
        return V[0];
    }
    else
        length--;
        return V[length]+recursiva(V,length);
}
int iterativa (int *S,int tam)
{
    int cont;
    cont=S[0];
    for(int i=1;i<tam;i++)
    {
        cont=cont+S[i];
    }
    return cont;
}
int tamaint(int *x)
{
    int var=0;
    while (*x!='\0')
    {
        var++;
        x++;
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
