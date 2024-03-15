#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main()
{

    while (1) {

        int h_h = 0;
        int h_m = 0;
        for (int i = 0; i < 8; i++) {
            int mountain_h;
            scanf("%d", &mountain_h);
            if(h_h < mountain_h){
                h_h = mountain_h;
                h_m = i;
            }
        }

        printf("%d\n", h_m); 
    }

    return 0;
}
