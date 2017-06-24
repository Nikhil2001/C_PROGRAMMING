#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char string1[] = "nikhil";
  char string2[] ="reddy";
  char string3[] = "nikhil mara";
  int len,cmp;
  
  //string functions 
  len=strlen(string3);
  printf("the length of the string %s is %d \n",string3,len);
  //prints length of string
  strcat(string1,string2);
  printf("strcat(string1,string2) changes string1 to  %s \n",string1 );
  
  strcpy(string1,string2);
  //string 1 is changed but doesnt matter as string2  replaces string1 
  printf("strcpy(string1,string2) changes string1 to  %s \n",string1 );
  
  cmp=strcmp(string1,string2); //both are same as string1 is replaced by string2
  printf("%d \n",cmp);   //  prints 0 as string1 == string3
  
  cmp=strcmp(string1,string3);  //  prints 1 as string1 < string3
  printf("%d \n",cmp);
  cmp=strcmp(string3,string1);
  printf("%d \n",cmp); //  prints -1 as string3 > string1 
  return 0;
}


/* output:
 the length of the string nikhil mara is 11
 strcat(string1,string2) changes string1 to  nikhilreddy
 strcpy(string1,string2) changes string1 to  reddy
 0
 1
 -1
*/
