#include <iostream>
#include <stack>
#include <string>

using namespace std;

/*
   This calculator uses the reverse Polish notation.
*/
int main()
{
   stack<int> results;
   cout << "Enter numbers and operators, separated by spaces, " << endl
      << "P to print, Q to quit." << endl;
   bool done = false;
   while (!done)
   {         
      string input;
      cin >> input;
      
      if (input == "+" || input == "-" || input == "*" || input == "/")
      {
         // If the command is an operator,
         // pop the arguments and push the result

         if (results.size() < 2)
         {
            cout << "Insufficient arguments" << endl;
            return 1;
         }

         // Note that the second argument is on the top of the stack
         
         int arg2 = results.top();
         results.pop();
         int arg1 = results.top();
         results.pop();
         
         if (input == "+")
         {
            results.push(arg1 + arg2);
         }
         else if (input == "-")
         {
            results.push(arg1 - arg2);
         }
         else if (input == "*")
         {
            results.push(arg1 * arg2);
         }
         else 
         {
            results.push(arg1 / arg2);
         }
      }
      else if (input == "Q" || input == "q"
         || input == "P" || input == "p")
      {
         if (results.size() > 0)
         {
            cout << results.top() << endl;
         }
         if (input == "Q" || input == "q")
         {
            done = true;
         }
      }
      else 
      {
         // Not an operator--push the input value
         
         results.push(stoi(input));
      }
   }
   return 0;
}
