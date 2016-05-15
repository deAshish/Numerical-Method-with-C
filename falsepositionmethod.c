//Program to find root of a non linear equation using false position method
#include<stdio.h>
//#include<conio.h>
#include<math.h>
float f(float x)
{
    return cos(x) - x*x*x;;

}
int main(){
    float l,u,error=0.0001,x;
    do{
        //clrscr();
        printf("Enter lower and upper limit");
        scanf("%f%f",&l,&u);
    }while(f(l)*f(u)>0);

    do{
        x=l-(((u-l)*f(l))/(f(u)-f(l)));
        if(f(x)*f(l)>0)
            u=x;
        else
            l=x;

        }while(fabs(f(x))>error);
    printf("Root is %f",x);
    return 0;
    }



