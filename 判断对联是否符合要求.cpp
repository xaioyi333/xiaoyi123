#include <iostream>
#include<string>
#include<algorithm>  //算法 
using namespace std;
int main() {
	int T, n,o;
	string a[10000], b[10000];
	cin >> T;
	for (int i = 0; i < T;i++) {
		cin >> n;
		o=0;
		for (int i = 0; i < n; i++) {
			cin >> a[i] ;
		
			reverse(a[i].begin(), a[i].end());
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
				reverse(b[i].begin(), b[i].end());
		}
		
			if (a[n - 1][0] == '1' || a[n - 1][0] == '2' ){
			
			cout<<"NO"<<endl;
			continue;
		}
		for(int i=0;i<n;i++){
		if((a[i][0]=='1'||a[i][0]=='2')&&(b[i][0]=='3'||b[i][0]=='4')){
			o++;}
		else if((a[i][0]=='3'||a[i][0]=='4')&&(b[i][0]=='1'||b[i][0]=='2')){
			o++;
		}
			
				
		else{
		 cout << "No"<<endl;
				break;
				}
				
		}
		if(o==n) cout<<"YES"<<endl;	
			}
	}
	
		
	
	

	   
	//int arr[] = { 1, 2, 3, 4, 5 };
	//for (int elem : arr) {
	//	cin >> elem;
	//	cout << elem;
	//	// 访问数组元素 elem
	//}

