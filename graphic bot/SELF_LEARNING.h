#pragma once

namespace graphicbot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SELF_LEARNING
	/// </summary>
	public ref class SELF_LEARNING : public System::Windows::Forms::Form
	{
	public:
		SELF_LEARNING(void)
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
		~SELF_LEARNING()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// SELF_LEARNING
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"SELF_LEARNING";
			this->Text = L"SELF_LEARNING";
			this->Load += gcnew System::EventHandler(this, &SELF_LEARNING::SELF_LEARNING_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SELF_LEARNING_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
