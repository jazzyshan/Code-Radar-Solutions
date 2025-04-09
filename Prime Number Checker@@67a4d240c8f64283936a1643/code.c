void isPrime(int num){
   int count=0;
    for(int i=2;i<=num;i++){
        if(num%i==0){
            count++;
        }

    }
    if(count==0){
        printf("1");
    }
    else{
       printf("0");
    }

}