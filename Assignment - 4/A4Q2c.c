#include "hea.h"

int main()
{
    pid_t pid;

    int i = 5;
    pid = fork();

    i = i + 1;

    if (pid == 0)
    {
        printf("Child: %d\n", i);
    }
    else
    {
        wait(NULL);     // Meant to prevent the parent process from terminating before the child.
        printf("Parent : %d\n", i);
    }
    return 0;
}