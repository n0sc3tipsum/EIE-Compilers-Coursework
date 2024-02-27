#ifndef AST_CONTEXT_HPP
#define AST_CONTEXT_HPP
#include <string>
#include <vector>
#include <map>
// An object of class Context is passed between AST nodes during compilation.
// This can be used to pass around information about what's currently being
// compiled (e.g. function scope and variable names).
typedef union
{
    std::string string_t;
    char char_t;
    int int_t;
    float float_t;
    long long_t;

}identifierValue;

typedef struct
{
    std::string type;
    identifierValue value;

}identifierRecord;

class ActivationRecord
{
    int _size;
    std::string _procedure_name;
};

class Context
{
    std::map<std::string, identifierRecord> _symbol_table;

    /* TODO decide what goes inside here */
};

#endif
