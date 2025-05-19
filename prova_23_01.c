// 01) Faça um programa que leia 3 números reais, 
// armazene tais valores em variáveis e, em seguida, 
// obtenha quais são o menor e o maior valores lidos. 
// Ao final, mostre na console o menor e o maior valores obtidos. (1,0)

#include <stdio.h>

int main() {
	int maior, menor, nums[3];

	for(int i=0; i <3; i++) {
		scanf("%d", &nums[i]);
	}

	if(nums[0]>nums[1] && nums[0]>nums[2]) {
		maior = nums[0];
	}
	else {
		menor = nums[0];
	}

	if(nums[1]>nums[0] && nums[1]>nums[2]) {
		maior = nums[1];
	}
	else {
		menor = nums[1];
	}

	if(nums[2]>nums[0] && nums[2]>nums[1]) {
		maior = nums[2];
	}
	else {
		menor = nums[2];
	}
    printf("Menor: %d e maior: %d", menor, maior);
	return 0;
}

//02) Faça um programa que leia valores e armazene em um vetor de tamanho 12.
//Após os valores estarem armazenados, some os números que forem primos positivos e que
//estejam em posições impares do vetor. 
//Para fazer tal programa, utilize o comando for e considere que 0 e 1 não são primos. 
//Ao final, mostre a soma obtida. (3,0)

#include <stdio.h>

int main() {
	int soma= 0, divi = 0;
	int num[12];
	for(int i=0; i<12; i++) {
		scanf("%d", &num[i]);
        divi = 0;
		for(int j=1; j<=num[i]; j++) {
			if(num[i]%j ==0) {
				divi++;
			}
		}
			if(i%2!=0 && divi==2 && num[i]>=0) {
				soma = soma + num[i];
			}
		}

		printf("%d", soma);
		return 0;
	}
