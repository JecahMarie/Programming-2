#include <stdio.h>
#include <string.h>
// Reversed word order on the inputted data from the user.
int string_length(char s[]) {
   int i = 0;

   while(s[i]!='\0')
      i++;

   return i;
}
//Variables
void string_reverse(char st[]) {
   int i,j,len;
   char ch;

   j = len = string_length(st) - 1;
   i = 0;

   while(i < j) {
      ch = st[j];
      st[j] = st[i];
      st[i] = ch;
      i++;
      j--;
   }
}

int main (void) {
   char strn[100];
//Get user sentence
   printf("Enter sentence: ");
   fgets(strn,sizeof(strn),stdin);



   char reverse[100] = "", temp[50];
   int i, j, n;

   n = strlen(strn)-1;

   for(i = n-1; i >= 0; --i) {

      for(j = 0; i >= 0 && strn[i] != ' '; --i,++j)
         temp[j] = strn[i];

      temp[j] = '\0';

      string_reverse(temp);

      strcat(reverse,temp);
      strcat(reverse," ");
   }

   printf("Original - %s\0", strn);
   printf("Reversed - %s\n",reverse);

   return 0;
}
