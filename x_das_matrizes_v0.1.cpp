#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

	
	int main(){
		
			int i,j;
			int ii,jj;
			
			int aux,o1,o2,x=0;
			int matrizA[50][50];
			int matrizB[50][50];
			int matrizproduto[50][50];
			char l;
			bool lo = true;
				time_t rawtime;         // linha 17 a 21, verificar a data e printar 
				struct tm * timeinfo; 
				time ( &rawtime ); 
				timeinfo = localtime ( &rawtime ); 
				printf ( "%s\n", asctime (timeinfo) );	
			while (lo){
			setlocale(LC_ALL,"Portuguese");
			printf("IFSULDEMINAS - Campus Avançado Carmo de Minas _ Programa: produto_matriz_v0.1 _ Marcos Barbosa \n");
			printf("Ordem da matriz é a LINHA (i) X COLUNA (j). \n\n");
			printf("§ Digite a ordem da primeira matriz:"); // ordem da matriz 1
			scanf("%d",&i);
			printf(">> ");
			scanf("%d",&j);
			printf("§ Digite a ordem da segunda matriz:"); // ordem da matriz 2
			scanf("%d",&ii);
			printf(">> ");
			scanf("%d",&jj);
			system("cls");
			
				if (j!=ii){	// caso de saida
					printf("Multiplicacao não possivel!\n"); 	
					printf("Observacao: A coluna da primeira matriz deve ser igual a linha da segunda matriz. \nReinicie o programa e tente novamente.\n");
					return 0;
				}
			printf("Matriz 1\n");
			for (o1=0;o1<i;o1++){ // primeira matriz 
				for(o2=0;o2<j;o2++){
					printf("Digite o valor na posicao : %d,%d >> ",o1+1,o2+1);
					scanf("%d",&matrizA[o1][o2]);
				}
			}
			system("cls");
			printf("Matriz 2\n\n");
			for (o1=0;o1<ii;o1++){ // segunda matriz 
				for(o2=0;o2<jj;o2++){
					printf("Digite o valor na posicao : %d,%d >> ",o1+1,o2+1);
					scanf("%d",&matrizB[o1][o2]);
				}
			}
			
			
			for (o1=0;o1<i;o1++){ // multiplicação
				matrizproduto[o1][o2] = 0;
				for (o2=0;o2<jj;o2++){
					
					matrizproduto[o1][o2] = 0;
				
					for (x=0;x<j;x++){
						
							matrizproduto[o1][o2] = matrizproduto[o1][o2] + (matrizA[o1][x] * matrizB[x][o2]); // prevenção para a matriz
					
					}
					
				}
			}
			
			printf("Matriz Produto Ordem %dX%d \n\n",i,jj);
			for (o1=0;o1<i;o1++){ // resultado
				for(o2=0;o2<jj;o2++){
					printf(" %d",matrizproduto[o1][o2]);
				}
				printf("\n");
			}
			
		fflush(stdin);	
		printf("\nDeseja sair? (S/n)>> .\n");	
		scanf("%c",&l);
		if (l=='S' or l=='s'){
				return 0;
			}
			system ("cls");
		}
		

			
		
		
	}
