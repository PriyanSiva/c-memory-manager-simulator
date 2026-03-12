#include <stdio.h>
#include "memory.h"

int main(){

    Block blocks[MAX_BLOCKS];
    int blockCount = 0;

    initializeMemory(blocks, &blockCount);
    displayMemory(blocks, blockCount);
    allocateMemory(blocks, &blockCount, 30);
    displayMemory(blocks, blockCount);
    allocateMemory(blocks, &blockCount, 20);
    displayMemory(blocks, blockCount);
    removeMemory(blocks, blockCount, 30);
    displayMemory(blocks, blockCount);
    removeMemory(blocks, blockCount, 50);
    displayMemory(blocks, blockCount);
    mergeBlock(blocks, &blockCount);
    displayMemory(blocks, blockCount);

    return 0;
}