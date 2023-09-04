#include"linked_list.h"
#include<iostream>
#include<stdlib.h>
#include<malloc.h>
using	namespace	std;
#include<stdio.h>

void	linked_list::	create_list(int	data){
	node	*temp,*q;
	temp=new	(struct	node);
	temp->info=data;
	temp->link=NULL;
	if(start==NULL)	{
		start=temp;	
	}
	else{
		q=start;
		while(q->link!=NULL){	
			q=q->link;
		
		}
			q->link=temp;
	}
}

void	linked_list::display(){
	struct	node	*q;
	cout<<"Print	list:"<<endl;
	if(start==NULL){
		
	}
	else{
	q=start;
	while(q!=NULL){
		cout<<q->info<<endl;
		q=q->link;
		
	}}
}

void	linked_list::concatenate(linked_list	l){
	node	*q;
	q=start;
	
	while(q->link!=NULL){
		q=q->link;
	}
	cout<<"Concatination	of	linked	list:"<<endl;
	q->link=l.start;
}
void	linked_list::split(int	pos){
	linked_list	o1,o2;
	node	*q;
	q=start;
	int	n=0;
	while(n!=pos){
//complete	linked	list	passed	here	then	spit	at	pos	2
		o1.create_list(q->info);
		q=q->link;
		n++;
	}
	while(q!=NULL){
		o2.create_list(q->info);
		q=q->link;
	}
	cout<<"Split	part	1"<<endl;
	o1.display();
	cout<<endl;
	cout<<"Split	part	2"<<endl;
	o2.display();
	cout<<endl;
}
void	linked_list::	copy(linked_list	l1,linked_list	l2){
	linked_list	m1,m2;
	m1=l1;
	m2=l2;
	node	*q;
	q=start;
	while(q!=NULL){
		l1.create_list(q->info);
		q=q->link;
	}
		while(q!=NULL){
		l2.create_list(q->info);
		q=q->link;
	}
	l1=l2;
	cout<<"Copy	one	list	into	another"<<endl;
	l1.display();
	cout<<endl;
}

void linked_list::remove_first_node_and_insert_at_the_end() {
	node	*q,*temp;
	temp=new	(struct	node);
  if(start==NULL){
  	return;
  }
  
  	temp=start;
  	start=start->link;
  	q=start;
  	while(q->link!=NULL){
  		q=q->link;
	  }
	q->link=temp;
	temp->link=NULL;
}
void	linked_list::remove_end_node_and_insert_at_the_begining(){
	node	*q,*temp;
	temp=new	(struct	node);
	if(start==NULL||start->link==NULL){
		return;
	}
	q=start;
	while(q->link->link!=NULL){
		q=q->link;
	}
	temp=q->link;
	q->link=NULL;
	temp->link=start;
	start=temp;
}
void	linked_list::	swap_first_and_last_part_by_exchanging_info(){
	node	*q,*temp;
	temp=new	struct	node;

	temp->info=start->info;
	temp=start;
	q=start;
	while(q->link!=NULL){
		q=q->link;
	}
	q->info=start->info;//last	node
	temp->info=q->info;
}
void	linked_list::count_number_of_an_element_occurences(int	data){
	node	*q;
	int	i=0;
	q=start;
	while(q!=NULL){
		if(q->info==data)
		{
			i++;
		}
		q=q->link;
	}
	cout<<"Counted	element	in	list="<<i<<endl;
}

void	linked_list::count_nonzeros_oddelements_evenelements(){
	node	*q,*temp;
	q=start;
	int	n=0,o=0;
	int	m=0;
	while(q!=NULL){
		
	
		if(q->info!=0){
			n++;
		
			if(q->info%2==0){
				m++;
			}
		else{
			o++;
		}
	}
		q=q->link;
	}
	cout<<"Non	zero	elements="<<n<<endl;
	cout<<"Even	numbers="<<m<<endl;
	cout<<"Odd	numbers="<<o<<endl;	
}
void linked_list::largest_smallest_number_and_total_average() {
    node *q = new	node();
    int largest = q->info;
	int smallest = q->info;
	int total = 0;
	int count = 0;
	q=start;
    while (q != NULL) {
        if (q->info > largest) {
            largest = q->info;
        }
        if (q->info < smallest) {
            smallest = q->info;
        }
        total += q->info;
        count++;
        q = q->link;
    }
    double average = static_cast<double>(total) / count;
    cout << "Largest element: " << largest << endl;
    cout << "Smallest element: " << smallest << endl;
    cout << "Total of all elements: " << total << endl;
    cout << "Average of all elements: " << average << endl;
}
void linked_list::move_evens_to_list2_odds_to_list3(linked_list l2, linked_list l3) {
    node *q = start, *prev = NULL;
    while (q != NULL) {
        if (q->info % 2 == 0) { // even
            if (prev == NULL) { // first node
                start = q->link;
            } else {
                prev->link = q->link;
            }
            l2.create_list(q->info);
        } else { // odd
            if (prev == NULL) { // first node
                start = q->link;
            } else {
                prev->link = q->link;
            }
            l3.create_list(q->info);
        }
        prev = q;
        q = q->link;
    }
    // Concatenate l2 and l1
    if (l2.start == NULL) {
        l2 = l3;
    } else {
        node *p = l2.start;
        while (p->link != NULL) {
            p = p->link;
        }
        p->link = l3.start;
    }
}

  
