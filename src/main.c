#include <stdio.h>
#include "memory.h"

int main(){

    Block blocks[MAX_BLOCKS];
    int blockCount = 0;

    int choice;
    int start;
    int size;

    initializeMemory(blocks, &blockCount);

    while(1) {
        printf("\nMemory Manager\n");
        printf("-------------------\n");
        printf("1. Allocate Memory\n");
        printf("2. Free Memory\n");
        printf("3. Display Memory\n");
        printf("4. Merge Free Blocks\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: 
                printf("Enter memory size to allocate: ");
                scanf("%d", &size);
                allocateMemory(blocks, &blockCount, size);
                break;
            
            case 2:
                printf("Enter start address of block to free : ");
                scanf("%d", &start);
                removeMemory(blocks, blockCount, start);
                break;

            case 3:
                displayMemory(blocks, blockCount);
                break;

            case 4:
                mergeBlock(blocks, &blockCount);
                printf("Free blocks merged./n");
                break;

            case 5:
                printf("Exiting program...\n");
                return 0;

            default :
                printf("invalid choice, Try again. \n");
        }
    }
    return 0;
}