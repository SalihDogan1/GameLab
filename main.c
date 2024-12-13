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
        char username  [50];
	char password  [50];
	
		
		do
		{
printf("Username: ");
scanf("%s", &username);
printf("Password: ");
scanf("%s", &password);
if(strcmp(username, "user") == 0 && strcmp(password, "123") == 0){
printf("Log in succesful");
break;
	  
}
printf("Invalid username or password.\n"); 			
}
while(strcmp(username, "user") != 0 || strcmp(password, "123") != 0);


	
    
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

            int lbrry;

    do
    { 
           printf("1-View my installed games\n");
           printf("2-View uninstalled games\n");
           printf("3-Install the game\n");
           printf("0-Exit\n");
           printf("Select an option\n");
           scanf("%d",&lbrry );

           if (lbrry==1)
           {
                printf("yüklü oyunlar görüntülendi\n");
           }
           else if (lbrry==2)
           {
            printf("yüklü olmayan oyunlar\n");
           }

           else if (lbrry==3)
           {
            printf("oyun yüklendi\n");
           }
           else if(lbrry != 0){
            printf("invalid number\n");
           }
           
        



    
    } while (lbrry!=0);

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
		printf("3-View my friend\n");
		printf("0-Turn Back\n");
		printf("Select an opiton\n");
		scanf("%d",&frnd);
		
		switch(frnd){
		
		
		case 1:
			{
			int i=0;
		char frndname[30];
			printf("Add Friends\n");
			printf("Enter your friend's nickname\n");
			scanf("%s",&frndname);
			for(i; i < 4; i++)
			{
			if(FriendsofBaris[i]=="empty")
				{
					FriendsofBaris[i]=frndname;			
				}
				
				int j;
			for(j=0;j<4;j++)
			{
				printf("\n%s",FriendsofBaris[j]);
			}
			}
			
			
		}break;
			
			
		case 2:
		
			printf("Delete Friends\n");
			printf("Enter your friend's name\n");
			
		break;
		
		case 3:
		{
			
			int j;
			for(j=0;j<4;j++)
			{
				printf("%s",FriendsofBaris[j]);
			}
		}
		break;	
			
			
			
		}
		
		if(frnd!=0&&frnd!=1&&frnd!=2&&frnd!=3)
		{
			printf("invalid number\n");
		}
		
		
	}
	while(frnd!=0);
    printf("Good Bye My Friend");

return 0;
}


