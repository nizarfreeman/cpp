#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
    if (argc != 4)
    {
        std::cout << "Program takes three parameters !" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (s1.empty() || s2.empty())
    {
        std::cout << "Strings cannot be empty." << std::endl;
        return 1;
    }
    std::fstream in(filename.c_str(), std::ios::in | std::ios::out);
    if (!in.is_open())
    {
        std::cout << "File not opened !" << std::endl;
        return 1;
    }
    std::ofstream out((filename + ".replace").c_str());
    if (!out.is_open())
    {
        std::cout << "Failed to create .replace file !" << std::endl;
        return 1;
    }
    std::string line;
    while (std::getline(in, line))
    {
        std::string::size_type pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
          }
        out << line;
        if (!in.eof())
            out << '\n';
    }
    return 0;
}