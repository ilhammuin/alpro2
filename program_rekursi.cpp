#include<iostream>
using namespace std;

int deret(int s,int batas){
	if(s==batas){
		cout<<s<<"=";
		return s;
	}else{
		cout<<s<<"+";
		return s+deret(s+2,batas);
	}
}

int main(){
	int end;
	cout<<"Input = ";
	cin>>end;
	end=end*2;
	cout<<deret(2,end);
	return 0;
}
