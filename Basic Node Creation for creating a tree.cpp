#include <iostream>

//Created by Hiawatha Burks based off of https://www.youtube.com/watch?time_continue=10&v=XrBUQA7xzus&feature=emb_logo

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
	
	//Assign integers to Root
    struct node *root = newNode(9);
    root->left=newNode(8);
    (*root).right = newNode(3);
    
    //Printing out the left and right to prove that the integers were put in the correct place and that the tree works
    cout<<root->left->data<<endl;
    cout<<root->right->data;
    
    return 0;

}
