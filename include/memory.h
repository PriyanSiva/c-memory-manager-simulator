#ifndef MEMORY_H
#define MEMORY_H

#define MAX_BLOCKS 20
#define MEMORY_SIZE 100

typedef struct {
    int start;
    int free;
    int size;
} Block;

void initializeMemory(Block blocks[], int *blockCount);
void displayMemory(Block blocks[], int blockCount);
void allocateMemory(Block blocks[], int *blockCount, int size);
void removeMemory(Block blocks[], int blockCount, int start);
void mergeBlock(Block blocks[], int *blockCount);

#endif