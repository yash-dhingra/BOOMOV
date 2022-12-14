#include <stdio.h>

void main()
{

    FILE *fptr_tk;
    fptr_tk = fopen("dbs/token.dat", "rb");
    int token[1000] ;
    fread(&token, sizeof(token), 1, fptr_tk);
    fclose(fptr_tk);

    while(1){

    printf("\n\nEnter the Token to Check: ");
    int check_token;
    scanf("%d",&check_token);
    int flag=0;
    int i;
    for(i=0;token[i]!=-1;i++){
        //printf("%d ",token[i]);
        if (check_token==token[i]){
            flag=1;
            break;
        }
        else flag=0;
    }
    if (flag==1){
        printf("\n\nToken is Correct.\n\n");
    }
    else{
        for(int i=0;i<50;i++) printf("!");
        printf("\n\t\tToken Incorrect.\n");
    }
    int choice;
    printf("Would you like to check again(1 for Yes): ");
    scanf("%d",&choice);
    if (choice!=1){
        break;
    }

    }
}