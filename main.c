#include <stdio.h>
#include <stdlib.h>







struct user {
char name[50];
char member_id[20];
char phone;
int status;
int is_staff;
};


void execute_action(int action);
void Exit();
int menu();
void add_user();

int main()
{  int action;
   printf("\tCommunity Library System\n");
   printf("\tWELCOME MR. STEVE\n");


   do{
    printf("1.Add user\n");
    printf("2.View user\n");
    printf("3.Add book\n");
    printf("Action(1-3)");
    scanf("%d",&action);

    if (action < 1 || action > 3) {
        printf("Invalid action!!!\n");
    }
    }
 while(action < 1 || action > 3); {
    printf("Invalid action. Try again!!!\n");
    sleep (5);
    system ("cls");
}

    return 0;
}

void execute_action(int action) {
switch (action) {
    case 1:
    printf("adding user\n");
    break;
    case 2:
        printf("viewing user\n");
        break;
    case 3:
        printf("adding book\n");
        break;
    default:
        printf("Sorry. Unrecognized action.");
        }
}


int menu () {
    int action;
    do{
    printf("1.Add user\n");
    printf("2.View user\n");
    printf("3.Add book\n");
    printf("Action(1-3)");
    scanf("%d",&action);

    if (action < 1 || action > 3) {
        printf("Invalid action!!!\n");
    }
    }
while(action < 1 || action > 3);

 return action;
}

void Exit () {
printf("Thank you for using the system.");
sleep (10);
Exit (0);
}

void add_user (){
struct user u;
FILE *fp;
fp = fopen("users","ab");
if (!fp) {
    printf("Unable to open file.");
        exit (0);
}


printf("Name:");
getchar();
gets(u.name);
printf("Phone number:");
scanf("%s", &u.tel);
}printf"ID:");
scanf("%d", &u.id);
printf("User type (1 for staff, 0 for users:");
scanf("%d", &u.is staff);
fwrite(&u, sizeof(struct user), 1, fp);
printf("User added successfully.\n");
fclose(fp);
}
