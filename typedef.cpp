#include<iostream>
using namespace std;

//typedef adalah perintah atau keyword yang dipakai untuk memberikan nama 
//lain atau alias dari tipe data

union coba{
	double nilai1; //8 bytes
	int nilai2;	//4 bytes
	int nilai3;
};

typedef coba nilainilai; //TYPDEF

int main(){
	nilainilai dataunion;
	
	cout<<sizeof(nilainilai)<<endl; //ukuran union
	
	dataunion.nilai2=20;
	
	cout<<"Nilai 1: "<<dataunion.nilai1<<endl;
	cout<<"Nilai 2: "<<dataunion.nilai2<<endl;
	cout<<"Nilai 3: "<<dataunion.nilai3<<endl;
}
