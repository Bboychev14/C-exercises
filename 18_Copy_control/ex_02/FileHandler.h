#include <string>
#include <fstream>
#include <iostream>

class FileHandler
{
public:
    FileHandler(const std::string& filename);
    ~FileHandler();
    FileHandler(const FileHandler&) = delete;//Forbids Copying
    FileHandler& operator=(const FileHandler&) = delete;//Forbids Assignment
    //Move
    FileHandler(FileHandler&& other) noexcept;
    FileHandler& operator=(FileHandler&& other) noexcept;
    
    void PrintContent();
    void ChangeContent(const std::string& str);

private:
    std::string filename_;
    std::ofstream file_;
};