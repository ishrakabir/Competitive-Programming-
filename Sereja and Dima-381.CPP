#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, sum1 = 0, sum2 = 0, turn = 0;

  cin >> n;
  int cards[n];
  int left = 0;
  int right = n - 1;

  for(int i = 0; i<n;i++) {
    cin >> cards[i];
  }

  while (left <= right) {
    int num = 0;
    if (cards[left] > cards[right]) {
      num = cards[left];
      left++;
    }else {
      num = cards[right];
      right--;
    }

    if(turn % 2 == 0) {
      sum1 += num;
    }else {
      sum2 += num;
    }

    turn++;
  }


  cout << sum1 << " " << sum2;
}
