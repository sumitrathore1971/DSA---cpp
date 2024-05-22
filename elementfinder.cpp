#include<iostream>
#include<conio.h>
#include<string>
using namespace std;


bool search(int arr[],int size,int key);

int main(){
    system("cls");
    int size;
    cout<<"enter the size :";
    cin>>size;
    int arr[100];
    cout<<"Enter the elements";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    cout<<endl<<"array -->";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"   " ;
    }

    cout<<endl<<"enter the elements u want to find : ";
    int key;
    cin>>key;

    bool found = search(arr,size,key);

    if (found)
    {
        cout<<"element is present ";
    }
    else{
        cout<<"elements is absent";
    }
    

    
    
}



bool search(int arr[],int size,int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return 1;
        }      
    }
    return 0;
}
