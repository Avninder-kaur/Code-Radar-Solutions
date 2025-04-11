#include<stdio.h>

int main(){
    int num,result;
    scanf("%d", &num);
    result=num&1;
    if(result==0){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}