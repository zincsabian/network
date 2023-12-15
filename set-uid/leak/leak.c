#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() 
{
    int fd;
    char *v[2];

    fd = open("/etc/zzz", O_RDWR | O_APPEND);
    
    if (fd == -1) 
    {
        printf("Cannot open /etc/zzz\n");
        exit(0);
    }

    printf("fd is %d\n", fd);
    int id = getuid();
    printf("getuid: %d\n", id);
    setuid(id);
    printf("getuid: %d\n", getuid());

    v[0] = "/bin/bash";
    v[1] = 0;
    execve(v[0], v, 0);

    // This part will only be reached if execve fails
    perror("execve"); // Print an error message
    exit(EXIT_FAILURE);
}