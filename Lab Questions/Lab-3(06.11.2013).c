/**Problem 3 =>
  *Recording the information of customers in a company and 
  *analyze this information to create a software software engineers 
  *are hired. Software engineers are explained in the following 
  *way the system they want, in this system the user accounts of 
  *customers in the person's ID number, name, surname and place of 
  *birth they want a system comprising. A variable for the 11-digit 
  *ID number, name and surname and place of birth as 20 digit to 
  *15-digit field they want. Objectives, respectively, with the 
  *name of the person sought all the information they are looking 
  *for by name ulaşmak.böyle aim to easily find. 
  *
  *NOTE: The system will enter the information how many users are 
  *receiving from the user when the system is first turned on.
  **/
#include "stdio.h"
#include "string.h"

struct root
{
	int ID[11];
	char name[10];
	char surName[10];
	char Town[15];
} user[100];
/*This function provides 
the user assign the values ​​from the array.*/
user users[100];
void UserRead (int i) {
	printf("User ID     : "); 
	scanf("%d", user[i].ID);
	printf("User Name   : "); 
	scanf("%s", user[i].name);
	printf("User Surname: "); 
	scanf("%s", user[i].surName);
	printf("User Town   : "); 
	scanf("%s", user[i].Town);		
}
/*These include the function of 
the number of users you want to add members.*/
void UserAdd (int x) {
	for (int i = 0; i < x; i++)
	{
		UserRead();
		printf("____________________\n");	
	}
}
void FindUser(int i)
{
	printf("User ID     : %d\n", user[i].ID);
	printf("User Name   : %s\n", user[i].name);
	printf("User Surname: %s\n", user[i].surName);
	printf("User Town   : %s\n", user[i].Town);
	printf("_______________________");
}
main() {
	int many;
	char search[15];
	printf("Wellcome...\nHow many users You want to add? :");
	scanf("%d", &many);
	UserAdd(many);
	printf("\nWhich user you search?:\n");
	scanf("%s", search);
	/*This method involves searching 
	for added user control with the user.*/
	if ((strcmp(user[i].name, search)) == 0 ) {
		printf("You search %s ?\n",search);
		printf("_______________________\n");
		FindUser();
	} 
	else
		printf("Error..!");
}