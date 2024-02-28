#ifndef AST_REGISTER_HPP
#define AST_REGISTER_HPP
#include <string>
class Register
{
public :
    std::string _name;
    std::string _content;
    Register() : _name(""), _content(""){};
    Register(std::string name, std::string content) : _name(name), _content(content){};
};

#endif
