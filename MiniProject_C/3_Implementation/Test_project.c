#include "advcalculator.h"
#include "unity.h"

void setUp(){}
void tearDown(){}


void test_addition(void)
{
TEST_ASSERT_EQUAL_INT(3,addition(1,2));
TEST_ASSERT_EQUAL_INT(6,addition(2,4));
TEST_ASSERT_EQUAL_INT(8,addition(5,3));
TEST_ASSERT_EQUAL_INT(13,addition(6,7));
TEST_ASSERT_EQUAL_INT(12,addition(3,9));
TEST_ASSERT_EQUAL_INT(11,addition(4,7));
}
void test_subtraction(void)
{

TEST_ASSERT_EQUAL_INT(1,subtraction(4,3));
TEST_ASSERT_EQUAL_INT(2,subtraction(5,3));
TEST_ASSERT_EQUAL_INT(4,subtraction(8,4));
TEST_ASSERT_EQUAL_INT(2,subtraction(9,7));
TEST_ASSERT_EQUAL_INT(-4,subtraction(5,9));

}

void test_multiplication(void)
{
TEST_ASSERT_EQUAL_INT(1,multiplication(1,1));
TEST_ASSERT_EQUAL_INT(2,multiplication(1,2));
TEST_ASSERT_EQUAL_INT(4,multiplication(2,2));
TEST_ASSERT_EQUAL_INT(3,multiplication(1,3));
}

void test_division(void)
{
TEST_ASSERT_EQUAL_INT(1.000000,division(1,1));
TEST_ASSERT_EQUAL_INT(2.000000,division(4,2));
TEST_ASSERT_EQUAL_INT(1.000000,division(2,2));
TEST_ASSERT_EQUAL_INT(6.000000,division(12,2));
}

void test_modulus(void)
{
TEST_ASSERT_EQUAL_INT(1,modulus(13,4));
TEST_ASSERT_EQUAL_INT(2,modulus(20,9));
}
void test_logarithmic(void)
{
TEST_ASSERT_EQUAL_INT(1.945910,logarithmic(7));
TEST_ASSERT_EQUAL_INT(1.609438,logarithmic(5));
}
void test_exponential(void)
{
TEST_ASSERT_EQUAL_INT(625.000000,exponential(5,4));
TEST_ASSERT_EQUAL_INT(1024.000000,exponential(2,10));
}

void test_squareroot(void)
{
TEST_ASSERT_EQUAL_INT(2.000000,squareroot(4));
TEST_ASSERT_EQUAL_INT(4.000000,squareroot(16));
}
void test_p(void)
{
TEST_ASSERT_EQUAL_INT(1024,p(4,5));
TEST_ASSERT_EQUAL_INT(4,p(2,2));
}
void test_p1(void)
{
TEST_ASSERT_EQUAL_INT(25,p1(5,2));
TEST_ASSERT_EQUAL_INT(4,p1(2,2));
}

void test_p2(void)
{
TEST_ASSERT_EQUAL_INT(64,p2(4,3));
TEST_ASSERT_EQUAL_INT(27,p2(3,3));
}

void test_logarithmic(void)
{
TEST_ASSERT_EQUAL_INT(-0.958924,logarithmic(5));
TEST_ASSERT_EQUAL_INT(0.283662,logarithmic(5));
}


int main()
{
  UNITY_BEGIN();

  RUN_TEST(addition);
  RUN_TEST(subtraction);
  RUN_TEST(multiplication);
  RUN_TEST(division);
  RUN_TEST(modulus);
  RUN_TEST(logarithmic);
  RUN_TEST(exponential);
  RUN_TEST(squareroot);
  RUN_TEST(p);
  RUN_TEST(p1);
  RUN_TEST(p2);
  RUN_TEST(logarithmic);

  return UNITY_END();
}