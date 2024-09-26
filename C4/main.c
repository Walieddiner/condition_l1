#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{int a,b,c;
printf("donnez moi la 1ere number:");
scanf("%d",&a);
printf("donnez moi la 2eme number:");
scanf("%d",&b);
printf("donnez moi le 3eme number:");
float delta=pow(b,&2)-4*a*c;
if (delta==0) printf("Pour évaluer une seule selution et il:%.2f",-b/2*a);
if (delta<0) printf("L'equation n'a pas de solution");
float x1,x2;{
x1=  (-b-sqrt(delta))/ (2*a);
x2=   (-b+sqrt(delta)) / (2*a);


if (delta>0) printf("votre equation evaluer deux solution deffirent: x1=%.2f et x2=%.2f",x1,x2);
}
    return 0;
}
