#include <stdio.h>
#define CONSUMPTION_TAX_RATE 10
#define CONSUMPTION_TAX * CONSUMPTION_TAX_RATE / 100
// 関数的マクロ(引数を取る)
#define CONSUMPTION_TAX2(x) x * CONSUMPTION_TAX_RATE / 100
int main(void)
{
    int price1 = 100;
    int price2 = 230;
    printf("税込み価格 = %i 円\n", price1 + price1 * CONSUMPTION_TAX_RATE / 100);
    printf("税込み価格 = %i 円\n", price2 + price2 CONSUMPTION_TAX);
    printf("税込み価格 = %i 円\n", price2 + CONSUMPTION_TAX2(price2));
}