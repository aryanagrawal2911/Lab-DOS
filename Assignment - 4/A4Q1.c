#include "hea.h"

int main(int argc, char const *argv[])
{

    pid_t pid = fork();

    if (pid == 0)
    {
        printf("Child (pid %d)\n", getpid());
        while (1)
            ;
    }

    else
    {
        printf("Parent (pid %d)\n", getpid());
        while (1)
            ;
    }

    return 0;
}
