#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

#define ll long long

#define rep(i, n) for(int i=0; i<n; i++)
#define rep2(i, m, n) for(int i=m; i<n; i++)

void p9_i_series( int n ) {
    int sum =0;
    for(int i=1; i<=n; i++) 
        sum += pow((2*i+1), 2);

    printf("%d", sum);
}


int sumOfNaturalNumber(int n) {
    int sum = 0;
    for(int i=0; i<=n; i++)
        sum += i;
    
    return sum;
}


void p9_ii_series(int n ) {
    long sum=0;
    for(int i=0; i<=n; i++) 
        sum += sumOfNaturalNumber(i);    
    
    printf("%ld", sum);
}

int p10_minPositive( int num ) {
    int dgts[50], j=0;
    memset(dgts, -1, sizeof(dgts));
    for(int i=9; i>=2; i--) {
        while(num%i==0) {
            dgts[j] = i; j++;
            num = num/i;
        }
    }
    if(num > 9) printf("-1\n");

    for(int i=j-1; i>=0; i--)
        printf("%d", dgts[i]);
}

int p11_sum_of_int(int num) {
    int sum = 0;
    if ( num < 0 ) 
        for(int i=1; i>=num; i--) 
            sum += i;
    else 
        for(int i=1; i <= num; i++) 
            sum += i;
    printf("%d",sum);
}

void p12_print_scholarship_status() {
    float tMarks = 0, mark;

    int n;
    scanf("%d", &n);
    for(int i=n;i--;) {
        scanf("%f", &mark);
        tMarks += mark;
    }
    float avgMark = tMarks / n;
    if (avgMark == 5)
        printf("Named\n");
    else if (avgMark >= 4.5)
        printf("High\n");
    else if (avgMark > 3)
        printf("Common\n");
    else 
        printf("none\n");
}

int main() {
    freopen("in.txt", "r", stdin);
    p12_print_scholarship_status();
    // p10_minPositive(45);
    // p11_sum_of_int(3);
    // p12_print_scholarship_status();

}