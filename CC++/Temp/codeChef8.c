
#include <stdio.h>

typedef struct Worker {
    int c;
    int t;
}worker;


int findMin(worker w[] , int n){
    int c1 = 100000,c2 = 100000,c3 = 100000;
    for(int i =0; i<n; i++){
        if(w[i].t==1){
            if(w[i].c < c1)
                c1 = w[i].c;
        }
        if(w[i].t==2){
            if(w[i].c < c2)
                c2 = w[i].c;
        }
        if(w[i].t==3){
            if(w[i].c < c3)
                c3 = w[i].c;
        }
    }

    if((c1+c2)<c3)
        return c1+c2;
    else
        return c3;
}


int main(void)
{
    int  N;
    scanf("%d",&N);
    if(N>0 && N<1001)
    {
        worker w[N];
        for(int i =0; i<N; i++)
            scanf("%d",&w[i].c);

        for(int i =0; i<N; i++)
            scanf("%d",&w[i].t);

        printf("%d",findMin(w,N));

    }
    return 0;
}


