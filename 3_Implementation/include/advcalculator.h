/**
 * @file advcalculator.h
 * @author Aniket Nagpure
 * @brief Our project is smart calculator that performs arithmetic operations on numbers. The simplest calculators can do only addition, subtraction, multiplication, and division. More sophisticated calculators can handle exponent like exponential operations, logarithm s, trigonometric functions, and modulus.
 * @version 0.1
 * @date 2022-02-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef ADVCALCULATOR_H_
#define ADVCALCULATOR_H_

#include <stdio.h>
#include<stdlib.h>
#include<math.h>
/**
 * @brief Here this function is going to add twonumbers
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int addition(int a,int b);
/**
 * @brief Here this function is going to substrct two numbers
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int subtraction(int a,int b);
/**
 * @brief Here this function is going to multiply two numbers
 * 
 * @param a 
 * @param b 
 * @return float 
 */
float multiplication(int a,int b);
/**
 * @brief Here this function is going to divide two numbers
 * 
 * @param a 
 * @param b 
 * @return float 
 */
float division(int a,int b);
/**
 * @brief Here this function is going to give modules of  two numbers
 * 
 * @param a 
 * @param b 
 * @return int 
 */
int modulus(int a,int b);
/**
 * @brief Here this function is going to give log of number
 * 
 * @param a 
 * @return float 
 */
float logarithmic(float a);
/**
 * @brief Here this function is going to give power to numbers
 * 
 * @param x 
 * @param n 
 * @return int 
 */
int p(int x, int n);
/**
 * @brief Here this function is going to give square of  two numbers
 * 
 * @param x 
 * @param n 
 * @return int 
 */
int p1(int x, int n);
/**
 * @brief Here this function is going to givw cube of number
 * 
 * @param x 
 * @param n 
 * @return int 
 */
int p2(int x, int n);
/**
 * @brief Here this function is going to give trignometric of numbers
 * 
 * @param op 
 * @param val 
 * @return float 
 */
float trignometric(int op,float val);
/**
 * @brief Here this function is going to give exponetial
 * 
 * @param a 
 * @param b 
 * @return float 
 */
float exponential(float a,float b);
/**
 * @brief Here this function is going to give squareroot of number
 * 
 * @param b 
 * @return float 
 */
float squareroot(float b);

#endif