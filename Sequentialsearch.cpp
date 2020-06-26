#include<iostream>
using namespace std;

int main(){
	int array[10]= {2,5,26,23,11,80,73,55,65,10};
	int i,cari;
	bool ketemu=false;
	cout<<"SEQUENTIAL SEARCH"<<endl;
	cout<<"Isi data Array:"<<endl;
	for(i=0;i<10;i++){
		cout<<"Array ["<<i<<"] = "<<array[i]<<endl;
	}
	
	cout<<"Masukkan data yang akan dicari: ";
	cin>>cari;
	i=0;
	while(i<10){
		if(cari==array[i]){
			ketemu=true;
			break;
		}else{
			i++;
		}
	}
	
	if(ketemu=true){
		cout<<"Data ditemukan pada indeks array ke-"<<i;
	}else{
		cout<<"Data tidak ditemukan";
	}
	return 0;
}
