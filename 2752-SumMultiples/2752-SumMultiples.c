// Last updated: 24/10/2025, 02:30:45
int sumOfMultiples(int n){
    int sum=0;
   for(int i=2;i<=n;i++){
        if(i%3==0||i%5==0||i%7==0){
         sum=sum+i;  
        }   
    }
    return sum;
}