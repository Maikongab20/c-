#include <stdio.h>

int main(){
    unsigned long int n1, n2, result;
    while(scanf("%u %u",&n1,&n2) != EOF){
        result = n1^n2;
        printf("%u",result);

    }
    return 0;
}