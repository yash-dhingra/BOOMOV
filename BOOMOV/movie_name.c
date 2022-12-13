//
//  main.c
//  BOOMOV
//
//  Created by Yash Dhingra on 12/12/22.
//

#include <stdio.h>

int main() {
    printf("Greetings Kindly Enter the Username and Password to enter the System,\nUsername: ");
    char username[30];
    fgets(username,30,stdin);
    char password[30];
    printf("\nPassword: ");
    fgets(password,30,stdin);
    if (username=="admin"&&password=="admin"){
        printf("Kindly Wait Till the Database is Loaded...");
        FILE* fptr_mn;
        fptr_mn=fopen("mn.dat","rb");
        int movie_name[10];
        f

    }    
}
