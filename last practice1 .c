#include <stdio.h>

//Ading the colors for Text output
#define red "\x1b[31m"
#define green "\x1b[32m"
#define yellow "\x1b[33m"
#define blue "\x1b[34m"
#define reset "\x1b[0m"

int main(){
	
//	declaring the veriables 
	int countinuecal = 1 ;
	double n1 , n2 , result ;
	char operators ;


//	dispaying the welcome message
	printf(yellow);
	printf("\n\n ------------- C A L C U L A T O R ------------- \n");
	printf(reset);
	printf(red);
	printf("                   ITx Data Defender");
	printf(reset);
//closing the header section 

while (countinuecal)
{

//	asking for selecting the numbers 

	printf(yellow);
	printf("\n\n Enter the First Number : ");
	printf(reset);	
	scanf(" %lf", &n1);
	
	printf(yellow);
	printf("\n\n Select : ( / * - + )  : ");
	printf(reset);
	scanf(" %c", &operators);
			
	printf(yellow);
	printf("\n\n Enter the Second Number : ");
	printf(reset);
	scanf(" %lf", &n2);	
	
//now ading the swictch function 

	switch (operators)
	{
		case '+':
		result = n1 + n2 ;
	 	break;
	 	
		case '-':
		result = n1 - n2 ;
	 	break;
		 
		 
	    case '*':
		result = n1 * n2 ;
	 	break;	
		 
		 case '/':
		 	if (n2==0)
		 	{
		 		printf("ERROR : Devide By zero is not allowed !");
			 }
		result = n1 / n2 ;
	 	break;	
		  	
	}
	
	printf(green);
	printf("\n\n Answer : %lf", result);
	printf(reset);
	
	printf(red);
	printf("\n\n press 1 to continue press 0 to stop  : ");
	printf(reset);
	scanf(" %d", &countinuecal);
}
if (countinuecal==0)
{

	printf(green);
	printf("\n\n Thanks for Using this Calculator \n\n");
	printf(reset);
	
}
	
	return 0 ;
}
