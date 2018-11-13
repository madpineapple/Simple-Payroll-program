#pragma once

#include"Form2.h"
namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
		{
			InitializeComponent();
			Password_txt->PasswordChar = '*';
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::MaskedTextBox^  Username_txt;
	private: System::Windows::Forms::MaskedTextBox^  Password_txt;
	private: System::Windows::Forms::Label^  Username_lbl;
	private: System::Windows::Forms::Label^  Password_lbl;
	private: System::Windows::Forms::GroupBox^  Sig_in_Box;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Username_txt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Password_txt = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Username_lbl = (gcnew System::Windows::Forms::Label());
			this->Password_lbl = (gcnew System::Windows::Forms::Label());
			this->Sig_in_Box = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Sig_in_Box->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(122, 141);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &login::button1_Click);
			// 
			// Username_txt
			// 
			this->Username_txt->Location = System::Drawing::Point(122, 63);
			this->Username_txt->Name = L"Username_txt";
			this->Username_txt->Size = System::Drawing::Size(100, 20);
			this->Username_txt->TabIndex = 1;
			this->Username_txt->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &login::Username_txt_MaskInputRejected);
			// 
			// Password_txt
			// 
			this->Password_txt->Location = System::Drawing::Point(122, 96);
			this->Password_txt->Name = L"Password_txt";
			this->Password_txt->Size = System::Drawing::Size(100, 20);
			this->Password_txt->TabIndex = 2;
			this->Password_txt->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &login::Password_txt_MaskInputRejected);
			// 
			// Username_lbl
			// 
			this->Username_lbl->AutoSize = true;
			this->Username_lbl->Location = System::Drawing::Point(6, 66);
			this->Username_lbl->Name = L"Username_lbl";
			this->Username_lbl->Size = System::Drawing::Size(55, 13);
			this->Username_lbl->TabIndex = 3;
			this->Username_lbl->Text = L"Username";
			// 
			// Password_lbl
			// 
			this->Password_lbl->AutoSize = true;
			this->Password_lbl->Location = System::Drawing::Point(9, 99);
			this->Password_lbl->Name = L"Password_lbl";
			this->Password_lbl->Size = System::Drawing::Size(52, 13);
			this->Password_lbl->TabIndex = 4;
			this->Password_lbl->Text = L"password";
			// 
			// Sig_in_Box
			// 
			this->Sig_in_Box->Controls->Add(this->button1);
			this->Sig_in_Box->Controls->Add(this->Password_lbl);
			this->Sig_in_Box->Controls->Add(this->Username_txt);
			this->Sig_in_Box->Controls->Add(this->Username_lbl);
			this->Sig_in_Box->Controls->Add(this->Password_txt);
			this->Sig_in_Box->Location = System::Drawing::Point(502, 75);
			this->Sig_in_Box->Name = L"Sig_in_Box";
			this->Sig_in_Box->Size = System::Drawing::Size(249, 245);
			this->Sig_in_Box->TabIndex = 5;
			this->Sig_in_Box->TabStop = false;
			this->Sig_in_Box->Text = L"Sign In";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(459, 405);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(763, 403);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Sig_in_Box);
			this->Name = L"login";
			this->Text = L"login";
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			this->Sig_in_Box->ResumeLayout(false);
			this->Sig_in_Box->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		String^ constring = L"datasource=localhost;port=3306;username=root;password=K@Lender12 ";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from database.supervisorinfo where user_name='"+this->Username_txt->Text+"' and password = '"+this->Password_txt->Text +"' ;", conDataBase);
		MySqlDataReader^ myReader;
		try
		{
			conDataBase->Open();
			myReader=cmdDataBase->ExecuteReader();
			int count=0;
			while(myReader->Read()) {
				count = count + 1;
			}
			if (count == 1)
			{
				MessageBox::Show("Username and password is correct");
				this->Hide();
				Form2^ f2 = gcnew Form2();
				f2->ShowDialog();
			}
			else if (count > 1)
			{
				MessageBox::Show("Duplicate Username and password...Access Denied!");
			}
			else
				MessageBox::Show("Username and password is incorrect");
		}
		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void Username_txt_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
	}
private: System::Void login_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Password_txt_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
}
};
}
