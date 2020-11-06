#include <iostream>
#include <cstdlib>
using namespace std;
double calculo1(double nt1, double nt2, double nt3);
double recalc(double ntrec, double ntrecp);
int main () {
    setlocale(LC_ALL,"portuguese");
    double notaps2, notaps3, notaps4, resfn;
    double ntrecps3, resrec;
    cout << "Digite a nota que o aluno tirou na primeira prova: " << endl;
    cin >> notaps2;
    cout << "Digite a nota que o aluno tirou na segunda prova: " << endl;
    cin >> notaps3;
    cout << "Digite a nota que o aluno tirou na terceira prova: " << endl;
    cin >> notaps4;
    
    resfn = calculo1(notaps2, notaps3, notaps4);
    
    system("cls");

    if (resfn  >= 7) {
        cout << "Aluno aprovado, logo não fará recuperação." << endl;
    }
    else if (resfn >= 3.5 && resfn < 7) {
        cout << "O aluno ficou de recuperação, logo fará a prova de recuperação. " << endl;
        cout << "Digite a nota que o aluno tirou na avaliação de recuperação: " << endl;
        cin >> ntrecps3;
        resrec = recalc(ntrecps3, resfn);
        if (resrec >= 5) {
            cout << "O aluno aprovou na avaliação de recuperação." << endl;
        }
        else if (resrec < 5) {
            cout << "O aluno reprovou na avaliação de recuperação." << endl;
        }
    }
    else if (resfn < 3.5) {
        cout << "Aluno Reprovado." << endl;
    }
    system("pause");
    return 0;
}
double calculo1(double nt1, double nt2, double nt3) {
        double calc, res;
        calc = (nt1 * 2) + (nt2 * 3) + (nt3 * 4);
        return res = (calc / 9);
}
double recalc(double ntrec, double ntrecp) {
        double calc2, res2;
        calc2 = (ntrec * 3) + (ntrecp * 7);
        return res2 = (calc2 / 10);
}