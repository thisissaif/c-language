#include <stdio.h>

int main() {
    int totalEarnings = 0;
    int earningsPerTask = 10;
    int choice;
    
    printf("Welcome to the Earning App!\n");
    
    while (1) {
        printf("\n-- Menu --\n");
        printf("1. Earn\n");
        printf("2. Check Total Earnings\n");
        printf("3. Quit\n");
        
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("\nEarn 10 units for completing a task.\n");
                totalEarnings += earningsPerTask;
                printf("You've earned 10 units!\n");
                break;
                
            case 2:
                printf("\nTotal Earnings: %d units\n", totalEarnings);
                break;
                
            case 3:
                printf("\nThank you for using the Earning App!\n");
                return 0;
                
            default:
                printf("\nInvalid choice. Please try again.\n");
                break;
        }
    }
    
    return 0;
}