#include<stdio.h>
int sum ( int x ,int y) ;
int main ( ) {
    int x , y ;
    printf(" Enter First Number\n");
    scanf("%d",&x);
     printf(" Enter Second Number\n");
    scanf("%d",&y);
     int d = sum (x , y) ;
     printf("Your answer is : %d",d);








    return 0;
}
int sum ( int x , int y) {

    return x * y ;
}