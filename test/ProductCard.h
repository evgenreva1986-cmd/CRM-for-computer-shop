#pragma once
#include "Product.h"
#include "PhotoView.h"
#include "dbManager.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace test {

	/// <summary>
	/// Сводка для ProductCard
	/// </summary>
	public ref class ProductCard : public System::Windows::Forms::UserControl
	{
	public:
		ProductCard(void)
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
		~ProductCard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ переглянутиФотоТоваруToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->переглянутиФотоТоваруToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(-1, 38);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(464, 186);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(3, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(3, 260);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"label2";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(163, 343);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 42);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Придбати";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ProductCard::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(5, 303);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 22);
			this->label3->TabIndex = 4;
			this->label3->Text = L"label3";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(142, 230);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(321, 107);
			this->textBox1->TabIndex = 5;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->переглянутиФотоТоваруToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(296, 36);
			// 
			// переглянутиФотоТоваруToolStripMenuItem
			// 
			this->переглянутиФотоТоваруToolStripMenuItem->Name = L"переглянутиФотоТоваруToolStripMenuItem";
			this->переглянутиФотоТоваруToolStripMenuItem->Size = System::Drawing::Size(295, 32);
			this->переглянутиФотоТоваруToolStripMenuItem->Text = L"Переглянути фото товару";
			this->переглянутиФотоТоваруToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProductCard::переглянутиФотоТоваруToolStripMenuItem_Click);
			// 
			// ProductCard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ContextMenuStrip = this->contextMenuStrip1;
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ProductCard";
			this->Size = System::Drawing::Size(466, 388);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: dbManager^ db = gcnew dbManager("products.db");
	private: int prodId = 0;
	public: void SetContent(Product^ prod)
	{
		prodId = prod->GetId();
		String^ photoPath = Application::StartupPath + "\\images\\" + prod->GetPhoto();
		pictureBox1->BackgroundImage = Image::FromFile(photoPath);
		pictureBox1->Tag = photoPath;
		label1->Text = prod->GetName();
		if (prod->GetAmount() > 0 && prod->GetAmount() <= 10)
		{
			label3->Text = "Закінчується";
			label3->ForeColor = Color::Red;
		}
		else if (prod->GetAmount() == 0)
		{
			label3->Text = "Товар\nзакінчився";
			label3->ForeColor = Color::Red;
			button1->Enabled = false;
		}
		else
		{
			label3->Text = "В наявності";
			label3->ForeColor = Color::Green;
		}
		label2->Text = Convert::ToString(prod->GetPrice());
		textBox1->Text = prod->GetDesc();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		db->DecreaseCount(prodId);
		MessageBox::Show("Товар " + label1->Text + " куплено успішно", "Купівля товару");
	}
private: System::Void переглянутиФотоТоваруToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	PhotoView^ view = gcnew PhotoView(Convert::ToString(pictureBox1->Tag));
	view->Show();
}
};
}
