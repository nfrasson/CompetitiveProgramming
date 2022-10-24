#include <bits/stdc++.h>
using namespace std;

pair<int, int> EndPosition(int N, int R, int C, int Sr, int Sc,
                           string instructions) {
  int No=0;
  int S=0;
  int W=0;
  int E=0;

  for(int i = 0; i < int(instructions.size()); i++){
    if(instructions[i] == 'N') No++;
    else if(instructions[i] == 'S') S++;
    else if(instructions[i] == 'W') W++;
    else if(instructions[i] == 'E') E++;
  }
  pair<int, int> p = {Sr+(E-W), Sc+(No-S)};
  // TODO: implement this method to return the row and column where the robot
  // finishes.
  
  return p;
}

int main() {
  int T;
  cin >> T;
  for (int t = 1; t <= T; ++t) {
    int N, R, C, Sr, Sc;
    string instructions;
    cin >> N >> R >> C >> Sr >> Sc >> instructions;
    auto ans = EndPosition(N, R, C, Sr, Sc, instructions);
    cout << "Case #" << t << ": " << ans.first << " " << ans.second << endl;
  }
}
