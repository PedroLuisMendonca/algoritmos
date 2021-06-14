#include <iostream>
#include <locale>
using namespace std;
int somaimpares(int n){
	int n1=1;
for (n; n>0;n=n-1){
n1=n1*n;
    }
}

int main(){
	setlocale(LC_ALL, "portuguese");
	int n;
	do{
	cout <<"Digite um número positivo para o fatorial: "<<endl;
	cin >>n;
	if (n>0){
	cout <<"O resultado é: "<<somaimpares(n)<<endl;
}
	else 
	cout <<"Número negativo"<<endl;
}
while (n>0);
return 0;
}
