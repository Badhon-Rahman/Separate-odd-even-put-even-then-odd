#include <iostream>

using namespace std;

void SeparateOddEven(int arr[], int arrSize){
    int evenArr[arrSize / 2], oddArr[arrSize / 2], e = 0, o = 0;
          for(int i = 0; i < arrSize; i++){
            if(arr[i] % 2 == 0){
                evenArr[e] = arr[i];
                e++;
            }
            else if(arr[i] % 2 != 0){
                oddArr[o] = arr[i];
                o++;
            }
          }
          int evenArrSize = sizeof(evenArr) / sizeof(evenArr[0]);
          int odd = 0;
          for(int i = 0; i < evenArrSize; i++){
            arr[i] = evenArr[i];
          }
          for(int i = evenArrSize; i < arrSize; i++){
            arr[i] = oddArr[odd];
            odd++;
          }
          cout << "Updated array first even then odd: ";
          for(int i = 0; i < arrSize; i++){
            cout << arr[i] << " ";
          }
}

int main()
{
    int arrSize;
    cout << "Enter array size: ";
    cin >> arrSize;

    int arr[arrSize];
    cout << "Enter array elements: ";
    for(int i = 0; i < arrSize; i++){
        cin >> arr[i];
    }

    SeparateOddEven(arr, arrSize);
    return 0;
}
