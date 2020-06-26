#include <iostream>
using namespace std;
 
int main(){
    cout<<"File diakses Pada : "<<__DATE__<<" "<<__TIME__<<endl;
    cout<<"Alamat dan nama file : "<<__FILE__<<endl;
 	cout<<"Nomer Baris : "<<__LINE__<<endl;
    return 0;
}
