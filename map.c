#include "stdio.h"

void printMap();

int main(void) {

    printMap();
}

void printMap() {
    for(int i=0 ; i < 10 ; i+=1) {
        for(int j=0 ; j < 20 ; j +=1) {
            if(i==0 || i==9) {
                printf("-");
            } else if(j==0 || j==19) {
                printf("|");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}