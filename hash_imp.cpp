#include<iostream>
#include<vector>
#include<list>
using namespace std;
class HashTable{
    private:
       int size;
    vector<list<int>> table;
    int hashFunction(int key){
        return key%size;
    }
    public:
     HashTable(int size){
        this->size = size;
        table.resize(size);
     }
     void insert(int key){
        int index = hashFunction(key);
        table[index].push_back(key);
     }
     bool search(int key){
        int index = hashFunction(key);
        for(int element: table[index]){
            if(element==key){
                return true;
            }
        }
        return false;
     }
     void remove(int key){
        int index = hashFunction(key);
        table[index].remove(key);
     }
     void display(){
        for(int i=0; i<size; i++){
            cout<<"Index: "<<i<<": ";
            for(int element: table[i]){
                cout<<element<<"->";
            }
            cout<<"NULL"<<endl;
        }
     }

};
int main(){
    HashTable ht(7);
    ht.insert(10);
    ht.insert(20);
    ht.insert(30);
    ht.insert(3);
    ht.insert(2);
    ht.display();
    ht.remove(30);
    ht.display();
    return 0;
}