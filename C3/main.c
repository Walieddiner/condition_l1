#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("donnez moi le 1ere nomber:");
    scanf("%d",&a);
    printf("donnez moi la 2eme nomber: ");
    scanf("%d",&b);
    if (a==b){
   float  tripel=(a+b)*3;
    printf("Le résultat final est:%.2f",tripel);



    }
    return 0;
}
