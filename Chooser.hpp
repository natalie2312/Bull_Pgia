#pragma once
#include<iostream>
#include<cstdint>
#include<string>
#include "calculate.hpp"
using std::istream,std::ostream, std::string;


namespace bullpgia {
    	class Chooser {
            public:

            uint length;

             virtual string choose(uint length) = 0;
        };

};