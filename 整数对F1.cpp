#include <iostream>  
#include <vector>  
  
using namespace std;  
  
int main() {  
    int N;  
    cin >> N;  
  
    vector<int> A(N + 1); // 使用A[0]作为哨兵或前缀和的起始点，方便计算  
    for (int i = 1; i <= N; ++i) {  
        cin >> A[i];  
    }  
  
    // 计算前缀和（从1开始，A[0]为0，方便计算）  
    vector<long long> prefix_sum(N + 1, 0);  
    for (int i = 1; i <= N; ++i) {  
        prefix_sum[i] = prefix_sum[i - 1] + A[i];  
    }  
  
    // 计算所有子区间和的总和  
    long long total_sum = 0;  
    for (int i = 1; i <= N; ++i) {  
        // A[i] 对总和的贡献是 (i * (N - i + 1)) * A[i]  
        total_sum += (long long)i * (N - i + 1) * A[i];  
    }  
  
    cout << total_sum << endl;  
  
    return 0;  
}