int isPrime(){
    int count=0;
    for(int i=1;i<=num;i++){
        if(sum%i==0){
            count++;
        }
        else{
            continue;
        }
    }
    if(count==2){
        printf("1");
    }
    else{
        printf("0");
    }

}