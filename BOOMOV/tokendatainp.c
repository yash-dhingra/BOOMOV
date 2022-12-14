/*


!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

Only Use this program to reset the mn.dat database incase of data curruption which development.

Warning !! 

This is not for distribution and made for development process only!!

You Have Been Warned...

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


*/



#include <stdio.h>

void main()
{

    FILE *fptr_tk;
    fptr_tk = fopen("dbs/token.dat", "wb");
    int token[1000] ;
    for (int i=0;i<=99;i++){
        token[i]=-1;
    }
    token[0]=1037;
    fwrite(&token, sizeof(token), 1, fptr_tk);
    fclose(fptr_tk);
}

