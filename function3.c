
#include<stdio.h>
int sum( int a ,int b ) ;

int main ( ) {
    int a , b ;
        printf(" Enter A \n");
        scanf("%d",&a);
        printf(" Enter B\n");
        scanf("%d",&b);
        int s = sum (a , b) ;
        printf( "Sum is :%d", s);


    return 0;
}
int sum ( int a , int b){
    return a + b ;
}