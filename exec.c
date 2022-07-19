#include <stdio.h>
int main()
{
    int pid;
    char *args[] = {"/bin/ls", "-l", 0};
    printf("\nParent Process");
    pid = fork();
    if (pid == 0)
    {
        execv("/bin/ls", args); printf("\nChild process"); 
    }
else {
            wait();
            printf("\nParent process");
            exit(0);
}
    }
