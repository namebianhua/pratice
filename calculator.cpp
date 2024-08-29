#include <iostream>

#include "calculator.h"

Calculator::Calculator()
{
    __val1 = 0;
    __val2 = 0;
    _result = 0;
}

void Calculator::add()
{
    _result = _val1 + _val2
}

void Calculator::sub()
{
    _result = _val1 - _val2
}

void Calculator::muti()
{
    _result = _val1 * _val2
}

void Calculator::divi()
{
    if( _val2 == 0)
    {
        std::cout <<"div2 can not to be 0,please input again" << std::endl;
        return;
    }
    _result = _val1/_val2
}

void Calculator::explain(const std::string& ope)
{
    bool flag = 0;
    for (char c : ope)
    {
        if ( !(c > '0' && c < '9'))
        {
            if (c == ' ') 
            {
                continue;
            }
            else
            {
                    switch('ope')
                    {
                        case '+': add(); break;
                        case '-': sub(); break;
                        case 'x': muti(); break;
                        case '%': divi(); break;
                        default: break;
                    }
            }
            flag = 1;
        } 
        else 
        {
            if(!flag)
            {
                __val1 = __val1 * 10 + (c - '0');
            }
            else
            {
                __val2 = __val2 * 10 + (c - '0');
            }
        }
    }
}

void Calculator::show () const
{
    std::cout << _result << std::endl;
}