#include <iostream>
#include <locale>
using namespace std;
int pot(int a, int b){
	int result=a;
	for (int i=1; i<b; i=i+1)
	result=a*result;
	return result;
}

int main(){
	setlocale(LC_ALL, "portuguese");
	int n, n1;
	cout <<"Digite o n�mero da base: ";
	cin >> n;
	cout <<"Digite o n�mero do expoente: ";
	cin >>n1;
	cout <<"O resultado �: "<<pot(n,n1);
}
