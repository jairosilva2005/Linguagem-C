#include <iostream>
using namespace std;
int main () {

	  setlocale(LC_ALL,"portuguese");
      char cidade[10];
      char nome[20];
      int idade;
      cout << "Como voc� se chama?" << endl;
      cin >> nome;
      cout << "Onde voc� mora? " << endl;
      cin >> cidade;
      cout << "Quantos anos voc� tem? " << endl;
      cin >> idade;
      cout << "Ol�, sou o " << nome << ", tenho " << idade << " anos e moro na cidade de " << cidade << "." << endl;
 return 0;
}

