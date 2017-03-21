#pragma once

namespace cpluspluscalculatorct4021 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CalcForm
	/// </summary>
	public ref class CalcForm : public System::Windows::Forms::Form
	{
	public:
		CalcForm(void)
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
		~CalcForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  calcTextbox;
	private: System::Windows::Forms::Button^  Ins1Button;
	private: System::Windows::Forms::Button^  Ins2Button;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  Ins6Button;

	private: System::Windows::Forms::Button^  Ins5Button;

	private: System::Windows::Forms::Button^  Ins4Button;
	private: System::Windows::Forms::Button^  Ins9Button;



	private: System::Windows::Forms::Button^  Ins7Button;
	private: System::Windows::Forms::Button^  equalsButton;


	private: System::Windows::Forms::Button^  Ins0Button;
	private: System::Windows::Forms::Button^  InsPlusButton;
	private: System::Windows::Forms::Button^  InsMinusButton;
	private: System::Windows::Forms::Button^  InsMultiplyButton;
	private: System::Windows::Forms::Button^  InsDivideButton;





	private: System::Windows::Forms::GroupBox^  memoryGroupBox;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  Ins8Button;
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
			this->calcTextbox = (gcnew System::Windows::Forms::TextBox());
			this->Ins1Button = (gcnew System::Windows::Forms::Button());
			this->Ins2Button = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Ins6Button = (gcnew System::Windows::Forms::Button());
			this->Ins5Button = (gcnew System::Windows::Forms::Button());
			this->Ins4Button = (gcnew System::Windows::Forms::Button());
			this->Ins9Button = (gcnew System::Windows::Forms::Button());
			this->Ins8Button = (gcnew System::Windows::Forms::Button());
			this->Ins7Button = (gcnew System::Windows::Forms::Button());
			this->equalsButton = (gcnew System::Windows::Forms::Button());
			this->Ins0Button = (gcnew System::Windows::Forms::Button());
			this->InsPlusButton = (gcnew System::Windows::Forms::Button());
			this->InsMinusButton = (gcnew System::Windows::Forms::Button());
			this->InsMultiplyButton = (gcnew System::Windows::Forms::Button());
			this->InsDivideButton = (gcnew System::Windows::Forms::Button());
			this->memoryGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->memoryGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// calcTextbox
			// 
			this->calcTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calcTextbox->Location = System::Drawing::Point(13, 13);
			this->calcTextbox->Multiline = true;
			this->calcTextbox->Name = L"calcTextbox";
			this->calcTextbox->Size = System::Drawing::Size(459, 50);
			this->calcTextbox->TabIndex = 0;
			// 
			// Ins1Button
			// 
			this->Ins1Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ins1Button->Location = System::Drawing::Point(13, 70);
			this->Ins1Button->Name = L"Ins1Button";
			this->Ins1Button->Size = System::Drawing::Size(50, 50);
			this->Ins1Button->TabIndex = 1;
			this->Ins1Button->Text = L"1";
			this->Ins1Button->UseVisualStyleBackColor = true;
			this->Ins1Button->Click += gcnew System::EventHandler(this, &CalcForm::Ins1Button_Click);
			// 
			// Ins2Button
			// 
			this->Ins2Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ins2Button->Location = System::Drawing::Point(85, 70);
			this->Ins2Button->Name = L"Ins2Button";
			this->Ins2Button->Size = System::Drawing::Size(50, 50);
			this->Ins2Button->TabIndex = 2;
			this->Ins2Button->Text = L"2";
			this->Ins2Button->UseVisualStyleBackColor = true;
			this->Ins2Button->Click += gcnew System::EventHandler(this, &CalcForm::Ins2Button_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(157, 70);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 3;
			this->button1->Text = L"3";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CalcForm::button1_Click);
			// 
			// Ins6Button
			// 
			this->Ins6Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ins6Button->Location = System::Drawing::Point(157, 143);
			this->Ins6Button->Name = L"Ins6Button";
			this->Ins6Button->Size = System::Drawing::Size(50, 50);
			this->Ins6Button->TabIndex = 6;
			this->Ins6Button->Text = L"6";
			this->Ins6Button->UseVisualStyleBackColor = true;
			// 
			// Ins5Button
			// 
			this->Ins5Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ins5Button->Location = System::Drawing::Point(85, 143);
			this->Ins5Button->Name = L"Ins5Button";
			this->Ins5Button->Size = System::Drawing::Size(50, 50);
			this->Ins5Button->TabIndex = 5;
			this->Ins5Button->Text = L"5";
			this->Ins5Button->UseVisualStyleBackColor = true;
			this->Ins5Button->Click += gcnew System::EventHandler(this, &CalcForm::Ins5Button_Click);
			// 
			// Ins4Button
			// 
			this->Ins4Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ins4Button->Location = System::Drawing::Point(13, 143);
			this->Ins4Button->Name = L"Ins4Button";
			this->Ins4Button->Size = System::Drawing::Size(50, 50);
			this->Ins4Button->TabIndex = 4;
			this->Ins4Button->Text = L"4";
			this->Ins4Button->UseVisualStyleBackColor = true;
			this->Ins4Button->Click += gcnew System::EventHandler(this, &CalcForm::Ins4Button_Click);
			// 
			// Ins9Button
			// 
			this->Ins9Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ins9Button->Location = System::Drawing::Point(157, 216);
			this->Ins9Button->Name = L"Ins9Button";
			this->Ins9Button->Size = System::Drawing::Size(50, 50);
			this->Ins9Button->TabIndex = 9;
			this->Ins9Button->Text = L"9";
			this->Ins9Button->UseVisualStyleBackColor = true;
			// 
			// Ins8Button
			// 
			this->Ins8Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ins8Button->Location = System::Drawing::Point(85, 216);
			this->Ins8Button->Name = L"Ins8Button";
			this->Ins8Button->Size = System::Drawing::Size(50, 50);
			this->Ins8Button->TabIndex = 8;
			this->Ins8Button->Text = L"8";
			this->Ins8Button->UseVisualStyleBackColor = true;
			// 
			// Ins7Button
			// 
			this->Ins7Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ins7Button->Location = System::Drawing::Point(13, 216);
			this->Ins7Button->Name = L"Ins7Button";
			this->Ins7Button->Size = System::Drawing::Size(50, 50);
			this->Ins7Button->TabIndex = 7;
			this->Ins7Button->Text = L"7";
			this->Ins7Button->UseVisualStyleBackColor = true;
			// 
			// equalsButton
			// 
			this->equalsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equalsButton->Location = System::Drawing::Point(85, 288);
			this->equalsButton->Name = L"equalsButton";
			this->equalsButton->Size = System::Drawing::Size(122, 50);
			this->equalsButton->TabIndex = 10;
			this->equalsButton->Text = L"=";
			this->equalsButton->UseVisualStyleBackColor = true;
			// 
			// Ins0Button
			// 
			this->Ins0Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ins0Button->Location = System::Drawing::Point(13, 288);
			this->Ins0Button->Name = L"Ins0Button";
			this->Ins0Button->Size = System::Drawing::Size(50, 50);
			this->Ins0Button->TabIndex = 11;
			this->Ins0Button->Text = L"0";
			this->Ins0Button->UseVisualStyleBackColor = true;
			// 
			// InsPlusButton
			// 
			this->InsPlusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InsPlusButton->Location = System::Drawing::Point(235, 70);
			this->InsPlusButton->Name = L"InsPlusButton";
			this->InsPlusButton->Size = System::Drawing::Size(75, 50);
			this->InsPlusButton->TabIndex = 12;
			this->InsPlusButton->Text = L"+";
			this->InsPlusButton->UseVisualStyleBackColor = true;
			// 
			// InsMinusButton
			// 
			this->InsMinusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InsMinusButton->Location = System::Drawing::Point(235, 143);
			this->InsMinusButton->Name = L"InsMinusButton";
			this->InsMinusButton->Size = System::Drawing::Size(75, 50);
			this->InsMinusButton->TabIndex = 13;
			this->InsMinusButton->Text = L"-";
			this->InsMinusButton->UseVisualStyleBackColor = true;
			// 
			// InsMultiplyButton
			// 
			this->InsMultiplyButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InsMultiplyButton->Location = System::Drawing::Point(235, 216);
			this->InsMultiplyButton->Name = L"InsMultiplyButton";
			this->InsMultiplyButton->Size = System::Drawing::Size(75, 50);
			this->InsMultiplyButton->TabIndex = 14;
			this->InsMultiplyButton->Text = L"*";
			this->InsMultiplyButton->UseVisualStyleBackColor = true;
			// 
			// InsDivideButton
			// 
			this->InsDivideButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InsDivideButton->Location = System::Drawing::Point(235, 288);
			this->InsDivideButton->Name = L"InsDivideButton";
			this->InsDivideButton->Size = System::Drawing::Size(75, 50);
			this->InsDivideButton->TabIndex = 15;
			this->InsDivideButton->Text = L"/";
			this->InsDivideButton->UseVisualStyleBackColor = true;
			// 
			// memoryGroupBox
			// 
			this->memoryGroupBox->Controls->Add(this->button17);
			this->memoryGroupBox->Controls->Add(this->button16);
			this->memoryGroupBox->Controls->Add(this->button15);
			this->memoryGroupBox->Controls->Add(this->button14);
			this->memoryGroupBox->Location = System::Drawing::Point(328, 70);
			this->memoryGroupBox->Name = L"memoryGroupBox";
			this->memoryGroupBox->Size = System::Drawing::Size(144, 268);
			this->memoryGroupBox->TabIndex = 16;
			this->memoryGroupBox->TabStop = false;
			this->memoryGroupBox->Text = L"Memory";
			// 
			// button17
			// 
			this->button17->Enabled = false;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(7, 198);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(130, 50);
			this->button17->TabIndex = 3;
			this->button17->Text = L"MC";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Enabled = false;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(7, 141);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(130, 50);
			this->button16->TabIndex = 2;
			this->button16->Text = L"M-";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Enabled = false;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(6, 85);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(130, 50);
			this->button15->TabIndex = 1;
			this->button15->Text = L"M+";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Enabled = false;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(6, 29);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(130, 50);
			this->button14->TabIndex = 0;
			this->button14->Text = L"M";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// CalcForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 362);
			this->Controls->Add(this->memoryGroupBox);
			this->Controls->Add(this->InsDivideButton);
			this->Controls->Add(this->InsMultiplyButton);
			this->Controls->Add(this->InsMinusButton);
			this->Controls->Add(this->InsPlusButton);
			this->Controls->Add(this->Ins0Button);
			this->Controls->Add(this->equalsButton);
			this->Controls->Add(this->Ins9Button);
			this->Controls->Add(this->Ins8Button);
			this->Controls->Add(this->Ins7Button);
			this->Controls->Add(this->Ins6Button);
			this->Controls->Add(this->Ins5Button);
			this->Controls->Add(this->Ins4Button);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Ins2Button);
			this->Controls->Add(this->Ins1Button);
			this->Controls->Add(this->calcTextbox);
			this->MaximizeBox = false;
			this->Name = L"CalcForm";
			this->Text = L"C++ Calculator";
			this->Load += gcnew System::EventHandler(this, &CalcForm::CalcForm_Load);
			this->memoryGroupBox->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void CalcForm_Load(System::Object^  sender, System::EventArgs^  e) 
{

}

private: System::Void Ins1Button_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->calcTextbox->Text = this->calcTextbox->Text + "1";
}

private: System::Void Ins2Button_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->calcTextbox->Text = this->calcTextbox->Text + "2";
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->calcTextbox->Text = this->calcTextbox->Text + "3";
}


private: System::Void Ins4Button_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->calcTextbox->Text = this->calcTextbox->Text + "4";
}
private: System::Void Ins5Button_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->calcTextbox->Text = this->calcTextbox->Text + "5";
}
};

}
