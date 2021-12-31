#pragma once
#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <sstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <msclr/marshal_cppstd.h>

using std::string;
using std::vector;
using std::istringstream;
using std::stringstream;
//std::vector <std::vector <int>> A;
namespace lab22 {

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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(13, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(438, 258);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввод даных матрицы";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(8, 101);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(429, 145);
			this->dataGridView1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(295, 53);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(137, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBoxes_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(213, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"M-столбцов";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(66, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(137, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBoxes_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"N-строк";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(426, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Задайте размер матрицы";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 437);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 29);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Создать таблицу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(159, 437);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 29);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Выполнить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(307, 437);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(143, 29);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->checkBox3);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(13, 277);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(432, 144);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Найти";
			// 
			// label6
			// 
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Location = System::Drawing::Point(281, 85);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(136, 19);
			this->label6->TabIndex = 5;
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Location = System::Drawing::Point(281, 51);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(136, 19);
			this->label5->TabIndex = 4;
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Location = System::Drawing::Point(281, 20);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(136, 19);
			this->label4->TabIndex = 3;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// checkBox3
			// 
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox3->Location = System::Drawing::Point(9, 85);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(266, 48);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"Найти максимальный элемент  3-го столбца и сумму нечетных элементов 1-ой строки м"
				L"атрицы [5 ; 5]";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxes_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(9, 44);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(266, 35);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Найти колличество отрицательных элементов на главно диагонали";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxes_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(9, 20);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(266, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Найти колличество элементов меньше числа 5";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBoxes_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(463, 478);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Лабораторная работа №22";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		srand(time(0));
		label4->Text = "";
		label5->Text = "";
		label6->Text = "";

		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;

		if (textBox1->Text == "" || textBox2->Text == "") {
			MessageBox::Show(
				"Надо ввести исходные данные", "Ошибка",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
			return;
		}

		int n, m;
		n = Convert::ToInt32(textBox1->Text);
		m = Convert::ToInt32(textBox2->Text);
		
		if (n <= 0 || m <= 0) {
			MessageBox::Show(
				"N и M должны быть больше нуля ", "Ошибка",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
			return;
		}

		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();
		dataGridView1->RowCount = n;
		dataGridView1->ColumnCount = m;

		int i,j;
		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				int cell = rand() % 40 - 20;
				dataGridView1->Rows[i]->Cells[j]->Value = cell.ToString();
			}
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int n, m;
		n = Convert::ToInt32(textBox1->Text);
		m = Convert::ToInt32(textBox2->Text);

		int i, j, cnt1 = 0, cnt2 = 0;
		int Max = Convert::ToInt32(dataGridView1->Rows[0]->Cells[2]->Value);
		int summ = 0;

		for (i = 0; i < n; i++) {
			for (j = 0; j < m; j++) {
				int cell;
				if (checkBox1->Checked) {
					//Найти колличество элементов меньше числа 5
					cell = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
					if (cell < 5) cnt1++;
				}

				if (checkBox2->Checked) {
					//Найти колличество отрицательных элементов на главно диагонали
					if (i == j) {
						cell = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
						if (cell < 0) cnt2++;
					}
					
				}

				if (checkBox3->Checked) {
					
					if (j == 2 && i > 0) {
						cell = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
						if (Max < cell) Max = cell;
					}
					if (i == 0 && (j % 2) != 0) {
						cell = Convert::ToInt32(dataGridView1->Rows[i]->Cells[j]->Value);
						summ += cell;
					}
				}

			}
		}
		
		
		if (checkBox1->Checked) {
			label4->Text = cnt1.ToString();
		}

		if (checkBox2->Checked) {
			label5->Text = cnt2.ToString();
		}

		if (checkBox3->Checked) {
			label6->Text = Max.ToString() + " и " + summ.ToString();
		}

	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void checkBoxes_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		if ((checkBox1->Checked == true || checkBox2->Checked == true || checkBox3->Checked == true) && dataGridView1->RowCount > 0) button2->Enabled = true;
		if (checkBox1->Checked == false && checkBox2->Checked == false && checkBox3->Checked == false) button2->Enabled = false;
		
		if (checkBox1->Checked == false) label4->Text = "";
		if (checkBox2->Checked == false) label5->Text = "";
		if (checkBox3->Checked == false) label6->Text = "";

		int n, m;
		n = Convert::ToInt32(textBox1->Text);
		m = Convert::ToInt32(textBox2->Text);
		
		if (checkBox3->Checked == true && (n < 5 || m < 5)) {
			checkBox3->Checked = false;
			MessageBox::Show(
				"N и M должны быть равны 5", "Ошибка",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
			
		}

	}
	
	private: System::Void textBoxes_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
		if (Char::IsControl(e->KeyChar)) {
			if (e->KeyChar == (char)Keys::Enter)
				// нажата клавиша <Enter>
				button1->Focus();
			return;
		}
		// остальные символы запрещены
		e->Handled = true;

	}
};
}
