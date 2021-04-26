#include <cs50.h>
#include <stdio.h>

int get_positive_int(string promptpos);
int get_positive_int2(string rep);
void print_pyramid(int height);

int main(void)
{
    //Promt the user for the height
    int height  = get_positive_int("Height: ");

    //Promts user for repetitions
    int rep = get_positive_int("Repetitions: ");

    //Print the #, x times, according to the height
    for (int i = 0; i < rep; i++)
    {
        print_pyramid(height);
        printf("\n");
    }
}

// Promt user for positive int
int get_positive_int(string promptpos)
{
    int n;
    do
    {
        n = get_int("%s", promptpos);
    }
    while (n < 1 || n > 8);
    return n;
}

//Prompts user for repetitions.
int get_positive_int2(string rep)
{
    int n;
    do
    {
        n = get_int("%s", rep);
    }
    while (n < 1 || n > 3);
    return n;
}

//Prints the pyramid
void print_pyramid(int height)
{
    for (int i = 0; i < height; i++)
    {
        //Prints the first part of the pyramid.
        for (int j = 0; j < height; j++)
        {
            if (i + j > height - 2)
                printf("#");
            else
                printf(" ");
        }
        //Prints two blank spaces.
        printf("  ");

        //Prints the second part of the pyramid.
        for (int u = 0; u < height ; u++)
        {
            if (i + u > height - 2)
                printf("#");
        }
        printf("\n");
    }
}
