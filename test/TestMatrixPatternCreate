//
//  TestMatrixPatternCreate.cpp
//  TestMatrixPatternCreate
//
//  Created by Liam on 03/08/2016.
//  Copyright © 2016 Liam. All rights reserved.
//

// This file can be used to create the correct Pattern Match File for the Pattern Match test in TestMatrix
// Compile and execute this file inside the same directory as TestMatrix.cpp


#include <fstream>
#include "D_Base_Matrix.h"

        
int main()
{
    std::ofstream outf("ZeroMatix4By5.txt");
    if (!outf)
    {
        // Print an error and exit
        std::cerr << "Uh oh, ZeroMatix4By5.txt could not be opened for writing!" << std::endl;
        exit(1);
    }
    for(int i = 0; i < 4; ++i)
    {
        outf << '|';
        for(int j = 0; j < 5; ++j)
        {
            outf << 0 << '\t';
        }
        outf << '|' << '\n';
    }
    outf.close();
    
    return 0;
}
