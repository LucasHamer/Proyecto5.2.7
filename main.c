#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,n4,n5,quint=0,trip=0;

    printf("Ingrese numero 1: ");
        scanf("%d",&n1);
        fflush(stdin);
        printf("Ingrese numero 2: ");
        scanf("%d",&n2);
        fflush(stdin);
        printf("Ingrese numero 3: ");
        scanf("%d",&n3);
        fflush(stdin);
        printf("Ingrese numero 4: ");
        scanf("%d",&n4);
        fflush(stdin);
        printf("Ingrese numero 5: ");
        scanf("%d",&n5);
        fflush(stdin);

    if(n1>0&&n2>0&&n3>0&&n4>0&&n5>0)
    {

        while(n1!=0&&n2!=0&&n3!=0&&n4!=0&&n5!=0)
        {
            if(n1==n5&&n2==n4)
            {
                quint++;
            }
            if(n1==n3)
            {
                trip++;
            }
            if(n2==n4)
            {
                trip++;
            }
            if(n3==n5)
            {
                trip++;
            }
        printf("Ingrese numero 1: ");
        scanf("%d",&n1);
        fflush(stdin);
        printf("Ingrese numero 2: ");
        scanf("%d",&n2);
        fflush(stdin);
        printf("Ingrese numero 3: ");
        scanf("%d",&n3);
        fflush(stdin);
        printf("Ingrese numero 4: ");
        scanf("%d",&n4);
        fflush(stdin);
        printf("Ingrese numero 5: ");
        scanf("%d",&n5);
        fflush(stdin);
        }
    }

        printf("Cantidad de capicuas quintuples: %d\n",quint);
        printf("Cantidad de capicuas triples: %d",trip);

    return 0;
}
