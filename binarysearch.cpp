#include<iostream>
using namespace std;

void arrInput(int arr[], int len){
	cout<<"ENTER "<<len<<"ELEMENT OF THE ARRY "<<endl;
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
}
int binarySearch(int arr[],int len,int key){
	int start=0;
	int end=len-1;
	int mid=(start+end)/2;
	while(start<=end){
	
		if(key==arr[mid]){
			return mid;	
		}
		if(key>arr[mid]){
			start=mid+1;
		}
		else{
				end=mid-1;
			}
		mid=(start+end)/2;	
	}
		return -1;
}
int main()
{
	int arr[100],len,key;
	cout<<"ENTER THE LENGTH OF THE ARRY"<<endl;
	cin>>len;
	arrInput(arr,len);
	cout<<"ENTER YOUR KEY ELEMENT"<<endl;
	cin>>key;
	int result=binarySearch(arr,len,key);
	if(result!=-1){
		cout<<"YOUR KEY ELEMENT PRESENT IN THE ARRY=>"<<arr[result]<<endl;
	}
	else{
		cout<<"YOUR KEY ELEMENT IS NOT PRESENT INT THE ARRY"<<endl;
	}
	
	return 0;
}
