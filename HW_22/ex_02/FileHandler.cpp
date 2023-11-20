#include "FileHandler.h"

FileHandler::FileHandler(const std::string &filename) : file_(filename)
{
    if (!file_.is_open())
    {
        std::cerr << "Couldn't open the file: " << filename << std::endl;
    }
}

FileHandler::~FileHandler()
{
    if (file_.is_open())
    {
        file_.close();
    }
}

FileHandler::FileHandler(FileHandler&& other) noexcept : file_(std::move(other.file_)) {}

FileHandler& FileHandler::operator=(FileHandler&& other) noexcept
{
    if (this != &other)
    {
        file_ = std::move(other.file_);
    }
    return *this;
}

void FileHandler::PrintContent()
{
    std::string line;
    while (std::getline(file_, line))
    {
        std::cout << line << std::endl;
    }
}

void FileHandler::ChangeContent(const std::string& str)
{
    if (file_.is_open())
    {
        file_.close();
    }
    file_.open(filename_);
    if (file_.is_open())
    {
        file_ << str;
        file_.close();
    }
    else
    {
        std::cerr << "Couldn't open the file: " << filename_ << std::endl;
    }
}