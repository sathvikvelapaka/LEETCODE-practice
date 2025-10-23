// Last updated: 24/10/2025, 02:30:46
int findDelayedArrivalTime(int arrivalTime, int delayedTime)
{
    
    int output;
    output=(arrivalTime+delayedTime);
    if(output<24)
    {
        return output;
    }
    else
    {
        output=(output%24);
        return output;
    }
}