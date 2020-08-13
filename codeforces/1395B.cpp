#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int walk = n * m;
    int column = y - 1, row = x - 1; // row , column
    vector<vector<int>> matrix(n, vector<int>(m));
    while(walk--){
        cout << row + 1 << ' ' << column + 1 << '\n';
        matrix[row][column] = 1;
        if(row == x - 1 && column == y - 1) {
            column = 0;
        }else{
            // Cek if the row is not on the top
            if(matrix[0][column] != 1) row = 0;
            else{
                // Cek if row is not on the border
                if(row < n - 1){
                    // Cek if the next row was visited
                    if(matrix[row + 1][column] == 1){
                        // Move column
                        if(row + 2 > n - 1) {
                            if(column > 0 && matrix[row][column - 1] != 1) 
                                column--;
                            else{
                                if(matrix[row][column + 1] == 1) column += 2;
                                else
                                    column++;
                            }
                        }
                        else{
                            if(matrix[row + 2][column] == 1) {
                                if(column > 0 && matrix[row][column - 1] != 1) 
                                    column--;
                                else
                                    column++;
                            }
                            else row+=2;
                        }
                    }else
                        row++;
                }else{
                    if(column > 0 && matrix[row][column - 1] != 1) column--;
                    else column++;
                }
            }
        }
    }
    cout << row << ' ' << column << '\n';
    for(auto i : matrix){
        for(auto j : i){
            cout << j << ' ';
        }
        cout << '\n';
    }
}