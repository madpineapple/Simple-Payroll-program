#pragma once
#include<iostream>
#include <string>
#include<sstream>
#include<stdlib.h>
#include<msclr\marshal.h>
#include<msclr\marshal_cppstd.h>


namespace FinalProject {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace msclr::interop;
	using namespace std;

	/// <summary>
	/// Summary for AddPayPeriod
	/// </summary>
	public ref class AddPayPeriod : public System::Windows::Forms::Form
	{
		
	public:
		Form ^obj;
		AddPayPeriod(void)
		{
			InitializeComponent();
			FillComboBox();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		AddPayPeriod(Form ^ae2)
		{
			obj = ae2;
			InitializeComponent();
			FillComboBox();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddPayPeriod()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  retMain;
	private: System::Windows::Forms::Button^  payInsert;
	private: System::Windows::Forms::MaskedTextBox^  Pid_txt;

	private: System::Windows::Forms::MaskedTextBox^  totalHours;
	private: System::Windows::Forms::MaskedTextBox^  totalPay;
	private: System::Windows::Forms::MaskedTextBox^  lname_txt;
	private: System::Windows::Forms::MaskedTextBox^  PPS_txt;
	private: System::Windows::Forms::MaskedTextBox^  PPE_txt;








	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  calcButton;
	private: System::Windows::Forms::MaskedTextBox^  Eid_txt;

	private: System::Windows::Forms::Label^  First_Name;
	private: System::Windows::Forms::MaskedTextBox^  fname_txt;

	private: System::Windows::Forms::Label^  selEmpl;
	private: System::Windows::Forms::Button^  updPay;
	private: System::Windows::Forms::Button^  delPaybtt;



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
			this->retMain = (gcnew System::Windows::Forms::Button());
			this->payInsert = (gcnew System::Windows::Forms::Button());
			this->Pid_txt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->totalHours = (gcnew System::Windows::Forms::MaskedTextBox());
			this->totalPay = (gcnew System::Windows::Forms::MaskedTextBox());
			this->lname_txt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->PPS_txt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->PPE_txt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->calcButton = (gcnew System::Windows::Forms::Button());
			this->Eid_txt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->First_Name = (gcnew System::Windows::Forms::Label());
			this->fname_txt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->selEmpl = (gcnew System::Windows::Forms::Label());
			this->updPay = (gcnew System::Windows::Forms::Button());
			this->delPaybtt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// retMain
			// 
			this->retMain->Location = System::Drawing::Point(243, 379);
			this->retMain->Name = L"retMain";
			this->retMain->Size = System::Drawing::Size(75, 23);
			this->retMain->TabIndex = 0;
			this->retMain->Text = L"Main Menu";
			this->retMain->UseVisualStyleBackColor = true;
			this->retMain->Click += gcnew System::EventHandler(this, &AddPayPeriod::retMain_Click);
			// 
			// payInsert
			// 
			this->payInsert->Location = System::Drawing::Point(243, 350);
			this->payInsert->Name = L"payInsert";
			this->payInsert->Size = System::Drawing::Size(75, 23);
			this->payInsert->TabIndex = 1;
			this->payInsert->Text = L"Insert";
			this->payInsert->UseVisualStyleBackColor = true;
			this->payInsert->Click += gcnew System::EventHandler(this, &AddPayPeriod::button2_Click);
			// 
			// Pid_txt
			// 
			this->Pid_txt->Location = System::Drawing::Point(243, 29);
			this->Pid_txt->Name = L"Pid_txt";
			this->Pid_txt->Size = System::Drawing::Size(287, 20);
			this->Pid_txt->TabIndex = 2;
			// 
			// totalHours
			// 
			this->totalHours->Location = System::Drawing::Point(243, 269);
			this->totalHours->Name = L"totalHours";
			this->totalHours->Size = System::Drawing::Size(287, 20);
			this->totalHours->TabIndex = 3;
			this->totalHours->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &AddPayPeriod::maskedTextBox2_MaskInputRejected);
			// 
			// totalPay
			// 
			this->totalPay->Location = System::Drawing::Point(243, 295);
			this->totalPay->Name = L"totalPay";
			this->totalPay->Size = System::Drawing::Size(287, 20);
			this->totalPay->TabIndex = 4;
			this->totalPay->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &AddPayPeriod::maskedTextBox3_MaskInputRejected);
			// 
			// lname_txt
			// 
			this->lname_txt->Location = System::Drawing::Point(243, 191);
			this->lname_txt->Name = L"lname_txt";
			this->lname_txt->Size = System::Drawing::Size(287, 20);
			this->lname_txt->TabIndex = 5;
			// 
			// PPS_txt
			// 
			this->PPS_txt->Location = System::Drawing::Point(243, 217);
			this->PPS_txt->Name = L"PPS_txt";
			this->PPS_txt->Size = System::Drawing::Size(287, 20);
			this->PPS_txt->TabIndex = 6;
			this->PPS_txt->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &AddPayPeriod::PPS_txt_MaskInputRejected);
			// 
			// PPE_txt
			// 
			this->PPE_txt->Location = System::Drawing::Point(243, 243);
			this->PPE_txt->Name = L"PPE_txt";
			this->PPE_txt->Size = System::Drawing::Size(287, 20);
			this->PPE_txt->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(76, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"idPaytable";
			this->label1->Click += gcnew System::EventHandler(this, &AddPayPeriod::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(76, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"idemployeeinfo";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(76, 198);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Last_Name";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(76, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"PayPeriodStart";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(76, 250);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"PayPeriodEnd";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(76, 276);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"TotalHours";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(76, 302);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"TotalPay";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(243, 55);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(287, 21);
			this->comboBox1->TabIndex = 19;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &AddPayPeriod::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(297, 82);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 23);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Select";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddPayPeriod::button1_Click);
			// 
			// calcButton
			// 
			this->calcButton->Location = System::Drawing::Point(297, 321);
			this->calcButton->Name = L"calcButton";
			this->calcButton->Size = System::Drawing::Size(158, 23);
			this->calcButton->TabIndex = 21;
			this->calcButton->Text = L"Calculate";
			this->calcButton->UseVisualStyleBackColor = true;
			this->calcButton->Click += gcnew System::EventHandler(this, &AddPayPeriod::calcButton_Click);
			// 
			// Eid_txt
			// 
			this->Eid_txt->Location = System::Drawing::Point(243, 113);
			this->Eid_txt->Name = L"Eid_txt";
			this->Eid_txt->Size = System::Drawing::Size(287, 20);
			this->Eid_txt->TabIndex = 22;
			// 
			// First_Name
			// 
			this->First_Name->AutoSize = true;
			this->First_Name->Location = System::Drawing::Point(79, 142);
			this->First_Name->Name = L"First_Name";
			this->First_Name->Size = System::Drawing::Size(60, 13);
			this->First_Name->TabIndex = 23;
			this->First_Name->Text = L"First_Name";
			this->First_Name->Click += gcnew System::EventHandler(this, &AddPayPeriod::label3_Click);
			// 
			// fname_txt
			// 
			this->fname_txt->Location = System::Drawing::Point(243, 142);
			this->fname_txt->Name = L"fname_txt";
			this->fname_txt->Size = System::Drawing::Size(287, 20);
			this->fname_txt->TabIndex = 24;
			// 
			// selEmpl
			// 
			this->selEmpl->AutoSize = true;
			this->selEmpl->Location = System::Drawing::Point(82, 62);
			this->selEmpl->Name = L"selEmpl";
			this->selEmpl->Size = System::Drawing::Size(86, 13);
			this->selEmpl->TabIndex = 25;
			this->selEmpl->Text = L"Select Employee";
			// 
			// updPay
			// 
			this->updPay->Location = System::Drawing::Point(339, 349);
			this->updPay->Name = L"updPay";
			this->updPay->Size = System::Drawing::Size(75, 23);
			this->updPay->TabIndex = 26;
			this->updPay->Text = L"Update";
			this->updPay->UseVisualStyleBackColor = true;
			this->updPay->Click += gcnew System::EventHandler(this, &AddPayPeriod::updPay_Click);
			// 
			// delPaybtt
			// 
			this->delPaybtt->Location = System::Drawing::Point(339, 378);
			this->delPaybtt->Name = L"delPaybtt";
			this->delPaybtt->Size = System::Drawing::Size(75, 23);
			this->delPaybtt->TabIndex = 27;
			this->delPaybtt->Text = L"Delete";
			this->delPaybtt->UseVisualStyleBackColor = true;
			this->delPaybtt->Click += gcnew System::EventHandler(this, &AddPayPeriod::delPaybtt_Click);
			// 
			// AddPayPeriod
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(752, 414);
			this->Controls->Add(this->delPaybtt);
			this->Controls->Add(this->updPay);
			this->Controls->Add(this->selEmpl);
			this->Controls->Add(this->fname_txt);
			this->Controls->Add(this->First_Name);
			this->Controls->Add(this->Eid_txt);
			this->Controls->Add(this->calcButton);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->PPE_txt);
			this->Controls->Add(this->PPS_txt);
			this->Controls->Add(this->lname_txt);
			this->Controls->Add(this->totalPay);
			this->Controls->Add(this->totalHours);
			this->Controls->Add(this->Pid_txt);
			this->Controls->Add(this->payInsert);
			this->Controls->Add(this->retMain);
			this->Name = L"AddPayPeriod";
			this->Text = L"AddPayPeriod";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		String^ constring = L"datasource=localhost;port=3306;username=root;password=K@Lender12 ";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into database.paytable (idPaytable, idemployeeInfo, First_Name, Last_Name, PayPeriodStart, PayPeriodEnd, TotalHours, TotalPay) values('" + this->Pid_txt->Text + "','" + this->Eid_txt->Text + "','" + this->fname_txt->Text + "','" + this->lname_txt->Text + "','" + this->PPS_txt->Text + "','" + this->PPE_txt->Text + "','" + this->totalHours->Text + "','" + this->totalPay->Text + "') ;", conDataBase);
		MySqlDataReader^ myReader;
		try
		{
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("Data Inserted");
			while (myReader->Read()) {

			}

		}
		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);
		}

	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void retMain_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	obj->Show();
}
private: System::Void maskedTextBox2_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {

	
}
private: System::Void maskedTextBox3_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
 

	

}
private: System::Void calcButton_Click(System::Object^  sender, System::EventArgs^  e) {
	int hours = Convert::ToInt32(totalHours->Text);
	int totPay = hours * 20;
	totalPay->Text = Convert::ToString(totPay);
	
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

	String^ comboval = comboBox1->Text;

	String^ constring = L"datasource=localhost;port=3306;username=root;password=K@Lender12 ";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from database.employeeinfo where First_Name = '"+comboval+"';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		if (myReader->Read()) {
			String^ EidVal = myReader->GetInt32("idemployeeInfo").ToString();
			Eid_txt->Text = EidVal;
			String^ fNameVal = myReader->GetString("First_Name");
			fname_txt->Text = fNameVal;
			String^ LNameVal = myReader->GetString("Last_Name");
			lname_txt->Text = LNameVal;

		}

	}
	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}

}

	private: void FillComboBox(void) {

		String^ constring = L"datasource=localhost;port=3306;username=root;password=K@Lender12 ";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from database.employeeinfo;", conDataBase);
		MySqlDataReader^ myReader;
		try
		{
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			
			while (myReader->Read()) {
				String^ vName;
				vName = myReader->GetString("First_Name");
				comboBox1->Items->Add(vName);

			}

		}
		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);
		}

	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void updPay_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring = L"datasource=localhost;port=3306;username=root;password=K@Lender12 ";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Update database.paytable set idPaytable = '" + this->Pid_txt->Text + "', idemployeeInfo ='" + this->Eid_txt->Text + "' , First_Name = '" + this->fname_txt->Text + "', Last_Name = '" + this->lname_txt->Text + "', PayPeriodStart = '" + this->PPS_txt->Text + "' , PayPeriodEnd ='" + this->PPE_txt->Text + "', TotalHours = '" + this->totalHours->Text + "', TotalPay = '" + this->totalPay->Text + "' where idPaytable = '" + this->Pid_txt->Text + "';", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Data Inserted");
		while (myReader->Read()) {

		}

	}
	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}

}
private: System::Void delPaybtt_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=K@Lender12 ";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" Delete from database.paytable where idPaytable='" + this->Pid_txt->Text + "' ;", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Deleted");
		while (myReader->Read()) {

		}

	}
	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void PPS_txt_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
}
};
}
