#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int> vect, int size, int searchValue){
    
       int count = 0;
       for(int x = 0; x< size; x++){
           
           count++;
           if(searchValue == vect[x]){
               
               break;
               
           }
           
       }
    
       return count;
}

int  binarySearch(vector<int> vect, int size, int searchValue){
    
    int low = 0;
    int high = size - 1;
    int mid;
    int count = 0;
    
    do{
        
        mid = (low + high) / 2;
        count++;
        if(searchValue == vect[mid]){
            
            break;
            
        }
        else if(searchValue > vect[mid]){
            
            low = mid + 1;
            
        }
        else{
            
            high = mid - 1;
            
        }
    }while(low <= high);
    
    return count;
    
}

void populateVector(vector<int> vect, int size){
    
    for(int x = 1; x<= size; x++){
        
        vect[x-1] = x;
        
    }
    
}

int main(){
    
    int size;
    int userValue;
    char input;
    
    do{
        
       cout<<"Enter an int for the size of the vector: ";
       cin>>size;
       
       vector<int> vect;
        
        cout<<"Enter an integer between 1 and "<<size<<" to search for in the vector:  ";
        cin>> userValue;
        
        populateVector(vect, size);
        
        cout<<"Linear Search comparisons: "<< linearSearch(vect, size, userValue)<<endl;
        cout<<"Binary Search comparisons: "<< binarySearch(vect, size, userValue)<<endl;
        
        cout<<"Press 'y' and enter to run the program again or just enter to exit: ";
        cin.sync();
        cin.get(input);
        
    }while(input == 'y');
    
}
