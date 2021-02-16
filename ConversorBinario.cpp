#include <iostream>
using namespace std;
int main() {
    int NumDec, Bin[20], i, m; 
    
    // Entrada de valores
    cout << "Número decimal: " << endl;
    cin >> NumDec;
    
    // Conversão
    for(i = 19 ; i >= 0 ; i--) {
        Bin[i] = NumDec % 2;
        NumDec /= 2; 
        if(i == 4) {
            cout << "Resultado:" << endl;
        }
    }

    // Invertendo as posições
    for(m = 0 ; m <= 19 ; m++) {
        cout << Bin[m];
        if(m == 3 || m == 7 || m == 11 || m == 15) {
            cout << " ";
        }
    }
}
