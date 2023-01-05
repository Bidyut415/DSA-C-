/*
	in bubble sort chek all element form start to end-1, if first ele is large then swap with the next ele
	it contain two loop one for round ,and in every round the large ele palce in the right palce ,and the 
	round continew len-1; 
*/
#include<iostream>
using namespace std;

void arrInput(int arr[],int len)
{
	cout<<"ENTER "<<len<<"ELEMENT OF THE ARRY"<<endl;
	for(int i=0;i<len;i++)
	{
		cin>>arr[i];
	}
}

void BubbleSort(int arr[],int len){
	for(int i=1;i<len;i++){
		// this loop for round only
		for(int j=0;j<len-i;j++){
			//here n-i use to do small the arry means it's the barier
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

void displyArr(int arr[],int len){
	cout<<"AFTER SORTING HERE IS YOUR VALUE"<<endl;
	for(int i=0;i<len;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[100],len;
	cout<<"ENTER THE LENGHT OF THE ARRY"<<endl;
	cin>>len;
	arrInput(arr,len);
	BubbleSort(arr,len);
	displyArr(arr,len);
return 0;
}
