#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[],int lo,int hi,int power){
	if(power>=arr[hi]) return hi;
	int temp=0;
    while(hi>=lo){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]>=power) {
            temp=mid;  
			hi=mid-1;
        }else{
			lo=mid+1;
		} 
    }
    return temp;
}
int main()
{
    int N;
	cin>>N;
	int arr[N];
	int carr[N];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	sort(arr,arr+N);
	carr[0]=arr[0];
	for(int i=1;i<N;i++){
		carr[i]=arr[i]+carr[i-1];
	}
	
	int query,power;
	cin>>query;
	while(query--){
		cin>>power;
		int index=binarySearch(arr,0,N-1,power);
		cout<<index+1<<" "<<carr[index]<<endl; 
	}
    return 0;
}
