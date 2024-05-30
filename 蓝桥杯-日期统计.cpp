#include<iostream>
using namespace std;

int a[110]={5 ,6 ,8, 6,9,1,6,1,2,4,9,1,9,8,2,3,6,4,7,7,5,9,5,0,3,8,7,5,8,1,5,8,6,1,8,3,0,3,7,9,2,
7,0,5,8,8,5,7,0,9,9,1,9,4,4,6,8,6,3,3,8,5,1,6,3,4,6,7,0,7,8,2,7,6,8,9,5,6,5,6,1,4,0,1,
0,0,9,4,8,0,9,1,2,8,5,0,2,5,3,3};
int day,d;
int main()
{
	int sum=0;
	for(int mo=1;mo<=12;mo++)
	{
		if(mo==1||mo==3||mo==5||mo==7||mo==8||mo==10||mo==12)
			day=31;
		else if(mo==2) day=28;
		else day=30;
		for(int d=1;d<=day;d++)
		{
			int j=0;
			int b[8]={2,0,2,3,mo/10,mo%10,d/10,d%10};
			for(int i=0;i<100;i++){
				if(a[i]==b[j]){
					j++;
				}
				if(j==8){
					sum++;break;
				}
			}
			
		}
			
	} 
	cout<<sum;
}



