template<class T>
class Stack{
    private:
        T* stk[10];
        int top;
        int size;
    public:
        Stack(int sz){
            stk = new T[sz];
            top = -1
            size = sz;
        }
        void push(T x);
        T pop();
};

template<class T>
void Stack<T>::push(T x){
    if(top == size - 1){
        throw 1;
    };
    top++;
    stk[top] = x;
};

template<class T>
T Stack<T>::pop(){
    T x = 0;
    if(top == -1){
        throw 1;
    };
    x = stk[top];
    top--;
    return x;
};

int main(){
    Stack<int> s(10);
    return 0;
}