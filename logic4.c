// To calculate Compound Interest
#include <stdio.h>
#include <math.h>  // Required for pow()

int main() {
    double principle, rate, time;

    // Input principal amount
    printf("Enter the amount of principal: ");
    scanf("%lf", &principle);  // %lf for double

    // Input rate of interest
    printf("Enter the value of rate: ");
    scanf("%lf", &rate);

    // Input time duration
    printf("Enter the duration of time (in years): ");
    scanf("%lf", &time);

    // Calculating Compound Interest
    double amount = principle * pow((1 + rate / 100), time);
    double CI = amount - principle;

    printf("The value of Compound Interest is: %.2lf\n", CI);

    return 0;
}
//   It Will Be Work Like A cHARM;