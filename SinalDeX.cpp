#include <iostream>
using namespace std;

int main () {
    int N;
    cin >> N;
    if (N > 0) {
        cout << "positivo" << endl;
    }
    if (N < 0) {
        cout << "negativo" << endl;
    }
    if (N == 0) {
        cout << "nulo" << endl;
    }
    return 0;
}
