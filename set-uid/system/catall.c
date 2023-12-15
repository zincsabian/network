/*catall.c*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    char *cat="/bin/cat";
    if(argc < 2)
    {
        printf("please type a file name.\n");
        return 1;
    }
    char *command = malloc(strlen(cat) + strlen(argv[1]) + 2);
    sprintf(command, "%s %s", cat, argv[1]);
    printf("%s\n", command);
    system("echo $$");
    system(command);
    return 0;
}

/*
    在ubuntu中set-uid如果在子进程中执行， 访问需要权限的文件会出现失败的情况
    但是如果直接cp一个cat然后改成自己的name就不会
*/