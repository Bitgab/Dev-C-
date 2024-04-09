# include <stdio.h>
# include <locale.h>
# define TAM 3

int main (){
setlocale(LC_ALL,"");

// Declarando variável 01º.

int i;
float v [TAM];


// Solicitando dados ao usuário 02º.

for(i = 0; i < TAM; i++){
	printf("Informe sua nota da %dª Unidade: ", i + 1, v[i]);
	scanf("%f",&v[i]);
}


system("cls || clear");

for(i = 0; i < TAM; i++){
	printf("Sua nota da %dª Unidade: %.1f\n", i + 1, v[i]);

}
return 0;	
}
