#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"");
	
char aluno [2][200];
float nota[2][3];
int  i,j;




printf("Conte�do do vetor:\n");

for(i = 0; i < 2; i++){
printf("Digite o nome do %d� aluno: ",i +1);
scanf("%s",&aluno[i]);
	
	for(j = 0; j < 2; j++){
	printf("Digite sua nota: ",j + 1);
	scanf("%f",&nota[i][j]);

}	
printf("\n");	
}

for(i = 0; i < 2; i++){
	printf("%i� aluno: %s \n", i+1, aluno[i]);

	for(j = 0; j < 3; j++){
	printf("%i� notas: %.1f \n", j+i, nota[i][j]); 
	  } 
	  printf("\n");
 }
	
return 0;	
}
