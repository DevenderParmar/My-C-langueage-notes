#include <stdio.h>
int main(){
    int i = 5;
    printf("the value of i is %d\n",i);
    i= i+5;
    printf("the value of i is %d\n",i);
    printf("the value of i is %d\n",i++); // here we can see that i didnt increased but first printed the value of i.
    printf("the value of i is %d\n",i);
    printf("the value of i is %d\n",++i); // here we can see that i increased but first printed the value of i.
    printf("the value of i is %d\n",i);


    // i++ prints i first and then increment i (Post increment Operator)
    // ++i increment i first and then prints i (Post increment Operator)

    i += 2; // here this is same as i = i+ 2;
    printf("the value of i is %d\n",i);
    i -= 2; 
    printf("the value of i is %d\n",i);
    i *= 2;
    printf("the value of i is %d\n",i);
    i /= 2;
    printf("the value of i is %d\n",i);
    
    
    return 0;
}