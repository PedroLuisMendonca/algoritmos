int main()

 {

 cout << "Quantos alunos deseja cadastrar? ";

 int N ;

 cin >> N;

 int idades[N];

 int soma=0;

 for (int i=0 ;i<N; i++)

 {

 cout << "Qual sua idade? ";

 cin >> idades[i];

 soma = soma + idades[i];

 }

 cout << soma/N;

 return 0;

 }
