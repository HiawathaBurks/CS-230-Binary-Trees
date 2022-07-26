#include <iostream>

using namespace std;

class Node{

    int data;
    struct node* left;
    struct node* right;

    struct node* newNode(int idata){
    
        node* mynode = new struct node;
        node->data = idata;
        node->left = NULL;
        node->right=NULL;
    
        return node;
    
    };

    void insertValue(int value){
    
        if(value<= data){
        
        if(left == NULL){
            
            left = new Node(value);
            
        }
        else{
            
            left= newNode(value);
            
        }
        
    }
        else{
        
            if(right == Null){
            
                 right = new Node(value);
            
            }
            else{
            
                 right= newNode(value);
            
            }
        
        }
    
    };
    
    bool containedValue(int value){
        
      if(value == data){
          
          return true;
          
      }  
      else if(value < data){
          
          if(left == NULL){
              
              return false;
              
          }
          else{
              
              return 
              
          }
          
      }
        
    };

};

int main(int argc, char** argv){
    
    
    return 0;
    
};
