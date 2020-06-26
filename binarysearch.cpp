#include<iostream>
using namespace std;

int main(){
	int i,j,n,temp,awal,tengah,akhir,cari,array[20];
	bool hasil;
	
	cout<<"BINARY SEARCHING"<<endl;
	cout<<"Banyak data array: ";
	cin>>n;
	cout<<"Input data array: "<<endl;
	for(i=0;i<n;i++){
		cout<<"Array ["<<i<<"] = ";
		cin>>array[i];
	}
	//urut
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(array[i]>array[j]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	cout<<"Data setelah diurut: "<<endl;
	for(i=0;i<n;i++){
		cout<<array[i]<<'\t';
	}
	cout<<"\nData yang dicari: ";
	cin>>cari;
	//binsearch
	awal= 0;
	akhir= n-1;
	while(awal<=akhir){
		tengah=(awal+akhir)/2;
		if(cari==array[tengah]){
			hasil=true;
			break;
		}else if(cari<array[tengah]){
			akhir=tengah-1;
		}else if(cari>array[tengah]){
			awal=tengah+1;
		}
	}
	if(hasil==true){
		cout<<"Data ditemukan pada indeks array ke ["<<tengah<<"]";
	}else{
		cout<<"Data tidak ditemukan";
	}
	return 0;
}
