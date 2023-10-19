#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
using namespace std;

class Product
{
	private:
		int id;
		string title;
		string desc;
		double price;
		int quantity;
		int likes;	
		int p;
		int q;
		int t1;	
	public:
		Product();
		Product(int id, string title,string desc,double price,int quantity,int likes);
		int GetId();
		string GetTitle();
		string GetDesc();
		double GetPrice();
		int GetQuantity();
		int GetLikes();
		void SetPrice(double price);
		void SetQuantity(int quantity);
	    void SetTitle(string title);
		~Product();
	protected:
};

#endif
