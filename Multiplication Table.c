#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

void main() {
    long entry;
    long upTo;
    while(entry) {
    printf("Enter a number: ");
    scanf("%d", &entry);
    printf("Up to how much do you want to multiply?");    
    scanf("%d", &upTo);
    for (int i = 1; i <= upTo; i++) {
        printf("%d x %d = %d\n", entry, i, entry * i);
    }
    }

}