#include <iostream>
using namespace std;
void rearrangeBySign(int arr[], int n)
{
int positives[100];
    int negatives[100];

    int pCount = 0;
    int nCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positives[pCount] = arr[i];
            pCount++;
        }
        else
        {
            negatives[nCount] = arr[i];
            nCount++;
        }
    }
        int mainIdx = 0;
        for (int i = 0; i < pCount; i++)
        {
            arr[mainIdx] = positives[i];
            mainIdx++;
            arr[mainIdx] = negatives[i];
            mainIdx++;
        }
    }
int main()
{
    int arr[] = {1, 2, -3, 4, -6, -3};
    int n = 6;
    rearrangeBySign(arr, n);
    cout << "Rearranged elements : " ;
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    } 
    
    return 0;
}
