#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Step ( 1 ) : Prompt the user for Pyramid Size

    int size = get_int("Size:    ");



    // Step ( 2 ) : Draw the Pyramid (Hint* : Use nested for loop)

   for(int i=0;i<size;i++)
   {
    for(int j=0;j<=i;j++)
    {
        printf("#");
    }


       printf("\n");
   }

}




/*

This is what the output should look like. :
./pyramid
Size: 4
   #
  ##
 ###
####


*/
