#include <stdio.h>

void main(void)
{
    int V1[4] = {2, 3, 4, 7}, V2[4] = {6};
    int *AX, *AY;
    int i;
    int *ptr;

    for(ptr = &V1[2],i = 0; i<4; i++ )
    {
       *ptr +=1;
    }
    for(i = 0,ptr = &V1[0]; i<4; i++)
    {
        printf("\nV1[%d]=%d",i,*ptr);
    }
    return;
    printf("\n------------ 1 -----------");
    for(int i = 0;i<4;i++)

    {
        printf("\nV1[%d]=%d",i,V1[i]);
    }

    printf("\n");
    for (int i = 0;i<4;i++)

    {
        printf("\nV2[%d]=%d",i,V2[i]);
    }

    AX = &V1[3];
    AY = &V2[2];
    V1[V2[0] - V1[2]] = *AY;
    *AY = *AX - V1[0];
    printf("\n------------ 1 -----------");
    for(int i = 0;i<4;i++)

    {
        printf("\nV1[%d]=%d",i,V1[i]);
    }

    printf("\n");
    for (int i = 0;i<4;i++)

    {
        printf("\nV2[%d]=%d",i,V2[i]);
    }


    printf("\nV1[0]=%d   V1[1]=%d   V1[2]=%d   V1[3]=%d \tV2[0]=%d   V2[1]=%d   V2[2]=%d   V2[3]=%d", V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);
    V2[1] = ++*AX;
    V2[3] = (*AY)++;
    *AX += 2;
    printf("\nV1[0]=%d   V1[1]=%d   V1[2]=%d   V1[3]=%d \tV2[0]=%d   V2[1]=%d   V2[2]=%d   V2[3]=%d", V1[0], V1[1], V1[2], V1[3], V2[0], V2[1], V2[2], V2[3]);
    return 0;
}
