#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n = 1, i = 0,soma=0;
    scanf("%d", &n);

    int *vet = (int *)malloc(n * sizeof(int));
    while (i < n)
    {
        scanf("%d", &vet[i]);
        soma += vet[i];
        i++;
    }
    /*
    for (i = 0;i<n;i++){
        soma = soma + vet[i];
    }*/
    printf("%d",soma);
    free(vet);
}