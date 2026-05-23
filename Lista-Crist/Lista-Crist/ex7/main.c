#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n = 1, i = 0,nA,nB,*vetA,*vetB,j=0,*vetC,k=0,b=0;
    
    scanf("%d",&nA);
    scanf("%d",&nB);
    
    vetA = (int *)calloc(nA, sizeof(int));
    vetB = (int *)calloc(nB, sizeof(int));
    vetC = (int *)calloc((nB+nA), sizeof(int));
    while (i < nA){
        scanf("%d",&vetA[i]);
        i++;
    }
    i = 0;
    while (i < nB){
        scanf("%d",&vetB[i]);      
        i++;
    }
    i=0;
    while(i<nA){
        if(vetA[i]>vetB[j]){
            vetC[k]= vetB[j];       //insere vetB no vetC caso ele seja menor 
            b++;
            k++;
            j++;
        }
            
        else{
            vetC[k] = vetA[i];      //insere vetA no vetC caso ele seja menor
            i++;
            k++;
            }
        if(j==nB){  
            vetC[k] = vetA[i];  //insere o resto dos numeros de vetA no vetC
            i++;
            k++;
            j=0;
        }      
    }
    while(b<nB){
        vetC[k] = vetB[b];  //insere o resto dos numeros de vetB no vetC
        b++;
        k++;
    }
    
    for (i=0;i<nA+nB;i++){
        printf("%d ",vetC[i]);      
    }
    free(vetA);
    free(vetB);
    free(vetC);
}