#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

/*
For every ‘(’ encountered, we push its index onto the stack.

For every ‘)’ encountered, we pop the topmost element and 
subtract the current element's index from the top element of the stack, 
which gives the length of the currently encountered valid string of 
parentheses. If while popping the element, the stack becomes empty, 
we push the current element's index onto the stack. In this way, we 
keep on calculating the lengths of the valid substrings, and return 
the length of the longest valid string at the end.
*/
// algorith runs in O(n) time and take O(n) space.

int longestValidParentheses(string s){ //function to find the longest valid parantheses. Returns an int as an ans.
    int maxans = 0; // stores the ans.
    stack<int> st; // stack of integers
    st.push(-1);
    for(int i = 0; i < s.length(); i++) { // loop to traverse the string
        if(s[i] == '('){
            st.push(i);
        }
        else{
            st.pop();
            if(st.empty()) {
                st.push(i);
            }
            else{
                maxans = max(maxans, i - st.top()); // returns the max of two values.
            }
        }
    }
    return maxans;
}

int main(){
	string input; //to take input as a string
	cin>>input;
	cout<<longestValidParentheses(input);

	return 0;
}