#include<iostream.h>

#include<conio.h>


int linear_search(int a[],int ele, int val)

{
        for (int i = 0; i < ele; i ++)

    {
        if (a[i]== val)

        {
            return i+1;


        }


    }

            return -1;

}



int main()

{
    clrscr();

    int a[20], ele, val, pos;


    cout<<"enter the number of elements";

    cin>>ele;


    cout<<"enter the entries " ;

    for (int i = 0; i < ele; i ++)

    {
        cin >> a[i];

    }

    cout<<"enter the element to search for" ;

    cin>> val;
    pos = linear_search(a,ele,val);


    if (pos!= -1 )

        cout<<"element found at " << pos <<" position";

    else

        cout<<"element not found";

        
    getch();
    
}