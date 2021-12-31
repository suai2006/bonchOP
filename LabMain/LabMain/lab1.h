#pragma once
#include <math.h>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace LabMain {

	

	/// <summary>
	/// Сводка для lab1
	/// </summary>
	public ref class lab1 : public System::Windows::Forms::UserControl
	{
	public:
		lab1(void)
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
		~lab1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 113);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(277, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Основание ровнобедренного триугольника C";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(341, 113);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(137, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lab1::keyPressHandler);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(403, 177);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Расчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &lab1::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(82, 45);
			this->label3->MaximumSize = System::Drawing::Size(250, 50);
			this->label3->MinimumSize = System::Drawing::Size(186, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(186, 18);
			this->label3->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(466, 36);
			this->label4->TabIndex = 5;
			this->label4->Text = L"В равнобедренном треугольнике известно основание с и угол при нём α. Найти площад"
				L"ь треугольника S и величину боковой стороны a.";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 18);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(466, 36);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Задание №1";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 139);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(274, 20);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Угол α";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(341, 139);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(137, 20);
			this->textBox2->TabIndex = 8;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &lab1::keyPressHandler);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(15, 216);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(463, 89);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Результат";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(451, 56);
			this->label2->TabIndex = 0;
			// 
			// lab1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(506, 365);
			this->MinimumSize = System::Drawing::Size(506, 365);
			this->Name = L"lab1";
			this->Size = System::Drawing::Size(506, 365);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double a, b, c, alpha, PI, S;
		PI = atan(1) * 4;
		try {
			c = Convert::ToDouble(textBox1->Text);
			alpha = Convert::ToDouble(textBox2->Text);
			alpha = alpha * PI / 180;
			a = c / 2 / cos(alpha);
			b = a;
			S = 0.5 * a * b * sin(alpha);
			label2->Text = "Площадь ровнобедренного триугольника равна: "+ S.ToString("n");
			label2->Text += "\nВеличина боковой стороны a: " + a.ToString("n");
		}
		catch (System::FormatException^ ) {
			
			MessageBox::Show(
				"Надо ввести исходные данные:", "Ошибка",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);

			// - установить курсор в поле редактирования
			textBox1->Focus();
		}

	}
	private: System::Void keyPressHandler(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return; //цифра
		if (e->KeyChar == '.') e->KeyChar = ',';       // точку заменим запятой
		if (e->KeyChar == ',') {
			if (textBox1->Text->IndexOf(',') != -1)
				// Запятая уже есть в поле редактирования
				e->Handled = true;
			return;
		}
		if (Char::IsControl(e->KeyChar)) {
			// <Enter>, <Backspace>
			if (e->KeyChar == (char)Keys::Enter)
				// нажата клавиша <Enter>, установить "фокус" на кнопку ОК
				button1->Focus();
			return;
		}
		// остальные символы запрещены
		e->Handled = true;
	}

	
	};
}
