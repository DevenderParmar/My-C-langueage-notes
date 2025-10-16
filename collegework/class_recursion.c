#include<stdio.h>
void fn(int num)
{
    if (num == 0)
    {
        return;
    }
    fn(num -1);
    printf("%d",num);
    

    
}
int sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n + sum(n-1);
}
int fact(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n *fact(n-1);
}

int sum_of_digit(int n)
{
    if( n == 0)
    {
        return 0;
    }
    return (n%10) + sum_of_digit(n/10);
}

int count (int n){
    if(n == 0){
        return 0;
    }

}
int sumofarray(int arr[],int n,int i )
{
    if(i == n-1)
    {
        return arr[i];
    }
    return sumofarray(arr,n,i+1) + arr[i];
}

int fibo(int n)
{
    if( n == 0 || n==1)
    {
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int num = 5;
    // fn(num);
    int ans = sum(num);
    int ans2 = fact(num);
    int ans4 = fibo(4);

    int ans3 = sum_of_digit(num);
    printf("sum = %d\n",ans);
    printf("fact = %d",ans2);
    printf("sum of digit = %d\n",ans3);
    printf("%d\n",ans4);
}