# include <stdio.h>
 # include <stdlib.h>  
#include <unistd.h>

#include <time.h>

void main() {
   srand(time(NULL));
   int genNum;
   short grid[10][10] = {
      {0,0,0,0,0,0,0,0,0,0},
      {0,0,0,0,0,0,0,0,0,0},
      {0,0,0,0,0,0,0,0,0,0},
      {0,0,0,0,0,0,0,0,0,0},
      {0,0,0,0,0,0,0,0,0,0},
      {0,0,0,0,0,0,0,0,0,0},
      {0,0,0,0,0,0,0,0,0,0},
      {0,0,0,0,0,0,0,0,0,0},
      {0,0,0,0,0,0,0,0,0,0},
      {0,0,0,0,0,0,0,0,0,0}
   };
for (int a = 0; a < 10; a++) {
   for (int b = 0; b < 10; b++) {
        for(int i = 0; i < 10; i++) {
      genNum = (((rand()%2) + 1) - 1);
      grid[a][b] = genNum;
   }
   printf("%d, ", grid[a][b]);
   }
   printf("\n");
}
 

} 
