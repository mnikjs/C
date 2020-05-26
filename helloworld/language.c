#include <stdio.h>
 
int main()
{
    printf("한글\n");

    char a[256];
    scanf("%s", a);

    printf(" \" %s \" 11한글이다\n", a);
    return 0;
}