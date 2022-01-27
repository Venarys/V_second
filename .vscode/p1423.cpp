#include <cstdio>
int main()
{
    int step;
    float dist=0,dt=2,d0=0;
    scanf("%f",&dist);
    for(step = 1;d0 < dist;step++){
        d0 += dt;
        dt *= 0.98;
    }
    printf("%d\n",--step);
    return 0;
}