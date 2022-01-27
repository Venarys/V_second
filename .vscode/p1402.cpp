#include <cstdio>
#include <cstring>
using namespace std;
int w1[6000],l1[6000],w2[4000],l2[4000];
int main()
{
    int j1=0,j2=0,i=0;
    for(i = 0;getchar() != 'E';i++){
            if(getchar() == 'W'){
                w1[j1]++;
                w2[j2]++;
            }
            else if(getchar() == 'L'){ 
                l1[j1]++;
                l2[j2]++;
            }
            if((w1[j1]>11 || l1[j1]>11) && (w1[j1]-l1[j1] > 1))
                j1++;
            if((w2[j2]>21 || l2[j2]>21) && (w2[j2]-l2[j2] > 1))
                j2++;
    }

    for(int m = 0;m <= j1;m++)
        printf("%d:%d\n",w1[m],l1[m]);
    printf("\n");
    for(int m = 0;m <= j2;m++)
        printf("%d:%d\n",w2[m],l2[m]);
 
    return 0;
}