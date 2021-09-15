#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



#define ROWS 4
#define FOOD_LENGTH 15


    char foods[ROWS][FOOD_LENGTH] = {

                                        {'z', 'u', 'p', 'p', 'a', ' ','t','o','s', 's', 'c', 'a', 'n', 'a', '\0' },
                                        {'z', 'a', 'e', 'k', '\0' },
                                        {'a', 'g', 'n', 'e', '\0' },
                                        {'b', 'o', 'r', 'o', 'v', 'i','n','k','a', '\0' }


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

    int tempSquares;

    for(i = 0; i < ROWS; i++) {

        for(j = 0; foods[i][j] != '\0'; j++) { // foods[i][j] != '\0' like j < atrlen(foods[i])

            printf("[%c]", foods[i][j]);


        }

        tempSquares = FOOD_LENGTH - strlen(foods[i]);

            for(int z = 0; z < tempSquares + 5; z++) {
                printf("[ ]");
            }

        printf("\n");
    }


    return 0;
}
