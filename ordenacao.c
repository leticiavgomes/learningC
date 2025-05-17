#include <stdio.h>

int main() {
    
  int aux;
	int nums[5],i;
	for(i=0; i<5; i++) { // for para pedir os 5 números
		scanf("%d", &nums[i]);
	}
	for(i=0; i<5; i++) { //for que vai gerar nums[0], nums [1]...
        for(int j=i+1; j< 5; j++){ //for que vai gerar nums[1], nums[2]...
            if(nums[i]> nums[j]){ // if para trocar de posição caso os analisados sejam maiores
                aux = nums[i];
                nums[i] = nums[j];
                nums[j] = aux;
            }
            
        }
	}
	for(int i=0; i<5; i++){
	    printf("%d", nums[i]);
	}
	return 0;
}
