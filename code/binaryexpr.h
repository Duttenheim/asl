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
    
struct BinaryExpr : public Expr
{
public:
    /// constructor
    BinaryExpr(const char op, Expr* e1, Expr* e2);
    /// destructor
    virtual ~BinaryExpr();

private:
    Expr *expr1, *expr2;
    char op;
};

} // namespace ASL
