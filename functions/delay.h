#include <stdio.h> 
#include <time.h> 
  
void delay(int segundos) 
{ 
    // conversao para millisegundos 
    int mili_segundos = 1000 * segundos; 
  
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + mili_segundos); 
} 