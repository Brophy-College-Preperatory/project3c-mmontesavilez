#include <stdio.h>
#include <math.h>

int main(void){
    int Quarters = 25;
    int Dimes = 10;
    int Nickels = 5;
    int Pennies = 1;
    int totalQ = 0;
    int totalD = 0;
    int totalN = 0;
    int totalP = 0;
    int totalC = 0;
    int WhoNum;
    char Choice = 'y';

while(Choice == 'y'){
    printf("How much change is owed?\n");
    printf("Enter as a whole number. For example, enter $0.41 as 41.\n");

    scanf("%i", &WhoNum);

    while (WhoNum > 24){
        WhoNum = WhoNum - Quarters;
        totalQ++;
    }
    while (WhoNum > 9){
        WhoNum = WhoNum - Dimes;
        totalD++;
    }
    while (WhoNum > 4){
        WhoNum = WhoNum - Nickels;
        totalN++;
    }
    while (WhoNum > 0){
        WhoNum = WhoNum - Pennies;
        totalP++;
    }
    if (WhoNum == 0){
        totalC = totalQ + totalD + totalN + totalP;
        printf("Quarters: %i\n", totalQ);
        printf("Dimes: %i\n", totalD);
        printf("Nickels: %i\n", totalN);
        printf("Pennies: %i\n", totalP);
        printf("Total Coins: %i\n", totalC);
    }

    
printf("Would you like to ask again (y/n)?\n");
    scanf("%s", &Choice);
    if (Choice != 'y' && Choice != 'n'){
        printf("Put in an answer that is (y/n)?\n");
        scanf("%s", &Choice);
    }
    }

    return 0;
}
