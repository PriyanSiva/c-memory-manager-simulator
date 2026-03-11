#include <stdio.h>
#include "memory.h"

void intializeMemory(Block blocks[], int *blockCount) {
    blocks[0].start = 0;
    blocks[0].size = MEMORY_SIZE;
    blocks[0].free = 1;

    *blockCount = 1;
}

void displayMemory(Block blocks[], int blockCount) {
    int i;

    printf("\nMemory Blocks:\n");
    printf("----------------------------------\n");
    printf("Start\tSize\tStatus\n")
    printf("----------------------------------\n");

    for(i=0; i < blockCount; i++){
        printf("%d\t%d\t%s\n",
        blocks[i].start,
        blocks[i].memory,
        blocks[i].free ? "Free" : "Allocated");
    }

    printf("----------------------------------\n");

}