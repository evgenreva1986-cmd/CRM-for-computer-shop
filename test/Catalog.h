#pragma once
#include "dbManager.h"
#include "Product.h"
#include "ProductCard.h"
#include "information.h"
using namespace System::Data::SQLite;
using namespace System::Collections::Generic;
namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Catalog
	/// </summary>
	public ref class Catalog : public System::Windows::Forms::Form
	{
	public:
		Catalog(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Catalog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	protected:
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ довідкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вийтиЗПрограмиToolStripMenuItem;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Catalog::typeid));
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->довідкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вийтиЗПрограмиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableLayoutPanel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(726, 3);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(40, 3, 3, 3);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(971, 788);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Ціна < 1500 грн", L"Ціна > 1500 грн" });
			this->checkedListBox1->Location = System::Drawing::Point(3, 22);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(674, 140);
			this->checkedListBox1->TabIndex = 1;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				1014)));
			this->tableLayoutPanel1->Controls->Add(this->groupBox1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->flowLayoutPanel1, 1, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(15, 51);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1700, 794);
			this->tableLayoutPanel1->TabIndex = 3;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->checkedListBox1);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(3, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(680, 788);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Фільтри та сортування";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Від дешевих до дорогих", L"Від дорогих до дешевих",
					L"Не сортувати"
			});
			this->comboBox1->Location = System::Drawing::Point(6, 88);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(216, 28);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Catalog::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->button1->Location = System::Drawing::Point(3, 196);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(219, 57);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Застосувати";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Catalog::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->довідкаToolStripMenuItem,
					this->вийтиЗПрограмиToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(15, 15);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1700, 36);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// довідкаToolStripMenuItem
			// 
			this->довідкаToolStripMenuItem->Name = L"довідкаToolStripMenuItem";
			this->довідкаToolStripMenuItem->Size = System::Drawing::Size(93, 32);
			this->довідкаToolStripMenuItem->Text = L"Довідка";
			this->довідкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &Catalog::довідкаToolStripMenuItem_Click);
			// 
			// вийтиЗПрограмиToolStripMenuItem
			// 
			this->вийтиЗПрограмиToolStripMenuItem->Name = L"вийтиЗПрограмиToolStripMenuItem";
			this->вийтиЗПрограмиToolStripMenuItem->Size = System::Drawing::Size(175, 32);
			this->вийтиЗПрограмиToolStripMenuItem->Text = L"Вийти з програми";
			this->вийтиЗПрограмиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Catalog::вийтиЗПрограмиToolStripMenuItem_Click);
			// 
			// Catalog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1730, 860);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Catalog";
			this->Padding = System::Windows::Forms::Padding(15);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Catalog";
			this->Load += gcnew System::EventHandler(this, &Catalog::Catalog_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: dbManager^ db = gcnew dbManager("products.db");
	private: System::Void Catalog_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		flowLayoutPanel1->Controls->Clear();
		List<Product^>^ Lproducts = db->GetProducts("SELECT * FROM products;");
		for each (Product ^ prod in Lproducts)
		{
			ProductCard^ card = gcnew ProductCard();
			card->SetContent(prod);
			flowLayoutPanel1->Controls->Add(card);
		}
	}
	private: void updateCatalog()
	{
		flowLayoutPanel1->Controls->Clear();
		int selected = comboBox1->SelectedIndex;
		String^ filter = "";
		String^ sort = "";
		for (int i = 0; i < checkedListBox1->CheckedItems->Count; i++)
		{
			if (checkedListBox1->CheckedItems[i] == "Ціна < 1500 грн") { filter = " WHERE price <= 1500"; }
			else if (checkedListBox1->CheckedItems[i] == "Ціна > 1500 грн") { filter = " WHERE price >= 1500"; }
		}
		switch (selected)
		{
		case 0: { sort = " ORDER BY price ASC;"; break; }
		case 1: { sort = " ORDER BY price DESC;"; break; }
		default: { sort = ""; }
		}
		String^ sql = "SELECT * FROM products" + filter + sort + ";";
		List<Product^>^ Lproducts = db->GetProducts(sql);
		for each (Product ^ prod in Lproducts)
		{
			ProductCard^ card = gcnew ProductCard();
			card->SetContent(prod);
			flowLayoutPanel1->Controls->Add(card);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		updateCatalog();
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{
	updateCatalog();
}
private: System::Void довідкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	information^ info = gcnew information();
	info->Show();
}
private: System::Void вийтиЗПрограмиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	System::Windows::Forms::DialogResult res = MessageBox::Show("Ви точно хочете вийти з програми?",
		"Вихід з програми", MessageBoxButtons::YesNo);
	if (res == System::Windows::Forms::DialogResult::Yes)
	{
		System::Environment::Exit(0);
	}
}
};
}
