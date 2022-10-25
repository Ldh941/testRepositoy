#include<iostream>
#include<cmath>
using namespace std;

int bieuDien(long long m, long long n, long long now_number = 1, long long now_sum = 0){
    int sum = 0;
    long long p=pow(now_number,n);
    while(p+now_sum<m){
        sum += bieuDien(m,n,now_number+1,p+now_sum);
        now_sum++;
        p=pow(now_number,n);
    }
    if(p+now_sum == m) sum++;
    return sum;

}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long m,n;
        cin >>m >>n;
        cout << bieuDien(m,n) << endl;
    }
}
