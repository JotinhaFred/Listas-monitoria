#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void bsort(int *v,int tamanho);
int main()
{
    int n = 1, i = 0;
    float mediana = 0;
    scanf("%d", &n);

    int *vet = (int *)malloc(n * sizeof(int));
    while (i < n){
        scanf("%d", &vet[i]);
        i++;
    }

    bsort(vet,n);       //o vetor se torna ordenado, com o vetor ordenado é possivel calcular a mediana 
    if(n%2==0){
        mediana = vet[n/2] + vet[n/2-1];    //mediana caso seja par
        mediana = mediana /2;
    }
    else{
        mediana = vet[n/2];         //mediana caso seja par
    }   
    printf("%.2f\n",mediana);
    free(vet);
}

void bsort(int *v,int tamanho){ //"bubblesort free style"
    int i = 0,j=0,aux ;
    for(i = 0;i<tamanho;i++){
        for(j = 0;j<tamanho;j++){
            if(v[i]<v[j]){  //troca de lugar sempre que encontra um numero menor
                aux = v[j];     
                v[j] = v[i];
                v[i] = aux;
            }
        }
    }
}