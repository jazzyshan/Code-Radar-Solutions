void bubbleSort(int arr[n],int n){
    int i,j,temp;
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-i-1;i++){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}