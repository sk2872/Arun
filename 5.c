#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a passenger
struct Passenger {
    char name[50];
    int age;
    char gender[10];
};

// Structure to represent a train
struct Train {
    int trainNumber;
    char name[50];
    char source[50];
    char destination[50];
    int availableSeats;
};

// Function to reserve a seat on a train
void reserveSeat(struct Train trains[], int numTrains, int trainNumber, struct Passenger passenger) {
    for (int i = 0; i < numTrains; i++) {
        if (trains[i].trainNumber == trainNumber) {
            if (trains[i].availableSeats > 0) {
                printf("Seat reserved successfully!\n");
                printf("Train: %s\n", trains[i].name);
                printf("Passenger Name: %s\n", passenger.name);
                printf("Age: %d\n", passenger.age);
                printf("Gender: %s\n", passenger.gender);
                printf("Source: %s\n", trains[i].source);
                printf("Destination: %s\n", trains[i].destination);
                trains[i].availableSeats--;
                return;
            } else {
                printf("No available seats on this train.\n");
                return;
            }
        }
    }
    printf("Train not found.\n");
}

int main() {
    struct Train trains[3];
    trains[0].trainNumber = 101;
    strcpy(trains[0].name, "Express 101");
    strcpy(trains[0].source, "Source A");
    strcpy(trains[0].destination, "Destination X");
    trains[0].availableSeats = 50;

    trains[1].trainNumber = 102;
    strcpy(trains[1].name, "Superfast 102");
    strcpy(trains[1].source, "Source B");
    strcpy(trains[1].destination, "Destination Y");
    trains[1].availableSeats = 60;

    trains[2].trainNumber = 103;
    strcpy(trains[2].name, "Local 103");
    strcpy(trains[2].source, "Source C");
    strcpy(trains[2].destination, "Destination Z");
    trains[2].availableSeats = 40;

    struct Passenger passenger;
    strcpy(passenger.name, "John Doe");
    passenger.age = 25;
    strcpy(passenger.gender, "Male");

    int selectedTrain = 102;

    reserveSeat(trains, 3, selectedTrain, passenger);

    return 0;
}
