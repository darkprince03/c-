#include<stdio.h>
int Add(int x, int y) 
{ 
      
    while (y != 0) 
    { 
        
        int carry = x & y;   
   
        x = x ^ y;  
  
        y = carry << 1; 
    } 
    return x; 
} 
  
int main() 
{ 
    printf("%d", Add(21, 35)); 
    return 0; 
} 
