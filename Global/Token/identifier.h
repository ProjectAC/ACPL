#pragma once

#include "../Definations/platform.h"
#include "token.h"

namespace ACPL
{
    class Identifier : public Token
    {
    private:

        Tstring name;
        ID id;

    public:

        ID get_id();
    }

}