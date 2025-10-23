// Last updated: 24/10/2025, 02:30:55
class Solution {
    public double[] convertTemperature(double celsius) {
       double Kelvin = celsius + 273.15;
       double Fahrenheit = celsius * 1.80 + 32.00;
       double ans[]={Kelvin,Fahrenheit};
       return ans;

    }
}