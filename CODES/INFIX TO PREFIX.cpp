//INFIX TO PREFIX
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
const int MAX = 20;
class Stack {
private:
    char items[MAX];
    int top;
public:
    Stack() {
        top = -1;
    }
    bool isEmpty() {
        return top == -1;
    }
    char stackTop() {
        return items[top];
    }
    void push(char ch) {
        if (top == MAX - 1) {
            cout << "Overflow" << endl;
            exit(1);
        } else {
            items[++top] = ch;
        }
    }
    char pop() {
        if (top == -1) {
            cout << "Underflow" << endl;
            exit(1);
        }
        return items[top--];
    }

    bool precedence(char top, char symb) {
        if (top == ')' || symb == ')')
            return false;
        if (symb == '(')
            return true;
        if (symb == '$')
            return false;
        if (top == '$')
            return true;
        if ((symb == '*' || symb == '/') && (top == '*' || top == '/'))
            return true;
        if ((symb == '+' || symb == '-') && (top == '+' || top == '-'))
            return true;
        else {
            return false;
        }
    }
};
string infixToPrefix(string infix) {
    reverse(infix.begin(), infix.end());
    string prefix = "";
    Stack stk;

    for (int i = 0; i < infix.length(); i++) {
        char symb = infix[i];

        if ((symb >= 'A' && symb <= 'Z') || (symb >= 'a' && symb <= 'z') || (symb >= '0' && symb <= '9')) {
            prefix += symb;
        } else {
            while (!stk.isEmpty() && stk.precedence(stk.stackTop(), symb) && stk.stackTop() != '(') {
                char topsymb = stk.pop();
                prefix += topsymb;
            }
            if (stk.isEmpty() || symb != '(') {
                stk.push(symb);
            } else {
                stk.pop(); 
            }
        }
    }
    while (!stk.isEmpty()) {
        char topsymb = stk.pop();
        prefix += topsymb;
    }
    reverse(prefix.begin(), prefix.end()); 
    return prefix;
}
int main() {
    string infix, prefix;
    cout << "Enter infix expression: ";
    cin >> infix;
    prefix = infixToPrefix(infix);
    cout << "Prefix = " << prefix << endl;
    return 0;
}
//Enter infix expression:  (a-b/c)*(a/k-l)
//Prefix = */-abc-/akl