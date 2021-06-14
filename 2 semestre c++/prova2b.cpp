#include <iostream>
#include <locale>
using namespace std;

struct equipes{
  int nivel;
  string nomeequipe, alu1, alu2, alu3, alur;
};

equipes cad(equipes eq[], int k){
cout <<"Digite o nível da equipe.(0-Iniciante 1-Experiente) ";
cin >>eq[k].nivel;
cout <<"Digite o nome da equipe. ";
cin.ignore();
getline(cin, eq[k].nomeequipe);
cout <<"Digite o nome do primeiro aluno. ";
getline(cin, eq[k].alu1);
cout <<"Digite o nome do segundo aluno. ";
getline(cin, eq[k].alu2);
cout <<"Digite o nome do terceiro aluno. ";
getline(cin, eq[k].alu3);
cout <<"Digite o nome do aluno reserva. ";
getline(cin, eq[k].alur);
k++;
return eq[k];
}

void info(equipes time[], int k){
  cout <<"Informações das equipes cadastradas: "<<endl;
for(int q=0; q<k; q++){
  cout <<"Nível da equipe: "<<time[q].nivel<<endl<<"Nome da equipe: "<<time[q].nomeequipe<<endl<<"Nome dos alunos da equipe: "<<endl;
  cout <<time[q].alu1<<", "<<time[q].alu2<<" e "<<time[q].alu3<<". Aluno reserva: "<<time[q].alur<<"."<<endl;
}
}

void nome(equipes time[], int k, int nivel){
  if (nivel==0){
cout <<"Nome das equipes de nível Iniciante: "<<endl;
for(int q=0; q<k; q++){
  if (time[q].nivel==0)
  cout <<time[q].nomeequipe<<endl;
}
}
else {
 if(nivel==1){
   cout <<"Nome das equipes de nível Experiente: "<<endl;
   for(int q=0; q<k; q++){
  if (time[q].nivel==1)
  cout <<time[q].nomeequipe<<endl;
 } 
}
else 
  cout<<"Opção incorreta.";
}
}

void total(equipes time[], int k){
cout <<"Total de equipes cadastradas: "<<k<<endl;
int c0=0, c1=0;
for(int q=0; q<k; q++){
  if (time[q].nivel==0)
  c0++;
  if (time[q].nivel==1)
  c1++;
}
cout <<"Total de equipes do nivel Iniciante: "<<c0<<endl;
cout <<"Total de equipes do nível Experiente: "<<c1<<endl;
}

int main() {
  setlocale(LC_ALL, "portuguese");
  int n, n1, k=0;
  int c1=0, c0=0;
  equipes time[25];
do{
cout <<endl<<"1. Cadastrar equipes."<<endl;
cout <<"2. Exibir informações das esquipes cadastradas."<<endl;
cout <<"3. Exibir nomes das equipes de uma determinada categoria."<<endl;
cout <<"4. Exibir a quantidade de equipes cadastradas."<<endl;
cout <<"5. Sair."<<endl;
cin >>n;
switch (n){
case 1:
time[k]=cad(time, k);
k++;
break;
case 2:
info(time, k);
break;
case 3:
int nivel;
cout <<"Qual o nível você deseja ver o nome das equipes?(0-Iniciantes, 1-Experientes) ";
cin >>nivel;
nome(time, k, nivel);
break;
case 4:
total(time, k);
break;
case 5:
cout <<"finalizando programa.";
break;
default:
cout <<"Opção inválida."<<endl;
}
}
while (n!=5);
  return 0;
}
