//11651 좌표 정렬하기 2
/*
  2차원 평면 위의 점 N개가 주어진다. 좌표를 y좌표가 증가하는 순으로, y좌표가 같으면 x좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오.
*/
/* input
   첫째 줄에 점의 개수 N (1 ≤ N ≤ 100,000)이 주어진다. 둘째 줄부터 N개의 줄에는 i번점의 위치 xi와 yi가 주어진다. (-100,000 ≤ xi, yi ≤ 100,000) 좌표는 항상 정수이고, 위치가 같은 두 점은 없다.
*/
/* output
   첫째 줄부터 N개의 줄에 점을 정렬한 결과를 출력한다.
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, i;
    vector< pair<int ,int> > v;
    cin >> N;
    v.assign(N, pair<int, int>());
    for(int i = 0; i < N; i++)
        cin >> v[i].second >> v[i].first;
    sort(v.begin(), v.end());
    for(int i = 0; i < N; i++)
        cout << v[i].second << " "<<v[i].first <<"\n";
    return 0;
}
