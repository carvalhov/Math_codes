#include <iostream>
using namespace std;

// fib(0) = 0 and fib (1) = 1 -> fib(n) = f(n-1)+fib(n-2)  

int fib (int x) {
  if (x <= 1)
    return x;
  return fib(x-1) + fib(x-2);
}

int main(){
int n;
cin >> n;
cout << fib(n);

return 0;
}

/*
Entrada: 0 1 2 3 4 5 6 7 
Saída:   0 1 1 2 3 5 8 13

Claro, cada entrada e saida dessa só representa uma unidade de saída e de entrada, já 
que o objetivo é saber que valor na sequência de fibonnaci n tem. 

*/
