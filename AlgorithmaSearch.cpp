#include <iostream>
using namespace std;

int arr[20];  // array to be search
int n;       // Number of element in the array
int i;      // Index of array element

void input(){
    while(true){
        cout << "Enter the number of element in the array : ";
        cin >> n;
        if((n > 0)&&(n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 dan maximum 20 element.\n\n";
    }

    // accept array elements
    cout << "\n--------------------\n";
    cout << "Enter Array Elements \n";
    cout << "--------------------\n";
    for(i = 0;i < n; i++)
    {
        cout << "<" << (i+1) << "> " ;
        cin >> arr[i];
    }
}

void LinearSearch()
{
    char ch;
    int ctr; //nummber of comparisons
    int item;

    do
    {
        //accept the number to be searched
        cout <<"\n Enter the element you want to search: ";//step 1
        cin >> item;

        ctr = 0;
        i = 0 ;//step 3

        while(i < n)//step 3
        {
            ctr++;
            if(arr[i]==item)
            {
                cout << "\n" << item << " found at position " << (i+1) << endl;//step6
                break;
            }
            i++;//step 4
        }

        if (i==n)//step 5
            cout << "\n" << item << " not found in the array\n";
        cout << "\nNumber of comparisons: " << ctr << endl;

        cout << "\nContinue search (y/n):";
        cin >> ch;
    }while ((ch =='y')||(ch =='Y'));
}


