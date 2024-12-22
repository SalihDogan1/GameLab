#include <stdio.h>
#include <string.h>

int main() {
    char FriendsofUser[4][30] = { "empty", "empty", "empty", "empty" };
    char* Games[] = { "LOL", "ROCKET LEAGUE", "FIFA", "COUNTER STRIKE" };

    int GamesPrices[] = { 1, 2, 3, 4 }; // fiyatlari yukaridakiler ile sirasiyla
    char GamesofUser[4][30] = { "empty", "empty", "empty", "empty" };

    char InsGames[4][30] = { "LOL", "ROCKET LEAGUE", "FIFA", "empty" };
    char UninsGames[4][30] = { "empty", "empty", "empty", "empty" };
    char BoughtGames[4][30] = { "LOL", "ROCKET LEAGUE", "FIFA", "COUNTER STRIKE" };


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

                        for (int i = 0; i < 4; i++) {
                            printf("%d: %s\n", i + 1, InsGames[i]);
                        }

                        printf("Select a game to open: ");
            int opengame;
                scanf("%d", &opengame);

                // Kullanıcının seçtiği indeksin geçerli olup olmadığını kontrol et
                if (opengame >= 1 && opengame <= 4) {
                // Oyun adı boş değilse oyunu aç
                if (strcmp(InsGames[opengame - 1], "empty") != 0) {
                        printf("----------------------------\n%s game opened.\n", InsGames[opengame - 1]);
                } else {
                        printf("----------------------------\nNo game is installed in this slot.\n");
                }
                } else {
                        printf("----------------------------\nInvalid selection.\n");
                }   

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

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char* Games[] = { "LOL","ROCKET LEAGUE","FIFA","COUNTER STRIKE"};
    int blnc;

            do{
            printf("\n1-View The Game Catalog\n");
            printf("2-Buy Game\n");
            printf("3-Buy With Discount Code\n");
            printf("0-Back\n");

            printf("\nPlease select an option: ");

            scanf("%d", &blnc);

                if(blnc == 1){
                    int catolog;
                    do {
                        printf("\n***WELCOME TO THE GAME CATOLOG***\n");
                        printf("You can see the current and upcoming games and see the details by entering the number.\n");
                        printf("\n1-League Of Legends");
                        printf("\n2-Rocket League");
                        printf("\n3-FIFA");
                        printf("\n4-Counter-Strike");
                        printf("\n5-GTA VII (soon)");
                        printf("\n6-DOTA 3 (soon)");
                        printf("\n7-Metin3 (soon)");
                        printf("\n0-Back");
                        
                        
                        printf("\nPlease select an option: ");
                        scanf("%d",&catolog);
                        
                        if (catolog == 1) {
                            printf("\nLeague of Legends is a multiplayer online battle arena (MOBA) game in which the player controls a character 'champion' with a set of unique abilities from an isometric perspective. As of 2024, there are 168 champions available to play.Over the course of a match, champions gain levels by accruing experience points (XP) through killing enemies. Items can be acquired to increase champions' strength, and are bought with gold, which players accrue passively over time and earn actively by defeating the opposing team's minions, champions, or defensive structures.In the main game mode, Summoner's Rift, items are purchased through a shop menu available to players only when their champion is in the team's base. Each match is discrete; levels and items do not transfer from one match to another.\n");
                        }
                        else if (catolog == 2){
                            printf("\nRocket League is a fantastical sport-based video game, developed by Psyonix. Many would say it’s like “soccer with cars”. It features a competitive game mode based on teamwork and outmaneuvering opponents. Rocket League is rated E for Everyone. Extremely similar to the traditional sport of Soccer, teams made up of three players will work together to advance the ball down the field and score goals in their opponents’ net. Each team starts on opposite sides of the field (either Blue or Orange). The ball starts in the middle of the field. After a countdown, the timer begins, and players race to be the first to hit the ball with their car. Once the ball is in play, the five minute countdown starts, only stopping when a goal is scored.A team wins the match by scoring more goals than their opponent within the five minute time limit. Tied games will be sent to Overtime, where the first team to score will be the winner of the game.\n");
                        }
                        else if (catolog == 3){
                            printf("\nFor more than 20 years, the legendary FIFA series from EA SPORTS has been the biggest sports game in the world today. Bringing the Game of the World to life, FIFA lets you play with the biggest leagues, clubs and footballers in world football at an incredible level of detail and realism. Whether you're building your dream squad in FIFA Ultimate Team, managing your favorite club in Career Mode, getting back to street football with EA SPORTS VOLTA FOOTBALL, or challenging a friend in Center Stage Mode, the FIFA series makes it possible to play the Game of the World your way.\n");
                        }
                        else if (catolog == 4){
                            printf("\nCounter-Strike is an objective-based, multiplayer tactical first-person shooter. Two opposing teams—the Terrorists and the Counter Terrorists—compete in game modes to complete objectives, such as securing a location to plant or defuse a bomb and rescuing or guarding hostages. At the end of each round, players are rewarded based on their individual performance with in-game currency to spend on more powerful weapons in subsequent rounds. Winning rounds results in more money than losing and completing objectives such as killing enemy players gives cash bonuses. Uncooperative actions, such as killing teammates, result in a penalty.\n");
                        }
                        else if (catolog == 5){
                            printf("\n***COMING SOON***\n");
                        }
                        else if (catolog == 6){
                            printf("\n***COMING SOON***\n");
                        }
                        else if (catolog == 7){
                            printf("\n***COMING SOON***\n");
                        }
                        
                    }
                    while (catolog != 0 );
                }
                
                
              else if(blnc == 2){
                int buy,oyun1,oyun2;
                do {
                    printf("\n1-Buy it for yourself");
                    printf("\n2-Buy as a gift");
                    printf("\n0-Back");
                    printf("\nChoose an option: ");
                    scanf("%d",&buy);
                    if (buy == 1) {
                        printf("\nChoose a game\n");
                        printf("\n1-League Of Legends");
                        printf("\n2-Rocket League");
                        printf("\n3-FIFA");
                        printf("\n4-Counter-Strike");
                        printf("\n0-Back");
                        printf("\nChoose an option: ");
                        scanf("%d",&oyun1);

                    }else if (buy == 2){
                        printf("Choose a game");
                        printf("\n1-League Of Legends");
                        printf("\n2-Rocket League");
                        printf("\n3-FIFA");
                        printf("\n4-Counter-Strike");
                        printf("\n0-Back");
                        printf("\nChoose an option: ");
                        scanf("%d",&oyun2);

                    }
                    
                }while (buy !=0);
             
            }
            else if (blnc == 3){
                int code = 0;
                printf("\nEnter the discount code:%d",code);
                scanf("%d",&code);
            }
            
            else if(blnc!=0){
                printf("\nInvalid number. Please try again.\n");
            }


        }while(blnc !=0);
}


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
