#include<stdio.h>
#include<pthread.h>
#include <unistd.h>
#include <stdlib.h>

void *threadFun(void *vargp) 
{ 
    sleep(1); 
    printf("Thread executing\n"); 
    return NULL; 
} 

int main() 
{ 
    pthread_t thread_id; 
    printf("Before Thread\n"); 
    pthread_create(&thread_id, NULL, threadFun, NULL); 
    pthread_join(thread_id, NULL); 
    printf("After Thread\n"); 
    exit(0); 
}
