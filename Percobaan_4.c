#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fungsi untuk membandingkan string pertama dengan string kedua tanpa memperhatikan case
int nonsen1(char kar1[], char kar2[]);

// Fungsi untuk membandingkan string kedua dengan string pertama tanpa memperhatikan case
int nonsen2(char kar1[], char kar2[]);

// Fungsi untuk membandingkan string pertama dengan string kedua dengan case-sensitive
int sen1(char kar1[], char kar2[]);

// Fungsi untuk membandingkan string kedua dengan string pertama dengan case-sensitive
int sen2(char kar1[], char kar2[]);

int main()
{
    printf("Percobaan 2\n---------------------------------------------------------------------------------\n\n");

    char kar1[100], kar2[100];
    
    // Mengambil input string pertama dari pengguna
    printf("Inputkan string pertama: ");
    fgets(kar1, sizeof kar1, stdin);
    
    // Mengambil input string kedua dari pengguna
    printf("Inputkan string kedua: ");
    fgets(kar2, sizeof kar2, stdin);

    printf("\n\n");
    
    // Membandingkan string pertama dengan string kedua tanpa membedakan case
    printf("Setelah dibandingkan string pertama dengan string kedua dengan non-sensitive, hasilnya = %d\n", nonsen1(kar1, kar2));
    // Membandingkan string kedua dengan string pertama tanpa membedakan case
    printf("Setelah dibandingkan string kedua dengan string pertama dengan non-sensitive, hasilnya = %d\n\n", nonsen2(kar1, kar2));

    // Membandingkan string pertama dengan string kedua dengan case-sensitive
    printf("Setelah dibandingkan string pertama dengan string kedua dengan sensitive, hasilnya = %d\n", sen1(kar1, kar2));
    // Membandingkan string kedua dengan string pertama dengan case-sensitive
    printf("Setelah dibandingkan string kedua dengan string pertama dengan sensitive, hasilnya = %d", sen2(kar1, kar2));

    return 0;
}

// Fungsi untuk membandingkan string pertama dengan string kedua tanpa memperhatikan case
int nonsen1(char kar1[], char kar2[]){
    return strcasecmp(kar1, kar2); // Membandingkan string tanpa memperhatikan case
}

// Fungsi untuk membandingkan string kedua dengan string pertama tanpa memperhatikan case
int nonsen2(char kar1[], char kar2[]){
    return strcasecmp(kar2, kar1); // Membandingkan string tanpa memperhatikan case
}

// Fungsi untuk membandingkan string pertama dengan string kedua dengan case-sensitive
int sen1(char kar1[], char kar2[]){
    return strcmp(kar1, kar2); // Membandingkan string dengan memperhatikan case
}

// Fungsi untuk membandingkan string kedua dengan string pertama dengan case-sensitive
int sen2(char kar1[], char kar2[]){
    return strcmp(kar2, kar1); // Membandingkan string dengan memperhatikan case
}
