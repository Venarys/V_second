#include <cstdio>
int main()
{
    int step;
    float dist=0,d0=2;
    scanf("%f",&dist);
    for(step = 1;d0 < dist;step++)
        d0 += 2*0.98;
    printf("%d\n",step);
    return 0;
}