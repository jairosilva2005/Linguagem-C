#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
	setlocale(LC_ALL,"portuguese");
	string res;
	
	inicio:
		
    system("cls");
    
	cout << "Tabuada Digital em C++" << endl;
	double num;
	cout << "Digite um valor x: ";
	cin >> num;
	double vs1 = num*1;
	double vs2 = num*2;
	double vs3 = num*3;
	double vs4 = num*4;
	double vs5 = num*5;
	double vs6 = num*6;
	double vs7 = num*7;
	double vs8 = num*8;
	double vs9 = num*9;
	double vs10 = num*10;
	cout << num << " x 1 = " << vs1 << endl;
	cout << num << " x 2 = " << vs2 << endl;
	cout << num << " x 3 = " << vs3 << endl;
	cout << num << " x 4 = " << vs4 << endl;
	cout << num << " x 5 = " << vs5 << endl;
	cout << num << " x 6 = " << vs6 << endl;
	cout << num << " x 7 = " << vs7 << endl;
	cout << num << " x 8 = " << vs8 << endl;
	cout << num << " x 9 = " << vs9 << endl;
	cout << num << " x 10 = " << vs10 << endl;
	
	
	
	
	cout << "Digite Sim para recomeçar" << endl;
	cin >> res;
	if (res == "Sim" or "sim"){
		goto inicio;
	}
	return 0;
}
