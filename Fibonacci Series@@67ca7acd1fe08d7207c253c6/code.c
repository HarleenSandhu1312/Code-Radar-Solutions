int fibonacciSeries(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    else{
        int res=(n-1)+(n-2);
        printf("%d ",res );
    }
}