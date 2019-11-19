#include <stdio.h>

int main()
{
    char s[20];
    printf("Enter a string : ");
    gets(s);
    //char s[]={'P','R','O','G','R','A','M'};
    int len = strlen(s);

    for(int i=0 ; i<len ; i++)
    {
        for(int j=0 ; j<len ; j++)
        {
            if(i==j)  
                printf("%c",s[i]);
                
            else if((i+j==len-1))
                printf("%c",s[j]);
                
            else
                printf(" ");
             
        }
        printf("\n");
    }
}
