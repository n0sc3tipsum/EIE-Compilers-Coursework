#ifndef AST_FUNCTION_DEFINITION_HPP
#define AST_FUNCTION_DEFINITION_HPP

#include "ast_node.hpp"

class FunctionDefinition : public Node
{
private:
    Node *declaration_specifiers_;
    Node *declarator_;
    Node *compound_statement_;
    NodeList *declaration_list_;
    int arg_amount_;

public:
    FunctionDefinition(Node *declaration_specifiers, Node *declarator, Node *compound_statement) : declaration_specifiers_(declaration_specifiers), declarator_(declarator), compound_statement_(compound_statement){};
    FunctionDefinition(Node *declaration_specifiers, Node *declarator, Node *compound_statement, NodeList *declaration_list) : declaration_specifiers_(declaration_specifiers), declarator_(declarator), compound_statement_(compound_statement), declaration_list_(declaration_list){};

    ~FunctionDefinition()
    {
        delete declaration_specifiers_;
        delete declaration_list_;
        delete declarator_;
        delete compound_statement_;
    };
    void EmitRISC(std::ostream &stream, Context &context) const override;
    void Print(std::ostream &stream) const override;
};

#endif
