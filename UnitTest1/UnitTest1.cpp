#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP 1.1/Number.h"
#include "../OOP 1.1/Number.cpp"
#include "../OOP 1.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMultiply)
        {
            Number num;
            num.Init(2, 4.5);

            num.multiply(2);
            Assert::AreEqual(num.Getfirst(2), 4, 0.001);
            Assert::AreEqual(num.Getsecond(4.5), 9.0, 0.001);
        }
    };
}
