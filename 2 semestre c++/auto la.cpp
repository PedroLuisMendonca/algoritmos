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
	cout <<"1. Soma de todos os n�meros �mpares."<<endl<<"2. Soma de todos os n�meros �mpares, sem n�meros negativos."<<endl<<"3. Sair"<<endl;
	cin >>mm;
switch (mm){
	case 1:
	int n, n1;
	cout <<"Digite o n�mero inteiro: ";
	cin >>n;
	cout <<"A soma de todos os n�meros impares menores de "<<n<<" �: "<<somaimpares(n)<<endl<<endl;
	break;
	case 2:
	cout <<"Digite o n�mero inteiro: ";
	cin >>n1;
	if (n1>0)
	cout <<"A soma de todos os n�meros impares, sem n�meros negativos, menores de "<<n1<<" �: "<<somaimpares(n1)<<endl<<endl;
	else 
	cout <<"N�mero n�o � positivo."<<endl<<endl;
	break;
	case 3:
		cout <<"Voc� saiu.";
	break;
}
}
while (mm!=3);
  return 0;
}
