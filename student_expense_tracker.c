#include <stdio.h>

int main() {
    float budget, amount, total = 0;
    int choice, count = 0;

    printf("=================================\n");
    printf("   SMART STUDENT EXPENSE TRACKER\n");
    printf("=================================\n");

    printf("Enter your monthly budget (Rs): ");
    scanf("%f", &budget);

    do {
        printf("\n------ MENU ------\n");
        printf("1. Add Expense\n");
        printf("2. View Total Expense\n");
        printf("3. View Remaining Budget\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter expense amount (Rs): ");
                scanf("%f", &amount);

                if (amount > 0) {
                    total = total + amount;
                    count++;
                    printf("Expense added successfully!\n");
                } else {
                    printf("Invalid amount!\n");
                }
                break;

            case 2:
                printf("\nTotal Expenses: Rs %.2f\n", total);
                printf("Number of expenses: %d\n", count);
                break;

            case 3:
                printf("\nMonthly Budget: Rs %.2f\n", budget);
                printf("Total Spent: Rs %.2f\n", total);
                printf("Remaining Budget: Rs %.2f\n",
                       budget - total);

                if (total > budget) {
                    printf("Warning: Budget exceeded!\n");
                } else {
                    printf("You are within your budget.\n");
                }
                break;

            case 4:
                printf("\nThank you for using Expense Tracker!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}