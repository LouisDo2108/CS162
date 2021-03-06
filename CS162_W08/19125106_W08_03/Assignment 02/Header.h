#pragma once
#ifndef _Header_H_
#define _Header_H_

#include <iostream>
#include <fstream>

using namespace std;

struct Node
{
	int data;
	Node* next = nullptr;
};

void initLinkedlist(ifstream& f, Node*& head);
void remove_duplicate_x(Node*& head, Node* cur1, Node* cur2, Node* prev);
void delLinkedlist(Node*& head);
void output(ofstream& f, Node*& head);
#endif