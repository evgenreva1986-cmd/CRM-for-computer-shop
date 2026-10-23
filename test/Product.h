#pragma once
using namespace System;
public ref class Product
{
private:
	int id = 0;
	String^ name;
	double price;
	int amount;
	String^ description;
	String^ photoPath;
public:
	Product(String^ name, double price, int count, String^ desc, String^ photo) :
		name(name), description(desc), price(price), amount(count), photoPath(photo) {}
	Product()
	{
		name = "";
		price = 0;
		amount = 0;
		description = "";
		photoPath = "";
	}
	int GetId() { return id; }
	String^ GetName() { return name; }
	double GetPrice() { return price; }
	int GetAmount() { return amount; }
	String^ GetDesc() { return description; }
	String^ GetPhoto() { return photoPath; }
	
	void SetId(int NewId) { id = NewId; }
	void SetName(String^ NewName) { name = NewName; }
	void SetPrice(double NewPrice) { price = NewPrice; }
	void SetAmount(int NewAmount) { amount = NewAmount; }
	void SetDesc(String^ NewDesc) { description = NewDesc; }
	void SetPhoto(String^ NewPath) { photoPath = NewPath; }
};
