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
    
struct CallExpr : public Expr
{
public:
    /// constructor
    CallExpr();
    /// destructor
    virtual ~CallExpr();

private:
};

} // namespace ASL
