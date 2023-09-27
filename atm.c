#include <stdio.h> 
#include <string.h>

int main() {
    int pin;
    int choice;
    int transferChoice;
    long amount = 300000;
    long withdraw;
    long deposit;
    long transfer;
    long transferNo;
    long withdrawAmount;
    long customAmount;
    char phoneNo[10];
    char anotherTransaction;
    
    
    
    printf("Type your secrete pin number: ");
    scanf("%d", &pin);


    if (pin == 2000) {
        do {
            printf("Hello, Welcome to our ATM Service\n");
            printf("1. Balance Checking\n");
            printf("2. Cash Withdrawal\n");
            printf("3. Cash Deposition\n");
            printf("4. Transfer\n");
            printf("5. Exit\n");
            printf(">>>>>>>>>>>>>>>>>\n\n");
            printf("Please proceed with your choice: ");
            scanf("%d", &choice);
            
            switch(choice) {
                case 1: 
                    printf("\n The account balance is : %lu Tzs \n\n", amount);
                    break;

                case 2:
                    printf("Choose withdraw fast option\n");
                    printf(" 1. 10000\n");
                    printf(" 2. 50000\n");
                    printf(" 3. 100000\n");
                    printf(" 4. 200000\n");
                    printf(" 5. 300000\n");
                    printf(" 6. Insert the amount to withdraw \n\n");
                    printf(": ");
                    scanf("%lu", &withdraw);
                    
        
                   if (withdraw == 1) {
                        withdrawAmount = 10000;
                        if (withdrawAmount == 10000) {
                            amount = amount - 10000;
                            printf("\n Withdraw successful\n");
                            printf("Your account balance is: %lu/Tzs\n", amount); 
                        } else {
                            printf("\n Insufficient balance\n");
                        }
                    } else if (withdraw == 2) {
                        withdrawAmount = 50000;
                        if (withdrawAmount == 50000) {
                            amount = amount - 50000;
                            printf("\n Withdraw successful\n");
                            printf("Your account balance is: %lu/Tzs\n", amount); 
                        } else {
                            printf("\n Insufficient balance\n");
                        }
                    } else if (withdraw == 3) {
                        withdrawAmount = 100000;
                        if (withdrawAmount == 100000) {
                            amount = amount - 100000;
                            printf("\n Withdraw successful\n");
                            printf("Your account balance is: %lu/Tzs\n", amount); 
                        } else {
                            printf("\n Insufficient balance\n");
                        }
                    } else if (withdraw == 4) {
                        withdrawAmount = 200000;
                        if (withdrawAmount == 200000) {
                            amount = amount - 200000;
                            printf("\n Withdraw successful\n");
                            printf("Your account balance is: %lu/Tzs\n", amount); 
                        } else {
                            printf("\n Insufficient balance\n");
                        }
                    } else if (withdraw == 5) {
                        withdrawAmount = 300000;
                        if (withdrawAmount == 300000) {
                            amount = amount - 300000;
                            printf("\n Withdraw successful\n");
                            printf("Your account balance is: %lu/Tzs\n", amount); 
                        } else {
                            printf("\n Withdrawal limit exceeded (300,000)\n");
                        }
                    } else if (withdraw == 6) {
                        printf("\n\n Enter the amount to withdraw: ");
                        scanf("%lu", &customAmount);

                        if (customAmount <= amount) {
                            amount = amount - customAmount;
                            printf("\n Withdraw successful\n");
                            printf("Your account balance is: %lu/Tzs\n", amount); 
                        } else {
                            printf("\n Insufficient balance\n");
                        }
                    } else {
                        printf("\n Invalid option. Withdraw Unsuccessful\n");
                    }
                    break;

                case 3:
                    printf("\n Insert the amount to be deposited: ");
                    scanf("%lu", &deposit);
                    amount = amount + deposit;
                    printf("Your account balance is: %lu/Tsh \n", amount);
                    break;
                
                case 4:
                    printf("Choose transfer option:\n");
                    printf("1. Transfer to bank account\n");
                    printf("2. Transfer to phone number\n");
                    printf(": ");
                    scanf("%d", &transferChoice);
                    

                    if (transferChoice == 1) {
                        printf("Enter the account to transfer (max 11 digits) \n");
                        printf(": ");
                        scanf("%lu", &transferNo);

                        if (transferNo >= 10000000000 && transferNo <= 99999999999) {
                            printf("\n Insert the amount to transfer to account number: %lu: ", transferNo);
                            scanf("%lu", &transfer);
                            

                            if (transfer > amount) {
                                printf("\n You have insufficient balance for the transfer \n");
                            }else {
                                amount = amount - transfer;
                                printf("\n\n Transfer successfull");
                                printf("\n The current balance is %lu/Tzs \n", amount);
                                break;
                            }
                        } else {
                            printf("\n Invalid bank account number.\n");
                            break;
                        }
                    }else if(transferChoice == 2){
                        printf("Enter the phone number to transfer (max 10 digits) \n");
                        printf("+255: ");
                        scanf("%s", &phoneNo);
                        
                        if (strlen(phoneNo) == 9) {
                            printf("\n Insert the amount to transfer to phone number: +255%s: ", phoneNo);
                            scanf("%lu", &transfer);


                            if (transfer > amount) {
                                printf("\n You have insufficient balance for the transfer \n");
                            }else {
                                amount = amount - transfer;
                                printf("\n\n Transfer successfull");
                                printf("\n The current balance is %lu/Tzs \n", amount);
                                break;
                            }
                        } else {
                            printf("\n Invalid phone number.\n");
                            break;
                        }
                    }

                case 5:
                    printf("\n Exiting the ATM service. Thank you!\n");
                    return 0;

                default:
                    printf("\n You have made an invalid choice \n");

            }
            
            
            printf("\n Do you want to make another transaction? (y/n): ");
            scanf(" %c", &anotherTransaction);
            if(anotherTransaction == 'n' || anotherTransaction == 'N') {
                printf("Exiting the ATM service. Thank you!\n");
                return 0;
            }else if(
                anotherTransaction != 'y' &&
                anotherTransaction != 'Y' &&
                anotherTransaction != 'n' &&
                anotherTransaction != 'N') {
                printf("Invalid option. Exiting the ATM service\n\n");
            }
            
        
        } while (anotherTransaction == 'y' || anotherTransaction == 'Y');
        
    } else {
        printf("Invalid PIN. Please insert your valid PIN.\n");
        }
    
    return 0;
    
}