#include <iostream>
#include <locale>
using namespace std;
struct cliente{
	string nome;
    string cpf;
    int idade;
    int credito;
    char sexo;
};
int main ()
{
setlocale(LC_ALL, "portuguese");
int n;
int q=0;
cliente cc[100];
do
{
cout <<"1. Cadastrar clientes."<<endl;
cout <<"2. Mostrar clientes com crédito maior que o digitado."<<endl;
cout <<"3. Mostrar clientes do sexo masculino."<<endl;
cout <<"4. Mostrar clientes do sexo feminino."<<endl;
cout <<"5. Sair"<<endl;
cin >>n;
switch (n)
{
	case 1:
		cout <<"Digite o nome do cliente. ";
		cin.ignore();
		getline(cin, cc[q].nome);
		cout <<"Digite o cpf do cliente. ";
		getline(cin, cc[q].cpf);
		cout <<"Digite a idade do cliente. ";
		cin >>cc[q].idade;
		cout <<"Digite o crédito do cliente. ";
		cin >>cc[q].credito;
		cout <<"Digite o sexo do cliente F/M. ";
		cin >>cc[q].sexo;
		q++;
		break;
	case 2:
	    int c;
		cout <<"Digite o crédito desejado. ";
		cin >>c;
		for(int i=0; i<q; i++)
			{
				if (cc[i].credito>=c)
				cout <<cc[i].nome<<endl;
			}
	    break;
	case 3:
		for(int i=0; i<q; i++)
			{
				if (cc[i].sexo=='m' || cc[i].sexo=='M')
				cout <<cc[i].nome<<endl;
			}
	    break;
	case 4:
        for(int i=0; i<q; i++)
			{
				if (cc[i].sexo=='f' || cc[i].sexo=='F')
				cout <<cc[i].nome<<endl;
			}
	    break;
	case 5:
		cout <<"Você saiu.";
	    break;
	default:
		cout <<"Opção inválida."<<endl;
		break;
}
}
while (n!=5);
return 0;
}
