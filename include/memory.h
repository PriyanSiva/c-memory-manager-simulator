#ifndef MEMORY_H
#define MEMORY_H

#define MAX_BLOCKS 20;
#define MEMORY_SIZE = 100;

typedef struct {
    int start;
    int free;
    int size;
} Block;

void initializeMemory(Block blocks[], int *blockCount);
void displayMemory(Block blocks[], int blockCount);

#endif