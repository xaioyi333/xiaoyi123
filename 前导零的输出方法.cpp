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
//����������ݵ�λ��������ʱ��λ����ǰ���� 
			m++;
		}
		cout<<endl;
		n--;
	}
}
