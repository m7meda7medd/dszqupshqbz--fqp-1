#include <stdio.h>
/* Euclidean Algorithm 
 *
 * depends on two facts: 
 * Fact 1: gcd (a, 0) = a
 * gcd (a, b) = gcd (b, r), where r is the remainder of dividing a by b
 *
 * */

int gcd(int a, int b) ;

int main (){
int a = 0, b = 0 ; 
int result = 0 ; 
printf("the format is gcd(a, b)\n");	
printf("enter a: ") ; scanf("%d", &a) ;
printf("enter b: ") ; scanf("%d", &b) ;
result = gcd(a, b);
printf("The GCD is: %d", result); 

}

int gcd(int a, int b){
	int reminder 	= 0 ;  
	if(b == 0){
		/* return the first parameter */
 		return a ; 
	}
	else{
		reminder = a % b ;
		/* recurse gcd with the reminder */
		printf("a= %d, b= %d, reminder= %d\n",a, b, reminder);
		return gcd(b, reminder); 
	}	

return 0 ;
}
