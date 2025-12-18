#include <stdio.h>
#include <string.h>

struct Account {
    int acc_no;
    char name[50];
    float balance;
};

struct Account account;

void createAccount() {
    printf("Enter account number: ");
    scanf("%d", &account.acc_no);
    printf("Enter account holder name: ");
    scanf("%s", account.name);
    account.balance = 0;
    printf("Account created successfully!\n");
}

void deposit() {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);
    account.balance += amount;
    printf("Amount deposited successfully!\n");
}

void withdraw() {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);
    if(amount <= account.balance) {
        account.balance -= amount;
        printf("Amount withdrawn successfully!\n");
    } else {
        printf("Insufficient balance!\n");
    }
}

void checkBalance() {
    printf("Account Number: %d\n", account.acc_no);
    printf("Account Holder: %s\n", account.name);
    printf("Balance: %.2f\n", account.balance);
}

int main() {
    int choice;
    while(1) {
        printf("\n1. Create Account\n2. Deposit\n3. Withdraw\n4. Check Balance\n5. Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: createAccount(); break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: checkBalance(); break;
            case 5: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
