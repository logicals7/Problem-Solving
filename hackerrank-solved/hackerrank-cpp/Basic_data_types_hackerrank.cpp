//Problem Statement: https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int i;
    long l;
    char ch;
    float fl;
    double db;

    scanf("%d %ld %c %f %lf",&i,&l,&ch,&fl,&db );
    printf("%d\n%ld\n%c\n%f\n%lf",i,l,ch,fl,db);
    return 0;
}
