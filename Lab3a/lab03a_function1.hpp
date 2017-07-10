#ifndef _function1
#define _function1


int AddThree( int a, int b, int c )
{
    return a + b + c;
}

/* Add a test to this function */
void Test_AddThree()
{
    cout << "************ Test_AddThree ************" << endl;

    int input1, input2, input3;
    int expectedOutput;
    int actualOutput;

    /* TEST 1 ********************************************/
    input1 = 1; input2 = 1; input3 = 1;
    expectedOutput = 3;

    actualOutput = AddThree( input1, input2, input3 );
    if ( actualOutput == expectedOutput )
    {
        cout << "Test_AddThree: Test 1 passed!" << endl;
    }
    else
    {
        cout << "Test_AddThree: Test 1 FAILED!" << endl;
    }

    /* TEST 2 ********************************************/
    // CREATE YOUR OWN TEST
    input1 = 5;             // change me
    input2 = 5;             // change me
    input3 = 5;             // change me
    expectedOutput = 15;    // change me


    // Run test (keep this as-is):
    actualOutput = AddThree( input1, input2, input3 );
    if ( actualOutput == expectedOutput )
    {
        cout << "Test_AddThree: Test 2 passed!" << endl;
    }
    else
    {
        cout << "Test_AddThree: Test 2 FAILED!" << endl;
    }

    /* TEST 3 ********************************************/
    // CREATE YOUR OWN TEST
    input1 = 206;             // change me
    input2 = 206;             // change me
    input3 = 206;             // change me
    expectedOutput = 618;    // change me


    // Run test (keep this as-is):
    actualOutput = AddThree( input1, input2, input3 );
    if ( actualOutput == expectedOutput )
    {
        cout << "Test_AddThree: Test 3 passed!" << endl;
    }
    else
    {
        cout << "Test_AddThree: Test 3 FAILED!" << endl;
    }
}

#endif
