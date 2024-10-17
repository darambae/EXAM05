#include <iostream>

#ifndef WARLOCK_H
#define WARLOCK_H

class Warlock {
    private:
        Warlock();
        Warlock(Warlock const & src);
        Warlock& operator=(Warlock const & src);
        std::string _name;
        std::string _title;
    public:
        Warlock(const std::string& name, const std::string& title);
        const std::string&  getName() const;
        const std::string&  getTitle() const;
        void    setTitle(const std::string& title);
        void    introduce() const;
        ~Warlock();
};

#endif