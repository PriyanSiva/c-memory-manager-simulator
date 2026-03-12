#include <stdio.h>
#include "memory.h"

void initializeMemory(Block blocks[], int *blockCount) {
    blocks[0].start = 0;
    blocks[0].size = MEMORY_SIZE;
    blocks[0].free = 1;

    *blockCount = 1;
}

void displayMemory(Block blocks[], int blockCount) {
    int i;

    printf("\nMemory Blocks:\n");
    printf("----------------------------------\n");
    printf("Start\tSize\tStatus\n");
    printf("----------------------------------\n");

    for(i=0; i < blockCount; i++){
        printf("%d\t%d\t%s\n",
        blocks[i].start,
        blocks[i].size,
        blocks[i].free ? "Free" : "Allocated");
    }

    printf("----------------------------------\n");

}

void allocateMemory(Block blocks[], int *blockCount, int size){
    for(int i = 0; i < *blockCount; i++){
        if(blocks[i].free && blocks[i].size >= size){
            
            Block newBlock;

            newBlock.size = blocks[i].size - size;
            newBlock.start = blocks[i].start + size;
            newBlock.free = 1;

            blocks[i].size = size;
            blocks[i].free = 0;

            blocks[*blockCount] = newBlock;
            (*blockCount)++;

            printf("Allocated %d units at %d \n", size, blocks[i].start);

            return;
        }

        printf("Nor enough memory available\n");
    }
}

void removeMemory(Block blocks[], int blockCount, int start) {
    for(int i = 0; i < blockCount; i++){
        if(blocks[i].start == start) {
            if(blocks[i].free) {
                printf("Block is already free at %d\n", start);
            } else {
                blocks[i].free = 1;
                printf("Free memory at %d\n", start);
            }
            return;
        }
        printf("No blocks found at %d\n", start);
    }
}