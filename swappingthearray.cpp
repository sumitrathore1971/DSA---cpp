#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main(){
    system("cls");
    int size;
    cout<<"Enter the size : ";
    cin>>size;

    int arr[100];
    cout<<"Enter the elements : ";
    for (int i = 0; i < size; i++)
    {
       cin>>arr[i];
    }

    cout<<"\n array -->";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

       for (int i = 0; i < size/2; i++)
    {
        swap(arr[i],arr[size-i-1]);
    }
    cout<<"\n reverse array -->";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

