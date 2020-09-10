#include <iostream>
using namespace std;
int main () {

	  setlocale(LC_ALL,"portuguese");
      int a, b;
      cout << "Digite um número a: " << endl;
      cin >> a;
      cout << "Digite outro número b: " << endl;
      cin >> b;
      
      int cnt = a + (b * 8) + 5; // item A
      int cnt2 = (8/b) - 50 + (47*a); // item B
      int cnt3 = (a*34) - (b/12) - (b*a); // item C
      
      cout << a << " + (" << b << "*8) + 5 = " << cnt << endl;
      cout << "----------------------" << endl;
      cout << "(8/" << b << ") - 50 + (47 * " << a << ") = " << cnt2 << endl;
      cout << "----------------------" << endl;
      cout << "(" << a << "*34) - (" << b << "/12) - (" << b << "*" << a << ") = " << cnt3 << endl;
      
 return 0;
}

