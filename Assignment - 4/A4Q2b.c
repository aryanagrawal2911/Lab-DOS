#include "hea.h"

int main()
{
    if (vfork() == 0)
    {
        printf("child 1\n");
        _exit(0);
    }
    else
        printf("2\n");

    printf("3\n");

}