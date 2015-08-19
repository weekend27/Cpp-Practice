
//alphabetical list

#include <iostream>
#include <string>

using namespace std;

class node{
public:
	string name;
	node *next;
	node(string input) {name = input; next = NULL;}
};

int main(int argc, char *argv[]){
	node *root = NULL;
	node *p_node, *new_node;
	string a_name;

	while(true){
		cout << "Enter a name (or ENTER to exit): ";
		getline(cin, a_name);
		if (a_name.empty())
			break;
		new_node = new node(a_name);

		//if list is new or node goes at beginning,
		//then insert as root node.Otherwise,
		//search for a node to insert node AFTER

		if (root == NULL || a_name < root->name){
			new_node->next = root;
			root = new_node;
		}else{
			p_node = root;
			while(p_node->next && a_name > p_node->next->name){
				p_node = p_node->next;
			}
			new_node->next = p_node->next;
			p_node->next = new_node;
		}
	}
	cout << endl;
	p_node = root;			//print out all nodes
	while(p_node){
		cout << p_node->name << endl;
		p_node = p_node->next;
	}

	return 0;
}

/*
Enter a name (or ENTER to exit): 23
Enter a name (or ENTER to exit): 12
Enter a name (or ENTER to exit): ubuntu
Enter a name (or ENTER to exit): linux
Enter a name (or ENTER to exit): helloworld
Enter a name (or ENTER to exit): helloweekend
Enter a name (or ENTER to exit): yoga
Enter a name (or ENTER to exit): ada
Enter a name (or ENTER to exit): basic
Enter a name (or ENTER to exit): cpp
Enter a name (or ENTER to exit): go
Enter a name (or ENTER to exit): php
Enter a name (or ENTER to exit): 
12
23
ada
basic
cpp
go
helloweekend
helloworld
linux
php
ubuntu
yoga
*/