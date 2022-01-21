#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node{

    int data;
    Node* next;
};

struct Node* head = NULL;

void push(int n){

    struct Node* newNode = new Node;
    
    newNode->data = n;
    newNode->next = head;
    head = newNode;

}

void Insert(int n, int i){

    int count = i-1;
    struct Node* temp = head;
    struct Node* newNode = new Node;
    

    if(i == 1)
        push(n);
    
    else{

        while(count != 1){
            temp = temp->next;
            count--;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        newNode->data = n;
    }

}

int Search(int n){

    struct Node* temp = head;
    int i=0, flag = 0;

    cout<<endl<<"The number "<<n<<" is present at position: ";

    while(temp != NULL){

        if(temp->data == n){
            cout<<i+1<<" ";
            flag = 1;
        }
        i++;
        temp = temp->next;
    }

    if (flag == 0) 
        cout<<"NA";

    cout<<endl;

    return flag;

}

void Delete(int n, int* l){

    struct Node* temp1 = head;
    struct Node* temp2;

    if( n == 1){

        head = temp1->next;
        free(temp1);
        (*l)--;
        return;

    }


    for( int i; i<n-2; i++){

        temp1 = temp1->next;
    }

    temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
    (*l)--;
   
}

void Display(){

    struct Node* temp = head;

    cout<<"\nLinked List: ";

    while(temp != NULL){

        cout<<temp->data<<" ";
        temp = temp->next;
    }
    if (head == NULL)
        cout<<"Empty";
    cout<<endl;

}


int main(){

    int l = 0;

    while(1){

    int x;

    cout<<"\nEnter 1 to push, 2 to delete, 3 to search, 4 to display, 5 to insert and 6 to exit: ";
    cin>>x;

        switch (x)
        {
            case 1: 
                int n;
                int i;
                cout<<"\nEnter the number: ";
                cin>>n;
                push(n);
                l++;
                Display();
            break;

            case 2:
                Display(); 
                cout<<"\nEnter the position: ";
                cin>>n;
                int x;
                if(n > l){
                    cout<<"\nInvalid Position\n";
                    break;
                }
                Delete(n, &l);
                Display();
                
            break;

            case 3: 
                cout<<"\nEnter the number to be searched: ";
                cin>>n;
                Search(n);
            break;

            case 4: 
                Display();
                cout<<"\nLength of the list: "<<l<<endl;
            break;

            case 5: 
                cout<<"\nEnter the number: ";
                cin>>n;
                Display();
                printf("\nEnter the position(1-%d): ",l+1);
                cin>>i;
                if(i  < 1 || i > l+1)
                    goto lab;
                Insert(n, i);
                l++;
                Display();
            break;

            case 6:
                exit(0);

            default:
                lab: 
                    cout<<"\nInvalid Entry\n";
 
        }

    }

}
