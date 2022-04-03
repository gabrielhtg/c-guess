#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char nama [100];
    int angka;
    int keynum = 77;
    char yn[1];
    int sama;
    printf("-------------------------------------------------------------------------------------------------\n");
    printf("Masukkan nama anda: ", nama);
    scanf("%[^\n]s", nama);
    printf("-------------------------------------------------------------------------------------------------\n");

    printf("    Selamat datang di game tebak-tebakan ini %s!! :D\n", nama);
    printf("    Disini, kamu akan menebak angka yang ada di pikiran Gabriel saat membuat mini game ini XD\n");
    printf("    Cluenya --> ANGKA PULUHAN, MUNGKIN XD <-- XD\n");
    printf("    Kalau bisa dapat fix kita sehati sih :3\n");
    printf("-------------------------------------------------------------------------------------------------\n");


    printf("Yok, coba masukkan angkanya XD: ");
    scanf("%d", &angka);
    printf("-------------------------------------------------------------------------------------------------\n");

    while (angka != keynum) {
        printf("Waduh salah :(. Masih mau coba lagi? (y/n) --> ");
        scanf("%s", yn);
        printf("-------------------------------------------------------------------------------------------------\n");
        sama = strcmp("y", yn);

        if (sama != 0) {
            break;
        }
        else {
            printf("Wkwkwkwk mantap. Yok tebak angkanya lagi: ");
            scanf("%d", &angka);
            printf("-------------------------------------------------------------------------------------------------\n");
        }
    }

    switch (angka) {
        case 77:
            printf("Ih benar, fix kita sehati nih %s. >///<\n", nama);
            printf("-------------------------------------------------------------------------------------------------\n");
            break;
        default:
            printf("Waduh wwkwkwk. Terima kasih telah mencoba %s :)\n", nama);  
            printf("-------------------------------------------------------------------------------------------------\n");
    }
    return 0;
}

