#include "Implementation/Stack.h"
#include <vector>

int main(){
  Stack<string> s(6);
  string str[10] {"Sutourisu","Wety","Lambdius","NoName","First","Second","Poll","Oxximiron","asd","sdfv"};
  vector<string> v;
  s.outstack(); // Нет элементов, вывод в консоль пустой

  for (auto i:str){
    v.push_back(i);
    s.push(i);
  }

  cout << "outstack" << endl;
  s.outstack(); //Sutourisu Wety Lambdius NoName First Second только 6 элементов потому что до этого мы указали размерность стека 6 элементов
  cout << "pop" << endl;
  cout << s.pop() << endl;
  cout << s.pop() << endl;
  cout << s.pop() << endl;
 
  return 0;
}