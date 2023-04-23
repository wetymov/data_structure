#pragma once

#include <iostream>
using namespace std;

template <class T>
class Stack
{
private:
    int size;
    int cur = 0;
    int length;
    T* container = new T[size];

public:
    Stack(int s)
    {
        size = s;
        
    }

    void outstack(){
        for(int i = 0; i < cur; i++){
            cout << container[i] << " ";
        }
        cout << endl;
    }

    void push(T elm){
        if (cur + 1 <= size){
            container[cur] = elm;
            cur++;
        }
    }


    T pop(){
        if (Empty()){
            return nullptr;
        }
        cur--;
        return container[cur];
    }


    int lenght(){
        return cur;
    }

    bool Empty(){
        return cur == 0; 
    }

    ~Stack(){
        delete []container;
    }
    
};