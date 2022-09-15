#include<stdio.h>
int main(void)
{
    int radius;
    float volume;

    printf("Radius: ");
    scanf("%d",&radius);
    volume = 4.0f / 3.0f * 3.141f * radius * radius * radius;

    printf("Volume: %.2f sqcm\n",volume);
    return 0;
}
