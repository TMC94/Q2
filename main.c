#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numbers[7] = { 28.7, 31.9, 40.01, 33.5, 40.02, 29.4, 28.07 };
      int a, b;

    for (a = 0; a <7; a++)
    for (b = 0; b <7; b++)
    if (numbers[a] + numbers[b] == 61.3f)
    printf("%.1f and %.1f = 61.3", numbers[a], numbers[b]);

    return 0;
}
