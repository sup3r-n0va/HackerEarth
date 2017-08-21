#include <stdio.h>
#include <string.h>
#include <ctype.h>


int LowerCaseAndUpperCase(char Case[200])
{
	
	//loop through the string 
	for(int i = 0; i < strlen(Case); i++){
		//Check if the charcter is lower case
		if(islower(Case[i])){
			//If charcter is lower case substitue for upper case
			Case[i] = toupper(Case[i]);
		//else character is upper case now substitue for lower case
		}else {
			Case[i] = tolower(Case[i]);
		}
	
	}
	
	//now display the string to screen
	printf("%s", Case);
	
	//exit
	return 0;
}


int main(void)
{

	char Case[200];
	
	//get string input from user
	fgets(Case, 200, stdin);
	
	//funtion to convert between chacrter from upper case 
	//to lower case and vice versa.
	LowerCaseAndUpperCase(Case);
	
	return 0;
	
}	
