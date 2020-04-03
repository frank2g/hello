franciscs@Francisc-VirtualBox:~/hello$ cat hello.c 
#include <stdio.h>
#include <stdlib.h>

int main()
{char nume[20];
printf("Care este numele tau?");
scanf("%s",&nume);
    printf("Salut %s ",nume);
    return 0;
}

