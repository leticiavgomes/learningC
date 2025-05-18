#include <stdio.h>

int main(){
    int num, divi;
    scanf("%d", &num);
    for(int i=1; i<=num; i++){
        if(num%i ==0){
            divi++;
        }
    }
    if(divi>2){
        printf("%d não é primo",num);
    }
    else{
        printf("%d é primo",num);
    }
    
    return 0;
}
