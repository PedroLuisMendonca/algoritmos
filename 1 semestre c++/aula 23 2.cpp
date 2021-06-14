int main()

 {

 int A[10], B[10], C[20];

 for(int i=0; i< 10; i++)

 {

 cout << "Digite o valor para A["<< (i+1)<<"] ";

 cin >> A[i];

 C[i] = A[i];

 }

 for(int i=0; i< 10; i++)

 {

 cout << "Digite o valor ";

 cin >> B[i];

 C[i+10] = B[i];

 }

 for(int x =0; x<20; x++)

 cout<<C[x]<< " ";

 return 0;

 }
