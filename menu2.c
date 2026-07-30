#include <stdio.h>

int main()
{
    int choice;
    int q1 = 0, q2 = 0, q3 = 0, q4 = 0;
    int p1 = 300, p2 = 350, p3 = 250, p4 = 300;
    int t1 = 0, t2 = 0, t3 = 0, t4 = 0;
    int total;
    float gstAmount, grandTotal;

    printf("=====================================\n");
    printf("     Welcome to Sunayana's Dhabba\n");
    printf("=====================================\n");

    do
    {
        printf("\n------------ MENU ------------\n");
        printf("1. Dal Chawal              Rs.300\n");
        printf("2. Butter Paneer + Naan    Rs.350\n");
        printf("3. Veg Biryani             Rs.250\n");
        printf("4. Chicken Biryani         Rs.300\n");
        printf("5. Exit & Generate Bill\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Quantity: ");
                scanf("%d", &q1);
                t1 = p1 * q1;
                printf("Dal Chawal Added to Cart.\n");
                break;

            case 2:
                printf("Enter Quantity: ");
                scanf("%d", &q2);
                t2 = p2 * q2;
                printf("Butter Paneer with Naan Added to Cart.\n");
                break;

            case 3:
                printf("Enter Quantity: ");
                scanf("%d", &q3);
                t3 = p3 * q3;
                printf("Veg Biryani Added to Cart.\n");
                break;

            case 4:
                printf("Enter Quantity: ");
                scanf("%d", &q4);
                t4 = p4 * q4;
                printf("Chicken Biryani Added to Cart.\n");
                break;

            case 5:
                printf("\n=====================================\n");
                printf("             FINAL BILL\n");
                printf("=====================================\n");

                if(q1 > 0)
                    printf("Dal Chawal              %2d x 300 = %4d\n", q1, t1);

                if(q2 > 0)
                    printf("Butter Paneer + Naan    %2d x 350 = %4d\n", q2, t2);

                if(q3 > 0)
                    printf("Veg Biryani             %2d x 250 = %4d\n", q3, t3);

                if(q4 > 0)
                    printf("Chicken Biryani         %2d x 300 = %4d\n", q4, t4);

                total = t1 + t2 + t3 + t4;

                gstAmount = total * 0.18;
                grandTotal = total + gstAmount;

                printf("-------------------------------------\n");
                printf("Total Amount : Rs.%d\n", total);
                printf("GST (18%%)    : Rs.%.2f\n", gstAmount);
                printf("Grand Total  : Rs.%.2f\n", grandTotal);
                printf("-------------------------------------\n");
                printf("Thank You! Visit Again ??\n");
                break;

            default:
                printf("Invalid Choice! Please Try Again.\n");
        }

    } while(choice != 5);

    return 0;
}
