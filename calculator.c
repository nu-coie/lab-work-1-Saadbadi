#include <stdio.h>
#include <cs50.h>


int main(void)
{
// Accept Input From user (char), where (a) stands for "Addition", (m) for "Multiplications," and (d) for "Division,"

char input = get_char("op:   ");
 long x = get_long("X:   ");
long y = get_long("Y:    ");

if (input == 'a' || input == 'A')
{
    long z = x + y;
    printf("%li\n",z);
}


}
