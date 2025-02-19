#include <iostream>
using namespace std;

void squre(int w, int h)
{
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void hollow_squre(int w, int h)
{
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
        {
            if (i == 0 || i == w - 1 || j == 0 || j == h - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
void Right_Angled_triangle(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void inverted_Right_Angled_triangle(int n)
{
    for (int row = n; row >= 0; row--)
    {
        for (int col = 0; col < row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pyramid(int n){
    for (int row = 1; row <= n; row++)
    {
        for (int col = row; col < n; col++)
        {
            cout<<" ";
        }
        for (int k = 0; k < row * 2 - 1; k++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}
void inverted_pyramid(int n){
    for (int row = n; row >= 1; row--)
    {
        for (int col = row; col < n; col++)
        {
            cout<<" ";
        }
        for (int i = 0; i < row * 2 - 1; i++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}

void hollow_pyramid(int n){
    for (int row = 1; row <= n; row++)
    {
        for (int  col = row; col < n; col++)
        {
            cout<<" ";
        }
        for (int i = 0; i < (row * 2 - 1); i++)
        {
            if(i == 0 || i == (row * 2 - 1) || i == n) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    
}
int main()
{
    // squre(5,5);
    // hollow_squre(6,6);
    // Right_Angled_triangle(6);
    // inverted_Right_Angled_triangle(5);
    // pyramid(6);
    // inverted_pyramid(6);
    hollow_pyramid(6);

    return 0;
}