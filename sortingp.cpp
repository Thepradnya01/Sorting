#include<iostream>
using namespace std;

int main()
{ 
    int N,A[10],i,j,temp,temp1;
    cout<<"how many elements you want to sort?";
    cin>>N;
    cout<<"Now enter your "<<N<<" elements: ";
    for(i=0;i<N;i++){
        cin>>A[i];
    }
    cout<<"your entered elements are: ";
    for(i=0;i<N;i++){
        cout<<A[i];
        cout<<endl;
    }
    
    for(i=1;i<N;i++){
    	for(j=0;j<N-i;j++){
		
    	if(A[j]>A[j+1]){
    		temp=A[j];
    		A[j]=A[j+1];
    		A[j+1]=temp;
		}
	}
	}
	
	cout<<"Ascending order of elements: ";
	for(j=0;j<N;j++){
        cout<<A[j];
        cout<<endl;
    }
    
    cout<<" Descending order of elements :";
    
    for(i=1;i<N;i++){
    	for(j=0;j<N-i;j++){
    		if(A[j]<A[j+1]){
    			temp1=A[j];
    			A[j]=A[j+1];
    			A[j+1]=temp1;
			}
		}
	}
	
	for(j=0;j<N;j++){
        cout<<A[j];
        cout<<endl;
    }
	
	
	



    
    
    return 0;
}
