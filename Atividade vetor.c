# include <stdio.h>
# include <locale.h>
# define TAM 3
int main (){
setlocale(LC_ALL,"");

int i;
int  vetor  [TAM]; 
float soma = 0;

for (i = 0; i < TAM; i++){
	printf("Elemento %dº: ",i + 1, vetor[i]);
	scanf("%d",&vetor[i]);
	//soma += vetor[i];
}
		


return 0;	
}
