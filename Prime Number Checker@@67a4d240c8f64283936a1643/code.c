int isPrime(int num){
   int count=0;
    for(int i=2;i<=num;i++){
        if(num%i==0){
            count++;
        }

    }
    if(count==0){
       return printf("1");
    }
    else{
      return printf("0");
    }

}