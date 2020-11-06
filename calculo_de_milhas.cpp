#include <iostream>
using namespace std;
int main () {
      setlocale(LC_ALL,"portuguese");
      double milhas;
      cout << "Digite a medida em milhas marítimas: ";
      cin >> milhas;
      double cnt = milhas*1852;
      cout << milhas << " milhas marítimas convertidos para metros é igual á " << cnt << "m" << endl;
 return 0;
}
