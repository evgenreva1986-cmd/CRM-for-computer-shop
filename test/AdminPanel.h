#pragma once
#include "dbManager.h"
#include "Product.h"
#include "Catalog.h"
#include "information.h"
using namespace System::Data::SQLite;
using namespace System::Collections::Generic;
using namespace System::IO;
namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AdminPanel
	/// </summary>
	public ref class AdminPanel : public System::Windows::Forms::Form
	{
	public:
		AdminPanel(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->DoubleBuffered = true;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AdminPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button3;






	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colprice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colamount;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Coldesc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Colphoto;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ довідкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ переглянутиКаталогToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вийтиЗПрограмиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ зберегтиЗвітУTxtToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminPanel::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Colid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colprice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colamount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Coldesc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Colphoto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зберегтиЗвітУTxtToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->довідкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->переглянутиКаталогToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вийтиЗПрограмиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(122)));
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox1->Location = System::Drawing::Point(3, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 3, 3, 0);
			this->groupBox1->Size = System::Drawing::Size(432, 573);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Надайте дані про товар";
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(11, 200);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 20);
			this->label6->TabIndex = 15;
			this->label6->Text = L"label6";
			this->label6->Visible = false;
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(214, 455);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(204, 49);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Видалити товар";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &AdminPanel::button5_Click);
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(182)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(4, 455);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(204, 49);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Змінити товар";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &AdminPanel::button4_Click);
			this->button3->BackColor = System::Drawing::Color::SkyBlue;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(4, 394);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(416, 54);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Очистити поля \r\nвведення";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AdminPanel::button3_Click);
			this->textBox5->Location = System::Drawing::Point(124, 317);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(244, 26);
			this->textBox5->TabIndex = 11;
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(4, 510);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(416, 60);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Додати";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AdminPanel::button2_Click);
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(3, 321);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 22);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Фото товару";
			this->button1->BackColor = System::Drawing::Color::Silver;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(124, 349);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(244, 39);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Обрати";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AdminPanel::button1_Click);
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(11, 231);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(142, 44);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Основні \r\nхарактеристики";
			this->textBox4->Location = System::Drawing::Point(187, 185);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(181, 110);
			this->textBox4->TabIndex = 6;
			this->textBox3->Location = System::Drawing::Point(187, 142);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(181, 26);
			this->textBox3->TabIndex = 5;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AdminPanel::textBox3_KeyPress);
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 22);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Кількість на складі";
			this->textBox2->Location = System::Drawing::Point(187, 99);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(181, 26);
			this->textBox2->TabIndex = 3;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AdminPanel::textBox2_KeyPress);
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ціна за одиницю";
			this->textBox1->Location = System::Drawing::Point(187, 62);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(181, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AdminPanel::textBox1_KeyPress);
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(41, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Назва";
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonShadow;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Colid, this->Colname,
					this->Colprice, this->Colamount, this->Coldesc, this->Colphoto
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Desktop;
			this->dataGridView1->Location = System::Drawing::Point(504, 7);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(827, 581);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminPanel::dataGridView1_CellClick);
			this->Colid->HeaderText = L"Id";
			this->Colid->MinimumWidth = 8;
			this->Colid->Name = L"Colid";
			this->Colid->ReadOnly = true;
			this->Colid->Visible = false;
			this->Colid->Width = 60;
			this->Colname->HeaderText = L"Назва";
			this->Colname->MinimumWidth = 8;
			this->Colname->Name = L"Colname";
			this->Colname->ReadOnly = true;
			this->Colname->Width = 150;
			this->Colprice->HeaderText = L"Ціна";
			this->Colprice->MinimumWidth = 8;
			this->Colprice->Name = L"Colprice";
			this->Colprice->ReadOnly = true;
			this->Colprice->Width = 75;
			this->Colamount->HeaderText = L"Кількість";
			this->Colamount->MinimumWidth = 8;
			this->Colamount->Name = L"Colamount";
			this->Colamount->ReadOnly = true;
			this->Colamount->Width = 80;
			this->Coldesc->HeaderText = L"Характеристики";
			this->Coldesc->MinimumWidth = 8;
			this->Coldesc->Name = L"Coldesc";
			this->Coldesc->ReadOnly = true;
			this->Coldesc->Width = 150;
			this->Colphoto->HeaderText = L"Шлях до фото";
			this->Colphoto->MinimumWidth = 8;
			this->Colphoto->Name = L"Colphoto";
			this->Colphoto->ReadOnly = true;
			this->Colphoto->Width = 150;
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(10, 43);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->Padding = System::Drawing::Point(10, 3);
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1402, 657);
			this->tabControl1->TabIndex = 17;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminPanel::tabControl1_SelectedIndexChanged);
			this->tabPage1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 32);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(30, 3, 30, 3);
			this->tabPage1->Size = System::Drawing::Size(1394, 621);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Взаємодія з бд";
			this->tabPage2->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->tabPage2->Controls->Add(this->groupBox3);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 32);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1394, 621);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Налаштування";
			this->groupBox3->BackColor = System::Drawing::Color::Teal;
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->dataGridView2);
			this->groupBox3->Controls->Add(this->textBox11);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->textBox10);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Dock = System::Windows::Forms::DockStyle::Right;
			this->groupBox3->Location = System::Drawing::Point(708, 3);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(683, 615);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Статистика";
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label13->Location = System::Drawing::Point(208, 220);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(239, 25);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Товари що закінчуються";
			this->dataGridView2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonShadow;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6
			});
			this->dataGridView2->GridColor = System::Drawing::SystemColors::Desktop;
			this->dataGridView2->Location = System::Drawing::Point(33, 255);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->RowTemplate->Height = 28;
			this->dataGridView2->Size = System::Drawing::Size(584, 323);
			this->dataGridView2->TabIndex = 6;
			this->dataGridViewTextBoxColumn1->HeaderText = L"Id";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Visible = false;
			this->dataGridViewTextBoxColumn1->Width = 60;
			this->dataGridViewTextBoxColumn2->HeaderText = L"Назва";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 150;
			this->dataGridViewTextBoxColumn3->HeaderText = L"Ціна";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 75;
			this->dataGridViewTextBoxColumn4->HeaderText = L"Кількість";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 80;
			this->dataGridViewTextBoxColumn5->HeaderText = L"Характеристики";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 150;
			this->dataGridViewTextBoxColumn6->HeaderText = L"Шлях до фото";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 150;
			this->textBox11->Location = System::Drawing::Point(213, 179);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(100, 26);
			this->textBox11->TabIndex = 5;
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label12->Location = System::Drawing::Point(28, 179);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(179, 25);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Сума всіх товарів:";
			this->textBox10->Location = System::Drawing::Point(188, 136);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(100, 26);
			this->textBox10->TabIndex = 3;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Location = System::Drawing::Point(28, 136);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(153, 25);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Всього товарів:";
			this->textBox9->BackColor = System::Drawing::Color::DimGray;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox9->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox9->Location = System::Drawing::Point(6, 48);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(671, 64);
			this->textBox9->TabIndex = 1;
			this->textBox9->Text = L"Основна статистична інформація бд. Оновлюється динамічно";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->groupBox2->BackColor = System::Drawing::Color::Teal;
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->button7);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Left;
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox2->Location = System::Drawing::Point(3, 3);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(494, 615);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Безпека";
			this->checkBox1->AutoSize = true;
			this->checkBox1->ForeColor = System::Drawing::SystemColors::Control;
			this->checkBox1->Location = System::Drawing::Point(204, 148);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(117, 24);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"Приховати";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &AdminPanel::checkBox1_CheckedChanged);
			this->button8->Location = System::Drawing::Point(60, 353);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(161, 46);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Очистити";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &AdminPanel::button8_Click);
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(200, 276);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(142, 20);
			this->label10->TabIndex = 7;
			this->label10->Text = L"new_pswrd_status";
			this->label10->Visible = false;
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(200, 207);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(104, 20);
			this->label9->TabIndex = 6;
			this->label9->Text = L"pswrd_status";
			this->label9->Visible = false;
			this->button7->Location = System::Drawing::Point(273, 353);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(161, 46);
			this->button7->TabIndex = 5;
			this->button7->Text = L"Змінити пароль";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &AdminPanel::button7_Click);
			this->textBox8->Location = System::Drawing::Point(204, 247);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(176, 26);
			this->textBox8->TabIndex = 4;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(6, 248);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(138, 25);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Новий пароль";
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(6, 179);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(174, 25);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Поточний пароль";
			this->textBox7->Location = System::Drawing::Point(204, 178);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(176, 26);
			this->textBox7->TabIndex = 1;
			this->textBox6->BackColor = System::Drawing::Color::DimGray;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox6->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox6->Location = System::Drawing::Point(6, 39);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(482, 73);
			this->textBox6->TabIndex = 0;
			this->textBox6->Text = L"Введіть поточний пароль адміністратора, щоб змінити пароль";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem1, this->довідкаToolStripMenuItem,
					this->переглянутиКаталогToolStripMenuItem, this->вийтиЗПрограмиToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(10, 10);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1402, 33);
			this->menuStrip1->TabIndex = 18;
			this->menuStrip1->Text = L"menuStrip1";
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->зберегтиЗвітУTxtToolStripMenuItem });
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(69, 29);
			this->toolStripMenuItem1->Text = L"Файл";
			this->зберегтиЗвітУTxtToolStripMenuItem->Name = L"зберегтиЗвітУTxtToolStripMenuItem";
			this->зберегтиЗвітУTxtToolStripMenuItem->Size = System::Drawing::Size(260, 34);
			this->зберегтиЗвітУTxtToolStripMenuItem->Text = L"Зберегти звіт у txt";
			this->зберегтиЗвітУTxtToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::зберегтиЗвітУTxtToolStripMenuItem_Click);
			this->довідкаToolStripMenuItem->Name = L"довідкаToolStripMenuItem";
			this->довідкаToolStripMenuItem->Size = System::Drawing::Size(93, 29);
			this->довідкаToolStripMenuItem->Text = L"Довідка";
			this->довідкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::довідкаToolStripMenuItem_Click);
			this->переглянутиКаталогToolStripMenuItem->Name = L"переглянутиКаталогToolStripMenuItem";
			this->переглянутиКаталогToolStripMenuItem->Size = System::Drawing::Size(197, 29);
			this->переглянутиКаталогToolStripMenuItem->Text = L"Переглянути каталог";
			this->переглянутиКаталогToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::переглянутиКаталогToolStripMenuItem_Click);
			this->вийтиЗПрограмиToolStripMenuItem->Name = L"вийтиЗПрограмиToolStripMenuItem";
			this->вийтиЗПрограмиToolStripMenuItem->Size = System::Drawing::Size(175, 29);
			this->вийтиЗПрограмиToolStripMenuItem->Text = L"Вийти з програми";
			this->вийтиЗПрограмиToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminPanel::вийтиЗПрограмиToolStripMenuItem_Click);
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1422, 710);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"AdminPanel";
			this->Padding = System::Windows::Forms::Padding(10);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminPanel";
			this->Activated += gcnew System::EventHandler(this, &AdminPanel::AdminPanel_Activated);
			this->Load += gcnew System::EventHandler(this, &AdminPanel::AdminPanel_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: dbManager^ db = gcnew dbManager("products.db");
	private: void clearText()
	{
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox5->Clear();
		idToDelChange = -1;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		OpenFileDialog^ fileDialog = gcnew OpenFileDialog();
		fileDialog->Title = "Оберіть фото товару";
		fileDialog->Filter = "усі зображення(*jpg), (*jpeg), (*png)|*.jpg; *.jpeg; *.png";
		fileDialog->InitialDirectory = Application::StartupPath + "\\images";
		if (fileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ fileName = fileDialog->SafeFileName;;
			textBox5->Text = fileName;
		}
	}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
{
	if (Char::IsControl(e->KeyChar))
	{
		if (e->KeyChar == (char)System::Windows::Forms::Keys::Enter)
		{
			SendKeys::Send("{TAB}");
		}
		return;
	}
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
{
	if (Char::IsControl(e->KeyChar))
	{
		if (e->KeyChar == (char)System::Windows::Forms::Keys::Enter)
		{
			SendKeys::Send("{TAB}");
		}
		return;
	}
	if (e->KeyChar >= '0' && e->KeyChar <= '9')
	{
		return;
	}
	if (e->KeyChar == '.') { e->KeyChar = ','; }
	if (e->KeyChar == ',')
	{
		bool hasComa = (textBox2->Text->IndexOf(',') != -1);
		bool isEmpty = (textBox2->Text->Length == 0);
		if (hasComa || isEmpty)
		{
			e->Handled = true;
		}
		return;
	}
	e->Handled = true;
}
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
{
	if (Char::IsControl(e->KeyChar))
	{
		if (e->KeyChar == (char)System::Windows::Forms::Keys::Enter)
		{
			SendKeys::Send("{TAB}");
		}
		return;
	}
	if (e->KeyChar >= '0' && e->KeyChar <= '9')
	{
		if (textBox3->Text->Length == 0 && e->KeyChar == '0')
		{
			e->Handled = true;
		}
		return;
	}
	e->Handled = true;
}
private: void reloadTable()
{
	List<Product^>^ Lproducts = db->GetProducts("SELECT * FROM products;");
	dataGridView1->Rows->Clear();
	for each (Product ^ prod in Lproducts)
	{
		String^ Id = Convert::ToString(prod->GetId());
		String^ Name = prod->GetName();
		String^ Price = Convert::ToString(prod->GetPrice());
		String^ Amount = Convert::ToString(prod->GetAmount());
		String^ Desc = prod->GetDesc();
		String^ Path = prod->GetPhoto();
		dataGridView1->Rows->Add(Id, Name, Price, Amount, Desc, Path);
	}
}
private: bool ValidateInput()
{
	bool IsOkay = true;
	double price = 0;
	int amount = 0;
	if (String::IsNullOrWhiteSpace(textBox1->Text))
	{
		MessageBox::Show("Введіть назву товару", "Помилка запису до бд");
		IsOkay = false;
		return false;
	}
	if (!Double::TryParse(textBox2->Text, price))
	{
		MessageBox::Show("Неправильно введена ціна", "Помилка запису до бд");
		IsOkay = false;
		return false;
	}
	if (!Int32::TryParse(textBox3->Text, amount))
	{
		MessageBox::Show("Неправильно введена кількість на складі", "Помилка запису до бд");
		IsOkay = false;
		return false;
	}
	if (String::IsNullOrWhiteSpace(textBox4->Text))
	{
		MessageBox::Show("Введіть характеристики товару", "Помилка запису до бд");
		IsOkay = false;
		return false;
	}
	if (String::IsNullOrWhiteSpace(textBox5->Text))
	{
		MessageBox::Show("Оберіть фото товару", "Помилка запису до бд");
		IsOkay = false;
		return false;
	}
	return IsOkay;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (ValidateInput())
	{
		String^ name = textBox1->Text;
		double price = Convert::ToDouble(textBox2->Text);
		int amount = Convert::ToInt32(textBox3->Text);
		String^ desc = textBox4->Text;
		String^ path = textBox5->Text;
		clearText();
		Product^ tempProd = gcnew Product(name, price, amount, desc, path);
		db->AddProduct(tempProd);
		reloadTable();
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	clearText();
}
private: System::Void AdminPanel_Load(System::Object^ sender, System::EventArgs^ e) 
{
	dataGridView1->RowTemplate->Height = 40;
	reloadTable();
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
{
	if (e->RowIndex >= 0)
	{
		textBox1->Text = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells[1]->Value);
		textBox2->Text = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells[2]->Value);
		textBox3->Text = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells[3]->Value);
		textBox4->Text = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells[4]->Value);
		textBox5->Text = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells[5]->Value);
		idToDelChange = Convert::ToInt32(dataGridView1->Rows[e->RowIndex]->Cells[0]->Value);
		label6->Text = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells[0]->Value);
	}
}
private: int idToDelChange = -1;
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (ValidateInput())
	{
		System::Windows::Forms::DialogResult res =
			MessageBox::Show("Ви точно хочете видалити товар?", "Видалення товару з бд",
				MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
		if (res == System::Windows::Forms::DialogResult::Yes)
		{
			db->DelProduct(idToDelChange);
			reloadTable();
			clearText();
			idToDelChange = -1;
		}
	}
	else { MessageBox::Show("Не вдається видалити товар, виберіть товар з бази", 
		"Помилка видалення з бд"); }
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (ValidateInput())
	{
		idToDelChange = Convert::ToInt32(label6->Text);
		Product^ temp = gcnew Product();
		temp->SetName(textBox1->Text);
		temp->SetPrice(Convert::ToDouble(textBox2->Text));
		temp->SetAmount(Convert::ToInt32(textBox3->Text));
		temp->SetDesc(textBox4->Text);
		temp->SetPhoto(textBox5->Text);
		db->ChangeProduct(temp, idToDelChange);
		clearText();
		reloadTable();
		idToDelChange = -1;
	}
}

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
{
	label9->Visible = false;
	label10->Visible = false;
	String^ reqPswrd = textBox7->Text; String^ newPswrd = textBox8->Text;
	if (reqPswrd == "" || newPswrd == "")
	{
		MessageBox::Show("Введіть усі поля для введеня", "Помилка зміни паролю");
		return;
	}
	else if (reqPswrd == newPswrd)
	{
		label10->Text = "Паролі не мають збігатися";
		label10->Visible = true;
	}
	else
	{
		if (db->CheckPasswrd(reqPswrd))
		{
			db->SetPassword(newPswrd);
			MessageBox::Show("Пароль адміністратора успішно змінений", "Зміна паролю");
			label9->Visible = false; label10->Visible = false;
		}
		else
		{
			label9->Text = "Неправильний поточний пароль";
			label9->Visible = true;
		}
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox7->Clear(); textBox8->Clear();
	label9->Visible = false; label10->Visible = false;
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (checkBox1->Checked)
	{
		textBox7->PasswordChar = '*';
		textBox8->PasswordChar = '*';
	}
	else
	{
		textBox7->PasswordChar = '\0';
		textBox8->PasswordChar = '\0';
	}
}
private: void UpdateStats()
{
	dataGridView2->Rows->Clear();
	int allAmount = db->CarryStat("SELECT SUM(amount) FROM products;");
	int bablo = db->CarryStat("SELECT SUM(price * amount) FROM products;");
	textBox10->Text = allAmount.ToString();
	textBox11->Text = bablo.ToString("N2");
	List<Product^>^ LFewProds = db->GetProducts("SELECT * FROM products WHERE amount <= 10;");
	for each(Product ^ prod in LFewProds)
	{
		String^ Id = Convert::ToString(prod->GetId());
		String^ Name = prod->GetName();
		String^ Price = Convert::ToString(prod->GetPrice());
		String^ Amount = Convert::ToString(prod->GetAmount());
		String^ Desc = prod->GetDesc();
		String^ Path = prod->GetPhoto();
		dataGridView2->Rows->Add(Id, Name, Price, Amount, Desc, Path);
	}
}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{
	if (tabControl1->SelectedTab->Name == "tabPage2")
	{
		UpdateStats();
	}
}
private: System::Void довідкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	information^ info = gcnew information();
	info->Show();
}
private: System::Void переглянутиКаталогToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Catalog^ catalog = gcnew Catalog();
	this->Hide();
	catalog->ShowDialog();
	this->Show();
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
private: System::Void AdminPanel_Activated(System::Object^ sender, System::EventArgs^ e) 
{
	reloadTable();
}
private: System::Void зберегтиЗвітУTxtToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	SaveFileDialog^ sfd = gcnew SaveFileDialog();
	sfd->Filter = "Текстовий файл (*.txt)|*.txt";
	sfd->FileName = "Zvit_Skladu.txt";

	if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			StreamWriter^ sw = gcnew StreamWriter(sfd->FileName, false, System::Text::Encoding::UTF8);
			sw->WriteLine("==================================================");
			sw->WriteLine("        ЗВІТ ПРО НАЯВНІСТЬ ТОВАРІВ НА СКЛАДІ      ");
			sw->WriteLine("        Дата формування: " + DateTime::Now.ToString());
			sw->WriteLine("==================================================");
			sw->WriteLine(String::Format("{0,-5} | {1,-35} | {2,10} | {3,-10}", "id", "Назва", "Ціна", "Кількість"));
			sw->WriteLine("--------------------------------------------------------------");
			for (int i = 0; i < dataGridView1->Rows->Count; i++) 
			{
				if (dataGridView1->Rows[i]->Cells[0]->Value != nullptr) {
					String^ id = dataGridView1->Rows[i]->Cells[0]->Value->ToString();
					String^ name = dataGridView1->Rows[i]->Cells[1]->Value->ToString();
					String^ price = dataGridView1->Rows[i]->Cells[2]->Value->ToString();
					String^ amount = dataGridView1->Rows[i]->Cells[3]->Value->ToString();

					sw->WriteLine(String::Format("{0,-5} | {1,-35} | {2,10} | {3,-10} ", id, name, price, amount));
				}
			}
			sw->WriteLine("--------------------------------------------------------------");
			sw->WriteLine("Звіт сформовано автоматично.");
			sw->Close();
			MessageBox::Show("Звіт успішно збережено у файл", "Збереження звіту", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Помилка при збереженні: " + ex->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
};
}
