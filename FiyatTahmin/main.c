#include <stdio.h>
#include <stdlib.h>

int main() {
    double market_cap, dolasimdaki_arz, piyasa_talebi, buyume_orani, volatilite, tahmin_fiyat;

    printf("Market Cap'i girin (USDT): ");
    scanf("%lf", &market_cap);

    printf("Dolasimdaki arzi girin (coin sayisi): ");
    scanf("%lf", &dolasimdaki_arz);

    printf("Piyasa talebi oranini girin (0 ile 1 arasinda bir deger): ");
    scanf("%lf", &piyasa_talebi);

    printf("Buyume oranini girin (Yillik yuzdelik buyume): ");
    scanf("%lf", &buyume_orani);

    printf("Volatiliteyi girin (0 ile 1 arasinda bir deger): ");
    scanf("%lf", &volatilite);

    tahmin_fiyat = (market_cap / dolasimdaki_arz) * (1 + piyasa_talebi * 0.5) * (1 + buyume_orani * 0.01) * (1 + volatilite * 0.1);

    printf("Tahmin edilen fiyat: %.4lf USDT\n", tahmin_fiyat);

    return 0;
}
