#include<iostream>
using namespace std;
 
int main(){
	int i,j,n,temp;
   	int a[5];
   	
   	cout<<"Input 5 angka:"<<endl;
   	
   	for(i=0;i<5;i++){
   		cin>>a[i];
   	}
   	
  	cout<<"angka sebelum diurutkan:"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<"\t";
    }
 	//PENGURUTAN
    for(i=1;i<=5-1;i++)
    {
        temp=a[i];
        j=i-1;   //var j sebagai indeks sebelumnya
		 
        while((temp<a[j])&&(j>=0)) //kondisi data ke i kurang dengan data dibelakangnya
        {
            a[j+1]=a[j];    //Menyimpan data ke i ke indeks sebelumnya
            j=j-1;			//assign j batas loop
        }
 
        a[j+1]=temp;    //menyimpan data yang sudah dicek 
    }
 
    cout<<"\nInsertion sort (ASC):"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<"\t";
    }
 
    return 0;
}
