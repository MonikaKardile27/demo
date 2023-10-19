#include <iostream>
#include <vector>
#include "global.h"
#include "product.h"
#include "productmanager.h"

#include <string>
//using namespace std;
int global;
vector<Product> products;
ProductManager mgr; 

void acceptProducts(){
	for (int i = 1; i <=3 ; i++) 
    {
    	 cout<<"\n Enter tile and desc :";
    	 string title,desc;
    	 int id,qty,likes;
    	 double price;
    	 getline(cin>>ws, title);
    	 getline(cin>>ws,desc);
//		 getline(cin>>ws,price);
//		 getline(cin>>ws,qty);
//		 getline(cin>>ws,likes);
		cout<<"\n Enter flower price,quantity,likes  :";
		cin>>price>>qty>>likes;
    	 
		 Product p(i,title,desc,price,qty,likes);
		// Product p1(i,id);
		 mgr.Insert(p);
	}
}

void showProducts(){
 	cout << "\nMy Flowers Collection "; 
	vector<Product> allProducts=mgr.GetAll();
    for (auto i = allProducts.begin(); i != allProducts.end(); ++i) 
    {
	
        cout <<"\n"<< (*i).GetId()<< " "<<(*i).GetTitle()<< "  "<<(*i).GetDesc(); 	
        cout <<"\n"<< (*i).GetPrice()<< " "<<(*i).GetQuantity()<< " "<<(*i).GetLikes();
        }
    cout<< "\n _____________________________________\n";
}


int main(int argc, char** argv) {
	int option=1;
/*	while(option != 7){
		cout<< "Choose Option:\n";
		cout<< "1. Show All Products:\n";
		cout<< "2. Find Product:\n";
		cout<< "3. Insert Product:\n";
		cout<< "4. Update existing Product:\n";
		cout<< "5. Delete an existing product:\n";
		cout<< "6. Delete all available products:\n";
		cout<< "7. Exit:\n";
		
		cin>>option;
		switch(option){
			case 1:
				  showProducts();
			break;
			case 2:
				  //Find product
				break;
			case 3:
					acceptProducts();
			break;
			case 4:
				  //Update product
			break;
			case 5:
			{
				bool status=mgr.Delete(2);
			}	
			break;
			case 6:{
				bool status=mgr.DeleteAll();
			}
			break;
		}				
	}
	
	*/
		acceptProducts();
		showProducts();
	return 0;
	}
