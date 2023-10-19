#include "product.h"
 
Product::Product()
{
	this->id=34;
	this->title="Jasmine";
	this->desc="Nice product !";
	this->price=200;
	this->quantity=30;
	this->likes=5;
}

Product::Product(int id, string title,string desc,double price,int quantity,int likes)
{
	this->id=id;
	this->title=title;
	this->desc=desc;
	this->price=price;
	this->quantity=quantity;
	this->likes=likes;
}

Product::~Product()
{
}

int Product::GetId(){
    
    return this->id;
}

string Product::GetTitle(){  
       return this->title;
}
string Product::GetDesc(){  
       return this->desc;
}

double Product::GetPrice()
{
	return this->price;
}
int Product::GetQuantity()
{
	return this->quantity;
}
int Product::GetLikes()
{
	return this->likes;
}
void Product::SetTitle(string title){
	this->title=title;
}
void Product::SetPrice(double price)
{
	this->price=price;	
}
void Product::SetQuantity(int quantity)
{
	this->quantity=quantity;
}
