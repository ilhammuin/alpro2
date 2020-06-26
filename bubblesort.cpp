#include<iostream>
using namespace std;

void urut(int angka[5]){
	int i,j,temp;
	
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(angka[i]<angka[j]){
				temp=angka[i];
				angka[i]=angka[j];
				angka[j]=temp;
			}
		}
	}
}

int main(){
	int angka[5];
	int i;
	
	cout<<"Input 5 angka: "<<endl;
	for(i=0;i<5;i++){
		cin >> angka[i];
	}
	cout<<endl;
	urut(angka);
	
	cout<<"Desc:"<<endl;
	for(i=0;i<5;i++){
		cout << angka[i]<<"\t";
	}
	
}
