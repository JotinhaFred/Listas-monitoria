#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int maximo(int *v,int tamanho);
int main()
{
    int n = 1, i = 0,soma=0,maior,menor;
    scanf("%d", &n);

    int *vet = (int *)malloc(n * sizeof(int));
    while (i < n)
    {
        scanf("%d", &vet[i]);
        i++;
    }
    maximo(vet,n);
    free(vet);
}

int maximo(int *v,int tamanho){
    int i = 0,aux[101] = {0},maiorfreq = 0;
    while(i<tamanho){
        aux[v[i]] +=1;
        if(aux[v[i]]> maiorfreq){
            maiorfreq = v[i];
        }
        
        i++;
    }
    printf("%d\n%d\n",maiorfreq,aux[maiorfreq]);
}