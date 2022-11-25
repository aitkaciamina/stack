#include <iostream>
#include"Stack.h"
using namespace std;

Stack reverse_func(Stack s)
{
    Stack r;
    while (s.is_empty() == false)
    {
        int item = s.peek();
        s.pop();
        r.push(item);
    }

    return r;
}



int main()
{
    
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.display();
    cout << " the reversed stack is : " << endl;
   // Stack r = reverse_func(s);
   // r.display();
    s = reverse_func(s);
    s.display();
}
