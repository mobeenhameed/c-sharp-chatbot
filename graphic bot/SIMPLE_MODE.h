#pragma once
#include "JBHBOT.h"
#include <string>
#include <msclr\marshal_cppstd.h>
namespace graphicbot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SIMPLE_MODE
	/// </summary>
	public ref class SIMPLE_MODE : public System::Windows::Forms::Form
	{
	public:
		SIMPLE_MODE(void)
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
		~SIMPLE_MODE()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(193, 95);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(463, 72);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &SIMPLE_MODE::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(56, 119);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ENTER QUERY:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(304, 201);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 37);
			this->button1->TabIndex = 2;
			this->button1->Text = L"SEARCH";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SIMPLE_MODE::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(98, 267);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox2->Size = System::Drawing::Size(586, 193);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &SIMPLE_MODE::textBox2_TextChanged);
			// 
			// SIMPLE_MODE
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(770, 486);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Name = L"SIMPLE_MODE";
			this->Text = L"SIMPLE_MODE";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
		
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		JBHBOT a;
		
		a.input = msclr::interop::marshal_as<std::string>(textBox1->Text);
		
		textBox2->Text = textBox2->Text+"\r\nYou: " + gcnew String(a.input.c_str());
		a.getInput();
		if (a.wrong_language_check_and_response() == 1) {
			a.find_match_1();
			a.find_match_2();
			if (a.response_list.size() > 0) {
				for (int i = 0; i < a.response_list.size(); i++) {
					a.response += a.response_list[i];
				}
			}
			else {
				ofstream file;
				file.open("Noresponse.txt", ios::app);
				file << a.input << "\n";
				a.response = "I AM SORRY I CAN NOT ANSWER THAT. MAKE SURE YOUR QUESTION IS RELEVANT TO C++.\n";
			}
			
			
		}
		System::String^ res = gcnew String(a.response.c_str());
		textBox2->Text = textBox2->Text + "\r\nBOT: ";
		textBox2->Text = textBox2->Text + res;
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
