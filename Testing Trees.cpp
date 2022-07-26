#include <iostream>

using namespace std;

struct node{
    
    int data;
    struct node* left;
    struct node* right;
    
};

struct node* newNode(int idata){
    
    struct node* node = new struct node;
    node->data = idata;
    node->left = NULL;
    node->right=NULL;
    
    return node;
    
}

int main(int argc, char** argv) {
	
	int option;
	struct node *root = newNode(9);
    root->left=newNode(8);
    (*root).right = newNode(3);
    
    do{
        
        	cout<<"\nMain Menu\n"
            <<"============\n" 
            <<"1.Add a record\n"
		    <<"2.Search a record\n"
		    <<"3.Exit\n"
		    <<"Enter your choice:  ";
		cin >> option;
		
		switch(option){
		    
		    case 1:
		        
		        break;
		    
		    case 2:
		        
		        break;
		        
		    case 3:
		        cout<<"Goodbye!"<<endl;
		        break;
		        
		    default: cout<<"Invaild Input! Try Again."<<endl;
		    
        }
		
        
    }while(option != 3);
    
    
    return 0;

}
