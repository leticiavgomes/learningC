#include <stdio.h>

int main() {
	int linhas, colunas, maior, menor;
	scanf("%d %d", &linhas, &colunas);
	int matriz[linhas][colunas];

	for(int i = 0; i < linhas; i++) {
		for(int j = 0; j < colunas; j++) {
			printf("Digite o valor [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}

	maior = matriz[0][0];
	menor = matriz[0][0];


	for(int i = 0; i < linhas; i++) {
		for(int j = 0; j < colunas; j++) {
			if(matriz[i][j] > maior)
				maior = matriz[i][j];
			if(matriz[i][j] < menor)
				menor = matriz[i][j];
		}
	}

	printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);

	return 0;
}
