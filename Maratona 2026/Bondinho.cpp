#include<iostream>

using namespace std;

int main (){
	
	int A;
	int M;
	char responde;
	
	do{
		cin >> A;
		cin >> M;
	}while (A < 1 || A > 50 || M < 1 || M > 50);
	
	int limite = A+M;
	
	if (limite <= 50){
		cout << "S" << endl;	
	}else{
		cout << "N" << endl;
	}
	
	return 0;
}