#include <stdio.h>
#include  <math.h>
#define PI (4.*atan(1))

int main() {
    double x1,y1,x2,y2,x3,y3,A,B,C,S,A1,A2,A3,a,b,c,a1,b1,c1,E;
    printf ("Hello, write x1 coordinate\n");
    scanf ("%lf", &x1);
    printf ("write y1 coordinate\n");
    scanf ("%lf", &y1);
    printf ("write x2 coordinate\n");
    scanf ("%lf", &x2);
    printf ("write y2 coordinate\n");
    scanf ("%lf", &y2);
    printf ("write x3 coordinate\n");
    scanf ("%lf", &x3);
    printf ("write y3 coordinate\n");
    scanf ("%lf", &y3);
    A =sqrt(pow(x2-x1, 2)+ pow(y2-y1, 2));
    B =sqrt(pow(x3-x2, 2)+ pow(y3-y2, 2));
    C =sqrt(pow(x1-x3, 2)+ pow(y1-y3, 2));
    S = 0.5*(A+B+C);
    A1=sqrt((S-A)*(S-B)/(S*(S-C)));
    A2=sqrt((S-A)*(S-C)/(S*(S-B)));
    A3=sqrt((S-C)*(S-B)/(S*(S-A)));
    a=atan(A1)*2;
    b=atan(A2)*2;
    c=atan(A3)*2;
    a1=a*(180/PI);
    b1=b*(180/PI);
    c1=c*(180/PI);
    E=c1+b1+a1;
    printf ("a,b,c side = %lf, %lf, %lf\n", A,B,C);
    printf ("S = %lf\n", S);
    printf ("a,b,c angles = %lf, %lf, %lf\n", a, b,c );
    printf ("a,b,c angles in deegrees = %lf, %lf, %lf\n", a1,b1,c1);
    printf ("Sum of angles = %lf\n", E);

    return 0;

}