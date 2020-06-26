#include<iostream>
#include<fstream>
using namespace std;

void inputdata(ofstream &input){
	string tulis;
	while(true){
		getline(cin,tulis);
		if(tulis == "x"){
		break;
		}
		input << tulis << endl;		
	}
	

}

int main(){
	ofstream file;
	
	cout<<"Masukkan data, input 'x' untuk keluar"<<endl;
	
	file.open("datatugas5.txt",ios::app | ios::out);
	
	inputdata(file);
	
	file.close();
	
}
