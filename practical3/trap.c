#include<stdio.h>
#include<math.h>  //For tan function

int main(void)
{
    int N = 12;  // 11 equidistant points
    float a = 0;     
    float b = 60; //in Degree(Inferenced from pi/3 = 180/3 = 60)
    
    float b_rad;
    b_rad = (M_PI * b) / 180; // formula to covert to radians

    float sum = tan(a) + tan(b_rad);

    int i;
    for (i = 5; i < 60; i = i + 5)                    //i = 5 as 12 points meaning 60/12=5, which is the starting point and the increment factor as well!
    {
        sum = sum + 2*tan(i*M_PI/180);                //This sum is the computation of the 12 terms that are summing up together 
    }
    sum = ((b_rad-a) / (2 * N)) * sum;               // multipling the b-a/2N term with the sum as per the equation

    printf("The final value of the sum is %f\n", sum);
    printf("The actual value is %f\n", logf(2));      // Comparing with the actual value that is log2

    float abs_diff = fabs(sum - logf(2));
    float rel_diff = fabs(1 - (sum / logf(2))); 

    printf("abs_diff = %f\n rel_diff = %f\n", abs_diff, rel_diff);
 
    
    return 0;
}