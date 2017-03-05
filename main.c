
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isprime(int n){
    int i,temp;
    
    if(n==2) return 1;
    if(n%2==0) return 0;
    
    temp=(int)sqrt((double)n);
    for(i=3;i<=temp;i+=2)
        if(n%i==0)
            return 0;
    
    return 1;
}

int prime_number(int lower_bound, int upper_bound){
    
    while(1){
        srand(time(NULL));
        int num = rand() % (upper_bound - lower_bound + 1) + lower_bound;
        if(isprime(num) == 1)return num;
        else continue;
    }
    
}
