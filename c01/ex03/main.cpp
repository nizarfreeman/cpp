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

class HumanA
{
    private:
        Weapon &weapon;
        std::string name;
    public:
        HumanA(std::string name, Weapon &wep): weapon(wep), name(name)
        {
        };
        ~HumanA()
        {
        };
        void attack()
        {
            std::cout<<this->name<<" attacks with their "<<this->weapon.getType()<<std::endl;
        };
};

class HumanB
{
    private:
        Weapon *weapon;
        std::string name;
    public:
        HumanB(std::string name): name(name), weapon(NULL)
        {
        };
        ~HumanB()
        {
        };

        void setWeapon(Weapon &wep)
        {
            this->weapon= &wep;
        };
        void attack()
        {
            if (this->weapon)
                std::cout<<this->name<<" attacks with their "<<this->weapon->getType()<<std::endl;
            else
                std::cout<<this->name<<" has no weapon!"<<std::endl;
        };
};

int main()
{
{
Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
}
{
Weapon club = Weapon("crude spiked club");
HumanB jim("Jim");
jim.setWeapon(club);
jim.attack();
club.setType("some other type of club");
jim.attack();
}
return 0;
}