#include <stdio.h>


int prev, next;
int all_even = 1;

int main() {
    
    scanf("%d", &next);
    do {
        prev = next;
        if (prev % 2 == 0)
           all_even = 0;
        scanf("%d", &next);
    } while (prev || next);
    
    if (all_even) 
       printf("SI\n");
    else          
       printf("NO\n");
    
    return 0;
}
