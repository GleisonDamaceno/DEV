# DEV
#the_future
#include <stdio.h>
#include <cs50.h> //Adicionaa biblioteca particular do CS50

int main(void)
{
    string nome = get_string("Qual o seu nome? \n"); // get_string é uma função específica da biblioteca do CS50!
    printf("Hello, %s!\n",nome);
}
