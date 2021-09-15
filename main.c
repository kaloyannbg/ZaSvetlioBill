#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



#define ROWS 3
#define FOOD_LENGTH 10


    char foods[ROWS][FOOD_LENGTH] = {
                                        {'z', 'a', 'e', 'k', '\0' },
                                        {'a', 'g', 'n', 'e', '\0' },
                                        {'b', 'o', 'r', 'o', 'v', 'i','n','k','a', '\0' },


                                    };

int main() {


    int i, j;

    char tempFood[FOOD_LENGTH];

    for(i = 0; i < ROWS; i++) {

        for(j = i + 1; j < ROWS; j++) {

            if(foods[i][0] > foods[j][0]) {

                strcpy(tempFood, foods[i]);

                strcpy(foods[i], foods[j]);

                strcpy(foods[j], tempFood);

            }

        }

    }

    for(i = 0; i < ROWS; i++) {

        for(j = 0; j < FOOD_LENGTH; j++) {

            printf("[%c]", foods[i][j]);

        }


            printf("\n");
    }


    return 0;
}
