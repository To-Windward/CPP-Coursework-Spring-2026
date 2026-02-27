// CS-210 Project Three
// Alec M. Roebuck, 2026

#ifndef ITEMTRACKER_H
#define ITEMTRACKER_H

#include <map>
#include <string>

class ItemTracker {
private:
    std::map<std::string, int> itemCounts;

public:
    void loadData(const std::string& filename);
    void saveData(const std::string& filename);
    int getItemFrequency(const std::string& item);
    void printAllItems();
    void printHistogram();
};

#endif
