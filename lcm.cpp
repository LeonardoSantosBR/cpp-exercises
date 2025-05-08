#include <iostream>

using namespace std;

int main()
{
    int arr[2] = {30, 60};
    int arr_length = sizeof(arr) / sizeof(arr[0]);
    int count = 2;

    while(true){
       bool finished = true;

       for(int index = 0; index < arr_length; index++){
        if(arr[index] % count == 0){
            arr[index] /= count;
            finished = false;
        }
       }

       if (finished) {
        count++;
       } else {
        cout << count << " ";
        count = 2;
       }

       bool allOne = true;
       for(int i = 0; i< arr_length; i++){
         if(arr[i] != 1){
            allOne= false;
            break;
         }
       }

       if(allOne) break;
    }


    return 0;
}