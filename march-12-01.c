#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, bf;

    printf("input the first number a : ");
    scanf("%lf",&a);

    printf("Input the second number b : ");
    scanf("%lf",&b);

    printf("Input the third number c : ");
    scanf("%lf",&c);

    bf = (b*b) - (4*(a)*(c));

    if(bf >0 && a != 0)
    {
        double x,y;

        bf=sqrt(bf);

        x=(-b+bf)/(2*a);
        y=(-b-bf)/(2*a);

        printf("Root1 = %.5lf",x);
        printf("Root2 = %.5lf",y);
    }
    else
        {
            printf("Impossible to find the roots.");
    }

    return 0;
}
