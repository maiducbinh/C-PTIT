#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        scanf("\n");
        char s[18];
        gets(s);
        int l = strlen(s);
        if(s[0]==s[l-2]&&s[1]==s[l-1]) printf("YES");
        else printf("NO");
        printf("\n");
    }
}
