#include "Implementation/BinaryTree.h"
#include <vector>

int main(){
  Branch* Root = 0;
  vector<int> v;
  int k;
  for(int i = 0; i < 1000; i++){
    k = rand()%100000;
    Add(k, Root);
    v.push_back(k);
  }

  sort(v.begin(), v.end());
  vector<int> l = inorder(Root);
  string yes = "Yes";
  string no = "No";
  for(int i = 0; i < v.size(); i++){
    cout << "Vector - " << v[i];
    cout << "  Inorder - " << l[i];
    cout << " " << ((v[i] == l[i])?yes:no) << endl;
  }

	FreeTree(Root);
  return 0;
}