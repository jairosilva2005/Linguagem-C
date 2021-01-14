#include <iostream>

#include <stdlib.h>

#include <time.h>

using namespace std;
int main() {
  // Começo do código
  int score[3][3];
  int gamer = 0, computer = 0;
  srand(time(NULL));
  // Auxiliares do Jogador
  int auxiliar_linha, auxiliar_coluna;

  // Auxiliares do Computador
  int aux_L, aux_C;
  // Repetição para a entrada do valor inicial na matriz
  for (int i = 0; i <= 2; i++) {
    for (int e = 0; e <= 2; e++) {
      score[i][e] = 0;
    }
  }

  // Primeira Jogada do PC - iniciativa
  int Jogada_1 = rand() % 3;
  int Jogada_2 = rand() % 3;
  score[Jogada_1][Jogada_2] = 2;

  // Parte interativa do jogo
  int count = 1;
  while (count < 9) {
    cout << "Você: 1 | Computador: 2" << endl;
    cout << "-------------------" << endl;
    cout << endl;
    cout << "     " << score[0][0] << " | " << score[0][1] << " | " << score[0][2] << endl;
    cout << "     " << "---------" << endl;
    cout << "     " << score[1][0] << " | " << score[1][1] << " | " << score[1][2] << endl;
    cout << "     " << "---------" << endl;
    cout << "     " << score[2][0] << " | " << score[2][1] << " | " << score[2][2] << endl;
    cout << endl;
    cout << "-------------------" << endl;

    // Parte interativa com o Jogador para escolher as posições

    // Parte do jogador
    cout << "Escolha a linha onde você quer marcar: " << endl;
    cin >> auxiliar_linha;

    // Correção de valor - Linha
    if (auxiliar_linha == 1) {
      auxiliar_linha = 0;
    } else if (auxiliar_linha == 2) {
      auxiliar_linha = 1;
    } else if (auxiliar_linha == 3) {
      auxiliar_linha = 2;
    }
    // Fim da Correção

    cout << "Escolha uma coluna: " << endl;
    cin >> auxiliar_coluna;

    // Correção de valor - Coluna
    if (auxiliar_coluna == 1) {
      auxiliar_coluna = 0;
    } else if (auxiliar_coluna == 2) {
      auxiliar_coluna = 1;
    } else if (auxiliar_coluna == 3) {
      auxiliar_coluna = 2;
    }
    // Fim da Correção

    // Decisão
    if (score[auxiliar_linha][auxiliar_coluna] == 0) {
      score[auxiliar_linha][auxiliar_coluna] = 1;
    } else {
      score[auxiliar_linha][auxiliar_coluna] = score[auxiliar_linha][auxiliar_coluna];
    }

    // Parte do Computador
    do {
      aux_L = rand() % 3;
      aux_C = rand() % 3;
    } while (score[aux_L][aux_C] != 0);
    score[aux_L][aux_C] = 2;

    // Quem ganhou? - Algoritmo

    /* Primeira verificação - Pontuação em linha */
    if (score[0][0] == 1 && score[0][1] == 1 && score[0][2] == 1) {
      gamer = gamer + 1;
      computer = computer + 1;
      cout << "Você ganhou!" << endl;
    } else if (score[0][0] == 2 && score[0][1] == 2 && score[0][2] == 2) {
      gamer = gamer + 1;
      computer = computer + 1;
      cout << "Você perdeu!" << endl;
    } else if (score[1][0] == 1 && score[1][1] == 1 && score[1][2] == 1) {
      gamer = gamer + 1;
      computer = computer + 1;
      cout << "Você ganhou!" << endl;
    } else if (score[1][0] == 2 && score[1][1] == 2 && score[1][2] == 2) {
      gamer = gamer + 1;
      computer = computer + 1;
      cout << "Você perdeu!" << endl;
    } else if (score[2][0] == 1 && score[2][1] == 1 && score[2][2] == 1) {
      gamer = gamer + 1;
      computer = computer + 1;
      cout << "Você ganhou!" << endl;
    } else if (score[2][0] == 2 && score[2][1] == 2 && score[2][2] == 2) {
      gamer = gamer + 1;
      computer = computer + 1;
      cout << "Você perdeu!" << endl;
    }
    // Fim da verificação em linha

    // Segunda verificação - Em Coluna
    else if (score[0][0] == 1 && score[1][0] == 1 && score[2][0] == 1) {
      gamer = gamer + 1;
      computer = computer + 1;
      cout << "Você ganhou!" << endl;
    } else if (score[0][0] == 2 && score[1][0] == 2 && score[2][0] == 2) {
      gamer = gamer + 1;
      computer = computer + 1;
      cout << "Você perdeu!" << endl;
    } else if (score[0][1] == 1 && score[1][1] == 1 && score[2][1] == 1) {
      gamer = gamer + 1;
      computer = computer + 1;
      cout << "Você ganhou!" << endl;
    } else if (score[0][1] == 2 && score[1][1] == 2 && score[2][1] == 2) {
      gamer = gamer + 1;
      computer = computer + 1;
      cout << "Você perdeu!" << endl;
    } else if (score[0][2] == 1 && score[1][2] == 1 && score[2][2] == 1) {
      gamer = gamer + 1;
      computer = computer + 1;
      cout << "Você ganhou!" << endl;
    } else if (score[0][2] == 2 && score[1][2] == 2 && score[2][2] == 2) {
      gamer = gamer + 1;
      computer = computer + 1;
      cout << "Você perdeu!" << endl;
    }
    // Fim da verificação em coluna

    // Terceira verificação - Cruzada
    else if (score[0][0] == 1 && score[1][1] == 1 && score[2][2] == 1) {
      gamer = gamer + 1;
      computer = computer + 1;
      cout << "Você ganhou!" << endl;
    } else if (score[0][0] == 1 && score[1][1] == 1 && score[2][2] == 1) {
      gamer = gamer + 1;
      computer = computer + 1;
      cout << "Você perdeu!" << endl;
    } else if (score[2][0] == 1 && score[1][1] == 1 && score[0][2] == 1) {
      gamer = gamer + 1;
      computer = computer + 1;
      cout << "Você ganhou!" << endl;
    } else if (score[2][0] == 2 && score[1][1] == 2 && score[0][2] == 2) {
      gamer = gamer + 1;
      computer = computer + 1;
      cout << "Você perdeu!" << endl;
    }

    if (count < 7 && gamer != 1 && computer != 1) {
      system("clear");
    }
    count += 2;
  }
  if (count == 9 && gamer != 1 && computer != 1) {
    cout << "Empate!" << endl;
  }
  return 0;
}
