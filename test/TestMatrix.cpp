//
//  TestMatrix.cpp
//  TestMatrix
//
//  Created by Liam on 12/11/2016.
//  Copyright © 2016 Liam. All rights reserved.
//


#define BOOST_TEST_DYN_LINK

#define BOOST_TEST_MODULE Test: Base Matrix Class

#include <boost/test/unit_test.hpp>
#include <boost/test/output_test_stream.hpp>
#include <iostream>
#include "baseMatrixClass.h"

template<typename T>
struct TestMatrix
{
    D_Base_Matrix<T>matrix{4, 5};
    TestMatrix()
    {
    }
    ~TestMatrix()
    {
    }
};

BOOST_FIXTURE_TEST_SUITE(test_suite_baseMatrixClass, TestMatrix<double>)

BOOST_AUTO_TEST_CASE(instaniation_typeDoubleSize4rows5cols_memoryAllocationLargerThanZero)
{
    BOOST_REQUIRE(sizeof(matrix) != 0);
}

BOOST_AUTO_TEST_CASE(elementAccess_elementOneTwoOfZeroMatrix_returnZero)
{
    BOOST_REQUIRE_EQUAL(matrix(1, 2), 0);
}

BOOST_AUTO_TEST_CASE(matrixOutput_typeDoubleSize4rows5cols_outputMatchesZeroMatrix)
{
    boost::test_tools::output_test_stream output("ZeroMatix4By5.txt", true);
    
    output << matrix;
    
    BOOST_CHECK(output.match_pattern());
}

BOOST_AUTO_TEST_SUITE_END()
