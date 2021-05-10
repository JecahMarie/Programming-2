#include<stdio.h>
#include<string.h>
//String convertion of vowels to uppercase.
int main()
{
//Variables
    char str[200];
    int i,v=0,c=0,s=0;

//get user input
    printf("Input a Sentence: ");
    fgets(str,sizeof(str),stdin);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='a'|| str[i]=='A'||
           str[i]=='e'|| str[i]=='E'||
           str[i]=='i'|| str[i]=='I'||
           str[i]=='o'|| str[i]=='O'||
           str[i]=='u'|| str[i]=='U')
         {
        v++;
        str[i]=str[i]-32;

        }
       else if(str[i]== ' ')
        {
        s++;
        }
        else
        c++;

    }
//Printing of results
    printf("String Converted:");
    puts(str);
    printf("String Length: %zu\0",strlen(str));
    printf("Vowels: %d",v);
    printf("\Consonants: %d\0",c-1);





    return 0;
}
