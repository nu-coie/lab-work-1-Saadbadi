#include <stdio.h>
#include <cs50.h>


int main(void)
{
// Accept Input From user (char), where (a) stands for "Addition", (m) for "Multiplications," and (d) for "Division,"

char input = get_char("op:   ");
 int x = get_int("X:   ");
int y = get_int("Y:    ");

if (input == 'a' || input == 'A')
{
    int z = x + y;
    printf("%i\n",z);
}



}
