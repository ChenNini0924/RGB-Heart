#include <stdio.h>
#include <unistd.h>

char *color[] = {
        "\033[1;31m",
        "\033[1;32m",
        "\033[1;33m",
        "\033[1;34m",
        "\033[1;35m",
        "\033[1;36m",
        "\033[1;37m",
        "\033[0m"
};

int main() {
    for (int i = 0; i > -1 ; i++){
        printf("\e[1;1H\e[2j");
        printf("%s",color[i%8]);
        for (int X = 0; X < 5; X++){
            if (X == 2 || X == 4){
                printf("# ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
        for (int Y = 0;Y<5;Y++){
            for (int z = 0;z<Y+1;z++){
                printf("  ");
            }
            for (int X = 0;X<5;X++){
                if (X<5-Y*2){
                    printf("# ");
                }
            }
            printf("\n");
        }
        sleep(1);
    }
    return 0;
}
