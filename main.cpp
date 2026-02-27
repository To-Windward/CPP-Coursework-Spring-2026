// CS-210 Project Three
// Alec M. Roebuck, 2026

#include <iostream>
#include "ItemTracker.h"

int main() 
{
    ItemTracker tracker;

    // Load the data from input file
    tracker.loadData("CS210_Project_Three_Input_File.txt");
    // Save a backup of the item frequency data to a separate file
    tracker.saveData("frequency.dat");

    int choice;
    do //Continue until the user selects item 4 (exit)
    {
        std::cout << "\nMenu Options:\n";
        std::cout << "1. Search for an item frequency\n";
        std::cout << "2. Display all items and frequencies\n";
        std::cout << "3. Display histogram\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // User entered a non-numeric:
        if (std::cin.fail()) 
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "Invalid input. Please enter a number 1-4.\n";
            continue;
        }

        switch (choice) 
        {
            case 1: 
            {
                std::string searchItem;
                std::cout << "Enter item to search: ";
                std::cin >> searchItem;
                std::cout << searchItem << " purchased "
                    << tracker.getItemFrequency(searchItem) << " times.\n";
                break;
            }
            case 2:
                tracker.printAllItems();
                break;
            case 3:
                tracker.printHistogram();
                break;
            case 4:
                std::cout << "Exiting program.\n";
                break;
            default: // Fall-through catch: we haven't hit an acceptable branch yet, so the user hasn't entered an acceptable choice
                std::cout << "Invalid choice. Please enter 1-4.\n";
        }

    } while (choice != 4);

    return 0;
}
