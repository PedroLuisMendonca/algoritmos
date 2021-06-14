#include <iostream>
#include <locale>
using namespace std;
int somaimpares(int n){
	int n1=0;
for (n; n>0;n=n-1){
		if (n%2==1){
			n1=n1+n;
    	}
    }
	return n1;
}

int main(){
	setlocale(LC_ALL, "portuguese");
	int mm;
	do{
	cout <<"1. Soma de todos os números ímpares."<<endl<<"2. Soma de todos os números ímpares, sem números negativos."<<endl<<"3. Sair"<<endl;
	cin >>mm;
switch (mm){
	case 1:
	int n, n1;
	cout <<"Digite o número inteiro: ";
	cin >>n;
	cout <<"A soma de todos os números impares menores de "<<n<<" é: "<<somaimpares(n)<<endl<<endl;
	break;
	case 2:
	cout <<"Digite o número inteiro: ";
	cin >>n1;
	if (n1>0)
	cout <<"A soma de todos os números impares, sem números negativos, menores de "<<n1<<" é: "<<somaimpares(n1)<<endl<<endl;
	else 
	cout <<"Número não é positivo."<<endl<<endl;
	break;
	case 3:
		cout <<"Você saiu.";
	break;
}
}
while (mm!=3);
  return 0;
}
