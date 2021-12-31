#pragma once

#include "lab1.h"
#include "lab2.h"
#include "lab3.h"
#include "lab4.h"
#include "lab5.h"
#include "MyUserControl.h"
#include <list>

namespace LabMain {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::UserControl^ frame;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel1;
	
	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрграммеToolStripMenuItem;





		  
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->оПрграммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(577, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Контрольная работа ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(577, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"По основам програмирования 3 семестр";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(10, 14);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(198, 28);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Задание №1";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::buttons_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(10, 48);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(198, 28);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Задание №2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::buttons_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(10, 82);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(198, 28);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Задание №3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::buttons_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(10, 116);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(198, 27);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Задание №4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::buttons_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(10, 149);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(198, 27);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Задание №5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::buttons_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(20, 70);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(565, 349);
			this->panel1->TabIndex = 5;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(143, 176);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 0;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point(2, 48);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->splitContainer1->Panel1->Controls->Add(this->button1);
			this->splitContainer1->Panel1->Controls->Add(this->button2);
			this->splitContainer1->Panel1->Controls->Add(this->button3);
			this->splitContainer1->Panel1->Controls->Add(this->button4);
			this->splitContainer1->Panel1->Controls->Add(this->button5);
			this->splitContainer1->Panel1->Cursor = System::Windows::Forms::Cursors::Hand;
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->label1);
			this->splitContainer1->Panel2->Controls->Add(this->label2);
			this->splitContainer1->Panel2->Controls->Add(this->panel1);
			this->splitContainer1->Size = System::Drawing::Size(821, 431);
			this->splitContainer1->SplitterDistance = 221;
			this->splitContainer1->TabIndex = 7;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->оПрграммеToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(824, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// оПрграммеToolStripMenuItem
			// 
			this->оПрграммеToolStripMenuItem->Name = L"оПрграммеToolStripMenuItem";
			this->оПрграммеToolStripMenuItem->Size = System::Drawing::Size(87, 20);
			this->оПрграммеToolStripMenuItem->Text = L"О прграмме";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(824, 479);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(840, 518);
			this->MinimumSize = System::Drawing::Size(840, 518);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Санкт-Петербургский государственный университет телекоммуникаций им. проф. М.А.Бо"
				L"нч-Бруевича";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttons_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel1->Controls->Clear();
		
		if (System::Object::ReferenceEquals(sender, button1)) frame = gcnew lab1();
		else if (System::Object::ReferenceEquals(sender, button2)) frame = gcnew lab2();
		else if (System::Object::ReferenceEquals(sender, button3)) frame = gcnew lab3();
		else if (System::Object::ReferenceEquals(sender, button4)) frame = gcnew lab4();
		else if (System::Object::ReferenceEquals(sender, button5)) frame = gcnew lab5();

		this->panel1->Controls->Add(frame);

	}
	
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		frame = gcnew lab1();
		this->panel1->Controls->Add(frame);
	}
};
}
