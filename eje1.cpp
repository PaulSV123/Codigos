#include <iostream>
using namespace std;

void producto1(int x,int y,int &multi) //Inicializacion del paso por referencia
{
    multi=x*y;
}
void producto2(int x,int y, int multi) //Inicializacion del paso por valor
{
    multi=x*y;
}
int main(){
	
	int x=4;
	int y=5;
	int multi=0;
	producto1(x,y,multi);
	producto2(x,y,multi);
	cout<<multi<<" <- Valor obtenido";
}
