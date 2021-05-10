/*36. Write a C program to read a password until it is correct. For wrong password print "Incorrect password" and for correct password print "Correct password" and quit the program. The correct password is 1234. Go to the editor
Test Data :
Input the password: 1234
Expected Output:
Correct password
*/
#include <stdio.h>
void main()
{


	int pass1 =1234, pass2;
	printf("Enter password");
	scanf("%d",&pass2);
	if(pass1==pass2)
	{
		printf("Correct Password");
		
	}else
	printf("Incorrect password");
}
