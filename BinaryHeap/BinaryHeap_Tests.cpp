#include "Implementation/BinaryHeap.h"
#include <vector>


int main(){
  Heap Test_Heap;
  vector<int> Test_Vector;
  for(int i = 0; i < 50; i++){
    int b = rand()%10000;
    Test_Heap.addelem(b);
    Test_Vector.push_back(b);
  }

  auto v = Test_Heap.out();
  for(auto x:v){
    cout << x << " ";
  }
  cout << endl;
  for(auto m:Test_Vector){
    cout << m << " ";
  }
  cout << endl;
  return 0;
}