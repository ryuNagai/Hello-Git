#include <iostream>
using namespace std;

int main() {
  int N, i, sum=0, ave;
  cin >> N;
  
  int a[N];
  
  for (i=0; i<N; i++){
    cin >> a[i];
    sum += a[i];
  }
  
  ave = sum / N;
  
    for (i=0; i<N; i++){
    cout << ( ave < a[i] ? a[i]-ave : ave-a[i]) << '\n';
  }
  
}

