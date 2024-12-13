#include <stdio.h>
#include <string.h>

int main() {
    char FriendsofUser[4][30] = { "empty", "empty", "empty", "empty" };
    char* Games[] = { "LOL", "ROCKET LEAGUE", "FIFA", "COUNTER STRIKE" };
    int GamesPrices[] = { 1, 2, 3, 4 }; // fiyatlari yukaridakiler ile sirasiyla
    char GamesofUser[4][30] = { "empty", "empty", "empty", "empty" };

    char username[50];
    char password[50];

    do {
        printf("----------------------------\nUsername: ");
        scanf("%s", username);
        printf("Password: ");
        scanf("%s", password);

        if (strcmp(username, "user") == 0 && strcmp(password, "123") == 0) {
            printf("----------------------------\nLog in successful\n");
            break;
        }
        printf("----------------------------\nInvalid username or password.\n");
    } while (1);

    int option;

    do {
        printf("----------------------------\n1. LIBRARY\n");
        printf("2. STORE\n");
        printf("3. ADD BALANCE\n");
        printf("4. FRIENDS\n");
        printf("0. LOG OUT\n");

        printf("----------------------------\nPlease select an option: ");
        scanf("%d", &option);

        if (option == 1) {
            int lbrry;

            do {
                printf("----------------------------\n1-View my installed games\n");
                printf("2-View uninstalled games\n");
                printf("3-Install the game\n");
                printf("0-Exit\n");
                printf("----------------------------\nSelect an option: ");
                scanf("%d", &lbrry);

                if (lbrry == 1) {
                    printf("----------------------------\nInstalled games displayed.\n");
                } else if (lbrry == 2) {
                    printf("----------------------------\nUninstalled games displayed.\n");
                } else if (lbrry == 3) {
                    printf("\nGame installed.\n");
                } else if (lbrry != 0) {
                    printf("----------------------------\nInvalid number.\n");
                }
            } while (lbrry != 0);

        } else if (option == 2) {
            printf("----------------------------\nSTORE HAS OPENED.\n");

        } else if (option == 3) {
            int blnc;

            do {
                printf("----------------------------\n1-Load Balance\n");
                printf("2-Send Money to Someone\n");
                printf("0-Back\n");

                printf("----------------------------\nPlease select an option: ");
                scanf("%d", &blnc);

                if (blnc == 1) {
                    printf("----------------------------\nBalance Loaded\n");
                } else if (blnc == 2) {
                    printf("----------------------------\nMoney sent.\n");
                } else if (blnc != 0) {
                    printf("----------------------------\nInvalid number. Please try again.\n");
                }
            } while (blnc != 0);

        } else if (option == 4) {
            int frnd;

            do {
                printf("----------------------------\nFriends\n");
                printf("1-Add Friends\n");
                printf("2-Delete Friends\n");
                printf("3-View my friends\n");
                printf("0-Turn Back\n");
                printf("Select an option: ");
                scanf("%d", &frnd);

                switch (frnd) {
                    case 1: {
                        int i;
                        char frndname[30];
                        printf("----------------------------\nAdd Friends\n");
                        printf("----------------------------\nEnter your friend's nickname: ");
                        scanf("%s", frndname);

                        for (i = 0; i < 4; i++) {
                            if (strcmp(FriendsofUser[i], "empty") == 0) {
                                strcpy(FriendsofUser[i], frndname);
                                printf("----------------------------\nFriend added successfully.\n");
                                break;
                            }
                        }
                        if (i == 4) {
                            printf("----------------------------\nFriend list is full.\n");
                        }
                    } break;

                    case 2: {
                        char frndname[30];
                        printf("----------------------------\nDelete Friends\n");
                        printf("----------------------------\nEnter your friend's name: ");
                        scanf("%s", frndname);

                        int found = 0;
                        for (int i = 0; i < 4; i++) {
                            if (strcmp(FriendsofUser[i], frndname) == 0) {
                                strcpy(FriendsofUser[i], "empty");
                                printf("----------------------------\nFriend deleted successfully.\n");
                                found = 1;
                                break;
                            }
                        }
                        if (!found) {
                            printf("----------------------------\nFriend not found.\n");
                        }
                    } break;

                    case 3: {
                        printf("----------------------------\n\nYour friends:\n");
                        for (int i = 0; i < 4; i++) {
                            printf("%d: %s\n", i + 1, FriendsofUser[i]);
                        }
                    } break;

                    default: {
                        if (frnd != 0) {
                            printf("----------------------------\nInvalid number. Try again.\n");
                        }
                    }
                }
            } while (frnd != 0);
        }
    } while (option != 0);

    printf("----------------------------\nLogged out successfully.\n");
    return 0;
}
