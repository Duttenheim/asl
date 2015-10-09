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
    
struct Atom : public Expr
{
public:
    /// constructor from int
    Atom(const int ival);
    /// constructor from float
    Atom(const float fval);
    /// constructor from string
    Atom(const char* sval);
    /// destructor
    virtual ~Atom();

private:
    union
    {
        int ival;
        float fval;
        const char* sval;    
    };
};

} // namespace ASL
