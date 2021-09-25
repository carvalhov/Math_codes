#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
   const float pi = 3.1416; // Fixando valor de pi 
   float radius, C; // C representando a circunferência.

	 cin >> radius; // Definindo o raio da circunferência.
	 C = pow(radius,2)*pi; // Fórmula da circunferência
	 
 	 cout << fixed << setprecision(2); 
	  // Precisão em duas casas, a biblioteca 'iomanip' é necessária para essa função. 

  cout << C << endl;
  return 0;
}
