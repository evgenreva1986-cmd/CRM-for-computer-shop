#pragma once
#include "Product.h"
using namespace System;
using namespace System::Data;
using namespace System::Data::SQLite;
using namespace System::Collections::Generic;

public ref class dbManager
{
	private:
		String^ connection;
		List<Product^>^ Lproducts = gcnew List<Product^>();
	public:
		dbManager(String^ dbPath)
		{
			connection = "Data source=" + dbPath + ";Version=3;";
			CreateTable();
		}
		void CreateTable()
		{
			SQLiteConnection^ connect = gcnew SQLiteConnection(connection);
			try
			{
				connect->Open();
				String^ sql = "CREATE TABLE IF NOT EXISTS products ("
					"id INTEGER PRIMARY KEY AUTOINCREMENT, "
					"name TEXT NOT NULL, "
					"price REAL NOT NULL, "
					"amount INTEGER NOT NULL, "
					"description TEXT NULL, "
					"photopath TEXT NULL"
					");";
				SQLiteCommand^ cmd = gcnew SQLiteCommand(sql, connect);
				cmd->ExecuteNonQuery();
			}
			finally
			{
				connect->Close();
			}
		}
		DataTable^ ReadTable(String^ sql)
		{
			DataTable^ table = gcnew DataTable();
			SQLiteConnection^ connect = gcnew SQLiteConnection(connection);
			try
			{
				connect->Open();
				SQLiteDataAdapter^ adapter = gcnew SQLiteDataAdapter(sql, connect);
				adapter->Fill(table);
			}
			finally
			{
				connect->Close();
			}
			return table;
			
		}
		List<Product^>^ GetProducts(String^ sql)
		{
			Lproducts->Clear();
			DataTable^ table = ReadTable(sql);
			for each (DataRow^ row in table->Rows)
			{
				Product^ prod = gcnew Product();
				prod->SetId(Convert::ToInt32(row["id"]));
				prod->SetName(Convert::ToString(row["name"]));
				prod->SetPrice(Convert::ToDouble(row["price"]));
				prod->SetAmount(Convert::ToInt32(row["amount"]));
				prod->SetDesc(Convert::ToString(row["description"]));
				prod->SetPhoto(Convert::ToString(row["photopath"]));
				Lproducts->Add(prod);
			}
			return Lproducts;
		}
		int CarryStat(String^ sql)
		{
			SQLiteConnection^ connect = gcnew SQLiteConnection(connection);
			int result = 0;
			try
			{
				connect->Open();
				SQLiteCommand^ cmd = gcnew SQLiteCommand(sql, connect);
				result = Convert::ToInt32(cmd->ExecuteScalar());
			}
			finally
			{
				connect->Close();
			}
			return result;
		}

		void AddProduct(Product^ prod)
		{
			SQLiteConnection^ connect = gcnew SQLiteConnection(connection);
			try
			{
				connect->Open();
				String^ sql = "INSERT INTO products (name, price, amount, description, photopath)"
					"VALUES (@name, @price, @amount, @desc, @path);";
				SQLiteCommand^ cmd = gcnew SQLiteCommand(sql, connect);
				cmd->Parameters->AddWithValue("@name", prod->GetName());
				cmd->Parameters->AddWithValue("@price", prod->GetPrice());
				cmd->Parameters->AddWithValue("@amount", prod->GetAmount());
				cmd->Parameters->AddWithValue("@desc", prod->GetDesc());
				cmd->Parameters->AddWithValue("@path", prod->GetPhoto());
				cmd->ExecuteNonQuery();
			}
			finally
			{
				connect->Close();
			}
		}
		void DelProduct(int prodid)
		{
			SQLiteConnection^ connect = gcnew SQLiteConnection(connection);
			try
			{
				connect->Open();
				String^ sql = "DELETE FROM products WHERE id = @prodid";
				SQLiteCommand^ cmd = gcnew SQLiteCommand(sql, connect);
				cmd->Parameters->AddWithValue("@prodid", prodid);
				cmd->ExecuteNonQuery();
			}
			finally
			{
				connect->Close();
			}
		}
		void ChangeProduct(Product^ prod, int prodid)
		{
			SQLiteConnection^ connect = gcnew SQLiteConnection(connection);
			try
			{
				connect->Open();
				String^ sql = "UPDATE products "
					"SET name = @name, "
					"price = @price, "
					"amount = @amount, "
					"description = @desc, "
					"photopath = @path "
					"WHERE id = @prodid;";
				SQLiteCommand^ cmd = gcnew SQLiteCommand(sql, connect);
				cmd->Parameters->AddWithValue("@name", prod->GetName());
				cmd->Parameters->AddWithValue("@price", prod->GetPrice());
				cmd->Parameters->AddWithValue("@amount", prod->GetAmount());
				cmd->Parameters->AddWithValue("@desc", prod->GetDesc());
				cmd->Parameters->AddWithValue("@path", prod->GetPhoto());
				cmd->Parameters->AddWithValue("@prodid", prodid);
				cmd->ExecuteNonQuery();
			}
			finally
			{
				connect->Close();
			}
		}
		void DecreaseCount(int prodid)
		{
			SQLiteConnection^ connect = gcnew SQLiteConnection(connection);
			try
			{
				connect->Open();
				String^ sql = "UPDATE products "
					"SET amount = amount - 1 "
					"WHERE  id = @prodid AND amount > 0; ";
				SQLiteCommand^ cmd = gcnew SQLiteCommand(sql, connect);
				cmd->Parameters->AddWithValue("@prodid", prodid);
				cmd->ExecuteNonQuery();
			}
			finally
			{
				connect->Close();
			}
		}
		void CreateInfoTable()
		{
			SQLiteConnection^ connect = gcnew SQLiteConnection(connection);
			try
			{
				connect->Open();
				String^ sql = "CREATE TABLE IF NOT EXISTS info("
					"password TEXT NOT NULL);";
				SQLiteCommand^ cmd = gcnew SQLiteCommand(sql, connect);
				cmd->ExecuteNonQuery();
			}
			finally
			{
				connect->Close();
			}
		}
		void initPasswrd()
		{
			SQLiteConnection^ connect = gcnew SQLiteConnection(connection);
			try
			{
				connect->Open();
				String^ sql = "SELECT COUNT(*) FROM info";
				SQLiteCommand^ cmd = gcnew SQLiteCommand(sql, connect);
				int count = Convert::ToInt32(cmd->ExecuteScalar());
				if (count == 0)
				{
					String^ insSql = "INSERT INTO info (password) VALUES ('MegaAdminPro100');";
					SQLiteCommand^ ins = gcnew SQLiteCommand(insSql, connect);
					ins->ExecuteNonQuery();
				}
			}
			finally
			{
				connect->Close();
			}
		}
		void SetPassword(String^ NewPassword)
		{
			SQLiteConnection^ connect = gcnew SQLiteConnection(connection);
			try
			{
				connect->Open();
				String^ change = "UPDATE info "
					"SET password = @newPasswrd;";
				SQLiteCommand^ upd = gcnew SQLiteCommand(change, connect);
				upd->Parameters->AddWithValue("@newPasswrd", NewPassword);
				upd->ExecuteNonQuery();
			}
			finally
			{
				connect->Close();
			}
		}
		bool CheckPasswrd(String^ Password)
		{
			SQLiteConnection^ connect = gcnew SQLiteConnection(connection);
			bool isOkay = false;
			try
			{
				connect->Open();
				String^ sql = "SELECT COUNT(password) FROM info "
					"WHERE password = @password;";
				SQLiteCommand^ cmd = gcnew SQLiteCommand(sql, connect);
				cmd->Parameters->AddWithValue("@password", Password);
				int count = Convert::ToInt32(cmd->ExecuteScalar());
				if (count == 1) { isOkay = true; }
			}
			finally
			{
				connect->Close();
			}
			return isOkay;
		}
};