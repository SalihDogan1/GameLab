#include <stdio.h>
#include <stdlib.h>

int main()
{
   #include <stdio.h>

int main() {
    int secim; // Kullanıcının seçim yapması için değişken tanımlandı.
    
    do {
        // Menü seçeneklerini yazdır
        printf("1. KÜTÜPHANE\n");
        printf("2. MAĞAZA\n");
        printf("3. BAKİYE YÜKLE\n");
        printf("4. BİZE ULAŞIN\n");
        printf("0. ÇIKIŞ\n");

        // Kullanıcıdan seçim al
        printf("Lütfen bir seçenek seçin: ");
        scanf("%d", &secim);

        // Seçime göre işlemler
        if (secim == 1) {
            printf("KÜTÜPHANE seçildi.\n");
        } else if (secim == 2) {
            printf("MAĞAZA seçildi.\n");
        } else if (secim == 3) {
            printf("BAKİYE YÜKLE seçildi.\n");
        } else if (secim == 4) {
            printf("BİZE ULAŞIN seçildi.\n");
        } else if (secim == 0) {
            printf("Çıkış yapılıyor...\n");
        } else {
            printf("Geçersiz bir seçim yaptınız. Lütfen tekrar deneyin.\n");
        }

    } while (secim != 0); // Kullanıcı 0 girene kadar döngü devam eder.

    return 0;
}

}
