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

namespace lab19 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			AttachConsole(1);
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
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;	
	private: System::Windows::Forms::Label^ label3;	
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;	
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(453, 160);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввод элементов массива";
			// 
			// label3
			// 
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(15, 123);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(431, 26);
			this->label3->TabIndex = 4;
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Исходный массив";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(10, 51);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(437, 32);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Создать массив";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(242, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(205, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(228, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите число элементов в массиве";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->checkBox1);
			this->groupBox2->Enabled = false;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(13, 193);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(453, 97);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Найти";
			// 
			// label5
			// 
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Location = System::Drawing::Point(319, 56);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 21);
			this->label5->TabIndex = 3;
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Location = System::Drawing::Point(320, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 21);
			this->label4->TabIndex = 2;
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// checkBox2
			// 
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(15, 44);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(312, 40);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Произведение элементов массива, расположенных между первым и вторым нулевыми элем"
				L"ентами";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(15, 20);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(243, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Номер максимального элемента массива";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(478, 307);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Работа с массивами";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		srand(time(0));
		int n = Convert::ToInt32(textBox1->Text);
		int i;
		System::String^ text;
		text = "";
		
		label4->Text = "";
		label5->Text = "";
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		
		System::Console::WriteLine("Нажата кнопка "+ this->ActiveControl->Name);
		System::Console::WriteLine(Object::ReferenceEquals(sender, button1).ToString());

		for (i = 0; i < n; i++) {
			int c;
			c = rand() % 40 - 20;
			if (i < n - 1) text += c.ToString() + " ";			
			else text += c.ToString();
		}

		label3->Text = text;
		groupBox2->Enabled = true;

	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
		groupBox2->Enabled = false;
		label3->Text = "";		
		
		checkBox1->Checked = false;
		checkBox2->Checked = false;

		if (textBox1->Text->Length > 0) button1->Enabled = true;
		else button1->Enabled = false;

	}

	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		
		System::String^ textToArray = label3->Text;

		System::Console::WriteLine("Формируем массив из строки " + textToArray);

		array<String^>^ A = textToArray->Split(' ');

		System::Console::WriteLine(sender + ", name: " + this->ActiveControl->Name);
		if (checkBox1->Checked == true) {
			
			int n = Convert::ToInt32(textBox1->Text);
			int Max = Convert::ToInt32(A[0]);
			int i_max = 0;
			int i;
			
			System::Console::WriteLine("Пробегаемся по массиву, ищем индекс максимального элемента");
			System::Console::WriteLine("Исходные данные " + textToArray);
			
			for (i = 1; i < n; i++) {
				if (Max < Convert::ToInt32(A[i])) {
					Max = Convert::ToInt32(A[i]);
					i_max = i;
				}
			}

			label4->Text = i_max.ToString();
			System::Console::WriteLine("Индекс максимального элемента равен " + label4->Text);
		}
		else {
			label4->Text = "";
		}

		if (checkBox2->Checked == true) {
			int i_one = -1, i_two = -1, result = 1;

			int n = Convert::ToInt32(textBox1->Text);
			int j;
			for (j = 0; j < n; j++) {
				if (Convert::ToInt32(A[j]) == 0 && i_one < 0) i_one = j;
				if (Convert::ToInt32(A[j]) == 0 && i_one >= 0 && j > i_one) {
					i_two = j;
					break;
				}
			}

			if (i_one < 0) {
				label5->Text = "Нет нулей";
				return;
			}

			int k;
			for (k = i_one + 1; k < (i_two < 0 ? n : i_two); k++) {
				result *= Convert::ToInt32(A[k]);
			}

			if (i_two - i_one == 1) {
				result = 0;
			}

			label5->Text = result.ToString();

		}
		else {
			label5->Text = "";
		}

	}
};
}
