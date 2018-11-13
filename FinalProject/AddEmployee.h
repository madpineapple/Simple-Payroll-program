#pragma once

namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for AddEmployee
	/// </summary>
	public ref class AddEmployee : public System::Windows::Forms::Form
	{
	
		
	public:
		Form ^obj;
		AddEmployee(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AddEmployee(Form ^ae1)
		{
			obj = ae1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddEmployee()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Insert;
	private: System::Windows::Forms::MaskedTextBox^  zCode_txt;
	private: System::Windows::Forms::MaskedTextBox^  dob_txt;
	protected:

	protected:


	private: System::Windows::Forms::MaskedTextBox^  city_txt;

	private: System::Windows::Forms::MaskedTextBox^  sAddress_txt;

	private: System::Windows::Forms::Button^  Main_menu;
	private: System::Windows::Forms::MaskedTextBox^  pNumber_txt;
	private: System::Windows::Forms::MaskedTextBox^  doh_txt;
	private: System::Windows::Forms::MaskedTextBox^  EID_txt;



	private: System::Windows::Forms::MaskedTextBox^  ssa_txt;
	private: System::Windows::Forms::MaskedTextBox^  FName_txt;



	private: System::Windows::Forms::MaskedTextBox^  lName_txt;



	private: System::Windows::Forms::Label^  idemployeeInfo_bx;
	private: System::Windows::Forms::Label^  firstName_bx;
	private: System::Windows::Forms::Label^  lastName_bx;
	private: System::Windows::Forms::Label^  phoneNumber_bx;
	private: System::Windows::Forms::Label^  streetAddress_bx;
	private: System::Windows::Forms::Label^  city_bx;
	private: System::Windows::Forms::Label^  zipCode_bx;
	private: System::Windows::Forms::Label^  dateOfBirth_bx;
	private: System::Windows::Forms::Label^  DOH_bx;
	private: System::Windows::Forms::Label^  SSN_bx;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::Button^  updatebttn;
	private: System::Windows::Forms::Button^  delEmpl;


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
			this->Insert = (gcnew System::Windows::Forms::Button());
			this->zCode_txt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->dob_txt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->city_txt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sAddress_txt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Main_menu = (gcnew System::Windows::Forms::Button());
			this->pNumber_txt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->doh_txt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->EID_txt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->ssa_txt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->FName_txt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->lName_txt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->idemployeeInfo_bx = (gcnew System::Windows::Forms::Label());
			this->firstName_bx = (gcnew System::Windows::Forms::Label());
			this->lastName_bx = (gcnew System::Windows::Forms::Label());
			this->phoneNumber_bx = (gcnew System::Windows::Forms::Label());
			this->streetAddress_bx = (gcnew System::Windows::Forms::Label());
			this->city_bx = (gcnew System::Windows::Forms::Label());
			this->zipCode_bx = (gcnew System::Windows::Forms::Label());
			this->dateOfBirth_bx = (gcnew System::Windows::Forms::Label());
			this->DOH_bx = (gcnew System::Windows::Forms::Label());
			this->SSN_bx = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->updatebttn = (gcnew System::Windows::Forms::Button());
			this->delEmpl = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Insert
			// 
			this->Insert->Location = System::Drawing::Point(294, 281);
			this->Insert->Name = L"Insert";
			this->Insert->Size = System::Drawing::Size(234, 23);
			this->Insert->TabIndex = 0;
			this->Insert->Text = L"Insert";
			this->Insert->UseVisualStyleBackColor = true;
			this->Insert->Click += gcnew System::EventHandler(this, &AddEmployee::Insert_Click);
			// 
			// zCode_txt
			// 
			this->zCode_txt->Location = System::Drawing::Point(294, 178);
			this->zCode_txt->Name = L"zCode_txt";
			this->zCode_txt->Size = System::Drawing::Size(329, 20);
			this->zCode_txt->TabIndex = 1;
			// 
			// dob_txt
			// 
			this->dob_txt->Location = System::Drawing::Point(292, 204);
			this->dob_txt->Name = L"dob_txt";
			this->dob_txt->Size = System::Drawing::Size(331, 20);
			this->dob_txt->TabIndex = 2;
			// 
			// city_txt
			// 
			this->city_txt->Location = System::Drawing::Point(294, 152);
			this->city_txt->Name = L"city_txt";
			this->city_txt->Size = System::Drawing::Size(329, 20);
			this->city_txt->TabIndex = 3;
			// 
			// sAddress_txt
			// 
			this->sAddress_txt->Location = System::Drawing::Point(294, 126);
			this->sAddress_txt->Name = L"sAddress_txt";
			this->sAddress_txt->Size = System::Drawing::Size(329, 20);
			this->sAddress_txt->TabIndex = 4;
			// 
			// Main_menu
			// 
			this->Main_menu->Location = System::Drawing::Point(292, 340);
			this->Main_menu->Name = L"Main_menu";
			this->Main_menu->Size = System::Drawing::Size(234, 23);
			this->Main_menu->TabIndex = 5;
			this->Main_menu->Text = L"Main menu";
			this->Main_menu->UseVisualStyleBackColor = true;
			this->Main_menu->Click += gcnew System::EventHandler(this, &AddEmployee::Main_menu_Click);
			// 
			// pNumber_txt
			// 
			this->pNumber_txt->Location = System::Drawing::Point(294, 100);
			this->pNumber_txt->Name = L"pNumber_txt";
			this->pNumber_txt->Size = System::Drawing::Size(329, 20);
			this->pNumber_txt->TabIndex = 6;
			// 
			// doh_txt
			// 
			this->doh_txt->Location = System::Drawing::Point(292, 228);
			this->doh_txt->Name = L"doh_txt";
			this->doh_txt->Size = System::Drawing::Size(329, 20);
			this->doh_txt->TabIndex = 7;
			// 
			// EID_txt
			// 
			this->EID_txt->Location = System::Drawing::Point(294, 23);
			this->EID_txt->Name = L"EID_txt";
			this->EID_txt->Size = System::Drawing::Size(329, 20);
			this->EID_txt->TabIndex = 8;
			// 
			// ssa_txt
			// 
			this->ssa_txt->Location = System::Drawing::Point(294, 254);
			this->ssa_txt->Name = L"ssa_txt";
			this->ssa_txt->Size = System::Drawing::Size(329, 20);
			this->ssa_txt->TabIndex = 9;
			// 
			// FName_txt
			// 
			this->FName_txt->Location = System::Drawing::Point(294, 48);
			this->FName_txt->Name = L"FName_txt";
			this->FName_txt->Size = System::Drawing::Size(329, 20);
			this->FName_txt->TabIndex = 10;
			// 
			// lName_txt
			// 
			this->lName_txt->Location = System::Drawing::Point(292, 74);
			this->lName_txt->Name = L"lName_txt";
			this->lName_txt->Size = System::Drawing::Size(329, 20);
			this->lName_txt->TabIndex = 11;
			// 
			// idemployeeInfo_bx
			// 
			this->idemployeeInfo_bx->AutoSize = true;
			this->idemployeeInfo_bx->Location = System::Drawing::Point(89, 30);
			this->idemployeeInfo_bx->Name = L"idemployeeInfo_bx";
			this->idemployeeInfo_bx->Size = System::Drawing::Size(78, 13);
			this->idemployeeInfo_bx->TabIndex = 12;
			this->idemployeeInfo_bx->Text = L"idemployeeInfo";
			// 
			// firstName_bx
			// 
			this->firstName_bx->AutoSize = true;
			this->firstName_bx->Location = System::Drawing::Point(89, 55);
			this->firstName_bx->Name = L"firstName_bx";
			this->firstName_bx->Size = System::Drawing::Size(57, 13);
			this->firstName_bx->TabIndex = 13;
			this->firstName_bx->Text = L"First Name";
			// 
			// lastName_bx
			// 
			this->lastName_bx->AutoSize = true;
			this->lastName_bx->Location = System::Drawing::Point(89, 81);
			this->lastName_bx->Name = L"lastName_bx";
			this->lastName_bx->Size = System::Drawing::Size(58, 13);
			this->lastName_bx->TabIndex = 14;
			this->lastName_bx->Text = L"Last Name";
			// 
			// phoneNumber_bx
			// 
			this->phoneNumber_bx->AutoSize = true;
			this->phoneNumber_bx->Location = System::Drawing::Point(89, 107);
			this->phoneNumber_bx->Name = L"phoneNumber_bx";
			this->phoneNumber_bx->Size = System::Drawing::Size(78, 13);
			this->phoneNumber_bx->TabIndex = 15;
			this->phoneNumber_bx->Text = L"Phone Number";
			// 
			// streetAddress_bx
			// 
			this->streetAddress_bx->AutoSize = true;
			this->streetAddress_bx->Location = System::Drawing::Point(89, 133);
			this->streetAddress_bx->Name = L"streetAddress_bx";
			this->streetAddress_bx->Size = System::Drawing::Size(76, 13);
			this->streetAddress_bx->TabIndex = 16;
			this->streetAddress_bx->Text = L"Street Address";
			// 
			// city_bx
			// 
			this->city_bx->AutoSize = true;
			this->city_bx->Location = System::Drawing::Point(89, 159);
			this->city_bx->Name = L"city_bx";
			this->city_bx->Size = System::Drawing::Size(24, 13);
			this->city_bx->TabIndex = 17;
			this->city_bx->Text = L"City";
			// 
			// zipCode_bx
			// 
			this->zipCode_bx->AutoSize = true;
			this->zipCode_bx->Location = System::Drawing::Point(89, 185);
			this->zipCode_bx->Name = L"zipCode_bx";
			this->zipCode_bx->Size = System::Drawing::Size(50, 13);
			this->zipCode_bx->TabIndex = 18;
			this->zipCode_bx->Text = L"Zip Code";
			// 
			// dateOfBirth_bx
			// 
			this->dateOfBirth_bx->AutoSize = true;
			this->dateOfBirth_bx->Location = System::Drawing::Point(89, 211);
			this->dateOfBirth_bx->Name = L"dateOfBirth_bx";
			this->dateOfBirth_bx->Size = System::Drawing::Size(66, 13);
			this->dateOfBirth_bx->TabIndex = 19;
			this->dateOfBirth_bx->Text = L"Date of Birth";
			// 
			// DOH_bx
			// 
			this->DOH_bx->AutoSize = true;
			this->DOH_bx->Location = System::Drawing::Point(89, 235);
			this->DOH_bx->Name = L"DOH_bx";
			this->DOH_bx->Size = System::Drawing::Size(64, 13);
			this->DOH_bx->TabIndex = 20;
			this->DOH_bx->Text = L"Date of Hire";
			// 
			// SSN_bx
			// 
			this->SSN_bx->AutoSize = true;
			this->SSN_bx->Location = System::Drawing::Point(89, 255);
			this->SSN_bx->Name = L"SSN_bx";
			this->SSN_bx->Size = System::Drawing::Size(117, 13);
			this->SSN_bx->TabIndex = 21;
			this->SSN_bx->Text = L"Social Security Number";
			// 
			// updatebttn
			// 
			this->updatebttn->Location = System::Drawing::Point(294, 311);
			this->updatebttn->Name = L"updatebttn";
			this->updatebttn->Size = System::Drawing::Size(232, 23);
			this->updatebttn->TabIndex = 22;
			this->updatebttn->Text = L"Update";
			this->updatebttn->UseVisualStyleBackColor = true;
			this->updatebttn->Click += gcnew System::EventHandler(this, &AddEmployee::updatebttn_Click);
			// 
			// delEmpl
			// 
			this->delEmpl->Location = System::Drawing::Point(553, 310);
			this->delEmpl->Name = L"delEmpl";
			this->delEmpl->Size = System::Drawing::Size(110, 23);
			this->delEmpl->TabIndex = 23;
			this->delEmpl->Text = L"Delete";
			this->delEmpl->UseVisualStyleBackColor = true;
			this->delEmpl->Click += gcnew System::EventHandler(this, &AddEmployee::delEmpl_Click);
			// 
			// AddEmployee
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(854, 411);
			this->Controls->Add(this->delEmpl);
			this->Controls->Add(this->updatebttn);
			this->Controls->Add(this->SSN_bx);
			this->Controls->Add(this->DOH_bx);
			this->Controls->Add(this->dateOfBirth_bx);
			this->Controls->Add(this->zipCode_bx);
			this->Controls->Add(this->city_bx);
			this->Controls->Add(this->streetAddress_bx);
			this->Controls->Add(this->phoneNumber_bx);
			this->Controls->Add(this->lastName_bx);
			this->Controls->Add(this->firstName_bx);
			this->Controls->Add(this->idemployeeInfo_bx);
			this->Controls->Add(this->lName_txt);
			this->Controls->Add(this->FName_txt);
			this->Controls->Add(this->ssa_txt);
			this->Controls->Add(this->EID_txt);
			this->Controls->Add(this->doh_txt);
			this->Controls->Add(this->pNumber_txt);
			this->Controls->Add(this->Main_menu);
			this->Controls->Add(this->sAddress_txt);
			this->Controls->Add(this->city_txt);
			this->Controls->Add(this->dob_txt);
			this->Controls->Add(this->zCode_txt);
			this->Controls->Add(this->Insert);
			this->Name = L"AddEmployee";
			this->Text = L"AddEmployee";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Main_menu_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		obj->Show();
	}
private: System::Void Insert_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=K@Lender12 ";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into database.employeeinfo (idemployeeInfo, First_Name, Last_Name, Phone_Number, Street_Address, City, Zip_Code, Date_of_Birth, Date_of_Hire, Social_Security_Number) values('"+this->EID_txt->Text+"','" + this->FName_txt->Text + "','" + this->lName_txt->Text + "','" + this->pNumber_txt->Text + "','" + this->sAddress_txt->Text + "','" + this->city_txt->Text + "','" + this->zCode_txt->Text + "','" + this->dob_txt->Text + "','" + this->doh_txt->Text + "','" + this->ssa_txt->Text + "') ;", conDataBase);
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
private: System::Void updatebttn_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=K@Lender12 ";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" UPDATE database.employeeinfo SET idemployeeInfo='" + this->EID_txt->Text + "', First_Name='" + this->FName_txt->Text + "',Last_Name ='" + this->lName_txt->Text + "',Phone_Number='" + this->pNumber_txt->Text + "',Street_Address = '" + this->sAddress_txt->Text + "',City ='" + this->city_txt->Text + "',Zip_Code='" + this->zCode_txt->Text + "',Date_of_Birth ='" + this->dob_txt->Text + "',Date_of_Hire ='" + this->doh_txt->Text + "',Social_Security_Number ='" + this->ssa_txt->Text + "' WHERE idemployeeInfo='" + this->EID_txt->Text + "' ;", conDataBase);
	MySqlDataReader^ myReader;
	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Updated");
		while (myReader->Read()) {

		} 

	}
	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}

}
private: System::Void delEmpl_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=K@Lender12 ";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" Delete from database.employeeinfo where idemployeeInfo='" + this->EID_txt->Text + "' ;", conDataBase);
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
};
}
