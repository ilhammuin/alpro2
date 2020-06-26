#include<iostream>
using namespace std;

union coba{
	double nilai1; //8 bytes
	int nilai2;	//4 bytes
	int nilai3;
};

int main(){
	coba dataunion;
	
	cout<<sizeof(dataunion)<<endl; //ukuran union
	
	dataunion.nilai2=20;
	
	cout<<"Nilai 1: "<<dataunion.nilai1<<endl;
	cout<<"Nilai 2: "<<dataunion.nilai2<<endl;
	cout<<"Nilai 3: "<<dataunion.nilai3<<endl;
}
