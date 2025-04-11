int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}



int selectionSort(arr,n){
   
   int i,j,min_value;
   for(i=0 ; i < n-1 ; i++){
     min_value=i;
    for(j=i+1 ; j < n ; j++){
        if(arr[j] < arr[min_value])
          min_value=j;
    }
   swap(&arr[min_value],&arr[i])
   }




}