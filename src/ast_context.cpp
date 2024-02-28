#include "ast_context.hpp"

void Context::initRegs(std::string name, int amount)
{
    for (int i = 0; i <= amount; i++)
    {
        std::string reg_name = name + std::to_string(i);
        _registers[reg_name] = Register(reg_name, "none");
    }
}
