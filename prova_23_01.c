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
