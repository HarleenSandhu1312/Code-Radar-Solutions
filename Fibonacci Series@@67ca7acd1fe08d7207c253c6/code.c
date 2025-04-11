int fibonacciSeries(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
}
    else{
        for(int i=0;i<n;i++){
            int res=fibonacciSeries(n-1)+fibonacciSeries(n-2);
            printf("%d ",res );
        }
    }
}