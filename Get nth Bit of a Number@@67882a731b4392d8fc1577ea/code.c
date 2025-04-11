#include <stdio.h>

int main() {
    int num;
    int msb,n;
    scanf("%d%d", &num,&n);
    msb = (num >> n) & 1;
    if(msb==1){
        printf("1");
    }
    else{
    printf("0");
    }

    return 0;
}
