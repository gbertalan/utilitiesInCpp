#include <iostream>
#include <fstream> // file stream

void writeFile(std::string fileName);

int main()
{
    writeFile("textfile.txt");

    return 0;
}

/**
 * Writes to a given file. If the file does not exist, it creates one with the given name.
**/
void writeFile(std::string fileName)
{
    std::ofstream file;  // creating an instance of the ofstream class
    file.open(fileName); // opening the file (but not appending to it, overwriting)

    // an alternative for the above two lines:
    // std::ofstream file(fileName);

    // file.open(fileName, std::ios::app); // opening the file (and appending to it)

    if (!file.is_open()) // checking if file is opened successfully
    {
        std::cout << "Error: Unable to open the file." << std::endl;
    }

    file << "Writing text to a file"; // We write "hey" to the file.

    file.close(); // closing the file
}