#include <iostream>
using namespace std;

//pada passing by reference berarti melewatkan alamat variabel
//struct (struktur) menggunakan dereference (&) sebagai argumen ke suatu fungsi 
//yang berpointer reference (*)

struct Datamhs{
	string nama;
	char stambuk[11];
	int angkatan;
};

void output(Datamhs data[]){
	cout<<"\nData yang diinput : \n";
	for(int a=0;a<3;a++){
		cout<<"\nData"<<a+1<<endl;
		cout<<data[a].nama<<endl;
		cout<<data[a].stambuk<<endl;
		cout<<data[a].angkatan<<endl;
	}
}

int main(){
	int a;
	Datamhs mahasiswa[3];
	Datamhs *ptr;
	ptr=mahasiswa;

	cout<<"Menginput 3 data mhs : \n";
	
	for(a=0;a<3;a++){
		cout<<"Nama : ";
		cin >>ptr[a].nama;
		cout<<"Stambuk : ";
		cin >>ptr[a].stambuk;
		cout<<"Angkatan : ";
		cin >>ptr[a].angkatan;
		cout<<endl;
	}
	
	
	output(ptr);
}
