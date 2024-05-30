#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n;
	cin>>n;
	int m=1;
	for(int i=n;i>0;i--){
		for(int j=0;j<n;j++){
			cout<<setw(2)<<setfill('0')<<m;
//控制输出数据的位数，不足时两位补充前导零 
			m++;
		}
		cout<<endl;
		n--;
	}
}
