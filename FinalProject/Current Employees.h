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
	/// Summary for CurrentEmployees
	/// </summary>
	public ref class CurrentEmployees : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		CurrentEmployees(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		CurrentEmployees(Form ^ae3)
		{
			obj = ae3;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CurrentEmployees()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  emplButt;
	protected:
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  retBut;

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
			this->emplButt = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->retBut = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// emplButt
			// 
			this->emplButt->Location = System::Drawing::Point(391, 299);
			this->emplButt->Name = L"emplButt";
			this->emplButt->Size = System::Drawing::Size(75, 23);
			this->emplButt->TabIndex = 0;
			this->emplButt->Text = L"Load Table";
			this->emplButt->UseVisualStyleBackColor = true;
			this->emplButt->Click += gcnew System::EventHandler(this, &CurrentEmployees::emplButt_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(1, 43);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(825, 250);
			this->dataGridView1->TabIndex = 1;
			// 
			// retBut
			// 
			this->retBut->Location = System::Drawing::Point(391, 328);
			this->retBut->Name = L"retBut";
			this->retBut->Size = System::Drawing::Size(75, 23);
			this->retBut->TabIndex = 2;
			this->retBut->Text = L"Main Menu";
			this->retBut->UseVisualStyleBackColor = true;
			this->retBut->Click += gcnew System::EventHandler(this, &CurrentEmployees::retBut_Click);
			// 
			// CurrentEmployees
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(832, 416);
			this->Controls->Add(this->retBut);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->emplButt);
			this->Name = L"CurrentEmployees";
			this->Text = L"CurrentEmployees";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void emplButt_Click(System::Object^  sender, System::EventArgs^  e) {

		String^ constring = L"datasource=localhost;port=3306;username=root;password=K@Lender12 ";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from database.employeeinfo;", conDataBase);
		MySqlDataReader^ myReader;
		try
		{
			MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			dataGridView1->DataSource = bSource;
			sda->Update(dbdataset);
			

		}
		catch(Exception^ex)
		{
			MessageBox::Show(ex->Message);
		}

	}
	private: System::Void retBut_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		obj->Show();
	}
};
	
}
