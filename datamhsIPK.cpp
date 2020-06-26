#include<iostream>
#include<fstream>
using namespace std;

void inputdata(ofstream &input){
	string tulis;
	cout<<"Stambuk: ";
	getline(cin,tulis);
	input<<"Stambuk: "<<tulis;
	cout<<"Nama: ";
	getline(cin,tulis);
	input<<"\nNama: "<<tulis;
	cout<<"Kelas: ";
	getline(cin,tulis);
	input<<"\nKelas: "<<tulis;
	cout<<"IPK: ";
	getline(cin,tulis);
	input<<"\nIPK: "<<tulis<<endl;

}

int main(){
	ofstream datamhs;
	
	datamhs.open("datamhs.txt",ios::app | ios::out);
	
	inputdata(datamhs);
	
	datamhs.close();
	
}
