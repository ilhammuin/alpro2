#include<iostream>
#include<fstream>

using namespace std;

void bacafile(fstream &baca){
	string output;
	while(!baca.eof()){
		getline(baca,output);
		cout<< output<<endl;
	}
	
}

int main(){
	fstream file;
	file.open("datatugas5.txt",ios::in);
	
	bacafile(file);
	
	file.close();
	
}
