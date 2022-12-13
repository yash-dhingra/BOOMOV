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

    FILE *fptr_mn;
    fptr_mn = fopen("dbs/mn.dat", "wb");
    int movie_name[10] = {23, 34, 21, 26, 12, 23, 46, 45, 87, 46};
    fwrite(&movie_name, sizeof(movie_name), 1, fptr_mn);
    fclose(fptr_mn);
}
