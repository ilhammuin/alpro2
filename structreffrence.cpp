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

void output(Datamhs *data){
	cout<<"\nData yang diinput :\n";
	cout<<data->nama<<endl;
	cout<<data->stambuk<<endl;
	cout<<data->angkatan<<endl;
}

int main(){
	Datamhs mahasiswa1;

	cout<<"Nama : ";
	cin >>mahasiswa1.nama;
	cout<<"Stambuk : ";
	cin >>mahasiswa1.stambuk;
	cout<<"Angkatan : ";
	cin >>mahasiswa1.angkatan;
	
	output(&mahasiswa1);
}
