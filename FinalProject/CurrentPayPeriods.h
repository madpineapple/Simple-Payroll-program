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
	/// Summary for CurrentPayPeriods
	/// </summary>
	public ref class CurrentPayPeriods : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		CurrentPayPeriods(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		CurrentPayPeriods(Form ^ae4)
		{
			obj = ae4;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	public:
		DataTable^dbdataset;
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CurrentPayPeriods()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	protected:

	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

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
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(4, 37);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(818, 246);
			this->dataGridView2->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(352, 298);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CurrentPayPeriods::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(352, 348);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Main Menu";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CurrentPayPeriods::button2_Click);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(455, 300);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(141, 20);
			this->maskedTextBox1->TabIndex = 3;
			this->maskedTextBox1->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &CurrentPayPeriods::maskedTextBox1_MaskInputRejected);
			// 
			// CurrentPayPeriods
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(824, 400);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView2);
			this->Name = L"CurrentPayPeriods";
			this->Text = L"CurrentPayPeriods";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		String^ constring = L"datasource=localhost;port=3306;username=root;password=K@Lender12 ";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand(" select * from database.paytable;", conDataBase);
		MySqlDataReader^ myReader;
		try
		{
			MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			dataGridView2->DataSource = bSource;
			sda->Update(dbdataset);


		}
		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		obj->Show();
	}
private: System::Void maskedTextBox1_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
	DataView^DV = gcnew DataView(dbdataset);
	DV->RowFilter = String::Format("First_Name LIKE '%{0}%'", maskedTextBox1);
	dataGridView2->DataSource = DV;
}
};
}
