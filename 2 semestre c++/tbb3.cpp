#include <iostream>
#include <locale>
using namespace std;
//função sem retorno e sem parametros
void soma(){
	float n1, n2;
	cout << "Digite o primeiro número. ";
	cin >> n1;
	cout << "Digite o segundo número. ";
	cin >> n2;
	cout << n1+n2;
}

//funcao com retorno sem parametros
float sub(){
	float n1, n2, n3;
	cout << "Digite o primeiro número. ";
	cin >> n1;
	cout << "Digite o segundo número. ";
	cin >> n2;
	return n1-n2; 
}

//funcao sem retorno com parametros
void mult(float n1, float n2){
	cout << n1*n2;
}

//funcao com retorno com parametros
float div(float n3, float n4){
	return n3/n4;
}

int main() 
{
	setlocale(LC_ALL, "portuguese");
	int n;
	cout << "Escolha uma opção.";
	cout << "\n1. Soma.";
	cout << "\n2. Subtração.";
	cout << "\n3. Multiplicação.";
	cout << "\n4. Divisão.\n";
	cin >> n;
	switch(n)
	{
	case 1:
		soma();
	    break;
	case 2:
		cout <<sub();
		break;
	case 3:
	float n1, n2;
	    cout << "Digite o primeiro número. ";
	    cin >> n1;
	    cout << "Digite o segundo número. ";
	    cin >> n2;
	    mult(n1,n2);
		break;
	case 4:
	float n3, n4;
		cout << "Digite o primeiro número. ";
	    cin >> n3;
	    cout << "Digite o segundo número. ";
	    cin >> n4;
	    cout <<div(n3,n4);
	    break;
}
return 0;
}
