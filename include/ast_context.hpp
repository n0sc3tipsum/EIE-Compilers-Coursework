#ifndef AST_CONTEXT_HPP
#define AST_CONTEXT_HPP
#include <string>
#include <vector>
#include <map>
#include "ast_register.hpp"
// An object of class Context is passed between AST nodes during compilation.
// This can be used to pass around information about what's currently being
// compiled (e.g. function scope and variable names).

typedef struct
{
    int mem_address;
    int sp_offset;
    std::string reg;

} address_descriptor_t;

typedef struct
{
    std::string type;
    address_descriptor_t stored_address;

} symbol_record_t;

class Context
{
public:
    std::map<std::string, symbol_record_t> _symbol_table;
    std::map<std::string, Register> _registers;
    Context()
    {
        initRegs("a", 7);
        initRegs("s", 11);
        initRegs("t", 6);
        _registers["tp"] = Register("tp", "none");
        _registers["sp"] = Register("sp", "none");
        _registers["gp"] = Register("gp", "none");
        _registers["ra"] = Register("ra", "none");
        _registers["zero"] = Register("zero", "0");

    }
    void initRegs(std::string name, int amount);
    /* TODO decide what goes inside here */
};



#endif
