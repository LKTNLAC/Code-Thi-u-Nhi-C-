#include <bits/stdc++.h>
#include <string.h>

using namespace std;

long i, n, a[1001][1001], x, mid,m,j;


class Matrix
{
public:
    void input_matrix()
    {
        cout<<"Enter row: "<<endl;
        cin>>n;//Row
        cout<<"Enter column: "<<endl;
        cin>>m;//Column
        //Array
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                cout<<"a["<<i<<"]["<<j<<"] = ";
                cin>>a[i][j];
                cout<<endl;
            }
        }
    }
    bool Symmetric() //Check symmetric
    {
        if (n != m)
            return false; //Not a square matrix, not Symmetric
        for(i=1;i<=n;i++) //2 loop check matrix
        {
            for(j=1;j<=m;j++)
            {
                if(a[i][j] != a[j][i]) // Not same, not Symmetric
                    return false;
            }
        }
        return true; // Matrix is Symmetric
    }
};

int main()
{
    Matrix ma; //Call object
    ma.input_matrix(); //Call function in class
    bool issymmetric = ma.Symmetric();//call

    //Output
    //Check
    if (issymmetric)
        cout << "The matrix is symmetric." << endl;
    else
        cout << "The matrix is not symmetric." << endl;
    return 0;
}
