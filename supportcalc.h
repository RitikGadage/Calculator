#ifndef SUPPORTCALC_H
#define SUPPORTCALC_H
#include <string>



//function to return specific substring start from specific position unil reaching next " "
std::string scanNum(int &i,std::string str);

//Function to return precedence of operators
int prec(char c) ;

// function to convert infix expression to postfix expression
std::string infixToPostfix(std::string s) ;

//function to detect if the char is operator or not
int isOperator(char ch);

//function to detect if the char is operand or not
int isOperand(char ch);

double operation(double a, double b, char op);

//function to return value from postifix expression
double postfixEval(std::string postfix);

//final function that get infix expression and evaluate it by convert it to Postfix
double evaluate(std::string str);

#endif // SUPPORTCALC_H
