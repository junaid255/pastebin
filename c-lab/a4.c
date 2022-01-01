#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int p1_realRoot( float a, float b, float c ) {
    float d = pow(b,2) - 4*a*c;
    if(d<0) {printf("No real root"); return 0;};
    float r1 = (-b + d)/(2*a);
    float r2 = (-b - d)/(2*a);
    printf(
        "Root1= %.3lf "
        "Root2= %.3lf",
        r1, r2
    );
}

int p2_raiseTo(float x, int n) {
    float y=1;
    for(;n--;) 
        y = y * x;
    printf("%.3f",y);
}
int p3_fib(int n) {
    if( n == 1) return 0;
    if( n == 2) return 1;
    return p3_fib(n-1) + p3_fib(n-2);
}

int p4_printPrime(int a, int b) {
    for(int i=a; i<=b; i++ ) {

        bool prime = true;

        for(int j=2; j < i; j++) {
            if(i%j==0) {
                prime = false;
                break;
            }
        }

        if(prime) printf("%d ", i);

    }
}
// 1, 2.1, 3.2.1, 4.3.2.1
// fact1 = 1
// fact2 = fact1*2
// fact3 = fact2*3
// fact4 = fact3*4
// fact5 = fact4*5
int p5_fact(int n) {
    if(n==1  ) return 1;
    
    int fact = n*p5_fact(n-1);
    return fact;
}

int p6_numberConversion() {

}

int p7_readInt() {
    int narr[9];
    narr[0]=4;
    printf("%d", (*(&narr+1) - narr));
    // for(int i=0; i<= )
    // scanf("%d", )
}

int * p8_addMat() {
    int m1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
        };
    int m2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
        };
    static int sum[3][3];
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            // int * res = &sum[i][j];
            // int * m1d = &m1[i][j];
            // int * m2d = &m2[i][j];
            // *res = *m1d + *m2d;
            // sum[i][j] = m1[i][j] + m2[i][j];
            // *(&sum[i][j]) = 
            *(*(sum+i)+j) = *(*(m1+i)+j) + *(*(m2+i)+j);
        }
    }
    // int *x  =*sum ;
    for(int i=0;i<3;i++) {
        for(int j=0; j<3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    return &sum[0][0];
    // int *
    // return sum;
    // for(int i=0; i<3; i++) {
    //     for(int j=0; j<3; j++) {
    //         printf("%d ",*(&sum[i][j]));
    //     }
    //     printf("\n");
    // }
    
    
}

int main() {
    // p1_realRoot(1,5,6);.s
    // p2_raiseTo(2,3);
    // printf("%d",p3_fib(6));
    // p4_printPrime(2,100);
    // printf("%d",p5_fact(4));
    // p7_readInt();
    int * ptr = p8_addMat();
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("%d ", ptr);
        }
        printf("\n");
    }
    
    return 0;
}