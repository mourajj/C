#include <stdio.h>
#include <time.h> 

int main(int argc, char *argv[]){

    // Variáveis para armazenar o tempo de execução do código
    double time_spent = 0.0;
    clock_t begin = clock();

    printf("Digite o nome do arquivo a ser lido!\n");

    char arquivo[300];

    char numero[50];

    int cont, divisores, numLeitura, contaLinhas;

    scanf("%s", arquivo);

    FILE *fp;

    /* e1.txt */

    if ((fp=fopen (arquivo,"r")) == NULL) {

        printf ("Erro na abertura do arquivo.");
        fclose(fp);
        return 0;

    }
    else{
        contaLinhas = 1;
        /*int numeroThreads;

        printf("Insira o numero de threads a executar o programa: \n");
        scanf("%d", numeroThreads);*/

        while(fgets(numero, 50, fp) != NULL){

            numLeitura = atoi(numero);

            divisores = 1;
            cont = 1;

            if(contaLinhas == 1){
                contaLinhas = contaLinhas + 1;
                printf("Este arquivo tem %d numeros!\n TESTE COPIA", numLeitura);
            }
            else{
                while(cont <= (numLeitura / 2)){

                    if((numLeitura % cont) == 0){

                        divisores++;
                    }

                    cont++;
                }

                printf("O numero de divisores de %s eh: %d\n", numero, divisores);
            }
        }
    }

    clock_t end = clock(); 
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC; // dividindo a diferença com o CLOCKS_PER_SEC pra converter para segundos
    printf("O tempo de execução desse código foi de %f segundos", time_spent);
    fclose(fp);

    return 0;
}
