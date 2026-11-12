#include<iostream>

using namespace std;

int main (){
	
	int A, B, C;
	int condicao = 0;
	
	do{
		cin >> A;
		cin >> B;
		cin >> C;
		
		if (A == B){
			if (C == A){
				condicao = 1;
			}
		}else if (B == C){	
			if (A == B){
				condicao = 1;
			}
		}else if(A == C){
			if (B == A){
				condicao = 1;
			}
		}
		
	}while (A < 0 || A > 100 || B < 0 || B > 100 || C < 0 || C > 100 || condicao == 1);
	
	
	if (A == B){
		cout << C;
	}else if (A != B){
		if (C == A){
			cout << B;
		}else if (C == B){
			cout << A;
		}
	}
	
	return 0;
}