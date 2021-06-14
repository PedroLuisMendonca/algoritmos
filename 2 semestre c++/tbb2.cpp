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
cout <<"1. Cadastrar funcion�rios."<<endl;
cout <<"2. Listar todos funcion�rios."<<endl;
cout <<"3. Listar funcion�rios por sexo."<<endl;
cout <<"4. Listar funcion�rios por setor."<<endl;
cout <<"5. Sair."<<endl;
cin >>n;
switch (n)	
{
	
    case 1:
    	cout <<"Digite o nome do funcion�rio. ";
        cin.ignore();
		getline(cin, ff[q].nome);
		cout <<"Digite a idade do funcion�rio. ";
		cin >>ff[q].idade;
		cout <<"Digite o sexo do funcion�rio (F/M). ";
		cin >>ff[q].sexo;
		cout <<"Digite o CPF do funcion�rio. ";
		cin.ignore();
		getline(cin, ff[q].cpf);
        cout <<"Digite o cargo do funcion�rio. ";
		getline(cin, ff[q].cargo);
        cout <<"Digite o sal�rio do funcion�rio. ";
        cin >>ff[q].sal;
        cout <<"Digite o dia do nascimento do funcion�rio. ";
        cin >>ff[q].dia;
		cout <<"Digite o m�s do nascimento do funcion�rio(por extenso). ";
        cin >>ff[q].mes;
        cout <<"Digite o ano do nascimento do funcion�rio. ";
        cin >>ff[q].ano;
        cout <<"Digite o c�digo de setor do funcion�rio. ";
        cin >>ff[q].setor;
q++;
    break;
    case 2:
    	 for(int i=0; i<q; i++)
    	 {
    	 	cout <<"Lista de funcion�rios"<<endl;
    	 	cout <<(i+1)<<". "<<ff[i].nome<<" - C�digo de setor: "<<ff[i].setor<<" - Cargo: "<<ff[i].cargo<<" - Sal�rio: "<<ff[i].sal<<endl;
    	 	cout <<"CPF: "<<ff[i].cpf<<" - Sexo: "<<ff[i].sexo<<" - Data de nascimento: "<<ff[i].dia<<"/"<<ff[i].mes<<"/"<<ff[i].ano<<" - "<<ff[i].idade<<" anos."<<endl;
		 }
    break;
    case 3:
    	int l;
    	cout <<"Digite 1- Para listar os funcion�rios do sexo masculino e 2- Para listar os funcion�rios do sexo feminino."<<endl;
    	cin >>l;
    	if (l==1)
    	{
    		for(int i=0; i<q; i++)
			{
				if (ff[i].sexo=='M' || ff[i].sexo=='m')
				{
					cout <<"Lista de funcion�rios do sexo masculino"<<endl;
    	        	cout <<ff[i].nome<<" - C�digo de setor: "<<ff[i].setor<<" - Cargo: "<<ff[i].cargo<<" - Sal�rio: "<<ff[i].sal<<endl;
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
					cout <<"Lista de funcion�rios do sexo feminino"<<endl;
    	        	cout <<ff[i].nome<<" - C�digo de setor: "<<ff[i].setor<<" - Cargo: "<<ff[i].cargo<<" - Sal�rio: "<<ff[i].sal<<endl;
    	        	cout <<"CPF: "<<ff[i].cpf<<" - Sexo: "<<ff[i].sexo<<" - Data de nascimento: "<<ff[i].dia<<"/"<<ff[i].mes<<"/"<<ff[i].ano<<" - "<<ff[i].idade<<" anos."<<endl;
				}
	     	}
		}
	break;
	case 4:
		int ss;
		cout <<"Digite o setor que deseja listar os funcion�rios."<<endl;
		cin >>ss;
		for(int i=0; i<q; i++)
			{
				if (ss==ff[i].setor)
				{
					cout <<"Lista de funcion�rios do setor: "<<ss<<endl;
    	        	cout<<ff[i].nome<<" - C�digo de setor: "<<ff[i].setor<<" - Cargo: "<<ff[i].cargo<<" - Sal�rio: "<<ff[i].sal<<endl;
    	        	cout <<"CPF: "<<ff[i].cpf<<" - Sexo: "<<ff[i].sexo<<" - Data de nascimento: "<<ff[i].dia<<"/"<<ff[i].mes<<"/"<<ff[i].ano<<" - "<<ff[i].idade<<" anos."<<endl;
				}
	    	}
		
	break;
	case 5:
		cout <<"Voc� saiu.";
	break;
}
}
while (n!=5);
return 0;
}
