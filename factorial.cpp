#include "functions.h"
#include <stdio.h>

int factorial(int n){
	if(n<0)
	  {
	    printf("%s","Factorial of negative numbers do not exist");
		return -1;
	}
    if(n!=1)
      {
	return(n * factorial(n-1));
    }
    else return 1;
}
