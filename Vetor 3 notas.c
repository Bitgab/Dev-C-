# include <stdio.h>
# include <locale.h>
# define TAM 3

int main (){
setlocale(LC_ALL,"");

// Declarando vari�vel 01�.

int i;
float v [TAM];


// Solicitando dados ao usu�rio 02�.

for(i = 0; i < TAM; i++){
	printf("Informe sua nota da %d� Unidade: ", i + 1, v[i]);
	scanf("%f",&v[i]);
}


system("cls || clear");

for(i = 0; i < TAM; i++){
	printf("Sua nota da %d� Unidade: %.1f\n", i + 1, v[i]);

}
return 0;	
}
