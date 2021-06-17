#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>

using namespace std;

/**
   Tests if a token is an operator.
   @param token the token
   @return true if the token is one of: + - * / ^
*/
bool is_operator(string token)
{  
   return token == "+" || token == "-" || token == "*" || token == "/";
}

/**
   Tests if a token is a digit.
   @param token the token
   @return true if token is one of: 0 1 2 3 4 5 6 7 8 9
*/
bool is_digit(string token)
{  
   return token.length() == 1 && "0" <= token && token <= "9";
}

/**
   Computes the precedence level of an operator.
   @param op the operator
   @return the precedence level (1 = lowest, 3 = highest)
*/
int precedence(string op)
{  
   if (op == "+" || op == "-") { return 1; }
   else if (op == "*" || op == "/") { return 2; }
   else { return 0; }
}

/**
   Prints an error message and exits.
   @param message information about the error
*/
void error(string message)
{  
   cout << "ERROR: " << message << "." << endl;
   exit(1);
}

class ExpressionCalculator
{
public:
   /**
      Evaluates the given expression.
      @param expression an expression containing integers, arithmetic
      operators, and parentheses
   */
   int evaluate(string expression);
   /** 
      Computes a new value and pushes it on the stack.
   */
   void evaluate_top();
private:
   stack<int> numstack;
   stack<string> opstack;
};

void ExpressionCalculator::evaluate_top()
{
   if (opstack.size() == 0) { error("Syntax error"); }
   string op = opstack.top();
   opstack.pop();
   if (numstack.size() == 0) { error("Syntax error"); }
   int y = numstack.top();
   numstack.pop();
   if (numstack.size() == 0) { error("Syntax error"); }
   int x = numstack.top();
   numstack.pop();
   int z = 0;
   if (op == "*") { z = x * y; }
   else if (op == "/")
   {  
      if (y == 0) { error("Divide by 0"); }
      else { z = x / y; }
   }
   else if (op == "+") { z = x + y; }
   else if (op == "-") { z = x - y; }
   else { error("Syntax error"); }
   numstack.push(z);
}

int ExpressionCalculator::evaluate(string expression)
{
   int pos = 0;
   while (pos < expression.length())
   {  
      string ch = expression.substr(pos, 1);
      pos++;
      if (is_operator(ch))
      {
         while (opstack.size() > 0 &&
            precedence(opstack.top()) >= precedence(ch))
         {
            evaluate_top();
         }
         
         opstack.push(ch);
      }
      else if (ch == "(") { opstack.push(ch); }
      else if (ch == ")")
      {  
         bool done = false;
         while (!done)
         {  
            if (opstack.size() == 0) { error("No matching ("); }
            if (opstack.top() == "(") { opstack.pop(); done = true; }
            else { evaluate_top(); }
         }
      }
      else if (is_digit(ch))
      {
         int start = pos - 1;
         while (pos < expression.length() 
            && is_digit(expression.substr(pos, 1))) { pos++; }
         string num = expression.substr(start, pos - start);
         numstack.push(stoi(num));
      }
      else if (ch != " ")
      {
         error ("Number, operator, or parenthesis expected.");
      }
   }
   while (opstack.size() > 0)
   {  
      if (opstack.top() == "(") { error("No matching )"); }
      else { evaluate_top(); }
   }
   if (numstack.size() != 1) { error("Syntax error"); }
   int result = numstack.top();
   numstack.pop();
   return result;
}

/*
   This program evaluates arithmetic expressions, using two stacks.
*/
int main()
{  
   cout << "Enter an arithmetic expression such as (3+4)*5: ";
   string expr;
   getline(cin, expr);
   ExpressionCalculator calc;
   cout << calc.evaluate(expr) << endl;
  
   return 0;
}
