#include <iostream>
using namespace std;
void toyotablue(int cardata[][5], int colsize)
{
    cout << "" << cardata[1][3];
}
int redcarswhole(int cardata[][5], int colsize)
{
    int sum=0;
    for (int row = 0; row < 5; row++)
    {
           sum = sum +cardata[row][0];
        
    }
    return sum;
}
int nissangtr(int cardata[][5] , int colsize ){
       int sum=0;
       for(int i=0;i<5;i++){
        sum = sum + cardata[2][i];
       }
       return sum;
}
int converter(int cardata[][5], int colsize, int blackColor){
    int sum=0;
    for(int i=0;i<5;i++){
        sum += cardata[i][1];
    }
    return sum;
}
void transposed(int cardata[][5], int result[][5]){
   
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            result[j][i] = cardata[i][j];
        }
    }
   
}
int main()
{
    const int rowsize = 5;
    const int colsize = 5;
    int cardata[rowsize][colsize] = {
        {10, 7, 12, 10, 4},
        {18,11,15, 17, 2},
        {23, 19,12,16,14},
        {7, 12, 16, 0,2},
        {3,5,6,2,1}
    };
    toyotablue(cardata, colsize);
    cout << "\n";
    int redcars = redcarswhole(cardata, colsize);
    cout << "Red cars available: " << redcars << endl;
    int nissan = nissangtr(cardata, colsize);
    cout << "Nissan cars available: " << nissan << endl;
    int blackcars = converter(cardata, colsize, 0);
    cout << "Black cars available: " << blackcars << endl;
    int result[5][5];       
    transposed(cardata, result);
    cout<< "Transposed matrix: " << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}