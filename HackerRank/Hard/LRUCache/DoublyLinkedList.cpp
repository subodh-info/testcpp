#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};

class LRUCache : public Cache{
    public:
    LRUCache(int capacity){
        if(capacity >=1 && capacity <= 1000){
            this->cp = capacity;
            head = NULL;
            tail = NULL;
        }
    }
    
    void set(int key, int value) override {
        if((key >= 1 && key <= 20) && (value >=1 && value <= 2000)){
            Node *node;
            if((mp.size() == 0)){
                if(head == tail){
                    node = new Node(key, value);
                    head = node;
                    tail = node;
                }
            }
            else{
                if(mp.find(key) != mp.end()){
                    Node *existNode = mp[key];

                    if(existNode == head && tail != head){
                        existNode->next->prev = NULL;
                        head = existNode->next;
                    }
                    
                    if(existNode == tail && head != tail){
                        existNode->prev->next = NULL;
                        tail = existNode->prev;
                    }

                    mp.erase(key);
                    delete(existNode);                    
                } 

                if(mp.size() == this->cp){
                    Node *lastNode = tail;
                    tail->prev->next = NULL;
                    tail = tail->prev;
                    mp.erase(lastNode->key);
                }                
                node = new Node(NULL, head, key, value);
                head->prev = node;
                head = node;                              
            }            
            mp.insert(make_pair(key, node));                       
        }        
    }
    
    int get(int key) override {
        if(mp.find(key) == mp.end()){
            return -1;
        }
        else{
            Node *resultNode = mp[key];
            int value = resultNode->value;
            //set(key,value);
            return value;
        }
    }

    void display(){
        for(auto itr = mp.begin(); itr != mp.end(); ++itr){
            cout << itr->first << "-" << itr->second->value << endl;
        }
        cout << endl << "map size : " << mp.size();
    }
};

int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   //l.display();
   return 0;
}
