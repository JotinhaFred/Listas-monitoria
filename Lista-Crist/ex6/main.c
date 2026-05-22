#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n = 1, i = 0,nA,nB,*vetA,*vetB,j=0,*vetC,k=0,auxA[4000]={0},auxB[4000]= {0},nC=0,count=0;
    do{
        scanf("%d", &nA);
    }while(nA<1 || nA>100);
    do{
        scanf("%d", &nB);
    }while(nB<1 || nB>100);
    
    vetA = (int *)calloc(nA, sizeof(int));
    vetB = (int *)calloc(nB, sizeof(int));
    vetC = (int *)calloc((nB+nA), sizeof(int));
    while (i < nA)
    {
        scanf("%d",&vetA[i]);
        if(auxA[vetA[i]]!=0){
        
            continue;
            
        }
        auxA[vetA[i]] = 1;
        
        
        i++;
    }
    i = 0;
    while (i < nB)
    {
        scanf("%d", &vetB[i]);
        if(auxB[vetB[i]]!=0){
            continue;
            
        }
        auxB[vetB[i]] = 1;
        
        
        i++;
    }
    printf("(");
    for(i = 0;i<4000;i++){
        if(auxA[i]!=0){
            if(count==0){
                printf("%d",i);
            }else{
                printf(",%d",i);
            }
            count++;
        }
        
    }
    for(i = 0;i<4000;i++){
        if(auxB[i]!=0){
            if(count==0){
                printf("%d",i);
            }else{
                printf(",%d",i);
            }
            count++;
        }
        
    }
    printf(")");
    for(i=0;i<nA;i++){
        for(j=0;j<nB;j++){
            if(vetA[i]==vetB[j]){
                vetC[nC] = vetA[i];
                nC+=1;
            }
        }
    }
    printf("\n(");
    for(i=0;i<nC;i++){
        if(i==nC-1){
            printf("%d",vetC[i]);
        }
        else{
            printf("%d,",vetC[i]);
        }
       
    }
    printf(")");
    free(vetA);
    free(vetB);
    free(vetC);
}