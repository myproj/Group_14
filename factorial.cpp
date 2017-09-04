#include "functions.h"
#include <stdio.h>

<<<<<<< HEAD
int factorial(int n)
{
    if(n!=1){
=======
int factorial(int n){
	if(n<0)
	  {
	    printf("%s","Factorial of negative numbers do not exist");
		return -1;
	}
    if(n!=1)
      {
>>>>>>> branch1
	return(n * factorial(n-1));
    }
    else return 1;
}
