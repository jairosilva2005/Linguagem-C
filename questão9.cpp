#include <iostream>
#include <cstdlib>
using namespace std;
int main () {

	  setlocale(LC_ALL,"portuguese");
	  int qntalunos, z;
      cout << "Quantos alunos possui sua sala? " << endl;
      cin >> qntalunos;
      system("cls");
      double nota1, nota2, nota3, media[qntalunos], total = 0;
      for (z = 1 ; z <= qntalunos ; z++) {
      	cout << "Digite a primeira nota do " << z << "� aluno: " << endl;
      	cin >> nota1;
      	cout << "Digite a segunda nota do " << z << "� aluno: " << endl;
      	cin >> nota2;
      	cout << "Digite a terceira nota do " << z << "� aluno: " << endl;
      	cin >> nota3;
      	media[z]= (nota1 + nota2 + nota3)/3;
      	total = total+media[z];
      	cout << "A m�dia do aluno �: " << media[z] << "" << endl;
      	system("pause");
      	system("cls");
	  }
	cout << "A m�dia total dos alunos �: " << total/qntalunos << endl;
    system("pause");
 return 0;
 
}

