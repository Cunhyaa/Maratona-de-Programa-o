#include<iostream>
using namespace std;

int main(){
	
	int terceiroLink;
	int primeiroLink;
	
	do{
		cin >> terceiroLink;
		
	}while (terceiroLink < 1 || terceiroLink > 1000);
	

	primeiroLink = (terceiroLink*2)*2;
	
	cout << primeiroLink << endl;
		
	return 0;
}