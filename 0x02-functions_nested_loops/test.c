 #include <stdio.h>

 int main(void)
 {
   char str[3];
   int ch, i, n = 0;
  
   while ((ch = getchar()) != EOF && n < 3)
     str[n++] = ch;
	   
   for (i = 0; i < n; ++i)
     putchar(str[i]);

   putchar('\n'); /* trailing '\n' needed in Standard C */
	
   return 0;
 }
