/*
 * hickerrank.c
 *
 *  Created on: 24-Jul-2020
 *      Author: rojarfast
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
int main() {

    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.

     int sum = 0;
     int rem = 0;

     if(10000 <= n && n <= 99999)
     {
         for (; n > 0 ;) {
             rem = n %10;
             sum = sum + rem;
             n = n/10;
            }

     }
     printf ("%d", sum);
    return 0;
}
*/




/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

void calculate_the_maximum(int n, int k) {
  //Write your code here.
int i , j;
int tempAnd = 0 , tempOr = 0 , tempXor = 0;

for (i = 1 ; i <= n ; i++) {

   for (j = i +1 ; j <= n ; j++) {

      if (tempAnd < (i&j) && (i&j) < k) {
         tempAnd = (i&j);
      }
      if (tempOr < (i|j) && (i|j) < k) {
               tempOr = (i|j);
      }
      if (tempXor < (i^j) && (i^j) < k) {
               tempXor = (i^j);
      }
   }

}
printf("%d\n%d\n%d\n", tempAnd , tempOr , tempXor);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}

*/

/*#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
   // Complete the code to print the pattern.

   int i, j ;
   int len = (n * 2) - 1;

   for (i = 1 ; i <=len  ; i++) {

      for (j = 1 ; j <= len ; j++) {

         if (i == 1 || i == len || j == 1 || j == len)
         {
            printf("%d ", n);
         }
         else if (i == 2 || i == len - 1 || j == 2 || j == len - 1) {
            printf("%d ", n-1);
         }
         else if (i == 3 || i == len - 2 || j == 3 || j == len - 2) {
            printf("%d ", n-2);
         }
         else if (i == 4 || i == len - 3  || j == 4 || j == len - 3 {
            printf("%d ", n-3);
         }
         else if (i == 5 || i == len - 4 || j == 5 || j == len - 4 {
                     printf("%d ", n-4);
                  }
         else if (i == 6 || i == (n*2 -5 || j == 6 || j == (n*2) - 6) {
                              printf("%d ", n-5);
                           }
         else if (i == 7 || i == (n*2 -7) || j == 7 || j == (n*2) - 7) {
                              printf("%d ", n-6);
                           }
         else {
            printf ("* ");
         }

      }
      printf("\n");
   }
    return 0;
}*/

/*
int main()
{
int n;
scanf ("%d", &n);
int len = n*2 - 1;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
return 0;

}

*/


/*

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     Enter your code here. Read input from STDIN. Print output to STDOUT
int n, i ;
int sum = 0 ;
    scanf("%d", &n);
    int google[n];
    for (i = 0 ; i < n ; i++) {
        scanf("%d", &google[i]);
    }

    for (i = 0 ; i < n ; i++) {
        sum += google[i];
    }
    printf ("%d", sum);
    return 0;
}
*/


/*int main()
{

   int input, *youtube, i;
  int temp;

   scanf("%d", &input);

   if (1 <= input <= 1000) {

   youtube = (int*)malloc(input * sizeof(int));

   for ( i = 0 ; i < input ; i++) {

      scanf ("%d", youtube + i);
}

   for ( i  = 0; i < input/2 ; i++) {

      temp = *(youtube + input - i - 1);
      *(youtube + input - i - 1) = *(youtube + i);
      *(youtube + i) = temp;

   }

   for ( i = 0 ; i < input ; i++) {

         printf ("%d ", *(youtube + i));

      }
   }
return 0;
}*/


/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int i, j;
    int count = 0;
    int temp = 0;

    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);

    s = realloc(s, strlen(s) + 1);

for (i = 0 ; s[i]!= '\0' ; i++) {

   if (s[i] == ' ') {

      s[i] = '\n';
   }
}

printf("%s", s);
printf("\n");

}
*/

// Digit Frequency

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

   char *s;
   int count = 1;
   int i ,j;
   s = malloc(1024 *sizeof(char));

   scanf("%[^\n]", s);


   for (i = 0 ; s[i] != '\0' ; i++) {

      if (s[i] >= '0' || s[i] <= '9') {

         for ( j = i + 1 ; s[j] != '\0' ; j++) {

         if(s[i] == s[j])
         {
            count++;
         }

         }
         printf("%d ", count);
         count = 1
      }
   }

    return 0;
}











