#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char flag='0'; 
    char arr[16]; // buffer size is too small
    char *ptr;
    ptr = getenv("PWD"); // an unset environment variable
    printf("%zu %zu\n", (size_t)(&flag), (size_t)(&(arr[0])));
    if(ptr != NULL)
    {
        sprintf(arr, "Present working directroy is: %s\n", ptr);
        printf("%s", arr);
    }
    if(flag == 0) 
    {
        printf("Flag is not here\n");
    } else 
    {
        printf("Flag is here\n");
    }
    return 0;
}