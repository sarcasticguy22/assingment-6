#include<stdio.h>

    int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        A[i]=1;
    }
    for(int j=2;(2*j)<n ; j++){
       
            A[2*j]=0;
        

    }
    for(int k=2; (3*k)<n; k++){
       
            A[3*k]=0;
    
        
    }
    for(int l=2; (5*l)<n; l++){
      
            A[5*l]=0;
        }
        
    

    for(int m=2;m<n;m++){
        if(A[m]==1)
        printf("%d\n",m);

    }
return 0;
}
