#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    int N[T];
    for(int i=0;i<=T;i++){
        scanf("%d",&N[i]);
    }
    for(int i=0;i<=T;i++){
        if(N[i]<10)
        
        {
        printf("YES\n");
    }
    else{
      printf("No\n");
    }
    }
    return 0;
}