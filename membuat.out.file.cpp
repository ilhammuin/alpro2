#include<iostream>
#include<fstream>

using namespace std;

int main(){
	fstream data;
	
	data.open("alpro2.txt", ios::out);
	data << "Saya belajar membuat file";
		
	data.close();
	return 0;

}
