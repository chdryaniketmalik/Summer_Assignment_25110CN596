#include <stdio.h>

#define TOTAL_SEATS 10

int main()
{
    int seats[TOTAL_SEATS] = {0}; // 0 = Available, 1 = Booked
    int choice, seat, i;

    while (1)
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. View Available Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. View Booking Status\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nAvailable Seats:\n");
                for (i = 0; i < TOTAL_SEATS; i++)
                {
                    if (seats[i] == 0)
                        printf("Seat %d : Available\n", i + 1);
                }
                break;

            case 2:
                printf("Enter seat number to book (1-%d): ", TOTAL_SEATS);
                scanf("%d", &seat);

                if (seat < 1 || seat > TOTAL_SEATS)
                {
                    printf("Invalid seat number!\n");
                }
                else if (seats[seat - 1] == 1)
                {
                    printf("Seat %d is already booked!\n", seat);
                }
                else
                {
                    seats[seat - 1] = 1;
                    printf("Seat %d booked successfully.\n", seat);
                }
                break;

            case 3:
                printf("Enter seat number to cancel (1-%d): ", TOTAL_SEATS);
                scanf("%d", &seat);

                if (seat < 1 || seat > TOTAL_SEATS)
                {
                    printf("Invalid seat number!\n");
                }
                else if (seats[seat - 1] == 0)
                {
                    printf("Seat %d is not booked.\n", seat);
                }
                else
                {
                    seats[seat - 1] = 0;
                    printf("Booking for Seat %d cancelled successfully.\n", seat);
                }
                break;

            case 4:
                printf("\nBooking Status:\n");
                for (i = 0; i < TOTAL_SEATS; i++)
                {
                    printf("Seat %2d : %s\n", i + 1,
                           seats[i] == 1 ? "Booked" : "Available");
                }
                break;

            case 5:
                printf("Thank you for using the Ticket Booking System.\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}