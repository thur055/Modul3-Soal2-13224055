#include <stdio.h>

int gcd(int a, int b)
{
    int result = ((a < b) ? a : b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    return result;
}
// [https://www.geeksforgeeks.org/c/gcd-in-c/]

int langkah_minimum (int g1, int g2, int takar, int j){
    if (g1 < takar && g2 < takar) return -1;
    if (g1 == takar || g2 == takar) return 1;
    if (takar % g1 == 0) return 2*takar/g1 + j;
    if (takar % g2 == 0) return 2*takar/g2 + j;
    if (takar % gcd(g1, g2) != 0) return -1;
    if (g2 - g1 == takar || g2 - g1 == takar) return 2 + 2*j;
    if (g1 < g2){
        j++;
        langkah_minimum(g1+g1, g2, takar, j);
    }
    else{
        j++;
        langkah_minimum(g1, g2+g2, takar, j);
    }
}

int main (){
    int j = 0;
    int g1, g2, takar;
    scanf("%d %d %d", &g1, &g2, &takar);
    if (langkah_minimum(g1, g2, takar, j)){
        printf("%d", langkah_minimum(g1, g2, takar, j));
    }
    else{
        printf("0");
    }
}
