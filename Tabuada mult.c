# include <stdio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	// Declarando variável.
	int i;
	// Laço de repetição tabuada de mult
	for(i = 1; i <= 10; i++){
		printf("%d x %d = %d \n", 2, i, i*2);
	}	
	
    printf("\n");
	 
	for(i = 1; i <= 10; i++){
		printf("%d x %d = %d \n", 3, i, i*3);
	}
	
	 printf("\n");
	 
	for(i = 1; i <=10; i++){
		printf("%d x %d = %d \n", 5, i, i*5);
	}
	return 0;
}
