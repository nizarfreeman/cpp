#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
    if (argc != 4)
    {
        std::cout<<"Program takes three parameters !"<<std::endl;
        return (1);
    }

    std::string filename = argv[1];
    std::string str1 = argv[2];
    std::string str2 = argv[3];

    std::fstream file;

    file.open(filename, std::ios::in | std::ios::out);

    if (!file)
    {
        std::cout<<"File not opened/created !"<<std::endl;
        return (1);
    }

    else
    {
        std::string line;
        std::cout<<"File opened/created successfully!"<<std::endl;
        file<<"wahia 3ibad lah ";
        file.seekg(0);
        while (std::getline(file, line))
        {
            std::cout << line << std::endl;
        }
        file.clear();
        file<<"AAAAAAAAAAAAAAAAAA";
        file.seekg(0);
        while (std::getline(file, line))
        {
            std::cout << line << std::endl;
        }
        file.close();
    }
    std::cout<<std::endl;
    return 0;
}
