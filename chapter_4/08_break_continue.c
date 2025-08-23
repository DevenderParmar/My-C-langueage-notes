#include <stdio.h>
int main(){
    for(int i = 0;i < 15;i++)
    {
        printf("i is %d\n",i);
        if (i == 10)
        continue; // exits the iteration.
        //break; // exits the loop.
    }
  return 0;
}
