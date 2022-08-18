#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int state = 0;
    int n;
    cout<<"Enter the size of input"<<endl;
    cin>>n;
    char arr[n];
    cout<<"Enter the string with a and b only"<<endl;
    cin>>arr;
    int y = 0;
    while(y!=n)
    {
        char var = arr[y];
        if(var == 'a' || var =='b')
        {
            switch(state)
            {
                case 0:
                {
                    if(var == 'a')
                    {
                        state = 1;
                    }
                    else
                    {
                        state = 2;
                    }
                    break;
                }
                
                case 1:
                {
                    if(var == 'a')
                    {
                        state = 3;
                    }
                    else
                    {
                        state = 2;
                    }
                    break;
                }
                
                case 2:
                {
                    if(var == 'a')
                    {
                        state = 1;
                    }
                    else
                    {
                        state = 4;
                    }
                    break;
                }
                
                case 3:
                {
                    if(var == 'a')
                    {
                        state = 3;
                    }
                    else
                    {
                        state = 2;
                    }
                    break;
                }
                
                case 4:
                {
                    if(var == 'a')
                    {
                        state = 1;
                    }
                    else
                    {
                        state = 4;
                    }
                    break;
                }
                
                default:
                {
                    cout<<"The string cannot be determined"<<endl;
                }
            }
        }
        else
        {
            cout<<"please enter a valid string with a and b only"<<endl;
            state = -1;
            break;
        }
        y++;
    }
    
    if(state == -1)
    {
        return 0;
    }
    else
    {
        if(state == 3 || state == 4)
        {
            cout<<"Congrats your string accepted"<<endl;
        }
        else
        {
            cout<<"Sorry string not accepted"<<endl;
        }
    }
    return 0;
}
