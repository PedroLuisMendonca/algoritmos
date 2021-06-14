#include <iostream>
#include <locale>
using namespace std;
struct pessoa{
	string nome;
	string idade;
    string rua;
    int numero;
    string cidade;
    string estado;
};
int main ()
{
	pessoa p1;
	setlocale(LC_ALL, "portuguese");
	cout <<"Qual o seu nome? ";
	cin >>p1.nome;
	cout <<"Qual a sua data de nascimento? ";
	cin >>p1.idade;
	cout <<"Em qual rua você mora? ";
	cin >>p1.rua;
	cout <<"Qual o numero da sua casa? ";
	cin >>p1.numero;
	cout <<"Em qual cidade voce mora ? ";
	cin >>p1.cidade;
	cout <<"Em qual Estado fica sua cidade? ";
	cin >>p1.estado;
	cout <<p1.nome<<"\nData de nascimento: "<<p1.idade<<"\nEndereço: "<<p1.rua<<" "<< p1.numero<<"\nCidade: "<< p1.cidade<<", Estado: "<< p1.estado;
	return 0;
}
