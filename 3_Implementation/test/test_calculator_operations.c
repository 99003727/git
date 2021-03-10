#include "unity.h"
#include <calculator_operations.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_add_testcase2(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_modulous(void);
void test_square(void);
void test_cube(void);
void test_squareroot(void);
void test_cuberoot(void);
void test_factorial(void);
void test_Degree(void);//done by shiva for conversion
void test_radian(void);//done by shiva for conversion

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_add_testcase2);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_square);
  RUN_TEST(test_cube);
  RUN_TEST(test_squareroot);
  RUN_TEST(test_cuberoot);
  RUN_TEST(test_factorial);
  RUN_TEST(test_Degree);//done by shiva for conversion
  RUN_TEST(test_radian);//done by shiva for conversion

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  TEST_ASSERT_EQUAL(-10, add(10, -20));
}
void test_add_testcase2(void) {
 
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1500, add(750, 7500));
}
void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, substraction(0, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, substraction(1000, 900));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiplication(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(2, multiplication(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, division(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(3, division(2, 2));
}
  void test_modulous(void) {
    TEST_ASSERT_EQUAL(1, modulous(1, 1));
  }
  void test_square(void) {

    TEST_ASSERT_EQUAL(4, square(16));
    TEST_ASSERT_EQUAL(121,square(-11));
    TEST_ASSERT_EQUAL(0,square(0));
    TEST_ASSERT_EQUAL(841,square(29));
    TEST_ASSERT_EQUAL(9216,square(-96));
    }
    void test_cube(void) {

    TEST_ASSERT_EQUAL(27, cube(3));
    TEST_ASSERT_EQUAL(-729,cube(-9));
    TEST_ASSERT_EQUAL(0,cube(0));
    TEST_ASSERT_EQUAL(24389,cube(29));
    TEST_ASSERT_EQUAL(-14608,cube(-52));
    }
    void test_squareroot(void) {

    TEST_ASSERT_EQUAL(81, squareroot(9));
    TEST_ASSERT_EQUAL(0,squareroot(0));
    TEST_ASSERT_EQUAL(0,squareroot(-13));
    TEST_ASSERT_EQUAL(96,squareroot(9216));
    }
    void test_cuberoot(void) {

    TEST_ASSERT_EQUAL(3, cuberoot(27));
    TEST_ASSERT_EQUAL(0,cuberoot(0));
    TEST_ASSERT_EQUAL(0,cuberoot(-15));
    TEST_ASSERT_EQUAL(99,cuberoot(970299));
    }
    void test_factorial(void) {

    TEST_ASSERT_EQUAL(120, factorial(5));
    TEST_ASSERT_EQUAL(1,factorial(0));
    TEST_ASSERT_EQUAL(1,factorial(1));
    TEST_ASSERT_EQUAL(0,factorial(-13));
    }
    void Area(void) {

    TEST_ASSERT_EQUAL(44, perimeter(7));
    TEST_ASSERT_EQUAL(154,circle(7));
    TEST_ASSERT_EQUAL(100,rectangle(10,10));
    TEST_ASSERT_EQUAL(56.99,triangle(10,12,13));
    }
    void conersion(void)
    {
    TEST_ASSERT_EQUAL(44, Polar to Cartesian coordinate(7));
    TEST_ASSERT_EQUAL(154,circle(7));
    TEST_ASSERT_EQUAL(100,rectangle(10,10));
    TEST_ASSERT_EQUAL(56.99,triangle(10,12,13));
    
    }
void test_Degree(void) {                 //written by shiva for testing
  TEST_ASSERT_EQUAL(1.570796, Degree(90));
  TEST_ASSERT_EQUAL(3.141593, Degree(180));
}
void test_radian(void) {                     //written by shiva for testing
  TEST_ASSERT_EQUAL(90, radian(1.570796));
  TEST_ASSERT_EQUAL(180, radian(3.141593));
}


  
    
