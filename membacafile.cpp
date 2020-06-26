
#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream data;
	string baca;
	
	data.open("bukafile.txt", ios::out | ios::in); //membuka file
	
	while(true){
	if(data.is_open()){
		data.seekg(0); //awal
	
		cout<<"Isi file: ";
		getline(data,baca); //membaca baris pertama file kemudian dimskkan ke variabel string baca
		cout<<baca;
		break;
	}else {
		cout<<"File baru dibuat\n";
		data.close();
		data.open("bukafile.txt", ios::trunc | ios::out | ios::in); //membuat file baru
		data << "Saya membuka file";

	}
	}
	data.close();
}

