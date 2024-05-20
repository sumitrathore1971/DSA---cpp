//program to find max and min in the array

#include<iostream>
#include<climits>
#include<conio.h>

using namespace std;

int getMax(int num[],int n);
int getMin(int num[],int n);


int main()
{
    system("cls");
    int size;
    cout<<"Enter the size of array :";
    cin>>size;

    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<num[i]<<"   " ;
    }

    int mini = getMin(num,size);
    cout<<endl<<"the minimum is : "<<mini;

    int maxi = getMax(num,size);
    cout<<endl<<"the maximum is : "<<maxi;



}

int getMax(int num[],int n)
{
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi,num[i]);
        // if (num[i]>max)
        // {
        //     max = num[i];
        // }
        
    }
    return maxi;
}

int getMin(int num[],int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {

        mini = min(mini,num[i]);
        // if (num[i]<min)
        // {
        //     min = num[i];
        // }
        
    }
    
    return mini;
}