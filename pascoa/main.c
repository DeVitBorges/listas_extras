#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Pascoa\n");

    int Y, G, C, X, Z, E, N, D;

    printf ("\ninfome o ano: ");
    scanf ("%d", &Y);

    G = Y+19;
    C = (Y/100)+1;
    X = ((3*C)/4)-12;
    Z = (((8*C)+5)/25)-5;

    E = (11*G + 20 + Z - X)%30;

    if ((E == 24)|| ((E == 25) && G>11)){
            E = E+1;
    }

    N = 44 - E;

            if (N < 21){
                N = N+30;
            }

    D = (((5*Y)/4)-(X+10));

    N = ((N+7) - ((D+N)%7));

            if (N>31)
                printf ("\nPascoa: %d de abril de %d", N-31, Y);

                else
                    printf ("\nPascoa: %d de marco de %d", N, Y);


    return 0;
}
