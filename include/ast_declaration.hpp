#ifndef AST_DECLARATION_HPP
#define AST_DECLARATION_HPP
#include "ast_node.hpp"

class Declaration : public Node
{
private :

public :

  Declaration(Node *declaration_specifiers, Node *init_declarator_list){};

};

#endif
