#include <iostream>

using namespace std;

struct pessoa{
	string nome;
	int idade;
	float peso;
	char sexo;
};

struct agenda{
	int ddd;
	string numero;
	string dataNascimento;
	string nome;
	int idade;
	float peso;
	char sexo;
};

int main() 
{
	char op;
	do{
		agenda novoPaciente;
		cout << "Digite o nome do paciente: ";
		cin >> novoPaciente.nome;

		cout << "Digite o sexo do paciente: ";
		cin >> novoPaciente.sexo;

		cout << "Digite a idade do paciente: ";
		cin >> novoPaciente.idade;

		cout << "Digite o peso do paciente: ";
		cin >> novoPaciente.peso;

		cout << "Digite o DDD do paciente: ";
		cin >> novoPaciente.ddd;

		cout << "Digite o número do celular do paciente: ";
		cin >> novoPaciente.numero;

		cout << "Digite a data de nascimento do paciente: ";
		cin >> novoPaciente.dataNascimento;

		cout << novoPaciente.nome << "\t(" << novoPaciente.ddd<< ")" << novoPaciente.numero << endl;

		if(novoPaciente.idade >= 18){
			cout << "Maior de idade";
		}else{
			cout << "Menor de idade";
		}
		cout << "\n\nDeseja continuar?";
		cin >> op;
	}while(op != 'N');

}
