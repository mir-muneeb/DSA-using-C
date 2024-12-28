#include<stdio.h>

//function declaration or prototype, it tells to compiler user will make function.
void callme();

//main function where a function call.
int main(){

callme();//call function
}

//function definition, where actual code works
void callme(){
    printf("HelloWorld..\n");
}

//this all over function is called user defined function