#pragma once

#include <iostream>

class Warlock {
    private:
        Warlock();
        std::string _name;
        std::string _title;
        Warlock & operator=(Warlock const & src);
        Warlock(Warlock const & src);
    public:
        virtual ~Warlock();
        Warlock(std::string name ,std::string title);
        const std::string & getName() const;
        const std::string & getTitle() const;
        void  setTitle(const std::string &);
        void introduce() const;
};