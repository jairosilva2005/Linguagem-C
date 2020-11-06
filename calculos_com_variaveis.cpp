#include <iostream>
using namespace std;
int main () {

	  setlocale(LC_ALL,"portuguese");
      double num1, num2;
      cout << "Digite o valor para ser inserido na primeira variável: " << endl;
      cin >> num1;
      cout << "Digite o valor para ser inserido na segunda variável: " << endl;
      cin >> num2;
      num1 = num1 + 20;
      num2 = num2 + 10;
      cout << "---------------------------------------------------------------------" << endl;
      cout << "A primeria variável agora vai valer (valor da primeria variável + 20)" << endl;
      cout << "A segunda variável agora vai valer (valor da segunda variável + 10)" << endl;
      cout << "---------------------------------------------------------------------" << endl;
      cout << "A primeira variável agora vale: " << num1 << "." << endl;
      cout << "A segunda variável agora vale: " << num2 << "." << endl;
      system("pause");
	 return 0;
}

