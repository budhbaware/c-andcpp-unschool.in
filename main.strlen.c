#include <stdio.h>
#include <string.h>
int main()
{
    char a[20]="Bhushan";
    char b[20]={'U','n','s','c','h','o','o','l','\0'};

    printf("Length of string a = %ld \n",strlen(a));
    printf("Length of string b = %ld \n",strlen(b));

    return 0;
}
