#include <iostream>
using namespace std;
#include <conio.h>

//deklarasi bit field
struct bit_data
{
      unsigned b0 : 1;
      unsigned b1 : 1;
      unsigned b2 : 1;
      unsigned b3 : 1;
      unsigned b4 : 1;
      unsigned b5 : 1;
      unsigned b6 : 1;
      unsigned b7 : 1;
};

int main()
{
      //deklarasi union
      union ubyte
      {
            unsigned char byte;
            bit_data bit;
      };

      ubyte ascii;
      int nilai;

      cout<<"Contoh Penggunaan Bit-field"<<endl;
      cout<<"---------------------------"<<endl;
      cout<<"Masukkan ascii antara 0 s/d 255 : ";
      cin>>nilai;

      ascii.byte = nilai;
      cout<<"\n7 6 5 4 3 2 1 0 << Posisi bit"<<endl;
      cout<<ascii.bit.b7<<" "<<ascii.bit.b6<<" "
            <<ascii.bit.b5<<" "<<ascii.bit.b4<<" "
            <<ascii.bit.b3<<" "<<ascii.bit.b2<<" "
            <<ascii.bit.b1<<" "<<ascii.bit.b0<<" "<<endl;


}
