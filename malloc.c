#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main(){
	
	char *p,*q;
	
	p=malloc(200*sizeof(char));  //allocates array of 200 bytes
	q=calloc(200,sizeof(char));  //same
	strcpy(p,"nikhil reddy mara \n");
	strcpy(q,"student \n");
    printf("%s",p);
    printf("%s",q);
    free(p);
    free(q);
}

/*output:
nikhil reddy mara
student
*/
