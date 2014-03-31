#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
        printf("\n==================================================================================\n");
    printf("This program will give you the result of devision calculation \n as a float, an integer, and the output of modulo (%%)\n");
    printf(" \n Please fill in the values for: \n<x> / <y> = [output]\n x: ");
    
    int x = GetInt();
    printf("       y: ");
    int y = GetInt();
    int div = x / y;
    int mod = x % y;
    float floatot = (float)x/ (float)y;
    printf("                      Float result:\n %.75f", floatot);
    printf("\n==================================================================================\n");
    printf("      Devision as int: %i / %i = %i  Modulo: %i %% %i = %i    \n", x, y, div, x, y, mod);
    printf("==================================================================================\n");
        printf("\n\nDone?");
    string done = GetString();
    printf("%s!\n", done);
    system("clear");
    
    printf("Have a nice day!\n")
    return 0;
}
