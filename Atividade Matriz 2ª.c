#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

int numeros[2][2];
int linha,coluna;

printf("Digite os elementos para matriz: \n");

for(linha = 0; linha < 2; linha++){
	for(coluna = 0; coluna < 2; coluna++){
		
		printf("Elemento da linha %d: ", linha + 1, coluna + 1);
		scanf("%d,&numeros[linha][coluna]");
	}
}

for(linha = 0; linha < 2; linha++){
	for(coluna = 0; coluna < 2; coluna++){
		
		printf("Elemento da linha %d: %d\n", linha + 1, coluna + 1, numeros[linha][coluna]);
	}
}

return 0;

}
