#include <stdio.h>

struct UserInfo {
    char username[50]; // Kullanıcı adı için bir karakter dizisi
    char password[50]; // Şifre için bir karakter dizisi
    int money;
};


int main() {


    char* FriendsofSalih[] = { "empty", "empty", "empty", "empty"};
    char* FriendsofAkin[] = { "empty", "empty", "empty", "empty"};
    char* FriendsofEmirhan[] = { "empty", "empty", "empty", "empty"};
    char* FriendsofBaris[] = { "empty", "empty", "empty", "empty"};
    char* FriendsofYavuzhan[] = { "empty", "empty", "empty", "empty"};

    char* Games[] = { "LOL","ROCKET LEAGUE","FIFA","COUNTER STRIKE"};
    int* GamesPrices[] = { 1,2,3,4}; // fiyatlari yukaridakiler ile sirasiyla

    char* GamesofSalih[] = { "empty", "empty", "empty", "empty"};
    char* GamesofAkin[] = { "empty", "empty", "empty", "empty"};
    char* GamesofEmirhan[] = { "empty", "empty", "empty", "empty"};
    char* GamesofBaris[] = { "empty", "empty", "empty", "empty"};
    char* GamesofYavuzhan[] = { "empty", "empty", "empty", "empty"};

    struct UserInfo salih = { "slh", "123", 0 };
    struct UserInfo emirhan = { "emrhn", "234", 0 };
    struct UserInfo akin = { "akn", "345", 0 };
    struct UserInfo baris = { "brs", "456", 0 };
    struct UserInfo yavuzhan = { "yvzhn", "567", 0 };



	
    
  int option; 

    do {
        
        printf("\n1. LIBRARY\n");
        printf("2. STORE\n");
        printf("3. ADD BALANCE\n");
        printf("4. FRIENDS\n");
        printf("0. LOG OUT\n");

        // Kullanıcıdan seçim al
        printf("\nPlease select an option: ");
        scanf("%d", &option);

        // Seçime göre işlemler
        if (option == 1) {

            printf("\nLIBRARY HAS OPENED.\n");

        } else if (option == 2) {

            printf("\nSTORE HAS OPENED.\n");


        } else if (option == 3) {

            int blnc;

            do{
            printf("\n1-Load Balance\n");
            printf("2-Send Money to Someone\n");
            printf("0-Back\n");

            printf("\nPlease select an option: ");

            scanf("%d", &blnc);

            if(blnc == 1){
                printf("\nBalance Loaded\n");
            }else if(blnc == 2){
                printf("\nmoney sent\n");
            }else if(blnc!=0){
                printf("\nInvalid number. Please try again.\n");
            }


        }while(blnc !=0);


        } else if (option == 4) {


            int frnd;
	do
	{
		printf("Friends\n");
		printf("1-Add Friends\n");
		printf("2-Delete Friends\n");
		printf("0-Turn Back\n");
		printf("Select an opiton\n");
		scanf("%d",&frnd);
		
		if(frnd==1)
		{
			printf("Add Friends\n");
			printf("Enter your friend's nickname\n");
			
		}
		else if(frnd==2)
		{
			printf("Delete Friends\n");
			printf("Enter your friend's name\n");
			
		}
		else if(frnd!=0)
		{
			printf("invalid number\n");
		}
		
		
	}
	while(frnd!=0);

        } else if(option !=0){

            printf("Invalid number. Please try again.\n");

        }

    }while (option != 0);

    printf("Good Bye My Friend");

return 0;
}


