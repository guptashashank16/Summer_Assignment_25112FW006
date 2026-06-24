#include <stdio.h>
#include <string.h>
struct Ticket 
{
    int ticketId;
    char passengerName[50];
    char destination[50];
    int seatNo;
};
int main() 
{
    struct Ticket ticket[100];
    int n = 0;
    int choice, id, i, found;
    int totalSeats = 50;

    while (1) 
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. View All Bookings\n");
        printf("3. Search Booking\n");
        printf("4. Cancel Ticket\n");
        printf("5. Check Available Seats\n");
        printf("6. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {

        case 1:
            if (n >= totalSeats) 
            {
                printf("Sorry! No Seats Available.\n");
                break;
            }

            printf("\nEnter Ticket ID: ");
            scanf("%d", &ticket[n].ticketId);

            printf("Enter Passenger Name: ");
            scanf(" %[^\n]", ticket[n].passengerName);

            printf("Enter Destination: ");
            scanf(" %[^\n]", ticket[n].destination);

            ticket[n].seatNo = n + 1;

            printf("Ticket Booked Successfully!\n");
            printf("Seat Number: %d\n", ticket[n].seatNo);

            n++;
            break;

        case 2:
            if (n == 0) 
            {   printf("\nNo Bookings Found!\n");   }
            else 
            {
                printf("\n----- Booking Details -----\n");
                for (i = 0; i < n; i++) 
                {
                    printf("\nTicket ID      : %d\n", ticket[i].ticketId);
                    printf("Passenger Name : %s\n", ticket[i].passengerName);
                    printf("Destination    : %s\n", ticket[i].destination);
                    printf("Seat Number    : %d\n", ticket[i].seatNo);
                }
            }
            break;

        case 3:
            printf("\nEnter Ticket ID to Search: ");
            scanf("%d", &id);
            found = 0;
            for (i = 0; i < n; i++) 
            {
                if (ticket[i].ticketId == id) 
                {
                    printf("\nBooking Found!\n");
                    printf("Ticket ID      : %d\n", ticket[i].ticketId);
                    printf("Passenger Name : %s\n", ticket[i].passengerName);
                    printf("Destination    : %s\n", ticket[i].destination);
                    printf("Seat Number    : %d\n", ticket[i].seatNo);
                    found = 1;
                    break;
                }
            }
            if (!found)
            printf("Booking Not Found!\n");
            break;

        case 4:
            printf("\nEnter Ticket ID to Cancel: ");
            scanf("%d", &id);
            found = 0;
            for (i = 0; i < n; i++) 
            {
                if (ticket[i].ticketId == id) 
                {
                    for (int j = i; j < n - 1; j++) 
                    {  ticket[j] = ticket[j + 1]; }
                    n--;
                    printf("Ticket Cancelled Successfully!\n");
                    found = 1;
                    break;
                }
            }
            if (!found)
            printf("Booking Not Found!\n");
            break;

        case 5:
            printf("\nTotal Seats     : %d\n", totalSeats);
            printf("Booked Seats    : %d\n", n);
            printf("Available Seats : %d\n", totalSeats - n);
            break;

        case 6:
            printf("\nThank You for Using the System!\n");
            return 0;
        default:
            printf("\nInvalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}