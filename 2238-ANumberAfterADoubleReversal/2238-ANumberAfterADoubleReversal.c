// Last updated: 24/10/2025, 02:31:04
bool isSameAfterReversals(int num) {
    if(num==0)
    return 1;
    int rem=num%10;
    if(rem==0)
    return 0;
    else return 1;   
}