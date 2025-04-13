#include <stdio.h>
#define NUM_ROWS 12

double convertBTCtoCHF(double chf, double rate) {
    return chf / rate;
}

int main() {
    double chf = 200;
    double rate;

    printf("Enter conversion rate (1.00 BTC -> CHF): ");
    scanf("%lf", &rate);
    double btc = convertBTCtoCHF(chf, rate);

    for (int i = 1; i <= NUM_ROWS; i++) {
        double chf = i * 200;
        double btc = convertBTCtoCHF(chf, rate);
        printf("%5.0f CHF\t<-->\t%8.5f BTC\n", chf, btc);
    }

    return 0;
}


