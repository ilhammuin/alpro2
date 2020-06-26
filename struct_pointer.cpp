#include <iostream>
using namespace std;

struct Datamhs{
	string nama;
	char stambuk[11];
	int angkatan;
};

int main(){
	struct Datamhs mahasiswa1;
	struct Datamhs *ptr;
	
	ptr = &mahasiswa1;
	
	cout<<"Nama : ";
	cin >>ptr->nama;
	cout<<"Stambuk : ";
	cin >>ptr->stambuk;
	cout<<"Angkatan : ";
	cin >>ptr->angkatan;
	
	cout<<"\nData yang diinput:\n";
	cout<<ptr->nama<<endl;
	cout<<ptr->stambuk<<endl;
	cout<<ptr->angkatan<<endl;  
}
