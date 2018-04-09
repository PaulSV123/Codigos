#include <iostream>
using namespace std;

void multiplicarM(int A[][20],int B[][20], int C[][20], int k, int m ,int n){
    
    for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            C[i][j] = 0;  //Filas y columnas inician en 0.

    
    for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            for(int z=0; z<m; ++z)
                C[i][j] += A[i][z] * B[z][j]; // La matriz recibe la multiplicaion de la M[a] Y M[b]
}
void imprimir(int arr[][20],int x,int y){
    for(int i=0; i<x; ++i)
    {
        for(int j=0; j<y; ++j)
        {
            cout<<arr[i][j]<<" "; //Imprime la posicion de las filas y columnas
        }
        cout<<endl;
    }
}

int main(){
    int A[20][20], B[20][20], C[20][20];
    int k, m, n;

    cout<<"Matriz A"<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<"Ingrese Filas A: "; cin>>k;
    cout<<"Ingrese Columnas A: "; cin>>m;
    cout<<endl;
    for(int i=0; i<k; ++i)
        for(int j=0; j<m; ++j)
        {
            cout<<"Ingrese valor para A["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
        }

    cout<<"Matriz B"<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<"Ingrese Filas B: ";cin>>k;
    cout<<"Ingrese Columnas B: "; cin>>n;
    cout<<endl;
    for(int i=0; i<m; ++i)
        for(int j=0; j<n; ++j)
        {
            cout<<"Ingrese valor para B["<<i<<"]["<<j<<"]: ";
            cin>>B[i][j];
        }

    multiplicarM(A,B,C,k,m,n);
    cout<<"----------------------------------"<<endl;
    cout<<"Matriz A: "<<endl;
    imprimir(A,k,m);
    cout<<"----------------------------------"<<endl;
    cout<<"Matriz B: "<<endl;
    imprimir(B,m,n);
    cout<<"----------------------------------"<<endl;
    cout<<"Antes de multiplicar"<<endl;
    cout<<"M [A]"<<endl;
    imprimir(A,k,m);
    cout<<"----------------------------------"<<endl;
    cout<<"M [B]"<<endl;
    imprimir(B,m,n);
    cout<<"----------------------------------"<<endl;
    cout<<"Resultado de ambas matrices despues de multiplicar"<<endl;
    imprimir(C,k,n);

    return 0;
}
