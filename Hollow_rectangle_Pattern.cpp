#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "enter row space col" << endl;
    cin >> r >> c;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
            if (j == 1 || i == 1 || i == r || j == c)
            {
                cout << "*" << "";   //its counting space 
            }

            else
            {
                cout << " ";
            }
        cout << endl;
    }
    return 0;
}