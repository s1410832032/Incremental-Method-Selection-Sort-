#include <iostream>
using namespace std;

void selection_sort(int array[],int n){
  for (int i=0 ; i<n ; i++){
    int min_index=i;
    for(int j=i+1 ; j<n ; j++)
      if(array[min_index]>array[j])
        min_index=j;
      swap(array[min_index],array[i]);
  }
  for(int i=0 ; i<n ; i++)
    cout << array[i];
}

int main() {
  int array[5]={2,5,7,9,4};

  for (int i=0;i<5;i++){
    int min_index=i;
    for(int j=i+1;j<5;j++)
      if(array[min_index]>array[j])
        min_index=j;
        swap(array[i],array[min_index]);
  }
  for (int i=0 ; i< 5 ; i++)
    cout << array[i] ;
  cout << "\n";
  selection_sort(array, 5);
}