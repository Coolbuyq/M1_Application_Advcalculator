#include "advcalculator.h"

int addition(int a,int b)
{int c=a+b;
return c;
  
}
int subtraction(int a,int b)
{int c=a-b;
return c;
   
}
float multiplication(int a,int b)
{
   int c=a*b;
   return c;
}
float division(int a,int b)
{
   return (float)a / (float)b;
}
int modulus(int a,int b)
{
 int c=a%b;
 return c;
}
	float logarithmic(float a){
	
	   return log(a);
       

}
int p(int x, int n)
{
    if(n == 0) return 1;
    int temp = p(x, n / 2) * p(x, n / 2);
    return (n % 2 != 0) ? (temp * x) : (temp);
}

int p1(int x, int n)
{
    if(n == 0) return 1;
    int temp = p(x, n / 2) * p(x, n / 2);
    return (n % 2 != 0) ? (temp * x) : (temp);
}
int p2(int x, int n)
{
    if(n == 0) return 1;
    int temp = p(x, n / 2) * p(x, n / 2);
    return (n % 2 != 0) ? (temp * x) : (temp);
}

 float trignometric(int op,float val){

	if(op == 1){
		return sin(val);
	}
	else if(op == 2){
		return cos(val);
	}
	
}
float exponential(float a,float b){
	
	return pow(a, b);
}
float squareroot(float b)
{
    
    float s = sqrt(b);
    return s;
    
}