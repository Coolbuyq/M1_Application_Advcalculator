# Requirements

## Introduction
Our project is smart calculator that performs arithmetic operations on numbers. The simplest calculators can do only addition, subtraction, multiplication, and division. More sophisticated calculators can handle exponent like exponential operations,  logarithm s, trigonometric functions, and modulus.

## High level Requirements

| ID | Description | Status (Implemented) |
| --- | --- | --- |
| HR01 |System ought to be capable of get right of result of arithmatic operation | Implemented |
| HR02 | User ought to be capable to handle all function by specific numeric keys | Implemented |
| HR03 |System ought to understand floating and integer numbers  | Implemented |
| HR04 |system ought to capable in giving result in floating numbers | Implemented |
| HR05 |System ought to understand invalid credentials | Implemented |



## Low level Requirements

| ID | Description | Status (Implemented) |
| --- | --- | --- |
| LR01 |System can give result of maximum 12 functions | Implemented |
| LR02 |invalid operation should be properly reported as such  | Implemented |
| LR03 |calculation should be perform within milisecond | Implemented |


## SWOT
![Screenshot (301)](https://user-images.githubusercontent.com/86889916/153701157-3a51fcc3-ca67-4a4f-b150-686bad45e0c6.png)
)


## 4W's & 1H

 ### Who
   User who needs to calculate long digit numbers(banks,Accountants).
 
 ### What 
   calculate the hard mathamatical operation in miliseconds.
  
 ### When
   When user need to calculate upto 6 decimal operations or add long digits. 
   
 ### Where
   Banks,Charted Accountants office,mathmatics,logrithmic fumction;
    
 ### How
   By giving the which operation have to perform and by giving user.
   
 
 # Architecture
## Flowchart
![Flowchart](https://user-images.githubusercontent.com/86889916/153702669-faac70f7-e2da-4968-933e-ecbf62a8a15d.jpg)

## UML Use case
![Screenshot (304)](https://user-images.githubusercontent.com/86889916/153704126-283de249-6168-45a6-93fc-f43e4a5fd166.png)


# Test Plan
-For every feature,define a test case
-How to run that test case
-Define expected behavior
-capyure the actual result

# Table no: High level test plan

|Test ID	|Description |Input   |Expected Output	|Actual Output|	Pass/fail(Result)|
|----|-----------------|------|-----------------|---------------|-----------------|
|H_01	|Addtion |(1,2)      |3	|3	|PASS|
|H_02	|Substraction | (4,2)     |2	|2	|PASS|
|H_03	|Multiplication|  (3,3)     |	9	|9	|PASS|
|H_04	|Division| (20,2)    |10|10	|PASS|
|H_05	|Modulus |   (7,4)	 |3|3	|PASS|
|H_06	| Logarithmic	|   (5)         |1.609438    	|1.609438|	PASS|
|H_07	|Trignometric|  (1,10)   	|-0.544021	|-0.544021	|PASS|
|H_08	|Exponential	|  (2,5)  |32	|32 |PASS|
|H_09	|power|  (4,5)  |1024	|1024	|PASS|
|H_10	|square|(5,2)    |25	|25	|PASS|
|H_11	|Cube   |(5,3) 	     |125	    |125	    |PASS|
|H_12	| Square root	|(16)      |4    	|4    |	PASS|


# Table no: Low level test plan
|Test ID|	Description|	Exp Input|	Exp OUT|	Actual Out|	Type Of Test|
|--------|------------|-----------|---------|------------|------------|
|L_01	|MAIN MENU	|SUCCESS	|SUCCESS	|SUCCESS	|PASS|
|L_02	|Display data	|SUCCESS	|SUCCESS	|SUCCESS	|PASS|




