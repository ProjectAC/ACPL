#pragma once

#include "../Definations/platform.h"
#include "token.h"

namespace ACPL
{
    class Key : public Token
    {
    private:

        Tstring name;
        ID id;

    public:

        enum Keyword
        {
            // Data types
            INT,
            REAL,
            FLOAT,
            CHAR,
            CLASS,

            // Logic
            IF,
            ELSE,
            FOR,
            REPEAT,
            WHILE,
            BREAK,
            CONTINUE,
            RETURN,
            
            // 
        }

        ID get_id();
    }
}
