#include <iostream>

using namespace std;
 
struct nilai{
	int matkul1;
	int matkul2;
};
 
struct mhs{			//membuat struct
    string stambuk;
    string nama;
    int angkatan;
    nilai matkul;
    
};
 
int main(){
    struct mhs mhs1,mhs2;		//deklarasi struct
    struct nilai n1;
    
    //struct nilai
	n1.matkul1=200;
	n1.matkul2=1;
	
 
 	mhs1.nama="M Ilham Muin";	//mengassign struct
	mhs1.angkatan=2019;    
	mhs1.stambuk="13020190137";
	mhs1.matkul= n1;
	
	mhs2=mhs1;      //nilai variabel struct mhs1 ke mhs2

	cout<<mhs2.nama<<endl;			//mengakses struct
	cout<<mhs2.stambuk<<endl;
	cout<<mhs2.angkatan<<endl;
	cout<<"Nilai 1: "<<mhs2.matkul.matkul1<<endl; //mengakses struct dalam struct
	cout<<"Nilai 2: "<<mhs2.matkul.matkul2<<endl;
	
    return 0;
}
