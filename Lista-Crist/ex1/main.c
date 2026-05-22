#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n=1,i=0,maior=0,indicemaior = 0;
    while(1)
    {   
        i = 0;
        scanf("%d",&n);
       
        if(n==0) break;
        int *vet = (int*)malloc(n*sizeof(int));
        
        while(i<n){
            scanf("%d",&vet[i]);
            i++;
        }
        maior = vet[0];
        indicemaior = 0;
        for(i = 0 ; i<n; i++){
            if(vet[i]>maior){
                maior = vet[i];
                indicemaior = i;
            }
        }
        printf("%d %d\n",indicemaior,maior);
        free(vet);
    }
    




    
}