#include<iostream>
using namespace std;

int main(){
	int i,j,temp;
	int n=5;
	int arr[n];
	
	cout<<"Input 5 angka:"<<endl;
   	
   	for(i=0;i<5;i++){
   		cin>>arr[i];
   	}
   	
  	cout<<"Angka sebelum diurutkan:"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<"\t";
    }
	//PENGURUTAN
	 for (int gap = n/2; gap > 0; gap /= 2) 
    { 
        
        for (i = gap; i < n; i += 1) 
        { 
             
            temp = arr[i]; 
               
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) 
                arr[j] = arr[j - gap]; 
              
            arr[j] = temp; 
        } 
    } 
	
	cout<<"\nShell sort (ASC):"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<"\t";
    }
 
}

