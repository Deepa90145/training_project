
#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <pthread.h> 

// Let us create a global variable to change it in threads 
int g = 0; 

// The function to be executed by all threads 
void *ThreadFun1(void *var) 
{ 
    for(int i=0;i<3;i++){
    g++;
    sleep(1);
    printf("Executing thread 1: %d\n",g);
} }
void *ThreadFun2(void *var) 
{ 
   for(int i=0;i<3;i++){ 
    g++;
    sleep(1);
    printf("Executing thread 2: %d\n",g);
}}


int main() 
{ 
    int i; 
    pthread_t t1;
    pthread_t t2;
    pthread_create(&t1, NULL, ThreadFun1, NULL); 
    pthread_create(&t2, NULL, ThreadFun2, NULL);
    pthread_join(t1,NULL);

    pthread_exit(NULL); 
    return 0; 
} 
