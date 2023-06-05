//1

#include <iostream>

int main()
{ 
 
int num{0};
int res{0};
std::cout<<"please input number: ";std::cin>>num;
while(num){
   if(num & 1){
       ++res;
      }
      num >>= 1;
    }
std::cout<<res;
}


//2

#include <iostream>


void printArr(int (&arr)[10]){ 
    for(int i = 0; i<10; ++i){
        std::cout<<arr[i]<<std::endl;
        }
 }


int main()
{ 
 int arr[10]={1,2,3,4,5,6,7,8,9,10};
 printArr(arr);
 return 0;
}

