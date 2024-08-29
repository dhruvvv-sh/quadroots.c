#include <stdio.h>
#include <math.h>
int main(){
    float a;
    printf("enter your number1:");
    scanf("%f",&a);
    float b;
    printf("enter your number2:");
    scanf("%f",&b);
    float c;
    printf("enter your number3:");
    scanf("%f",&c);
    float det = pow(b,2) - 4*a*c;
    if (det>0){
        printf("s=1 \n");
    }
    else if (det < 0){
        printf("s=2 \n");
    }
    else {
        printf("s=3 \n");
    }
    int s;
    printf("enter s = ");
    scanf("%d",&s);
    switch (s){
        case 1 :
        float root1 = (-b - sqrt(det))/(2*a);
        float root2 = (-b + sqrt(det))/(2*a);
        printf("your roots are: %f,%f",root1,root2);
        break;
        case 2: 
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-det) / (2 * a);
        printf("The roots are complex and different: %f - %fi, %f + %fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
        break;
        case 3 :
        float root5= (-b) / (2*a);
        printf("equal roots are=%f",root5);
        break;

    }
    return 0;

}
