#include <stdio.h>

int main()
{
    char str1[100], str2[100], str3[100];

    int i = 0, j = 0;
    printf("Enter the first String : ");
    scanf("%[^\n]", str1);
    printf("Enter the second String : ");
    scanf(" %[^\n]", str2);

    while(str1[i]==str2[i] && str1[i]!='\0' && str2[i]!='0')
        i=i+1;

    if(str1[i]=='\0' && str2[i]=='\0')
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}

