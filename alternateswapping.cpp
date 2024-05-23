#include<iostream>
#include<conio.h>
using namespace std;

void printarray(int arr[],int size);
void altswap(int arr[],int size);

int main(){
    system("cls");
    int size;
    cout<<"Enter the size : ";
    cin>>size;
    int arr[100];
    cout<<"enter the element : ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"array -->";
    printarray(arr,size);
    altswap(arr,size);
    cout<<endl<<"Alternate Swapping :";
    printarray(arr,size);
}

void altswap(int arr[],int size)
{
    for (int i = 0; i < size; i = i+2)
    {
        if (i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    
}

void printarray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}


   