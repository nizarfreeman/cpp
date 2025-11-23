#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon()
        {

        };
        Weapon(std::string type)
        {
            this->type = type;
        };
        ~Weapon(){
            
        };

        std::string &getType()
        {
            std::string &type = this->type;
            return (type);
        };
        void setType(std::string type)
        {
            this->type = type;
        };
};

// class HumanA
// {
//     private:
//         Weapon weapon;
//         std::string name;
//     public:
//         HumanA(std::string name, std::string type)
//         {
//             this->weapon.setType(type);
//             this->name = name;
//         };
//         ~HumanA();

//         void attack()
//         {
//             std::cout<<this->name<<" attacks with their "<<this->weapon.getType()<<std::endl;
//         };
// };

// class HumanB
// {
//     private:
//         Weapon weapon;
//         std::string name;
//     public:
//         HumanB(std::string name)
//         {
//             this->name = name;
//         };
//         ~HumanB();

//         void attack()
//         {
//             std::cout<<this->name<<" attacks with their "<<this->weapon.getType()<<std::endl;
//         };
// };

int main(int argc, char const *argv[])
{
    Weapon club = Weapon("waaaa");
    std::cout<<club.getType()<<std::endl;
    return (0);
}