stack<int> s;
for(auto& t : tokens)
if(t == "+" || t == "-" || t == "*" || t == "/") {
int op1 = s.top(); s.pop();
int op2 = s.top(); s.pop();
if(t == "+") op1 = op2 + op1;
if(t == "-") op1 = op2 - op1;
if(t == "/") op1 = op2 / op1;
if(t == "*") op1 = op2 * op1;
s.push(op1);
}
else s.push(stoi(t));    // stoi - converts from string to int
return s.top();