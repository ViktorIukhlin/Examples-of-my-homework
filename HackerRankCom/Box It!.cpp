#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box
{
private:
    int l = 0;
    int b = 0;
    int h = 0;

public:
    int getLength() const
    {
        return l;
    }
    int getBreadth() const
    {
        return b;
    }
    int getHeight() const
    {
        return h;
    }
    long long CalculateVolume()
    {
        return (long long)l * b * h;
    }
    Box()
    {

    }
    Box(int length, int breadth, int height)
    {
        l = length;
        b = breadth;
        h = height;

    }
    Box(const Box& B)
    {
        l = B.getLength();
        b = B.getBreadth();
        h = B.getHeight();

    }
    ~Box()
    {

    }
    bool operator<(const Box& B)
    {
        int ll = B.getLength();
        int bb = B.getBreadth();
        int hh = B.getHeight();
        if (l < ll || (b < bb && l == ll) || (h < hh && b == bb && l == ll))
            return true;
        else
            return false;
    }

};
ostream& operator<<(ostream& out, Box B)
{
    int l = B.getLength();
    int b = B.getBreadth();
    int h = B.getHeight();
    return out << l << ' ' << b << ' ' << h;
}

void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0;i < n;i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }

    }
}

int main()
{
    check2();
}