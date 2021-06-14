#include <iostream>

 using namespace std;
 
int main()

 {

     string nome;

     int idade,opcao;

     do{

         cout<<"Menu de opções:\n1-Leitura de nome e idade\n2-Imprime nome\n0-Sair\nDigite sua opção: ";

         cin>>opcao;

         switch(opcao)

         {

         case 1:

             cout << "Digire nome e idade : "<<endl;

             cin >> nome >> idade;

             break;

         case 2:

             cout << "nome "<<nome << endl;

             break;

         case 0:

             cout << "Encerrando";

             break;                

         default:

             cout << "Valor inválido";

             break;

         }

     }while (opcao!=0);

     return 0;

 }
