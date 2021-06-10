#include<iostream>
#include<math.h>
using namespace std;
class SimpleCalculator
{
    public:
        float n1,n2,res;
        int op1;
        void Input1()
        {
            cout<<"\t\t\tSIMPLE CALCULATOR"<<endl;
            cout<<"Enter 1st value = ";
            cin>>n1;
            cout<<"Enter 2nd value = ";
            cin>>n2;
            cout<<"\nEnter Operation to be performed\n1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division"<<endl;
            cin>>op1;
        }
        void Display1()
        {
            switch (op1)
            {
            case 1:
                res=n1+n2;
                break;
            case 2:
                res=n1-n2;
                break;
            case 3:
                res=n1*n2;
                break;
            case 4:
                res=n1/n2;
                break;
            default:
                cout<<"Check your input and try again!!"<<endl;
                break;
            }
            cout<<"Result = "<<res<<endl;
        }
};
class ScientificCalculator
{
    public:
        float m,result;
        int op2;
        void Input2()
        {
            cout<<"\t\t\tSCIENTIFIC CALCULATOR"<<endl;
            cout<<"Enter value = ";
            cin>>m;
            cout<<"\nEnter Operation to be performed\n5 for Sine\n6 for Cosine\n7 for Exponential\n8 for Logarithm"<<endl;
            cin>>op2;
        }
        void Display2()
        {
            switch (op2)
            {
            case 5:
                result=sin(m);
                break;
            case 6:
                result=cos(m);
                break;
            case 7:
                result=exp(m);
                break;
            case 8:
                result=log10(m);
                break;
            default:
                cout<<"Check your input and try again!!"<<endl;
                break;
            }
            cout<<"Result = "<<result<<endl;
        }
};
class HybridCalculator:public SimpleCalculator,public ScientificCalculator
{
    public:
        HybridCalculator()
        {
            n1=0;n2=0;m=0;res=0;result=0;            
        }
};
int main()
{
    HybridCalculator H;
    H.Input1();
    H.Display1();
    H.Input2();
    H.Display2();
    return 0;
}