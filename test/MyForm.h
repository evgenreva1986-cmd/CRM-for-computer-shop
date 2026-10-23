#pragma once
#include "AdminPanel.h"
#include "Catalog.h"
#include "dbManager.h"
namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: String^ ReqPassword = "MegaAdminPro100";
	private: System::Windows::Forms::CheckBox^ checkBox1;

	protected:


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(283, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Увійти як:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(0, 70);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(285, 234);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			this->pictureBox1->MouseEnter += gcnew System::EventHandler(this, &MyForm::pictureBox1_MouseEnter);
			this->pictureBox1->MouseLeave += gcnew System::EventHandler(this, &MyForm::pictureBox1_MouseLeave);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(3, 70);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(285, 234);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			this->pictureBox2->MouseEnter += gcnew System::EventHandler(this, &MyForm::pictureBox2_MouseEnter);
			this->pictureBox2->MouseLeave += gcnew System::EventHandler(this, &MyForm::pictureBox2_MouseLeave);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(73, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 32);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Покупець";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(99, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 32);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Адмін";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(409, 40);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(287, 416);
			this->panel1->TabIndex = 5;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox1->Location = System::Drawing::Point(171, 327);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(117, 24);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"Приховати";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(7, 323);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(163, 28);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Введіть пароль";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 358);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(267, 26);
			this->textBox1->TabIndex = 5;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(12, 40);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(287, 416);
			this->panel2->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(701, 454);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main menu";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: dbManager^ db = gcnew dbManager("products.db");
	private: void GoToAdmin()
	{
		String^ userPaswrd = textBox1->Text;
		db->initPasswrd();

		if (db->CheckPasswrd(userPaswrd))
		{
			AdminPanel^ adminka = gcnew AdminPanel();
			textBox1->Clear();
			this->Hide();
			adminka->ShowDialog();
			this->Show();
		}
		else
		{
			textBox1->Clear();
			MessageBox::Show("Неправильно введений пароль адміністратора", "Доступ до бд заблокований",
				MessageBoxButtons::RetryCancel, MessageBoxIcon::Exclamation);
		}
	}
	private: System::Void pictureBox2_MouseEnter(System::Object^ sender, System::EventArgs^ e)
	{
		pictureBox2->BorderStyle = BorderStyle::Fixed3D;
	}

	private: System::Void pictureBox2_MouseLeave(System::Object^ sender, System::EventArgs^ e)
	{
		pictureBox2->BorderStyle = BorderStyle::None;
	}
	private: System::Void pictureBox1_MouseEnter(System::Object^ sender, System::EventArgs^ e)
	{
		pictureBox1->BorderStyle = BorderStyle::Fixed3D;
	}
	private: System::Void pictureBox1_MouseLeave(System::Object^ sender, System::EventArgs^ e)
	{
		pictureBox1->BorderStyle = BorderStyle::None;
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		GoToAdmin();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Catalog^ catalog = gcnew Catalog();
		textBox1->Clear();
		this->Hide();
		catalog->ShowDialog();
		this->Show();
	}

	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (checkBox1->Checked)
		{
			textBox1->PasswordChar = '*';
		}
		else
		{
			textBox1->PasswordChar = '\0';
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		db->CreateInfoTable();
	}
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if (e->KeyChar == (char)System::Windows::Forms::Keys::Enter)
		{
			GoToAdmin();
		}
	}
};
}
