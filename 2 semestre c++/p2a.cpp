#include <iostream>
#include <locale>
using namespace std;

struct jogador{
string nome;
int idade;
};

string media(jogador time1media[11], jogador time2media[11]){
	int media1=0, media2=0;
	string maior;
for (int i=0; i<11; i++){
	media1=time1media[i].idade+media1;
	media2=time2media[i].idade+media2;
}
if (media1<media2)
maior="time1";
else
maior="time2";
return maior;
}

int main(){
	setlocale(LC_ALL, "portuguese");
	jogador time1[11], time2[11];
	for (int i=0; i<11; i++){
	cout <<"Digite o primeiro nome de um jogadadores do time 1. "<<endl;
	cin >>time1[i].nome;
	cout <<"Digite a idade desse jogador do time 1."<<endl;
	cin >>time1[i].idade;
	cout <<"Digite o primeiro nome de um jogadadores do time 2. "<<endl;
	cin >>time2[i].nome;
	cout <<"Digite a idade desse jogador do time 2."<<endl;
	cin >>time2[i].idade;
	}
	cout <<"O time com a menor média de idade é: "<<media(time1, time2);
	return 0;
}
