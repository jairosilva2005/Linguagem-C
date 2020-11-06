#include <iostream>
using namespace std;
int main () {

	  setlocale(LC_ALL,"portuguese");
      double valor;
      cout << "Insira o valor do produto: " << endl;
      cin >> valor;
      
      double cnt = (30*valor) /100;
      double cnt2 = (valor - cnt);
      cout << "R$" << valor << " com 30% de desconto sai por R$" << cnt2 << " Reais" << endl;

 return 0;
}

