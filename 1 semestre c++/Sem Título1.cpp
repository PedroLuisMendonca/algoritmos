#include <iostream>

 #include <locale>
 
using namespace std;
 
int main()

 {

     int mes;

     setlocale(LC_ALL, "portuguese");

     cout << "Digite o n�mero do m�s : "<<endl;

     cin >> mes;

     switch (mes)

     {

         case 1 : cout<< "Janeiro";

         break;

         case 2: cout << "Fevereiro";

         break;

         case 3 :

             cout << "Mar�o";

         break;

         case 12:

              cout << "Dezembro";

         break;

         default :  cout << "Valor inv�lido";    

     }


     return 0;

 }
