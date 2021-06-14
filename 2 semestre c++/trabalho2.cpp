#include <iostream>
#include <locale>
using namespace std;
struct aluno{
	int ano;
	char sexo;
	int per;
	string na;
	int ano2;
	char sexo2;
	int per2;
	string na2;
	int ano3;
	char sexo3;
	int per3;
	string na3;
	int ano4;
	char sexo4;
	int per4;
	string na4;
};
struct equipe{
	string noe;
    char nie;
    aluno aa;
};
int main ()
{
setlocale(LC_ALL, "portuguese");	
int n;
int q=0;
equipe ee[100];
do
{
cout <<"1. Cadastrar equipes e alunos."<<endl;
cout <<"2. Imprimir dados das equipes por nível."<<endl;
cout <<"3. Sair."<<endl;
cin >>n;
switch (n)	
{
    case 1:
    	cout <<"Digite o nome de identificação da equipe. ";
        cin.ignore();
		getline(cin, ee[q].noe);
		cout <<"Digite o nível da equipe I=iniciante e E=experiente. ";
		cin >>ee[q].nie;
		cout <<"Digite o nome do primeiro aluno. ";
		cin.ignore();
		getline(cin, ee[q].aa.na);
		cout <<"Digite o ano do nascimento de primeiro aluno. ";
		cin >>ee[q].aa.ano;
        cout <<"Digite o sexo do primeiro aluno M/F. ";
        cin >>ee[q].aa.sexo;
        cout <<"Digite o período do primeiro aluno. ";
        cin >>ee[q].aa.per;
        cout <<"Digite o nome do segundo aluno. ";
        cin.ignore();
		getline(cin, ee[q].aa.na2);
		cout <<"Digite o ano do nascimento de segundo aluno. ";
		cin >>ee[q].aa.ano2;
        cout <<"Digite o sexo do segundo aluno M/F. ";
        cin >>ee[q].aa.sexo2;
        cout <<"Digite o período do segundo aluno. ";
        cin >>ee[q].aa.per2;
        cout <<"Digite o nome do terceiro aluno. ";
		cin.ignore();
		getline(cin, ee[q].aa.na3);
		cout <<"Digite o ano do nascimento de terceiro aluno. ";
		cin >>ee[q].aa.ano3;
        cout <<"Digite o sexo do terceiro aluno M/F. ";
        cin >>ee[q].aa.sexo3;
        cout <<"Digite o período do terceiro aluno. ";
        cin >>ee[q].aa.per3;
        cout <<"Digite o nome do aluno reserva. ";
		cin.ignore();
		getline(cin, ee[q].aa.na4);
		cout <<"Digite o ano do nascimento de aluno reserva. ";
		cin >>ee[q].aa.ano4;
        cout <<"Digite o sexo do aluno reserva M/F. ";
        cin >>ee[q].aa.sexo4;
        cout <<"Digite o período do aluno reserva. ";
        cin >>ee[q].aa.per4;
q++;
    break;
    case 2:
    	char g;
        cout <<"Digite o nível desejado I/E. ";
        cin >>g;
        if (g=='i' || g=='I')
        {
        for(int i=0; i<q; i++)
			{
				if (ee[i].nie=='i' || ee[i].nie=='I')
				{
				cout <<ee[i].noe<<endl<<"Membros"<<endl<<ee[i].aa.na<<", sexo: "<<ee[i].aa.sexo<<", ano de nascimento: "<<ee[i].aa.ano<<", período: "<<ee[i].aa.per<<endl;
				cout <<ee[i].aa.na2<<", sexo: "<<ee[i].aa.sexo2<<", ano de nascimento: "<<ee[i].aa.ano2<<", período: "<<ee[i].aa.per2<<endl;
				cout <<ee[i].aa.na3<<", sexo: "<<ee[i].aa.sexo3<<", ano de nascimento: "<<ee[i].aa.ano3<<", período: "<<ee[i].aa.per3<<endl;
				cout <<ee[i].aa.na4<<", sexo: "<<ee[i].aa.sexo4<<", ano de nascimento: "<<ee[i].aa.ano4<<", período: "<<ee[i].aa.per4<<endl;
			    }
            }
        }
		else
		{
			if (g=='e' || g=='E')
		    {
			 for(int i=0; i<q; i++)
			{
				if (ee[i].nie=='e' || ee[i].nie=='E')       
				{
				cout <<ee[i].noe<<endl<<"Membros"<<endl<<ee[i].aa.na<<", sexo: "<<ee[i].aa.sexo<<", ano de nascimento: "<<ee[i].aa.ano<<", período: "<<ee[i].aa.per<<endl;
				cout <<ee[i].aa.na2<<", sexo: "<<ee[i].aa.sexo2<<", ano de nascimento: "<<ee[i].aa.ano2<<", período: "<<ee[i].aa.per2<<endl;
				cout <<ee[i].aa.na3<<", sexo: "<<ee[i].aa.sexo3<<", ano de nascimento: "<<ee[i].aa.ano3<<", período: "<<ee[i].aa.per3<<endl;
				cout <<ee[i].aa.na4<<", sexo: "<<ee[i].aa.sexo4<<", ano de nascimento: "<<ee[i].aa.ano4<<", período: "<<ee[i].aa.per4<<endl;
			    }
			    }
            } 
			else
			cout <<"Opção inválida."; 
		}
	    break;
    case 3:
    	cout <<"Você saiu.";
	    break;
	default:
		cout <<"Opção inválida."<<endl;
		break;
}
}
while (n!=3);
return 0;
}
