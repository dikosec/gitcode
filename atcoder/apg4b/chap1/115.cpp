/*
関数のオーバロード  :引数の型、数が異なる場合は、同じ名前の関数を定義することができます。

QUESTION    :三人兄弟のA君とB君とC君は、お父さんに1つのプレゼントを貰うことになりました。
             貰えるプレゼントの予算はテストの合計点の席で決まります。
             三人兄弟はそれぞれN個のテストを受けました。
             A君とB君とC君の「i番目のテストの点数」をそれぞれAi,Bi,Ciで表すと、プレゼントの予算は次の式で求まります。
             プレゼントの予算=(A1+A2+...+AN)X(B1+B2+...+BN)X(C1+C2+...+CN)

CONST       :1<=N<=10
             0<=Ai,Bi,Ci<=100
             N,Ai,Bi,Ci are integer

INPUT       :N
             A1 A2 ... AN
             B1 B2 ... BN
             C1 C2 ... CN

OUTPUT      :プレゼントの予算を出力してください。
*/
#include <bits/stdc++.h>
using namespace std;
 
// 1人のテストの点数を表す配列から合計点を計算して返す関数
// 引数 scores: scores.at(i)にi番目のテストの点数が入っている
// 返り値: 1人のテストの合計点
int sum(vector<int> scores) {
    int sum_scores=0;
    for(int i=0;i<scores.size();i++){
        sum_scores+=scores.at(i);
    }
    return sum_scores;
}
 
// 3人の合計点からプレゼントの予算を計算して出力する関数
// 引数 sum_a: A君のテストの合計点
// 引数 sum_b: B君のテストの合計点
// 引数 sum_c: C君のテストの合計点
// 返り値: なし
void output(int sum_a, int sum_b, int sum_c) {
  cout << (sum_a*sum_b*sum_c) << endl;
}
 
// -------------------
// ここから先は変更しない
// -------------------
 
// N個の入力を受け取って配列に入れて返す関数
// 引数 N: 入力を受け取る個数
// 返り値: 受け取ったN個の入力の配列
vector<int> input(int N) {
  vector<int> vec(N);
  for (int i = 0; i < N; i++) {
    cin >> vec.at(i);
  }
  return vec;
}
 
int main() {
  // 科目の数Nを受け取る
  int N;
  cin >> N;
 
  // それぞれのテストの点数を受け取る
  vector<int> A = input(N);
  vector<int> B = input(N);
  vector<int> C = input(N);
 
  // それぞれの合計点を計算
  int sum_A = sum(A);
  int sum_B = sum(B);
  int sum_C = sum(C);
 
  // プレゼントの予算を出力
  output(sum_A, sum_B, sum_C);
}