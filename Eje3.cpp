#include <iostream>
using namespace std;

void Merge(int *a, int low, int high, int mid)
{
	int i, j, k, temp[high-low+1]; //Creando un array temp donde high es el final y low es el comienzo aumentado en 1
	i = low, k = 0, j = mid + 1; //mid es el medio que seria low + high /2 aumentando en 1
	while (i <= mid && j <= high) // i=comienzo , j es igual al medio 
	{	                       //Si i es menor igual al medio y j es menor igual a high
		if (a[i] < a[j])       //Entonces si a[i] es menor a a[j]
		{
			temp[k] = a[i]; // Entonces el temp[k] copiara a[i] donde este obtendra un valor y aumentara
			k++;             //Cuando a[i] no sea menor a a[j] este pasara al else 
			i++;
		}
		else
		{
			temp[k] = a[j]; //El valor de temp[K] se copiara a a[j]
			k++;            //Aumentara k y j
			j++;
		}
	}
	while (i <= mid) //Si i es menor o igual a mid(medio)
	{
		temp[k] = a[i]; //el valor de temp[k] se copiara a[i]
		k++; //Aumentara k y i
		i++;
	}
	while (j <= high) //Si j es menor o igual a high.
	{
		temp[k] = a[j]; //El valor de temp[k] copiara el valor de a[j]
		k++;            //Aumentara k y j 
		j++;            //Hasta que este no sea menor al final
	}
	for (i = low; i <= high; i++) 
	{    
		a[i] = temp[i-low];    // Se asigna el valora[i] con cada parte de temp[i-low]
	}
}
void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);
		Merge(a, low, high, mid);
	}
}

void insertion_sort (int arr[], int length){
    int j, temp;

	for (int i = 0; i < length; i++){
		j = i;

		while (j > 0 && arr[j] < arr[j-1]){
			  temp = arr[j];
			  arr[j] = arr[j-1];
			  arr[j-1] = temp;
			  j--;
			  }
		}
}
void quickSort(int arr[], int left, int right)
{
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}
void mostrar(int arr[],int length)
{
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
int main()
{
    int arr[]={1,3,7,3,9,6,23,2,45,'/0'};cout<<"[Arreglo] ";
    int longitud=9;
  // insertion_sort(arr,longitud);
    mostrar(arr,longitud);
  // quickSort(arr,0,longitud-1);
    MergeSort(arr,0,longitud-1);
    mostrar(arr,longitud);

}



