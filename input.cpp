#include<iostream>
using namespace std;

int main(){

  int array[100], temp[100];
  int n, i, j, cnt;
  cin >> n;
  for (i = 0; i < n; i++){
    cin >> array[i];
    temp[i] = -1;
  }


  for (i = 0; i < n; i++){
    if (temp[i] == 1){
      cout << array[i] << "  ";
    }
  }

  return 0;

}