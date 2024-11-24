
#include <string.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/time.h>

const int num_bytes = 100 * 1024 * 1024;

bool time_is_even() {
    struct timeval tv;
    gettimeofday(&tv, NULL);

    return ((tv.tv_usec / 100000) % 2) == 0;
}

void busy_wait_for_even() {
    while (1)
        if (time_is_even()) 
            return;
}

void busy_wait_for_odd() {
    while (1)
        if (!time_is_even()) 
            return;
}

void* malloc_thread(void* vargp)
{
    printf("Thread Started\n");

    int *ptr = NULL;
    int i = 0;
    while (1) {
        busy_wait_for_odd();
        ptr = malloc(num_bytes);
        if (ptr == NULL)
        {
            printf("Malloc on odd Failed\n");
            exit(1);
        }
        printf("Odd Round %d\n", i);
        i++;
        memset(ptr, 0, num_bytes);
        // printf("%p\n", ptr);
        busy_wait_for_even();
        free(ptr);
    }
    return NULL;
}

int main()
{
    pthread_t thread_id;
    pthread_create(&thread_id, NULL, malloc_thread, NULL);

    int *ptr = NULL;
    int i = 0;
    while (1) {
        busy_wait_for_even();
        ptr = malloc(num_bytes);
        if (ptr == NULL)
        {
            printf("Malloc on even Failed\n");
            exit(1);
        }
        printf("Even Round %d\n", i);
        i++;
        memset(ptr, 0, num_bytes);
        // printf("%p\n", ptr);
        busy_wait_for_odd();
        free(ptr);
    }

    exit(0);
}