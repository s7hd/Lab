#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int image[10][10][3];
    float grayscale[10][10];

    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            image[i][j][0]=rand() %256;
            image[i][j][1]=rand() %256;
            image[i][j][2]=rand() %256;

            grayscale[i][j]=0.299*image[i][j][0]+0.587*image[i][j][1]+0.114*image[i][j][2];
        }
    }
    printf("Original RGB values and Grayscale values:\n");
    for (int i=0; i<10; i++)
    {
        for (int j=0 ; j<10; j++)
        {
            printf("RGB( %d, %d, %d) -> Grayscale: %.2f\n",
                   image[i][j][0],image[i][j][1],image[i][j][2],grayscale[i][j]);
        }
    }

    return 0;
}

