#include <iostream>
#include <cstdlib>
using namespace std;
int main () {

	  setlocale(LC_ALL,"portuguese");
      double salario, total, acrescimo;
      int codg;
      cout << "Digite o salário do seu funcionário: " << endl;
      cin >> salario;
      system("cls");
      cout << "Digite o código do funcionário: " << endl;
      cin >> codg;
      system("cls");
      switch (codg) {

      	case 310:

      		acrescimo = (salario*5)/100;
      		total = salario + acrescimo;
      		cout << "Seu novo salário é: R$ " << total << "" << endl;
            system("pause");
      		break;

      	case 456:

      		acrescimo = (salario*7)/100;
      		total = salario + acrescimo;
      		cout << "Seu novo salário é: R$ " << total << "" << endl;
      		system("pause");
      		break;

      	case 657:

      		acrescimo = (salario*10)/100;
      		total = salario + acrescimo;
      		cout << "Seu novo salário é: R$ " << total << "" << endl;
      		system("pause");
      		break;

      	case 823:

      		acrescimo = (salario*12)/100;
      		total = salario + acrescimo;
      		cout << "Seu novo salário é: R$ " << total << "" << endl;
      		system("pause");
      		break;

      	case 911:

      		acrescimo = (salario*15)/100;
      		total = salario + acrescimo;
      		cout << "Seu novo salário é: R$ " << total << "" << endl;
      		system("pause");
      		break;

      	default:

	  	    cout << "Código inválido portanto, você irá receber 15% de acréscimo " << endl;
	  	    acrescimo = (salario*15)/100;
      		total = salario + acrescimo;
      		cout << "Seu novo salário é: R$ " << total << "" << endl;
      		system("pause");
            break;
	  }
     
 return 0;
}

