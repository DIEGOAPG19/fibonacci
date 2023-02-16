#include<iostream>
using namespace std;
void serie();

int main(){
	
	serie();
	
}
void serie(){
	
	int n,x=0,y=1,z=1;
	
	do{
		cout<<"ingrese la cantidad de numeros: ";
		cin>>n;
	}while(n<=0);
	
	cout<<"1 ";
	for(int i=1; i<n; i++){
		z=x+y;
		cout<<z<<" ";
		x=y;
		y=z;		
	}
	system("pause");
}
