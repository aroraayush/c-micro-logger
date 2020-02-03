#include <stdio.h>
#include "micro_logger.h"

int main()
{
    int num = 10;
    char alphabet = 'b';
    char str[10]="Alakazam";
    float dec = 1.02f;
    long big_number= 1234567890;
    unsigned long u_long= 1234567890;
    
    printf("\n****************************************************************************\n");
    printf("Printing values only\n");
    printf("****************************************************************************\n");
    printf("\nSyntax: file_name - line_number | <value>\n");
    PR_I(num);
    PR_F(dec);
    PR_L(big_number);
    PR_U_L(u_long);

    PR_C(alphabet);
    PR_S(str);

    printf("\n\n****************************************************************************\n");
    printf("Printing variable names and their values\n");
    printf("****************************************************************************\n");

    printf("\nSyntax: file_name - line_number | <variable_name> = <value>\n");
    
    PR_V_I(num);
    PR_V_F(dec);
    PR_V_L(big_number);
    PR_V_U_L(u_long);
    
    PR_V_C(alphabet);
    PR_V_S(str);
    printf("\n\n\n");
    return 0;
}
