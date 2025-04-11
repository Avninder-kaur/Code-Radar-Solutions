#include <stdio.h>

int main() {
    int num;
    int msb;
    scanf("%d", &num);
    msb = (num >> 31) & 1;
    if(msb==1){
        printf("Set");
    }
    else{
    printf("Not Set");
    }

    return 0;
}
