#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
    char host[256];
    char name[] = "Andrey";
    char group[] = "IV-623";

    gethostname(host, sizeof(host));
   
    printf("%s\t{%zu}\n%s\t%s\t{%zu}\n", 
            name, strlen(name) + 1, group, 
            host, strlen(group) + 1 + strlen(host) + 1);

    return 0;
}

