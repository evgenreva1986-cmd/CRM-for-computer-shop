#pragma once

namespace test {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для information
	/// </summary>
	public ref class information : public System::Windows::Forms::Form
	{
	public:
		information(void)
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
		~information()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	private: System::Windows::Forms::TreeView^ treeView1;

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
			System::Windows::Forms::TreeNode^ treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"Основна інформація"));
			System::Windows::Forms::TreeNode^ treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"Адміністративна панель"));
			System::Windows::Forms::TreeNode^ treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"Про автора"));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->treeView1);
			this->panel1->Controls->Add(this->webBrowser1);
			this->panel1->Location = System::Drawing::Point(13, 13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1216, 575);
			this->panel1->TabIndex = 0;
			// 
			// treeView1
			// 
			this->treeView1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->treeView1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->treeView1->Dock = System::Windows::Forms::DockStyle::Left;
			this->treeView1->Location = System::Drawing::Point(0, 0);
			this->treeView1->Name = L"treeView1";
			treeNode1->Name = L"Узел0";
			treeNode1->Tag = L"start.html";
			treeNode1->Text = L"Основна інформація";
			treeNode2->Name = L"Узел0";
			treeNode2->Tag = L"adminka.html";
			treeNode2->Text = L"Адміністративна панель";
			treeNode3->Name = L"Узел0";
			treeNode3->Tag = L"author.html";
			treeNode3->Text = L"Про автора";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(3) { treeNode1, treeNode2, treeNode3 });
			this->treeView1->Size = System::Drawing::Size(273, 575);
			this->treeView1->TabIndex = 0;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &information::treeView1_AfterSelect);
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(279, 0);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(919, 575);
			this->webBrowser1->TabIndex = 1;
			this->webBrowser1->Url = (gcnew System::Uri(L"", System::UriKind::Relative));
			// 
			// information
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1236, 600);
			this->Controls->Add(this->panel1);
			this->Name = L"information";
			this->Text = L"information";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) 
	{
		if (e->Node->Tag != nullptr)
		{
			String^ fname = e->Node->Tag->ToString();
			String^ path = Application::StartupPath + "\\help\\" + fname;
			webBrowser1->Navigate(path);
		}
	}
	};
}
