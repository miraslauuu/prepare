#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int maks(int x, int y){
    if(x > y){
        return x;
    }else{
        return y;
    }
}

int main(){
    srand(time(NULL)); // to generate pseudo random numbers each time

    int rows = 3; // lie b/w 1 to 10
    int cols = 3; // lie b/w 1 to 10
    int max;
    int arr[rows][cols];

    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++)
            arr[i][j] = 1 + (rand() % 100); // lie b/w 1 to 500

    printf("Elementy tablicy: :\n");
    for(int i=0; i<rows; i++) {
        for(int j=0;j<cols;j++) {
            printf("%d ", arr[i][j]);
            if(j==2){
                printf("\n");
            }
        }

    }

    for(int i=1; i<rows+1; i++){
            max=maks(i, i+1);
            printf("Wiersz %d: %d\n", i, max);

    }

    return 0;
}
