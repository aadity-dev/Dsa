#include<iostream>
#include<stack>
using namespace std;


int prefixEval(string s){
    //create a stack
    //traverse form right to left
    // if s[i] is opernad -> pushin the stack
    //else if it is operator -> create two varibles to store the two element,
    //pop them and evalaute wiht operator, then push the tresult back i stack
    //return the alst remanning element from stack..
    
    stack<int> st;
    for(int i = s.length() - 1;i>=0;i--){
        if(s[i] >= '0' && s[i] <= 9){
            st.push(s[i] - '0');
        }else{
            int operand1 = st.top();
            st.pop();
            int operand2 = st.top();
            st.pop();

            switch(s[i]){
                case '+':
                    st.push(operand1 + operand2);
                    break;
                case '-':
                    st.push(operand1 - operand2);
                    break;
                case '*':
                    st.push(operand1 * operand2);
                    break;
                case '/':
                    st.push(operand1 / operand2);
                    break;
                case '^':
                    st.push(pow(operand1, operand2));
                    break;
            }
        }
    }
    return st.top();
}