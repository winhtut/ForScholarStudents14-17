//
// Created by National Cyber City on 8/29/2022.
//

#include "stdio.h"
#include "stdlib.h"

void insertAfter(struct Node* prev_node , int data);
void insertMostFront(struct Node** head_ref , int data);

struct Node{
    int age;
    int data;
    struct Node* next;

};


int main(){

    struct Node* first=NULL;
    struct Node* second=NULL;
    struct Node* third= NULL;

    first=(struct Node*) malloc(sizeof (struct Node));
    second=(struct Node*) malloc(sizeof (struct Node));
    third=(struct Node*) malloc(sizeof (struct Node));

    first->data=10;
    first->age=50;
    first->next=second;

    second->data=20;
    second->next=third;

    third->data = 30;
    third->next = NULL;


    insertAfter(first,15);
    insertMostFront(&first,5);


    struct Node* temp = first;

    while( temp != NULL){

        printf(" data : %d \n ",temp->data);
        temp = temp->next;

    }

    return 0;
}

void insertAfter(struct Node* prev_node , int data){

    if( prev_node == NULL){
        return;
    }
    struct Node* newNode = (struct Node*) malloc(sizeof (struct Node));

    newNode->data = data;
    newNode->next =prev_node->next;
    prev_node->next =newNode;

}

void insertMostFront(struct Node** head_ref , int data){


    struct Node* newNode = (struct Node*) malloc(sizeof (struct Node));

    newNode->data = data;
    newNode->next = (*head_ref);

    (*head_ref)=newNode;


}


