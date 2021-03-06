#include <iostream>

/*N! = N(N-1)!
Onde, 
0! = 1 
1! = 1 
2! = 2*1 = 2 
3! = 3*(2)! = 6
4! = 4*(3)! = 24
*/

int f(int x){ // factorial function
    if(x == 0){ // base case
        return 1;
    }
    else{ // recursion
        return x * f(x-1); 
    } // Essa função vai ser repetida, até que se tenha um f(1-1), tal f(0) = 1 

}
int main(){
    int N;
  std::cin >> N;

  std::cout << "O fatorial de" << N << "é" << f(N);
}
