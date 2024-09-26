#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nomber;
printf("veuillez saisir un nomber : ");
scanf("%d",&nomber);

    if(nomber%2 == 0) printf("%d est un nomber pair" ,nomber);
else printf("impair");

    return 0;
}
