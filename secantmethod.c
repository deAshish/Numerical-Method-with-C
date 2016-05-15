#include<stdio.h>
#include<math.h>
float s(float x){
    return cos(x) - x*x*x;
}
int main(){
    float a,b,error=0.0001,x;
    do
    {printf("Enter any two guesses");
    scanf("%f%f",&a,&b);
    }while(s(a)==s(b));
    do{
        x=b-(((b-a)*s(b))/(s(b)-s(a)));
        a=b;
        b=x;

    }while(fabs(s(x))>error);
    printf("Root is %f",x);
    return 0;
}
