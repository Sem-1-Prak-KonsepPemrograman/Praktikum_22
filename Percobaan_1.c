#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fungsi untuk membalikkan urutan karakter dalam string
void balikstr(char kar[], int jumlah);

int main()
{
    // Menampilkan header untuk percobaan
    printf("Percobaan 1\n---------------------------------------------------------------------------------\n\n");

    // Deklarasi variabel untuk menampung string dan salinan string
    char kar[100], kar2[100];
    int jumlah = 0;

    // Mengambil input string dengan fgets, termasuk spasi
    printf("Input berbagai karakter: ");
    fgets(kar, sizeof kar, stdin);

    // Menghitung jumlah karakter dalam string dengan mengurangi 1 untuk mengabaikan '\n'
    jumlah = strlen(kar) - 1;

    // Menampilkan jumlah karakter dalam string
    printf("Jumlah karakter %d\n", jumlah);

    // Membalikkan string
    balikstr(kar, jumlah);

    // Menampilkan string setelah dibalik
    printf("Setelah dibalik: %s", kar);

    // Menyalin string yang sudah dibalik ke dalam kar2
    strcpy(kar2, kar);

    // Menampilkan salinan string
    printf("Setelah dicopy: %s", kar2);

    return 0;
}

// Fungsi untuk membalikkan urutan karakter dalam string
void balikstr(char kar[], int jumlah){
    // Membalikkan string menggunakan algoritma pertukaran karakter dari kedua ujung
    for(int i = 0; i < jumlah / 2; i++){
        char temp = kar[i];
        kar[i] = kar[jumlah - i - 1];
        kar[jumlah - i - 1] = temp;
    }
}
