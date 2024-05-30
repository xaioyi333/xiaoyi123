#include <iostream>
using namespace std;
int a[110],cnt[10];
int main()
{
  for(int i=0;i<100;i++)cin>>a[i];
  for(int i=0;i<100;i++)
    if(a[i]==2){
      for(int i1=i+1;i1<100;i1++)
        if(a[i1]==0)
        {
          for(int i2=i1+1;i2<100;i2++)
            if(a[i2]==2)
            {
            	for(int i3=i2+1;i3<100;i3++)
				if(a[i3]==3){
					for(int i4=i3+1;i4<100;i4++)
					{
						if(a[i4]==0){
							for(int i5=i4+1;i5<100;i5++) {
								if(a[i5]!=0)
									for(int i6=i5+1;i6<100;i++){
										if(a[i6]==0) {
											for(int i7=i6+1;i7<100;i7++)if(a[i7]!=0) ans++;
										}
										if(a[i6]==1){
											for(int i7=i6+1;i7<100;i7++)if(a[i7]!=0) ans++;
										}
										if(a[i6]==2){
											if(a[i5]!=2)
											for(int i7=i6+1;i7<100;i7++)if(a[i7]!=0) ans++;
											else for(int i7=i6+1;i7<100;i7++)if(a[i7]<=8) ans++;
										}
									}
							}
						}
						if(a[i4]==1){
							for(int i5=i4+1;i5<100;i5++){
								if(a[i5]==1)
							}
							 
						}
							
					}
				} 
			}
        }
    }
}
