/*


!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

Only Use this program to reset the t#.dat database incase of data curruption which development.

Warning !! 

This is not for distribution and made for development process only!!

You Have Been Warned...

!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


*/



#include <stdio.h>

void main()
{

    FILE *fptr_mn;
    fptr_mn = fopen("dbs/t10.dat", "wb");
    int movie_name[100] ;
    for (int i=0;i<=99;i++){
        movie_name[i]=i;
    }
    movie_name[10]=-1;
    fwrite(&movie_name, sizeof(movie_name), 1, fptr_mn);
    fclose(fptr_mn);
}
