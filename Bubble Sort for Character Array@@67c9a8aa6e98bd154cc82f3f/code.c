int bubbleSort(int arr[100],int n){
    int num[100],temp;
    for(int i=0;i<=n;i++){
    
    num[i]=(int)arr[i];
    
    }
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-i-1;j++){
            if(num[j]>num[j+1]){
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    

for(int i=0;i<=n;i++){
    
    arr[i]=(int)num[i];
    
    }


}

void printArray(int arr,int n){

    for(int i=0;i<=n;i++){
   
    printf("%c",arr[i]);
    
    }

}