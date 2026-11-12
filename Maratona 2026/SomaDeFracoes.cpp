#include<iostream>

using namespace std;

int main (){
	
	int a, b, c, d;
	
	do{
		cin >> a;
		cin >> b;
		cin >> c;
		cin >> d;
		
	}while (a < 1 || a > 100 || b < 1 || b > 100 || c < 1 || c > 100 || d < 1 || d > 100);
	
	float resultado = ((a*d) + (c*b)) / (b*d);
	cout << resultado;
	
	return 0;
}