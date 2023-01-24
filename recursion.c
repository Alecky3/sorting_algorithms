#include <stdio.h>

void draw(int height);
int main(void)
{
    int height;
    printf("Enter height of pyramid:  ");
    scanf("%d", &height);
    draw(height);
    return (0);
}

void draw(int height)
{
    if (height <= 0)
     return 0;
    
    for (int j = 0; j < 2; j++)
    {
    draw(height -1);
    int i;
    for (i = 0; i < height; i++)
    {
        printf("#");
    }
    }
    printf("\n");
}