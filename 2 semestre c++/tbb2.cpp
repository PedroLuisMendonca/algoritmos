#include <iostream>
#include <locale>
using namespace std;
struct fun{
	string nome, cpf, cargo, mes;
	int idade, dia, ano, setor;
	char sexo;
	float sal;
};
int main ()
{
setlocale(LC_ALL, "portuguese");	
int n;
int q=0;
fun ff[50];
do
{
cout <<"1. Cadastrar funcionários."<<endl;
cout <<"2. Listar todos funcionários."<<endl;
cout <<"3. Listar funcionários por sexo."<<endl;
cout <<"4. Listar funcionários por setor."<<endl;
cout <<"5. Sair."<<endl;
cin >>n;
switch (n)	
{
	
    case 1:
    	cout <<"Digite o nome do funcionário. ";
        cin.ignore();
		getline(cin, ff[q].nome);
		cout <<"Digite a idade do funcionário. ";
		cin >>ff[q].idade;
		cout <<"Digite o sexo do funcionário (F/M). ";
		cin >>ff[q].sexo;
		cout <<"Digite o CPF do funcionário. ";
		cin.ignore();
		getline(cin, ff[q].cpf);
        cout <<"Digite o cargo do funcionário. ";
		getline(cin, ff[q].cargo);
        cout <<"Digite o salário do funcionário. ";
        cin >>ff[q].sal;
        cout <<"Digite o dia do nascimento do funcionário. ";
        cin >>ff[q].dia;
		cout <<"Digite o mês do nascimento do funcionário(por extenso). ";
        cin >>ff[q].mes;
        cout <<"Digite o ano do nascimento do funcionário. ";
        cin >>ff[q].ano;
        cout <<"Digite o código de setor do funcionário. ";
        cin >>ff[q].setor;
q++;
    break;
    case 2:
    	 for(int i=0; i<q; i++)
    	 {
    	 	cout <<"Lista de funcionários"<<endl;
    	 	cout <<(i+1)<<". "<<ff[i].nome<<" - Código de setor: "<<ff[i].setor<<" - Cargo: "<<ff[i].cargo<<" - Salário: "<<ff[i].sal<<endl;
    	 	cout <<"CPF: "<<ff[i].cpf<<" - Sexo: "<<ff[i].sexo<<" - Data de nascimento: "<<ff[i].dia<<"/"<<ff[i].mes<<"/"<<ff[i].ano<<" - "<<ff[i].idade<<" anos."<<endl;
		 }
    break;
    case 3:
    	int l;
    	cout <<"Digite 1- Para listar os funcionários do sexo masculino e 2- Para listar os funcionários do sexo feminino."<<endl;
    	cin >>l;
    	if (l==1)
    	{
    		for(int i=0; i<q; i++)
			{
				if (ff[i].sexo=='M' || ff[i].sexo=='m')
				{
					cout <<"Lista de funcionários do sexo masculino"<<endl;
    	        	cout <<ff[i].nome<<" - Código de setor: "<<ff[i].setor<<" - Cargo: "<<ff[i].cargo<<" - Salário: "<<ff[i].sal<<endl;
    	        	cout <<"CPF: "<<ff[i].cpf<<" - Sexo: "<<ff[i].sexo<<" - Data de nascimento: "<<ff[i].dia<<"/"<<ff[i].mes<<"/"<<ff[i].ano<<" - "<<ff[i].idade<<" anos."<<endl;
				}
	     	}
		}
		if (l==2)
		{
			for(int i=0; i<q; i++)
			{
				if (ff[i].sexo=='F' || ff[i].sexo=='f')
				{
					cout <<"Lista de funcionários do sexo feminino"<<endl;
    	        	cout <<ff[i].nome<<" - Código de setor: "<<ff[i].setor<<" - Cargo: "<<ff[i].cargo<<" - Salário: "<<ff[i].sal<<endl;
    	        	cout <<"CPF: "<<ff[i].cpf<<" - Sexo: "<<ff[i].sexo<<" - Data de nascimento: "<<ff[i].dia<<"/"<<ff[i].mes<<"/"<<ff[i].ano<<" - "<<ff[i].idade<<" anos."<<endl;
				}
	     	}
		}
	break;
	case 4:
		int ss;
		cout <<"Digite o setor que deseja listar os funcionários."<<endl;
		cin >>ss;
		for(int i=0; i<q; i++)
			{
				if (ss==ff[i].setor)
				{
					cout <<"Lista de funcionários do setor: "<<ss<<endl;
    	        	cout<<ff[i].nome<<" - Código de setor: "<<ff[i].setor<<" - Cargo: "<<ff[i].cargo<<" - Salário: "<<ff[i].sal<<endl;
    	        	cout <<"CPF: "<<ff[i].cpf<<" - Sexo: "<<ff[i].sexo<<" - Data de nascimento: "<<ff[i].dia<<"/"<<ff[i].mes<<"/"<<ff[i].ano<<" - "<<ff[i].idade<<" anos."<<endl;
				}
	    	}
		
	break;
	case 5:
		cout <<"Você saiu.";
	break;
}
}
while (n!=5);
return 0;
}
