// Semester Project: Seat Management System
// Student Name: Neha Yadav
// ERP: RU-25-10877
// College: Rungta International Skills University
// Program: BCA

#include <stdio.h>
#include <stdlib.h>

// Define the number of seats
#define TOTAL_SEATS 10

// 1D array for seat management: 0 = available, 1 = booked
int seats[TOTAL_SEATS] = {0};

// Function for booking a seat
void bookSeat(int seatNum) {
    // Conditional statement for booking validation
    if (seatNum < 1 || seatNum > TOTAL_SEATS) {
        printf("Invalid seat number. Please choose between 1 and %d.\n", TOTAL_SEATS);
    } else if (seats[seatNum - 1] == 1) {
        printf("Seat %d is already booked.\n", seatNum);
    } else {
        seats[seatNum - 1] = 1;
        printf("Seat %d booked successfully!\n", seatNum);
    }
}

// Function for cancelling a seat
void cancelSeat(int seatNum) {
    // Conditional statement for cancellation validation
    if (seatNum < 1 || seatNum > TOTAL_SEATS) {
        printf("Invalid seat number. Please choose between 1 and %d.\n", TOTAL_SEATS);
    } else if (seats[seatNum - 1] == 0) {
        printf("Seat %d is not booked.\n", seatNum);
    } else {
        seats[seatNum - 1] = 0;
        printf("Seat %d cancelled successfully!\n", seatNum);
    }
}

// Function to check and display seat availability using loops
void checkAvailability() {
    printf("Seat Availability:\n");
    for (int i = 0; i < TOTAL_SEATS; i++) {
        printf("Seat %d: %s\n", i + 1, seats[i] == 0 ? "Available" : "Booked");
    }
}

int main() {
    int choice, seatNum;
    
    printf("Welcome to the Seat Management System\n");
    printf("Student: Neha Yadav, ERP: RU-25-10877, BCA at Rungta International Skills University\n\n");
    
    // Menu-driven system using switch case
    while (1) {
        printf("\nMenu:\n");
        printf("1. Book a Seat\n");
        printf("2. Cancel a Seat\n");
        printf("3. Check Seat Availability\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter seat number to book (1-%d): ", TOTAL_SEATS);
                scanf("%d", &seatNum);
                bookSeat(seatNum);
                break;
            case 2:
                printf("Enter seat number to cancel (1-%d): ", TOTAL_SEATS);
                scanf("%d", &seatNum);
                cancelSeat(seatNum);
                break;
            case 3:
                checkAvailability();
                break;
            case 4:
                printf("Exiting the system. Thank you!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0;
}
