#include <stdio.h>
#include <string.h>


// Oyunların adı, fiyatları ve yüklenme durumu
char *games[] = { "LOL", "ROCKET LEAGUE", "FIFA", "COUNTER STRIKE" }; // Oyunlarımızın bulunduğu dizi
int gamePrices[] = { 10, 15, 20, 25 }; // oyunlarımızın sırasıyla ücretini tutan dizi
char FriendsofUser[4][30] = { "empty", "empty", "empty", "empty" }; // kullanıcının arkadaşlarını tutan dizi
// Kullanıcı bilgileri ve oyun listeleri
char installedGames[4][30] = { "empty", "empty", "empty", "empty" }; // yüklü oyunları görüntüleyen dizi
char uninstalledGames[4][30] = { "empty", "empty", "empty", "empty" }; // Yüklü olmayan oyunları görüntüleyen dizi
char purchasedGames[4][30] = { "empty", "empty", "empty", "empty" }; // Satın alınan oyunları görüntüleyen dizi

char username[50]; // Kullanıcı adı değişkeni
char password[50]; // Şifre değişkeni
int balance = 0; // bakiye değişkeni



int main() {
    //--------------- Kullanıcı girişi
    do { // eğer kullanıcı adı ve şifre yanlışsa do while sayesinde sürekli tekrar kullanıcıdan bilgilerini isteyebiliriz.

        printf("----------------------------\nUsername: ");
        scanf("%s", username); // kullanıcıdan username istedik
        printf("Password: ");
        scanf("%s", password);// kullanıcıdan şifre istedik

        if (strcmp(username, "user") == 0 && strcmp(password, "123") == 0) { // eğer kullanıcı adı ve şifre doğru ise
            printf("----------------------------\nLog in successful\n"); // kullanıcıyı başarıyla giriş yaptığını bilgilendir.
            break; // döngüyü kır ve while dan sonraki adımlara başla
        }
        printf("----------------------------\nInvalid username or password.\n");// yanlış olduğunu kullanıcıya bildir
    } while (1); // döngünün içine 1 yazılırsa, break ile karşılaşmadığı sürece döngünün devam etmesini sağlar

    int option; // opsiyon değişkeni atandı

    // Ana menü
    do { // ana menü içerisindeki bilgilere girip geri döndüğümüzde tekrar ana menüdeki seçeneklerle karşılaşmak için do while kullanırız
        printf("----------------------------\n1. LIBRARY\n"); // -----------Arayüz
        printf("2. STORE\n");
        printf("3. ADD BALANCE\n");
        printf("4. FRIENDS\n");
        printf("0. LOG OUT\n");

        printf("----------------------------\nPlease select an option: "); // kullanıcıdan opsiyon girmesini istedik
        scanf("%d", &option); // kullanıcıdan aldığımız değeri option değişkenine attık

        if (option == 1) { // Eğer 1 e eşit ise library menüsüne girer

            int lbrry; // lbbrry değişkenine oluşturduk

            do { // eper içeride işlem yaparsak geriye döndüğümüzde yeniden burayla karşılaşmak istediğimiz için do kullandık

                printf("----------------------------\n1-View my installed games\n"); // yüklü olan oyunları görüntüle.
                printf("2-View uninstalled games\n"); // yüklü olmayanları görüntüle
                printf("3-Install the game\n");// oyun yükleyici
                printf("0-Exit\n"); // ilk do while döngüsünden çıkarıp bir önceki menüye dönmeyi sağlayacak seçenek
                printf("----------------------------\nSelect an option: ");
                scanf("%d", &lbrry); // kullanıcıdan bir seçim istiyoruz lbbry değişkenine atayacağız sayı ile.

                if (lbrry == 1) { // seçenek bir ise yüklü oyunlara girdi. ve oyunlar listelenecek.

                    printf("----------------------------\nInstalled games:\n"); // yüklü oyunların açıldığına dair bilgilendirme yazısı
                    for (int i = 0; i < 4; i++) { // toplam 4 adet oyuna sahip olduğumuz için 4 elemanlı dizi için tarama yapar
                        if (strcmp(installedGames[i], "empty") != 0) { //eğer dizinin i'ninci elemanı empty değil ise
                            printf("%d: %s\n", i + 1, installedGames[i]); //o oyunu ekrana yazdır. (en başta dizinin hepsi empty olduğu için hiçbir şey yazdırmaz)
                         }
                    }
                } else if (lbrry == 2) { // yüklenmemiş oyunlar seçilirse

                    printf("----------------------------\nUninstalled games:\n");
                    for (int i = 0; i < 4; i++) { // yine 4 kere döndürülür çünkü maksimum 4 oyun olabilir
                        if (strcmp(uninstalledGames[i], "empty") != 0) { // eğer empty değil ise
                            printf("%d: %s\n", i + 1, uninstalledGames[i]); // yüklenmeyen oyun varsa yazdırır.
                           // (eğer oyun satın alındıysa burada gözükür. en başta bu dizi boştur. Eğer mağazadan oyun satın alındıysa buraya gelir)
                        }
                    }
                } else if (lbrry == 3) { // satın alınan oyunlar gösterilir ve yükleme işlemi burada gerçekleşir
                    // Oyun yükleme
                    int installOption; // seçim değişkeni alınır
                    printf("----------------------------\nSelect a game to install:\n");
                    for (int i = 0; i < 4; i++) {
                        if (strcmp(uninstalledGames[i], "empty") != 0) { // satın alınan ve yüklenmeyen oyunlar listelenir.
                            printf("%d: %s\n", i + 1, uninstalledGames[i]);
                        }
                    }
                    printf("Select a game to install: "); // kullanıcıdan yukarıda yazdırılan oyunlardan birisini seçmesi istenir
                    scanf("%d", &installOption); // oyunun satır numarası kullanıcıya sorulur.
                    if (installOption >= 1 && installOption <= 4 && strcmp(uninstalledGames[installOption - 1], "empty") != 0) { // seçim 1 ve 4 ün arasında ve dizi 0 dan başladığı için installOptionu 1 azalttık
                        // Yükleme işlemi
                        strcpy(installedGames[installOption - 1], uninstalledGames[installOption - 1]); // Yüklü olmayan oyunlardaki bu oyunu artık yüklü oyunlara aktarır
                        strcpy(uninstalledGames[installOption - 1], "empty"); // ve artık oyun yüklü olduğu için yüklü olmayan kısımdan siler.
                        printf("Game installed successfully.\n");
                    } else {
                        printf("Invalid selection.\n"); // geçersiz işlem
                    }
                } else if (lbrry != 0) {
                    printf("----------------------------\nInvalid number.\n");
                }
            } while (lbrry != 0);

        } else if (option == 2) { // 2. opsiyon seçildiyse mağazaya girer

            int storeOption; // mağazada sekmesindeki seçim numarasıdır.
            do {
                printf("----------------------------\nSTORE\n"); // sadece oyun alma ve geriye dönme opsiyonu içerir
                printf("1-Buy a Game\n");
                printf("0-Back\n");

                printf("----------------------------\nSelect an option: ");
                scanf("%d", &storeOption); // kullanıcıdan seçimi istenir

                if (storeOption == 1) { // eğer 1 i seçtiyse kullanıcı oyun alacaktır.

                    int buyOption; // hangi oyunu satın alacağını tutan değişkendir.
                    char discountCode[30]; // indirim kodunun tutulduğu değişkendir. indirim kodunu aşağıda ferhatucar100 olarak alacağız.
                    printf("----------------------------\nSelect a game to buy:\n"); // oyun seçmesi için kullanıcı bilgilendirilir
                    for (int i = 0; i < 4; i++) {
                        if (strcmp(purchasedGames[i], "empty") == 0) {
                            printf("%d: %s - Price: %d\n", i + 1, games[i], gamePrices[i]); // satın alınabilecek oyunlar yazdırılır.
                        }
                    }

                    printf("Enter your choice: ");
                    scanf("%d", &buyOption); // hangi oyunu alacağı istenir.

                    if (buyOption >= 1 && buyOption <= 4 && strcmp(purchasedGames[buyOption - 1], "empty") == 0) { // 1 ve 4 arasında seçim yaparsa ve boş değil ise
                        // İndirim kodu
                        printf("Enter discount code (if any): ");
                        scanf("%s", discountCode); // indirim kodu varsa istenir.

                        int finalPrice = gamePrices[buyOption - 1]; // final price adında bir yeni bir ücret değişkenine oyunun eski ücreti atanır.
                        if (strcmp(discountCode, "ferhatucar100") == 0) { // eğer indirim kodu farhatucar100 ise
                            finalPrice = 0;  // fiyatı sıfırla
                            printf("Discount applied! The game is now free.\n");
                        }

                        // Bakiye kontrolü
                        if (balance >= finalPrice) { // şu an ki bakiye en son olan ücretten büyük ise işlem gerçekleşir. Eğer indirim kodu yanlış olsaydı finalprice, gameprice dizindeki ile aynı olacaktı
                            balance -= finalPrice; // bakiyeden ücret çıkarılır
                            strcpy(purchasedGames[buyOption - 1], games[buyOption - 1]); // oyunlar listesindeki oyun, satın alınanlar dizisine eklenir.
                            strcpy(uninstalledGames[buyOption - 1], games[buyOption - 1]); //aynı zamanda uninstalled dizisine de eklenir.
                            printf("You have successfully bought %s for %d credits.\n", games[buyOption - 1], finalPrice); // başarıyla oyunun kaç paraya alındığını yazdırır
                        } else {
                            printf("Insufficient balance to buy %s.\n", games[buyOption - 1]); // para yetmiyorsa bildirim verir
                        }
                    } else {
                        printf("Invalid selection.\n"); // geçersiz seçim sayısı
                    }
                } else if (storeOption != 0) {
                    printf("Invalid number.\n");
                }
            } while (storeOption != 0);// eğer 0 seçildiyse mağazadan önceki sekme olan anamenüye döner.

        } else if (option == 3) { // 3 seçildiyse bakiye yükleme işlemi yapılır

            int amount; // miktar değişkeni
            printf("----------------------------\nEnter amount to add: ");
            scanf("%d", &amount); // kullanıcıdan ne kadar yükleneceği bilgisini alır
            balance += amount; // mevcut bakiyenin üstüne ekler
            printf("Balance updated. New balance: %d\n", balance);

        } else if (option == 4) {
            int frnd;

            do {
                printf("----------------------------\nFriends\n");
                printf("1-Add Friends\n");
                printf("2-Delete Friends\n");
                printf("3-View my friends\n");
                printf("0-Turn Back\n");
                printf("Select an option: ");
                scanf("%d", &frnd); // kullanıcıdan hangi işlemi yapacağı sorulur

                switch (frnd) {
                    case 1: { // 1 e basarsa arkadaş ekleyecektir
                        int i;
                        char frndname[30];
                        printf("----------------------------\nAdd Friends\n");
                        printf("----------------------------\nEnter your friend's nickname: ");
                        scanf("%s", frndname); // arkadaşının ismi sorulur

                        for (i = 0; i < 4; i++) {
                            if (strcmp(FriendsofUser[i], "empty") == 0) { // döngüye girer ve empty olan elemanı arar
                                strcpy(FriendsofUser[i], frndname); // eğer dizi elemanı empty ise onu kullanıcının arkadaşlarına ekler
                                printf("----------------------------\nFriend added successfully.\n");
                                break; // ilk arkadaşı ekledikten sonra diğer arkadaşlarda empty olduğu için doğrudan döngüden break ile çıkarılır ki diğerlerinin hepsini aynı arkadaş yapmasın
                            }
                        }
                        if (i == 4) {
                            printf("----------------------------\nFriend list is full.\n"); // empty değer bulamazsa liste fuldür
                        }
                    } break;

                    case 2: {
                        char frndname[30];
                        printf("----------------------------\nDelete Friends\n");
                        printf("----------------------------\nEnter your friend's name: ");
                        scanf("%s", frndname); // silinecek arkadaşın ismi istenir.

                        int found = 0;
                        for (int i = 0; i < 4; i++) {
                            if (strcmp(FriendsofUser[i], frndname) == 0) { // arkadaş ismi dizideki elemanlardan biri ile eşleşirse
                                strcpy(FriendsofUser[i], "empty"); // eşleşen elemanı artık empty yap çünkü silindi
                                printf("----------------------------\nFriend deleted successfully.\n");
                                found = 1;
                                break; // silme işlemi diğer arkadaşlara sekmesin diye direk döngüden çıkılmasını sağlar
                            }
                        }
                        if (!found) {
                            printf("----------------------------\nFriend not found.\n"); // eğer isim yanlış girilirse öyle bir arkadaş yoktur bildirisi
                        }
                    } break;

                    case 3: {
                        printf("----------------------------\n\nYour friends:\n");
                        for (int i = 0; i < 4; i++) {
                            printf("%d: %s\n", i + 1, FriendsofUser[i]); // kullanıcının arkadaş listesini listeler
                        }
                    } break;

                    default: {
                        if (frnd != 0) {
                            printf("----------------------------\nInvalid number. Try again.\n"); // geçersin işlem numarası
                        }
                    }
                }
            } while (frnd != 0);
        }
    } while (option != 0);

    printf("----------------------------\nLogged out successfully.\n"); // başarıyla uygulamadan çıkıldı bildirimi
    return 0;
}
