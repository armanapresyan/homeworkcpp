#include <iostream>
#include <vector>
#include <string>


struct MyArr {
    std::string typeName;
    void* value;
};

const int size = 4;

int main() {
    MyArr all_arr[size];
    std::vector<MyArr> values; 

    for(int i = 0; i < size; ++i){
        std::cout << "Input type: ";
        std::cin >> all_arr[i].typeName;
        if(all_arr[i].typeName == "char"){
            char ch;
            std::cout << "Input char : ";
            std::cin >> ch;
            all_arr[i].value = new char(ch);
            values.push_back(all_arr[i]);
        }else if(all_arr[i].typeName == "bool"){
            bool b;
            std::cout << "Input bool : ";
            std::cin >> b;
            all_arr[i].value = new bool(b);
            values.push_back(all_arr[i]);
        }else if(all_arr[i].typeName == "int"){
            int num = 0;
            std::cout << "Input number int : ";
            std::cin >> num;
            all_arr[i].value = new int(num);
            values.push_back(all_arr[i]);
        }else if(all_arr[i].typeName == "double"){
            double num = 0;
            std::cout << "Input number double : ";
            std::cin >> num;
            all_arr[i].value = new double(num);
            values.push_back(all_arr[i]);
        }
    }

    for(int i = 0; i < values.size(); ++i){
        if(values[i].typeName == "char"){
            std::cout << *((char*)values[i].value) << std::endl;
        } else if(values[i].typeName == "bool"){
            std::cout << *((bool*)values[i].value) << std::endl;
        } else if(values[i].typeName == "int"){
            std::cout<< *((int*)values[i].value)<< std::endl;
        }else if(values[i].typeName == "double"){
            std::cout << *((double*)values[i].value) << std::endl;
        }
    }
    
    for(int i = 0; i < values.size(); ++i){
        if(values[i].typeName == "char"){
            delete (char*)(values[i].value);
        } else if(values[i].typeName == "bool"){
            delete (bool*)(values[i].value);
        }else if(values[i].typeName == "int"){
             delete (int*)(values[i].value);
        }else if(values[i].typeName == "double"){
            delete (double*)(values[i].value);
        }
    }
    return 0;
}





