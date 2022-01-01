#include <stdio.h>
#include <math.h>
#define PI 3.1416
void p1_getDistance() {
    float x1, x2, y1, y2, z1, z2;
    printf("Enter The values of x1, x2, y1, y2, z1, z2: \n");
    
    scanf("%f %f %f %f %f %f", &x1, &x2, &y1, &y2, &z1, &z2 ) ;

    double distance ;
    distance = sqrt(pow(x1-x2,2) + pow(y1-y2,2) + pow(z1-z2,2));

    printf("%lf\n", distance ) ;
}

void p2_getvolumeAreaPerimiter() {
    float x,y,z,h;
    // For Square
    printf("Enter length of Square: \n");
    scanf("%f",&x);
    printf(
        "For Square,\n Area = %0.3lf, Volume= %0.3lf, Perimeter=%0.3lf\n",
         pow(x,2), pow(x,3), 4*x
        );
    // For Rectangle
    printf("Enter two sides and Height of rectangle:\n");
    scanf("%f %f %f",&x, &y, &h);
    printf( 
        "For Rectangle: Area=%0.3lf, Volume=%0.3lf, Perimiter=%0.3lf\n",
        x*y, x*y*h, 2*(x+y)
        );
    
    // Triangle
    printf("Enter three sides of triangle and height(for Area) and hight(for Volume):\n");
    
    float hArea;

    scanf("%f %f %f %f %f",
        &x, &y, &z, &h, &hArea
        );
    float area = 0.5 * x * hArea;
    float vloume = (1/3)*area*h;
    float perimiter = x+y+z;
    printf(
        "For Triangle: Area=%0.3lf, Volume=%0.3lf, Perimiter=%0.3lf\n",
        area,
        vloume,
        perimiter
    );
    
    // For Circle
    printf("Enter the radius of Circle: \n");
    scanf("%f",&x);
    printf(
        "For Circle: Area=%0.3lf, Volume=%0.3lf, Perimiter=%0.3lf\n",
        PI*x*x,
        (4/3)*PI*x*x*x,
        2*PI*x
    );
}


void p3_swap(int * x, int * y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
int p4_a_maxBetweenTwo( int a, int b) {
    return (a>b) ? a:b;
}
int p4_b_maxBetweenThree( int a, int b, int c) {
    int max;
    max = (a>b) ? a:b;
    max = (max > c) ? max : c;
    return max;
}
void p5_printTime(int seconds) {
    int hours = seconds/3600;
    seconds = seconds % 3600;
    int mins = seconds / 60;
    seconds = seconds % 60;
    printf(
        "hours=%d, minutes=%d, Seconds=%d\n",
        hours, mins, seconds
    );
}
void p6_roots( int a, int b, int c ) {
    float root1, root2;
    float d = sqrt(pow(b,2) - 4*a*c );
    if( d < 0 ) {
        printf("No real Root");
        return -1;
    }
    root1 = (-b + d) / (2*a);
    root2 = (-b - d) / (2*a);
    printf("%0.3lf %0.3lf", root1, root2);
}
float p7_a_convertToCelcius(float f){
    return ( 
        ((f-32) / 9) * 5
        );
}
float p7_b_convertToFarenheit(float c){
    return (
        ( (9*c)/5 ) + 32
    );
}
void p8_convertToGpa( float s1, float s2, float s3, float s4, float s5 ) {
    float total = s1 + s2 + s3 + s4 + s5;
    float avg = total/5;
    float pcg = avg*100;
    float gpa;
    printf(
        "total= %f, average=%f, percentage=%f, ",
        total, avg, pcg, gpa
    );
}    
void main() {
}