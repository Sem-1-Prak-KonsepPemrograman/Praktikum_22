#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fungsi untuk membandingkan string pertama dengan string kedua
int bandingstr1(char kar1[], char kar2[]);

// Fungsi untuk membandingkan string kedua dengan string pertama
int bandingstr2(char kar1[], char kar2[]);

int main()
{
    // Menampilkan header untuk percobaan
    printf("Percobaan 2\n---------------------------------------------------------------------------------\n\n");

    // Deklarasi variabel untuk menampung dua string
    char kar1[100], kar2[100];

    // Mengambil input string pertama dari pengguna
    printf("Inputkan string pertama: ");
    fgets(kar1, sizeof kar1, stdin);

    // Mengambil input string kedua dari pengguna
    printf("Inputkan string kedua: ");
    fgets(kar2, sizeof kar2, stdin);

    // Menampilkan hasil perbandingan antara string pertama dan kedua
    printf("\n\n");
    printf("Setelah dibandingkan string pertama dengan string kedua, hasilnya = %d\n", bandingstr1(kar1, kar2));
    printf("Setelah dibandingkan string kedua dengan string pertama, hasilnya = %d", bandingstr2(kar1, kar2));

    return 0;
}

// Fungsi untuk membandingkan string pertama dengan string kedua
int bandingstr1(char kar1[], char kar2[]){
    // Menggunakan fungsi strcmp untuk membandingkan kedua string
    return strcmp(kar1, kar2);
}

// Fungsi untuk membandingkan string kedua dengan string pertama
int bandingstr2(char kar1[], char kar2[]){
    // Menggunakan fungsi strcmp untuk membandingkan kedua string, tetapi urutannya dibalik
    return strcmp(kar2, kar1);
}
