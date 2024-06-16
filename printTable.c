#include<stdio.h>
void PrintTable(int n );
int main () {
     int n;
     printf(" Enter N \n");
     scanf("%d",&n);
     PrintTable(n);// argument ya actual parameter

    return 0;
}
    void PrintTable(int n) { //parameter ya formal parameter
    for ( int i= 1 ;i<=10 ;i++){
        printf("%d\n",i*n);
    }
}