#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    maior = vet[0];
    menor = vet[0];
    for(i = 0 ; i<n; i++){

        if(vet[i]>maior){
            maior = vet[i];
        }
        if(vet[i]<menor){
            menor = vet[i];
        }
    }
    n--;
    while(n>=0){
        printf("%d ",vet[n]);
        n--;
    }

    printf("\n%d\n",maior);
    printf("%d\n",menor);
    free(vet);
}
