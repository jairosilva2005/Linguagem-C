#include <iostream>
#include <cstdlib>
using namespace std;
int main () {

	  setlocale(LC_ALL,"portuguese");
      double salario, total, acrescimo;
      int codg;
      cout << "Digite o sal�rio do seu funcion�rio: " << endl;
      cin >> salario;
      system("cls");
      cout << "Digite o c�digo do funcion�rio: " << endl;
      cin >> codg;
      system("cls");
      switch (codg) {

      	case 310:

      		acrescimo = (salario*5)/100;
      		total = salario + acrescimo;
      		cout << "Seu novo sal�rio �: R$ " << total << "" << endl;
            system("pause");
      		break;

      	case 456:

      		acrescimo = (salario*7)/100;
      		total = salario + acrescimo;
      		cout << "Seu novo sal�rio �: R$ " << total << "" << endl;
      		system("pause");
      		break;

      	case 657:

      		acrescimo = (salario*10)/100;
      		total = salario + acrescimo;
      		cout << "Seu novo sal�rio �: R$ " << total << "" << endl;
      		system("pause");
      		break;

      	case 823:

      		acrescimo = (salario*12)/100;
      		total = salario + acrescimo;
      		cout << "Seu novo sal�rio �: R$ " << total << "" << endl;
      		system("pause");
      		break;

      	case 911:

      		acrescimo = (salario*15)/100;
      		total = salario + acrescimo;
      		cout << "Seu novo sal�rio �: R$ " << total << "" << endl;
      		system("pause");
      		break;

      	default:

	  	    cout << "C�digo inv�lido portanto, voc� ir� receber 15% de acr�scimo " << endl;
	  	    acrescimo = (salario*15)/100;
      		total = salario + acrescimo;
      		cout << "Seu novo sal�rio �: R$ " << total << "" << endl;
      		system("pause");
            break;
	  }
     
 return 0;
}

