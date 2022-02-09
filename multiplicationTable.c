#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //DECLARATION
     int num = 0;
     int multiplication = 0;
     int loop = 0;

     // ASSIGNMENT (INPUT)
     printf ("%s\n", "Type a number to see its times table:");
     scanf ("%d", & num);
     printf ("--------------\n");

     //PROCESSING
     if (num == 0)
     {
         printf ("%d for 0 = 0.", num);
     }
     else
     {
         while (loop <10)
         {
             loop ++;
             multiplication = num * loop;
             printf("%d\t", multiplication);
         }
         printf ("\n--------------\n");
     }

    printf("\n");

    system("PAUSE");
    return 0;

}
