#pragma once
//-----------------------------------------------------------------------------------------------------
/*
    NAMESPACE::CLASS

    DESC
    
    Copyright 2015 - See license file LICENSE.txt
*/
//-----------------------------------------------------------------------------------------------------
#include "expr.h"
namespace ASL
{
    
struct UnaryExpr : public Expr
{
public:
    /// constructor
    UnaryExpr(const char op, Expr* e);
    /// destructor
    virtual ~UnaryExpr();

private:
    char op;
    Expr* expr;
};

} // namespace ASL
