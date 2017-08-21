
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool arr[2] = {true, false};

bool StringCheck(char Word[200])
{
    
	int n = strlen(Word);
	
	//Compare first character to last character
	//if they are equal then it is a palindrome.
	if(Word[0] == Word[n - 1])
		return true;
	else
		return false;
}

int main(void) {
	
	
	char Word[200];
	
	
	//get input from user
	fgets(Word, 200, stdin);
	
	//if TRUE display Yes, as its a palindrome
	//else display FALSE.
	if(StringCheck(Word) == true)
		printf("YES");
	else
		printf("NO");
		
	//exit	
	return 0;
}
