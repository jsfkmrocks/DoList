//This program read in a list of inputs and outputs the list,
//outputs the reverse list and outputs the sorted list


#include <iomanip>
#include <iostream>
using namespace std;

//Functions
void original_list (char list[], int size);
void reverse_list (char list[], int size);
void sorted_list (char list[], int size);
void swap (char &a, char &b);

//Main
int main()
{
    //Declare variables
    int x, max;
    max=1000;
    char list[max];

    //Gather inputs
    cout << "\n\nPlease enter the list size: ";
    cin >> x;
    for(int i=1;i<=x;i++)
    {
        cout << "Please enter a character: ";
        cin >> list[i];
    }

    cout << "\n\n\n";

    //Outputs
    reverse_list (list, x);
    original_list (list, x);
    sorted_list (list, x);

    //
    return 0;
}

//Create Swap Function
void swap (char &a, char &b)
{
    char temp=a;
    a=b;
    b=temp;
}

//Create Print Function for Original Order
void original_list (char list[], int size)
{
    cout << "LIST in normal order" << endl;

    for (int i = 1; i <= size; i++)
    {
        cout << list[i] <<endl;
    }
}

//Create Reverse Function
void reverse_list (char list[], int size)
{
    cout << "LIST in reverse order" << endl;
    for (int i=size;i>0;i--)
    {
        cout << list[i] << endl;
    }
}

//Create Sort Function
void sorted_list (char list[], int size)
{
    cout << "LIST in sorted order" << endl;
    int i=1;
    while(i==1)
    {
        i=0;
        for(int count = 0; count<size; count++)
        {
            if(list[count] > list [count + 1])
            {
                swap(list[count],list[count + 1]);
                i=1;
            }
        }
    }
    for(int count=0; count<size; count++)
    {
        cout<<list[count+1]<<endl;
    }
}
