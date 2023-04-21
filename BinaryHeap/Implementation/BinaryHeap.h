#pragma once
#include <iostream>
#include <vector>
using namespace std;


class Heap
{
    static const int SIZE = 100;
    int *h;
    int HeapSize;
public:
    Heap();
    void addelem(int);
    vector<int> out();
    void heapify(int);
};

Heap :: Heap(){
    h = new int[SIZE];
    HeapSize = 0;
}

void Heap :: addelem(int n){
    int i, parent;
    i = HeapSize;
    h[i] = n;
    parent = (i-1)/2;
    while(parent >= 0 && i > 0){
        if (h[i] > h[parent]){
            swap(h[i],h[parent]);
        }
        i = parent;
        parent = (i-1)/2;
    }
    HeapSize++;
}

vector<int> Heap::out(){
    vector<int> v;
    for(int i = 0; i < HeapSize; i++){
        v.push_back(h[i]);
    }
    return v;
}

void Heap::heapify(int i){
    int l,r;
    l = 2*i+1;
    r = 2*i+2;
    if(l < HeapSize){
        if(h[i] < h[l]){
            swap(h[i],h[l]);
            heapify(l);
        } 
    }
    if(r < HeapSize){
        if(h[i] < h[r]){
            swap(h[i],h[r]);
            heapify(r);
        }
    }
}

