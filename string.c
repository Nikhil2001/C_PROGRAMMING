#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char nikhil[] = "nikhil";
  char name[7] = {'n','i','k','h','i','l','\0'}; //terminate with null operator
  int len;
  //the above are two different ways of defining and initializing strings
  
  printf("%s \n",name);
  printf("%s \n",nikhil);
  len =strlen("hello nikhil !");
  printf("%d \n",len); //length of string
  return 0;
}


/* output:

nikhil 
nikhil
14

*/
