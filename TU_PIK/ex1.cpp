#include <iostream>
#include <fstream>
#include <vector>

void displayMenu() {
    std::cout << "Menu:\n";
    std::cout << "1. Read from file\n";
    std::cout << "2. Information processing\n";
    std::cout << "3. Write in file\n";
    std::cout << "4. Exit\n";
}

void readFromFile(const std::string& filename, std::vector<double>& numbers) {
    std::ifstream file(filename);
    if (file.is_open()) {
        double number;
        while (file >> number) {
            numbers.push_back(number);
        }
        file.close();
    } else {
        std::cerr << "Couldn't open the file: " << filename << std::endl;
    }
}

void processNumbers(const std::vector<double>& numbers, std::vector<int>& integers, std::vector<double>& fractions) {
    for (double number : numbers) {
        int intPart = static_cast<int>(number);
        double fracPart = number - intPart;
        integers.push_back(intPart);
        fractions.push_back(fracPart);
    }
}

void writeToFile(const std::string& filename, const std::vector<int>& integers, const std::vector<double>& fractions) {
    std::ofstream file(filename);
    if (file.is_open()) {
        for (size_t i = 0; i < integers.size(); i++) {
            file << integers[i] << " " << fractions[i] << std::endl;
        }
        file.close();
        std::cout << "Successfully saved data into the file: " << filename << std::endl;
    } else {
        std::cerr << "Couldn't open thefile: " << filename << std::endl;
    }
}

int main() {
    std::vector<double> numbers;
    std::vector<int> integers;
    std::vector<double> fractions;

    while (true) {
        displayMenu();
        int choice;
        std::cout << "Choose an option: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                readFromFile("input.txt", numbers);
                break;
            case 2:
                processNumbers(numbers, integers, fractions);
                break;
            case 3:
                writeToFile("output.txt", integers, fractions);
                break;
            case 4:
                std::cout << "Exit the program.\n";
                return 0;
            default:
                std::cout << "Invalid input.\n";
                break;
        }
    }

    return 0;
}
