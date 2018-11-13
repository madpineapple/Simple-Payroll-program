#pragma once

#include"AddEmployee.h"
#include"AddPayPeriod.h"
#include"Current Employees.h"
#include"CurrentPayPeriods.h"
#include"searchDate.h"


namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  curEmpBut;

	private: System::Windows::Forms::Button^  Add_Employee;
	private: System::Windows::Forms::Button^  addPay;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  searchDatebut;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->curEmpBut = (gcnew System::Windows::Forms::Button());
			this->Add_Employee = (gcnew System::Windows::Forms::Button());
			this->addPay = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->searchDatebut = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(101, 211);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// curEmpBut
			// 
			this->curEmpBut->Location = System::Drawing::Point(81, 182);
			this->curEmpBut->Name = L"curEmpBut";
			this->curEmpBut->Size = System::Drawing::Size(133, 23);
			this->curEmpBut->TabIndex = 1;
			this->curEmpBut->Text = L"Current Employees";
			this->curEmpBut->UseVisualStyleBackColor = true;
			this->curEmpBut->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// Add_Employee
			// 
			this->Add_Employee->Location = System::Drawing::Point(81, 153);
			this->Add_Employee->Name = L"Add_Employee";
			this->Add_Employee->Size = System::Drawing::Size(133, 23);
			this->Add_Employee->TabIndex = 2;
			this->Add_Employee->Text = L"Add Employee";
			this->Add_Employee->UseVisualStyleBackColor = true;
			this->Add_Employee->Click += gcnew System::EventHandler(this, &Form2::Add_Employee_Click);
			// 
			// addPay
			// 
			this->addPay->Location = System::Drawing::Point(81, 124);
			this->addPay->Name = L"addPay";
			this->addPay->Size = System::Drawing::Size(133, 23);
			this->addPay->TabIndex = 3;
			this->addPay->Text = L"Add Pay Period";
			this->addPay->UseVisualStyleBackColor = true;
			this->addPay->Click += gcnew System::EventHandler(this, &Form2::button3_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(81, 95);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Current Pay Periods";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form2::button3_Click_1);
			// 
			// searchDatebut
			// 
			this->searchDatebut->Location = System::Drawing::Point(81, 66);
			this->searchDatebut->Name = L"searchDatebut";
			this->searchDatebut->Size = System::Drawing::Size(133, 23);
			this->searchDatebut->TabIndex = 5;
			this->searchDatebut->Text = L"search date";
			this->searchDatebut->UseVisualStyleBackColor = true;
			this->searchDatebut->Click += gcnew System::EventHandler(this, &Form2::searchDate_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 421);
			this->Controls->Add(this->searchDatebut);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->addPay);
			this->Controls->Add(this->Add_Employee);
			this->Controls->Add(this->curEmpBut);
			this->Controls->Add(this->button1);
			this->Name = L"Form2";
			this->Text = L"Main Menu";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void Add_Employee_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		AddEmployee^ ae1 = gcnew AddEmployee(this);
		ae1->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
 		this->Hide();
		AddPayPeriod^ ae2 = gcnew AddPayPeriod(this);
		ae2->ShowDialog();
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	CurrentEmployees^ ae3 = gcnew CurrentEmployees(this);
	ae3->ShowDialog();
}
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	CurrentPayPeriods^ ae4 = gcnew CurrentPayPeriods(this);
	ae4->ShowDialog();
}
private: System::Void searchDate_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	searchDate^ ae5 = gcnew searchDate(this);
	ae5->ShowDialog();
}
};
}
