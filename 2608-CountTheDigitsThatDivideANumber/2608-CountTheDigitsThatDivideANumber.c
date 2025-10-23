// Last updated: 24/10/2025, 02:30:52
int countDigits(int num) {
    int val,count=0,t=num;
    while(t>0){
        val=t%10;
        if(num%val==0){
            count++;   
        }
        t=t/10; 
    }
    return count;  
}