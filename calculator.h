#pragma once

#include <iostream>

class Calculator
{
    private:
        int _val1,_val2,_result;
    public:
        Calculator();
        void add();
        void sub();
        void muti();
        void divi();
        void setValue(const int val1, const int val2) { _val1 = val1; _val2 = val2; }
        void show () const;
        void explain(const std::string& ope);


};
