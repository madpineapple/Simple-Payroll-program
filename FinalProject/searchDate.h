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
	/// Summary for searchDate
	/// </summary>
	public ref class searchDate : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		searchDate(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		searchDate(Form ^ae5)
		{
			obj = ae5;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~searchDate()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::MaskedTextBox^  toBox;
	protected:

	private: System::Windows::Forms::MaskedTextBox^  fromBox;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataGridView^  dateView;
	private: System::Windows::Forms::Button^  back;

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
			this->toBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->fromBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dateView = (gcnew System::Windows::Forms::DataGridView());
			this->back = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dateView))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(121, 73);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(227, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &searchDate::button1_Click);
			// 
			// toBox
			// 
			this->toBox->Location = System::Drawing::Point(378, 75);
			this->toBox->Name = L"toBox";
			this->toBox->Size = System::Drawing::Size(336, 20);
			this->toBox->TabIndex = 1;
			this->toBox->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &searchDate::toBox_MaskInputRejected);
			// 
			// fromBox
			// 
			this->fromBox->Location = System::Drawing::Point(378, 115);
			this->fromBox->Name = L"fromBox";
			this->fromBox->Size = System::Drawing::Size(336, 20);
			this->fromBox->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(378, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"To";
			this->label1->Click += gcnew System::EventHandler(this, &searchDate::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(378, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"From";
			// 
			// dateView
			// 
			this->dateView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dateView->Location = System::Drawing::Point(121, 174);
			this->dateView->Name = L"dateView";
			this->dateView->Size = System::Drawing::Size(593, 176);
			this->dateView->TabIndex = 5;
			// 
			// back
			// 
			this->back->Location = System::Drawing::Point(121, 111);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(227, 23);
			this->back->TabIndex = 6;
			this->back->Text = L"Main Menu";
			this->back->UseVisualStyleBackColor = true;
			this->back->Click += gcnew System::EventHandler(this, &searchDate::back_Click);
			// 
			// searchDate
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(833, 362);
			this->Controls->Add(this->back);
			this->Controls->Add(this->dateView);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->fromBox);
			this->Controls->Add(this->toBox);
			this->Controls->Add(this->button1);
			this->Name = L"searchDate";
			this->Text = L"searchDate";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dateView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=K@Lender12 ";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from database.paytable where PayPeriodStart = '"+toBox+"' and  PayPeriodEnd = '"+fromBox+"';", conDataBase);
		MySqlDataReader^ myReader;
		try
		{
			MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			dateView->DataSource = bSource;
			sda->Update(dbdataset);


		}
		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void toBox_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
}
private: System::Void back_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	obj->Show();
}
};
}
