//
//  movie_name.c
//  BOOMOV
//
//  Created by Yash Dhingra on 12/12/22.
//

#include <stdio.h>
#include <string.h>

int main()
{
    printf("Greetings Kindly Enter the Username and Password to enter the System,\nUsername: ");

    char username[30];

    // fgets(username,30,stdin);

    gets(username);

    char password[30];

    printf("\nPassword: ");

    // fgets(password,30,stdin);

    gets(password);

    // puts(username);

    if (strcmp(username, "admin") == 0 && strcmp(password, "admin") == 0)
    {

        printf("\nKindly Wait Till the Database is Loaded...");

        FILE *fptr_mn;

        fptr_mn = fopen("dbs/mn.dat", "rb");

        int movie_name[10];

        fread(&movie_name, sizeof(movie_name), 1, fptr_mn);

        fclose(fptr_mn);

        printf("\nCurrently The Following Movies are assigned to the Following Movie Halls..");

        for (int i = 1; i <= 10; i++)
        {
            printf("\nTheatre-%d: %d ", i, movie_name[i - 1]);
        }
        
        int x=1;

        for(;;)
        {
            printf("\n\n\nWhich Movie Theatre would you like to Edit? : ");

            int theatre;

            scanf("%d", &theatre);

            printf("\n\nWhat Movie would you like to change it to? : ");

            int movie;

            scanf("%d", &movie);

            movie_name[theatre - 1] = movie;

            fptr_mn = fopen("dbs/mn.dat", "wb");

            fwrite(&movie_name, sizeof(movie_name), 1, fptr_mn);

            fclose(fptr_mn);

            int choice;

            printf("\n\nWould you Like to Change more movies? 0 for No: ");

            scanf("%d",&choice);

            if (choice == 0)
            {

                x=0;

                break;

            }
            else{

                x=1;

            }
        }

        printf("\n\n\n!!!!!!!!End Of Program!!!!!!!!!!");

    }

    else
    {
        printf("\n!!!!!!!!!!!Wrong Password or Username!!!!!!!!!!!\n\n\nKindly Contact The Developer for providing Master Key...\n\n\n");
    }
}
