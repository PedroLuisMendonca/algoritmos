#include <iostream>

 #include <locale>
 
using namespace std;
 
int main()

 {

     int mes;

     setlocale(LC_ALL, "portuguese");

     cout << "Digite o número do mês : "<<endl;

     cin >> mes;

     switch (mes)

     {

         case 1 : cout<< "Janeiro";

         break;

         case 2: cout << "Fevereiro";

         break;

         case 3 :

             cout << "Março";

         break;

         case 12:

              cout << "Dezembro";

         break;

         default :  cout << "Valor inválido";    

     }


     return 0;

 }
