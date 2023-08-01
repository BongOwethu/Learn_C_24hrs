/* What error messages will you get for the following program 
when you’re trying to compile it?*/

void main()
{
printf (“Howdy, neighbor! This is my first C program.\n”);
return (0);
}

/*
||=== Build: Debug in Exercise (compiler: GNU GCC Compiler) ===|
3|warning: return type of 'main' is not 'int' [-Wmain]|
|In function 'main':|
|5|warning: implicit declaration of function 'printf' [-Wimplicit-function-declaration]|
|5|warning: incompatible implicit declaration of built-in function 'printf'|
|1|note: include '<stdio.h>' or provide a declaration of 'printf'|
|6|warning: 'return' with a value, in function returning void [-Wreturn-type]|
|3|note: declared here|
||=== Build finished: 0 error(s), 4 warning(s) (0 minute(s), 0 second(s)) ===|
||=== Run: Debug in Exercise (compiler: GNU GCC Compiler) ===|
*/
