#include<iostream>

using namespace std;

int main (){
	
	int M, A, B;
	
	do{
		cin >> M;
		cin >> A;
		cin >> B;
		
	}while (M < 40 || M > 110 || A < 1 || A >= M || B < 1 || B >= M || A == B);
	
	int filhoVelho = M - (A+B);
	
	cout << filhoVelho << endl;
	
	return 0;
}