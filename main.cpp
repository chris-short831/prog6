#include <iostream>

using namespace std;

class Size{
//private members
private:
    int length;
    int width;
//public members
public:
//default constructor
    Size(){
        length = 0;
        width = 0;
    }
//parameterized constructor
    Size(int l, int w){
        length = l;
        width = w;
    }
//friend function for output operator <<
    friend std::ostream& operator<<(std::ostream& output, const Size& S){
        output <<"\nLength:"<< S.length << "\tWidth:" << S.width;
        return output;
    }
//friend function for input operator >>
    friend std::istream& operator>>(std::istream& input, Size& S){
        input >> S.length >> S.width;
        return input;
    }
};

int main()
{
    Size S1, S2(10,20); //call to default and parameterized constructor
    cout<<"\nEnter the size of rectangle (length and width):";
    cin>>S1; //call to overloaded function for operator >>
    cout<<S1; //call to overloaded function for operator <<
    cout<<S2; //call to overloaded function for operator <<
    return 0;
}