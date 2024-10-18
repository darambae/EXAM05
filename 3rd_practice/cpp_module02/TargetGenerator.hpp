#pragma once

#include <iostream>
#include "ATarget.hpp"
#include <map>

class TargetGenerator {
    private: 
        TargetGenerator(TargetGenerator const &);
        TargetGenerator & operator=(TargetGenerator const &);
        std::map<std::string, ATarget *> _targets;
    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnTargetType(ATarget * target);
        void forgetTargetType(const std::string& targetName);
        ATarget *createTarget(const std::string &);
};