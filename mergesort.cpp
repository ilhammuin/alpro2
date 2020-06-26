#include <iostream>
using namespace std;

void printArray(int *array, int n)
{
    for (int i = 0; i < n; ++i)
        cout << array[i] << "\t";
}

void merge(int *array, int low, int mid, int high)
{
    int temp[high + 1];
    int i = low;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= high)
    {
        if (array[i] <= array[j])
            temp[k++] = array[i++];
        else
            temp[k++] = array[j++];
    }
    while (i <= mid)
        temp[k++] = array[i++];
    while (j <= high)
        temp[k++] = array[j++];
    k--;
    while (k >= 0)
    {
        array[k + low] = temp[k];
        k--;
    }
}

void mergeSort(int *array, int low, int high)
{
    int mid;

    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(array, low, mid);
        mergeSort(array, mid + 1, high);
        merge(array, low, mid, high);
    }
}

int main()
{
    int array[5];
    
    cout<<"Input 5 angka:"<<endl;
   	
   	for(int i=0;i<5;i++){
   		cin>>array[i];
   	}

    cout << "Sebelum di Urutkan Merge Sort : \n" ;
    printArray(array, 5);

    mergeSort(array, 0, 5 - 1);

    cout << "\nSesudah di Urutkan Merge Sort : \n" ;
    printArray(array, 5);
    return (0);
}
