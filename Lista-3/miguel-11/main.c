#include <stdio.h>
int main() {
    int n, i, j = 0;
    int sum = 0, bef = 0, aft = 0, flag = 0, num = 0;
    int freq[100000];
    char teste[1000];
    scanf("%d", &n);
 
    for( i = 0; i < n; i++) {
        scanf("%d", &freq[i]);
    }
    for (i = 0; i < n; i++) {
        teste[i] = freq[i] + '0';
    }
    teste[i] = '\0';
    //printf("%s\n", teste);
    for (i = 0; i < n; i++) {
    //printf("%d\n", freq[i]);
        if(bef < aft) {
            bef = aft;
            //printf("%d\n", bef);
            flag = freq[i - 1];
            //printf("%d\n", flag);
        }
        for(j = 1; j < n; j++) {
            
            if(freq[i] == freq[j]) {
                sum++;
            }
        }
        aft = sum;
        sum = 0;
    }
    if(freq[0] == flag) {
        bef++;
    }
    printf("%d\n%d\n", flag, bef);
 
    return 0;
}
