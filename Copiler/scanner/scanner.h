#pragma once

#include "../../platform.h" 

namespace ACPL
{
    class Scanner
    {
    private:
        // File input stream
        Tifstream fin;

    public:

        // [Interface]
        // Open the specified file
        void open(Tstring filename);

        // [Interface]
        // Read the next token
        // Returns the ID of the token received 
        Token read();
    }
}