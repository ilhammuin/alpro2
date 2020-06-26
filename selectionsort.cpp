#include<iostream>
using namespace std;

int main(){
	int i,j,max,temp;
	int array[5];
	
	cout<<"Input 5 angka:"<<endl;
   	
   	for(i=0;i<5;i++){
   		cin>>array[i];
   	}
   	
  	cout<<"Angka sebelum diurutkan:"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<array[i]<<"\t";
    }
	//PENGURUTAN
	for(i=0;i<4;i++){
		max=i;
		
		for(j=i+1;j<5;j++){	//loop untuk mengecek data indeks [i] dgn data yang belum terurut [i+1]	
			if(array[j]>array[i]){ //cek
				max=j;  //mengassign indeks data ke var max
			}
		}
		
		//proses tukar, array[max] ke array indeks i..menyimpan data terbesar ke awal
		temp=array[max];
		array[max]=array[i];
		array[i]=temp;
	}
	
	cout<<"\nSelection sort (DESC):"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<array[i]<<"\t";
    }
 
}
