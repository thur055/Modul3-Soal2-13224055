#include <stdio.h>

int langkah_minimum (int g1, int g2, int takar, int j){
    if (g1 < takar && g2 < takar) return 0;
    if (g1 == takar || g2 == takar) return 1;

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
