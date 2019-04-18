#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;
 
 class str1{
 
public:

        class node{
			public:
				
            char* word;
            node* next = NULL;

        };

        node* start = NULL;

        node* end = NULL;

        void add(char *t){

            node* nod = new node();

            nod->word = t;

            if(start == NULL){

                start = nod;

                end = nod;

            }

            else{

                node* i = start;

                while(i->next != NULL){i = i->next;}

                i->next = nod;

            }

        }

        int getSize(){

            node* i = start;

            int amount = 0;

            while(i != NULL){

                amount++;

                i = i->next;

            }

            return amount;

        }
        

void print3() {

		node* i = start;

		while (i != NULL) {

			cout << i->word << " ";

			i = i->next;

		}

		cout << endl;

	}

        void raz2(){

            node* ff = start;

            for(int i = 0; i < (getSize() / 2); i++){

                node* tt = ff;

                int j = i;

                while(j != (getSize() - i - 1)){

                    tt = tt->next;

                    j++;

                }
				//
                char* temp = new char();

                temp = ff->word;

                ff->word = tt->word;

                tt->word = temp;

                ff = ff->next;
				//
            }

        }

        void sort3(){

            node* ff = start;

            for(int i = 0; i < (getSize() - 1); i++){

                node* ll = ff;

                for(int j = 0; j < (getSize() - i - 1); j++){

                    if(strcmp(ll->word, ll->next->word) > 0){

                        char* temp = new char();

                        temp = ll->word;

                        ll->word = ll->next->word;

                        ll->next->word = temp;

                    }

                    ll = ll->next;

                }

            }

        }

};  
  
  
 void printMenu() 
 {
	setlocale(LC_ALL, "Russian");
	cout << " 1. Вывести всю строку" << endl;
    cout << " 2. Поменять слова местами" << endl;
    cout << " 3. Отсортировать строку" << endl;

 } 
 
 
  
int main() 
{
	setlocale(LC_ALL, "Russian");
	
	str1 e;
	 
    cout << "Введите свою строку: " << endl;
    
	char str[64];//сама строка
	gets(str);

    char* temp = strtok(str, " \n\0");
	while (temp != NULL) {

		e.add(temp);

		temp = strtok(NULL, " \n\0");

	}
 		char x = '1';

	printMenu();

	cin >>x;

	while (x != '0') {

		if (x == '1') { e.print3(); }

		if (x == '2') { e.raz2(); }

		if (x == '3') { e.sort3(); }

		printMenu();

		cin >> x;
 					}
 
}

