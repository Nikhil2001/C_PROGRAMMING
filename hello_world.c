#include <stdio.h>
#include <stdlib.h>

/*the above statements are called preprocessor directives.
for example: printf is a function whose definition(what it does to the arguments passed and return code inside printf block)
can be found in stdio.h header file
summary: include to use printf like inbuilt functions


*/
//main() is a function where compiler starts execution
//since its function it take  may take input arguments and return something. here main takes nothing but returns int.

int main(){

    printf("Hello,World!");  //terminate each statement with semi-colon
    return 0;
}

/*use F9 and F10 for compiling and running if using devC++, on linux create a file using gedit or nano or vim and run
gcc -o hello hello_world.c 

and then

./hello

on terminal.

*/
/* output 

Hello,World!

*/
