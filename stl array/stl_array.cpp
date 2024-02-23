#include <iostream>
#include <unordered_map>
#include <string>

std::string::const_iterator firstNonOccurringChar(const std::string& s) {
    std::unordered_map<char, int> charCount;

    // Count occurrences of each character in the string
    for (char c : s) {
        charCount[c]++;
    }

    // Find the iterator of the first character with count 1 (non-repeating)
    for (std::string::const_iterator it = s.begin(); it != s.end(); ++it) {
        if (charCount[*it] == 1) {
            return it;
        }
    }

    // Return s.end() if no non-repeating character is found
    return s.end();
}

int main() {
    std::string input = "ramesh";
    auto it = firstNonOccurringChar(input);

    if (it != input.end()) {
        std::cout << "First non-repeating character: " << *it << " at index: " << std::distance(input.cbegin(), it) << std::endl;
    } else {
        std::cout << "No non-repeating character found." << std::endl;
    }

    return 0;
}
