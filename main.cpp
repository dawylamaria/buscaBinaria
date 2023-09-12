#include <iostream>
#include <algorithm>  // Para a função sort

using namespace std;

void buscaBinaria(int vetor[], int tamanho, int valorBuscado) {
	
    int inicio = 0;
    int fim = tamanho - 1;
    bool encontrado = false;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (vetor[meio] == valorBuscado) {
            encontrado = true;

            int esquerda = meio;
            int direita = meio;

            while (esquerda >= 0 && vetor[esquerda] == valorBuscado) {
                esquerda--;
            }

            while (direita < tamanho && vetor[direita] == valorBuscado) {
                direita++;
            }

            cout << "Chave encontrada nas posicoes:";
            for (int i = esquerda + 1; i < direita; i++) {
                cout << " " << i;
            }
            cout << endl;

            break;
        } else if (vetor[meio] < valorBuscado) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    if (!encontrado) {
        cout << "Chave não encontrada" << endl;
    }
}

int main() {
    int tamanho = 5;
    int vetor[] = {1,2,3,3,3};
    int valorBuscado = 3;

    buscaBinaria(vetor, tamanho, valorBuscado);
    
	system("pause");
    return 0;
}
