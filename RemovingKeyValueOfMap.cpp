#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> myMap = {{1, "One"}, {2, "Two"}, {3, "Three"}};

    // Print original map
    std::cout << "Before changing key:\n";
    for (const auto& pair : myMap)
        std::cout << pair.first << " -> " << pair.second << '\n';

    // Changing key: 2 -> 4
    auto it = myMap.find(2);
    if (it != myMap.end()) {
        std::string value = it->second; // Store value
        myMap.erase(it); // Remove old key
        myMap[4] = value; // Insert new key
    }

    // Print updated map
    std::cout << "\nAfter changing key:\n";
    for (const auto& pair : myMap)
        std::cout << pair.first << " -> " << pair.second << '\n';

    return 0;
}
