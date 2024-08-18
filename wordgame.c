#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    char ch[100], mask[100], i = 0;
    printf("Player 1 enter your SECRET WORD: ");
    gets(ch);
    system("cls");
    int c = 0;
    for (i = 0; ch[i] != '\0'; i++)
    {
        c++;
    }
    for (i = 0; i < c; i++)
    {
        printf("*");
        mask[i] = '*';
    }
    mask[i] = '\0';
    printf("\n");
    int attempts = c + 5;
    char p2;
    int found = 0;
    while (attempts > 0)
    {
        printf("Attempts left: %d\n", attempts);
        printf("Player 2: ");
        p2 = getche();
        system("cls");
        for (i = 0; i < c; i++)
        {
            if (ch[i] == p2)
            {
                mask[i] = p2;
                found++;
            }
        }
        puts(mask);
        attempts--;
        printf("\n");
        if (found == c)
        {
            printf("Player 2 wins!!");
            break;
        }
    }
    if (attempts == 0)
    {
        printf("Out of attempts, Player 1 wins!!\n");
        printf("The word was: ");
        puts(ch);
    }
    return 0;
}
