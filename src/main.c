#include <stdio.h>
#include "memory.h"

int main(){

    Block blocks[MAX_BLOCKS];
    int blockCount = 0;

    initializeMemory(blocks, &blockCount);
    displayMemory(blocks, blockCount);

    return 0;
}