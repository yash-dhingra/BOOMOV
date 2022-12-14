#include <stdio.h>
#include <string.h>

int token_generation(){
    //printf("\n\nKindly Enter you name: ");
    //printf("\nEnter ");
    return 1;

}

int payment_gatway(){
    return 1;
}

void seat_check(hall){

    if (hall==0) {
        // Extracting Array from bin file..

        FILE *fptr_sc;

        fptr_sc= fopen("dbs/t1.dat", "rb");

        int movie_sc[100];

        fread(&movie_sc, sizeof(movie_sc), 1, fptr_sc);

        fclose(fptr_sc);

        // User Display of seats available 

        printf("\n\n");

        for(int i=0;i<50;i++) printf("#");

        int counter=0;
        printf("\n\n");

        for (int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if (movie_sc[counter]!=-1){
                    if(counter<10) printf("%d    ",movie_sc[counter]);
                    else printf("%d   ",movie_sc[counter]);
                }
                else printf("-    ");
                counter++;
            }
            printf("\n");
        }
        printf("\n\n");
        printf("\t\tMovie Screen This Way\n");
        for(int i=0;i<50;i++) printf("|");

        //Now take input from user to change which seat he/she like.

        printf("\nWhich Seat would you like to book? : ");
        int temp_seat;
        scanf("%d",&temp_seat);

        // Check if seat entered is already booked.
        if (movie_sc[temp_seat]==-1){
            printf("\n\n\n\n!!!!!!!!!!! Seat Already Booked Kindly restart the process !!!!!!!!!!!");
        }

        else{

            //Change the array in local memory..

            movie_sc[temp_seat]=-1;

            // Token Generaration + Payment Success..

            if (token_generation){
                fptr_sc= fopen("dbs/t1.dat", "wb");

                fwrite(&movie_sc, sizeof(movie_sc), 1, fptr_sc);

                fclose(fptr_sc);

                printf("\n\nTransaction Complete...");
        }

        }
        



    }

}


void main(){

    printf("\n\n\nGreetings!!! Kindly Enter the Desk Password to Continue...: ");
    int password;
    scanf("%d",&password);
    if (password==2004)
    {
        //Movie List Extraction 


        FILE *fptr_mn;

        fptr_mn = fopen("dbs/mn.dat", "rb");

        int movie_list[10];

        fread(&movie_list, sizeof(movie_list), 1, fptr_mn);

        fclose(fptr_mn);

        printf("The Following Movies are being played in these Movie Theatre Right Now...");

        for (int i = 1; i <= 10; i++)
        {
            printf("\nTheatre-%d: %d ", i, movie_list[i - 1]);
        }
        
        // User Input Begins..

        for(;;){

            printf("\n\n\nWhich Movie would you like to watch? : ");

            int temp_movie;

            scanf("%d",&temp_movie);

            printf("\n\n\nKindly Wait till we process empty seats...");

            int theatre_number;

            for (int i=0;i<10;i++){
                if (movie_list[i]==temp_movie){
                    theatre_number=i;
                    break;
                }
            }

            seat_check(theatre_number);

            //Exit Program Code Bellow
            int choice;

            printf("\n\nWould you Like to Shutdown Program? 0 for Yes: ");

            scanf("%d",&choice);

            if (choice == 0)
            {
                break;

            }
        }

    }

    else
    {

        printf("\n!!!!!!!!!!!!!!!!!!!!!!!!Wrong Password!!!!!!!!!!!!!!!!!!!!!!!!\n\n\nKindly Contact The Developer for providing Master Key...\n\n\n");
    
    }
}