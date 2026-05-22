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
    while (i < n)
    {
        scanf("%d", &vet[i]);
        i++;
    }

    bsort(vet,n);
    if(n%2==0){
        mediana = vet[n/2] + vet[n/2-1];
        mediana = mediana /2;
    }
    else{
        mediana = vet[n/2];
    }
    printf("%.2f\n",mediana);
    free(vet);
}

void bsort(int *v,int tamanho){
    int i = 0,j=0,aux ;
    for(i = 0;i<tamanho;i++){
        for(j = 0;j<tamanho;j++){
            if(v[i]<v[j]){
                aux = v[j];
                v[j] = v[i];
                v[i] = aux;
            }
        }
    }
}