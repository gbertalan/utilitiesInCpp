#include <iostream>
#include <fstream> // file stream
#include <vector>

void readFile(std::string fileName);

int main()
{
    readFile("textfile.txt");

    return 0;
}

void readFile(std::string fileName)
{
    std::ifstream file(fileName);

    if (!file.is_open()) // checking if file is opened successfully
    {
        std::cout << "Error: Unable to open the file." << std::endl;
    }

    std::vector<std::string> lines;
    std::string input;
    while (file >> input) // reads word-by-word. if we want character-by-character, then the type of input variable should be char.
    { 
        lines.push_back(input);
    }

    // To read only one character, we can also use "char temp = file.get();".
    // To read line-by-line: getline(file, myString);

    for (std::string line : lines)
    {
        std::cout << line << std::endl;
    }
}