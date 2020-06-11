#include <stdio.h>
#include <cs50.h>
#include <unistd.h>

int main(void)
{
    string name = get_string("Whats your name?\n");
    printf("hello, %s\n", name);
    sleep(1);
    int age = get_int("What's your age?\n");
    sleep(1);
    printf("Well, how nice. It's pleasent meeting you\n");
    sleep(2);
    printf("have a nice day!\n");
}