#include <stdio.h>
#include <stdlib.h>


void main(){
	
	int a,b,c;
	printf("enter the values of a b and  c : ");
    scanf("%d %d %d",&a,&b,&c);
	if((a>b) && (a>c))
	  printf("%d greater than %d and %d",a,b,c);
	  else if ((a<b) && (a<c))
	        printf("%d less than %d and %d",a,b,c);
	  else 
	      printf("%d lies in between %d and %d",a,b,c);
	
}

/*output:
enter the values of a b and  c : 1 3 5
1 less than 3 and 5
*/
