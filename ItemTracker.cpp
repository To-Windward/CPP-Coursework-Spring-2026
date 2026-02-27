// CS-210 Project Three
// Alec M. Roebuck, 2026

#include "ItemTracker.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <cctype>

// Small helper function for lowercase conversion
std::string toLowerCase(const std::string& str) 
{
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(),
        [](unsigned char c) { return std::tolower(c); });
    return result;
}

// Load data from supplied .txt file
void ItemTracker::loadData(const std::string& filename) 
{
    std::ifstream inFile(filename);

    if (!inFile) // We can't find it, so tell the user that 
    {
        std::cerr << "Error: Cannot open file " << filename << std::endl;
        return;
    }

    std::string item;
    while (inFile >> item) // We did find it, so read it in word-by-word
    {
        itemCounts[toLowerCase(item)]++; // Increment existing keys, or create one if it doesn't exist
    }

    inFile.close();
}

// For saving parsed data to an output file
void ItemTracker::saveData(const std::string& filename) 
{
    std::ofstream outFile(filename);

    if (!outFile) // Exception catch
    {
        std::cerr << "Error: Cannot open file " << filename << " for writing." << std::endl;
        return;
    }

    // Output key-value pairs, line-by-line
    for (const auto& pair : itemCounts)
    {
        outFile << pair.first << " " << pair.second << std::endl;
    }

    outFile.close();
}

// Returns the frequency/count of a specific item.
// Converts the item name to lowercase to allow case-insensitive searches.
int ItemTracker::getItemFrequency(const std::string& item) 
{
    auto it = itemCounts.find(toLowerCase(item));
    return (it != itemCounts.end()) ? it->second : 0;
}

// Prints all items along with their purchase frequencies.
void ItemTracker::printAllItems() 
{
    std::cout << "Item Frequency List:" << std::endl;
    for (const auto& pair : itemCounts) 
    {
        std::cout << pair.first << " " << pair.second << std::endl;
    }
}

// Prints a simple text-based histogram of items.
void ItemTracker::printHistogram() 
{
    std::cout << "Item Purchase Histogram:" << std::endl;
    for (const auto& pair : itemCounts) 
    {
        std::cout << std::setw(10) << std::left << pair.first << " ";

        // Print one asterisk per occurrence of the item
        for (int i = 0; i < pair.second; ++i) 
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
