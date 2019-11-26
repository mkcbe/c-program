#include<stdio.h>

int main()
{
    int *nums = (int*) calloc(10 , sizeof(int));
    int *sletters = (int*) calloc(26 , sizeof(int));
    int *cletters = (int*) calloc(26 , sizeof(int));
    char c;
    int i,j,k;

    while(scanf("%c", &c) == 1)
    {
        if(c >= '0' && c <= '9')
            (*(nums+(c-'0')))++;
        else if(c >= 'a' && c <= 'z')
            (*(sletters+(c-'a')))++;
        else if(c >= 'A' && c <= 'Z')
            (*(cletters+(c-'A')))++;
        i++;
    }

    for( i = 0; i < 10; i++)
        printf("%d : %d \n",i,*(nums+i));
    printf("\n");
    for( j = 0; j < 26; j++)
        printf("%c : %d \n",j+'a',*(sletters+j));
    printf("\n");
    for( k = 0; k < 26; k++)
        printf("%c : %d \n",k+'A',*(cletters+k));

    return 0;
}
