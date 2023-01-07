#include<stdio.h>
#include<math.h>
float mean(int A[],int n){
    int c;
    float d;
    c=0;
    for(int i=0;i<n;i++){
        c= c+A[i];
        
    }
    d= c/n;
    return d;
}

float variance(int A[],int n){
    int c;
    float d;
    c=0;
    for(int i=0;i<n;i++){
    c= c+((A[i]-mean(A,n))*(A[i]-mean(A,n)));
    }
    d= (float)c/n;
    return d;
}

float std_dev(int A[],int n){
    float c;
    c= sqrt(variance(A,n));
    return c;


}

    int main(){
    int array[5]= {27,24,2,14,3};
    printf("the mean is %f\n",mean(array,5));
    printf("the varience is %f\n",variance(array,5));
    printf("the standard deviation is %f\n",std_dev(array,5));

return 0;
}
