#include<iostream>
using namespace std;

int main (){
int x, value;
cin >> x;             // Definir o valor que vai ser a tabuada 
  for (int i = 1; i <= 10; i++){
  value = x*i;
  cout << x << " * " << i << " = " << value << endl;
  }
}

/* Se a entrada em x for igual 5, temos:
in:
5
out; 
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
*/
