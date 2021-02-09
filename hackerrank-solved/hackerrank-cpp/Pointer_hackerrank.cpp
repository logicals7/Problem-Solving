//Problem Statement: https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    int sum, diff;
     sum = *a + *b;
     if(*a > *b){
        diff = *a - *b;
     }
     else{
        diff = *b - *a;
     }
     *a=sum;
     *b=diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
