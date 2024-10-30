#include <stdio.h>
#include <math.h>

int main() {
    int N = 12, i;
    float a = 0.0, b_deg = 60.0;

    // Convert b_deg to radians
    float b_rad = (M_PI * b_deg) / 180.0;
    printf("pi/3 Radians = %f\n", b_rad);
    
    // Sum tan(a) + tan(b) where a and b are in radians
    float area = tan(a) + tan(b_rad);
    printf("\nInitial area (sum at x(0) and x(12)) = %f\n", area);
    
    // Using for loop to calculate area at points x1, x2, ..., x11
    for (i = 5; i < 60; i += 5) {
        float tan_value = tan((M_PI * i) / 180.0);
        // Check for undefined behavior of tangent
        if (tan_value == NAN) {
            printf("tan(%d degrees) is undefined.\n", i);
            continue; // Skip undefined values
        }
        area += 2 * tan_value;
        if (i % 2 == 0) { // Print area for even i values
            printf("New area of x(%d) = %f\n", i / 5, area);
        }
    }

    // Multiply area by (pi/3)/(2*N) after converting to radians 
    float mult_rad = (M_PI * (b_deg - a)) / (2 * N * 180.0);
    area *= mult_rad;

    // Approximated result
    printf("\nTrapezoidal result is: %f\n", area);
    // Actual result (Integral of tan is ln(2))
    printf("Real result is: %f\n", log(2.0));

    return 0; 
}
