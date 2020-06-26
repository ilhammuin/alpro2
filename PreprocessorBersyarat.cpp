#include <iostream>
#define PI 3.14   //MACRO PENGGANTIAN
#define LUAS(r)(PI * r * r) //MACRO FUNGSI

//KOMPILASI BERSYARAT
#if LUAS % 2 == 0
#define BILANGAN "Genap"
#else
#define BILANGAN "Ganjil"
#endif
using namespace std;

int main(){
	int a;
	cout<<"Input r: ";
	cin>>a;
	cout<<"Luas lingkaran : "<<LUAS(a)<<endl;
	cout<<"Adalah bilangan "<<BILANGAN;
	return 0;
}
