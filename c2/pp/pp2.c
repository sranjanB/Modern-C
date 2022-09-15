#include<stdio.h>
int main(void)
{
    int radius = 10;
    float volume;

    volume = 4.0f / 3.0f * 3.141f * radius * radius * radius;

    printf("Volume: %.2f\n",volume);
    return 0;
}
