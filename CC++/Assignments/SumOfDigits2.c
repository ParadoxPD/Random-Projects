


#include <stdio.h>

int sum(int);
int main()
{
    int  N;
    printf("Enter a number : ");
    scanf("%d", &N);
    printf("Answer : %d",sum(N));

    return 0;
}


int sum(int n)
{

   int res;
   while(n>0){
    res+=n%10;
    n/=10;
   }

   return res;

}
