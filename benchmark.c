#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_ALLOCS 8092
#define ALLOC_SIZE (1024 * 1024 * 128) // 1 MB

int main() {
    clock_t start, end;
    double total_time;
    
    for (size_t i = 0; i < NUM_ALLOCS; i++)
    {
        start = clock();

        void *mem = malloc(ALLOC_SIZE);
        if (mem == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            return 1;
        }
        end = clock();
        free(mem);
        total_time += ((double) (end - start)) / CLOCKS_PER_SEC;
    }

    printf("%.9f\n", total_time / NUM_ALLOCS);

    return 0;
}