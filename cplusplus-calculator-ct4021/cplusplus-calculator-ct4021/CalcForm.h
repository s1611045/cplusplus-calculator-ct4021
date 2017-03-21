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
	private: System::Windows::Forms::Button^  ins1Button;
	private: System::Windows::Forms::Button^  ins2Button;
	private: System::Windows::Forms::Button^  ins3Button;
	private: System::Windows::Forms::Button^  ins6Button;
	private: System::Windows::Forms::Button^  ins5Button;
	private: System::Windows::Forms::Button^  ins4Button;
	private: System::Windows::Forms::Button^  ins9Button;
	private: System::Windows::Forms::Button^  ins7Button;
	private: System::Windows::Forms::Button^  equalsButton;
	private: System::Windows::Forms::Button^  ins0Button;
	private: System::Windows::Forms::Button^  insPlusButton;
	private: System::Windows::Forms::Button^  insMinusButton;
	private: System::Windows::Forms::Button^  insMultiplyButton;
	private: System::Windows::Forms::Button^  insDivideButton;
	private: System::Windows::Forms::Button^  ins8Button;
	private: System::Windows::Forms::Button^  backspaceButton;
	private: System::Windows::Forms::Button^  clearButton;
	private: System::ComponentModel::IContainer^  components;
	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->calcTextbox = (gcnew System::Windows::Forms::TextBox());
			this->ins1Button = (gcnew System::Windows::Forms::Button());
			this->ins2Button = (gcnew System::Windows::Forms::Button());
			this->ins3Button = (gcnew System::Windows::Forms::Button());
			this->ins6Button = (gcnew System::Windows::Forms::Button());
			this->ins5Button = (gcnew System::Windows::Forms::Button());
			this->ins4Button = (gcnew System::Windows::Forms::Button());
			this->ins9Button = (gcnew System::Windows::Forms::Button());
			this->ins8Button = (gcnew System::Windows::Forms::Button());
			this->ins7Button = (gcnew System::Windows::Forms::Button());
			this->equalsButton = (gcnew System::Windows::Forms::Button());
			this->ins0Button = (gcnew System::Windows::Forms::Button());
			this->insPlusButton = (gcnew System::Windows::Forms::Button());
			this->insMinusButton = (gcnew System::Windows::Forms::Button());
			this->insMultiplyButton = (gcnew System::Windows::Forms::Button());
			this->insDivideButton = (gcnew System::Windows::Forms::Button());
			this->backspaceButton = (gcnew System::Windows::Forms::Button());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// calcTextbox
			// 
			this->calcTextbox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->calcTextbox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calcTextbox->Location = System::Drawing::Point(12, 13);
			this->calcTextbox->MaxLength = 16;
			this->calcTextbox->Multiline = true;
			this->calcTextbox->Name = L"calcTextbox";
			this->calcTextbox->Size = System::Drawing::Size(360, 50);
			this->calcTextbox->TabIndex = 0;
			// 
			// ins1Button
			// 
			this->ins1Button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ins1Button->Location = System::Drawing::Point(12, 69);
			this->ins1Button->Name = L"ins1Button";
			this->ins1Button->Size = System::Drawing::Size(50, 50);
			this->ins1Button->TabIndex = 1;
			this->ins1Button->Text = L"1";
			this->ins1Button->UseVisualStyleBackColor = true;
			this->ins1Button->Click += gcnew System::EventHandler(this, &CalcForm::Ins1Button_Click);
			// 
			// ins2Button
			// 
			this->ins2Button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ins2Button->Location = System::Drawing::Point(84, 69);
			this->ins2Button->Name = L"ins2Button";
			this->ins2Button->Size = System::Drawing::Size(50, 50);
			this->ins2Button->TabIndex = 2;
			this->ins2Button->Text = L"2";
			this->ins2Button->UseVisualStyleBackColor = true;
			this->ins2Button->Click += gcnew System::EventHandler(this, &CalcForm::Ins2Button_Click);
			// 
			// ins3Button
			// 
			this->ins3Button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ins3Button->Location = System::Drawing::Point(156, 69);
			this->ins3Button->Name = L"ins3Button";
			this->ins3Button->Size = System::Drawing::Size(50, 50);
			this->ins3Button->TabIndex = 3;
			this->ins3Button->Text = L"3";
			this->ins3Button->UseVisualStyleBackColor = true;
			this->ins3Button->Click += gcnew System::EventHandler(this, &CalcForm::button1_Click);
			// 
			// ins6Button
			// 
			this->ins6Button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ins6Button->Location = System::Drawing::Point(156, 142);
			this->ins6Button->Name = L"ins6Button";
			this->ins6Button->Size = System::Drawing::Size(50, 50);
			this->ins6Button->TabIndex = 6;
			this->ins6Button->Text = L"6";
			this->ins6Button->UseVisualStyleBackColor = true;
			// 
			// ins5Button
			// 
			this->ins5Button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ins5Button->Location = System::Drawing::Point(84, 142);
			this->ins5Button->Name = L"ins5Button";
			this->ins5Button->Size = System::Drawing::Size(50, 50);
			this->ins5Button->TabIndex = 5;
			this->ins5Button->Text = L"5";
			this->ins5Button->UseVisualStyleBackColor = true;
			this->ins5Button->Click += gcnew System::EventHandler(this, &CalcForm::Ins5Button_Click);
			// 
			// ins4Button
			// 
			this->ins4Button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ins4Button->Location = System::Drawing::Point(12, 142);
			this->ins4Button->Name = L"ins4Button";
			this->ins4Button->Size = System::Drawing::Size(50, 50);
			this->ins4Button->TabIndex = 4;
			this->ins4Button->Text = L"4";
			this->ins4Button->UseVisualStyleBackColor = true;
			this->ins4Button->Click += gcnew System::EventHandler(this, &CalcForm::Ins4Button_Click);
			// 
			// ins9Button
			// 
			this->ins9Button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ins9Button->Location = System::Drawing::Point(156, 215);
			this->ins9Button->Name = L"ins9Button";
			this->ins9Button->Size = System::Drawing::Size(50, 50);
			this->ins9Button->TabIndex = 9;
			this->ins9Button->Text = L"9";
			this->ins9Button->UseVisualStyleBackColor = true;
			// 
			// ins8Button
			// 
			this->ins8Button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ins8Button->Location = System::Drawing::Point(84, 215);
			this->ins8Button->Name = L"ins8Button";
			this->ins8Button->Size = System::Drawing::Size(50, 50);
			this->ins8Button->TabIndex = 8;
			this->ins8Button->Text = L"8";
			this->ins8Button->UseVisualStyleBackColor = true;
			// 
			// ins7Button
			// 
			this->ins7Button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ins7Button->Location = System::Drawing::Point(12, 215);
			this->ins7Button->Name = L"ins7Button";
			this->ins7Button->Size = System::Drawing::Size(50, 50);
			this->ins7Button->TabIndex = 7;
			this->ins7Button->Text = L"7";
			this->ins7Button->UseVisualStyleBackColor = true;
			// 
			// equalsButton
			// 
			this->equalsButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equalsButton->Location = System::Drawing::Point(84, 287);
			this->equalsButton->Name = L"equalsButton";
			this->equalsButton->Size = System::Drawing::Size(122, 50);
			this->equalsButton->TabIndex = 10;
			this->equalsButton->Text = L"=";
			this->equalsButton->UseVisualStyleBackColor = true;
			// 
			// ins0Button
			// 
			this->ins0Button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ins0Button->Location = System::Drawing::Point(12, 287);
			this->ins0Button->Name = L"ins0Button";
			this->ins0Button->Size = System::Drawing::Size(50, 50);
			this->ins0Button->TabIndex = 11;
			this->ins0Button->Text = L"0";
			this->ins0Button->UseVisualStyleBackColor = true;
			// 
			// insPlusButton
			// 
			this->insPlusButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insPlusButton->Location = System::Drawing::Point(229, 69);
			this->insPlusButton->Name = L"insPlusButton";
			this->insPlusButton->Size = System::Drawing::Size(75, 50);
			this->insPlusButton->TabIndex = 12;
			this->insPlusButton->Text = L"+";
			this->insPlusButton->UseVisualStyleBackColor = true;
			// 
			// insMinusButton
			// 
			this->insMinusButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insMinusButton->Location = System::Drawing::Point(229, 142);
			this->insMinusButton->Name = L"insMinusButton";
			this->insMinusButton->Size = System::Drawing::Size(75, 50);
			this->insMinusButton->TabIndex = 13;
			this->insMinusButton->Text = L"-";
			this->insMinusButton->UseVisualStyleBackColor = true;
			// 
			// insMultiplyButton
			// 
			this->insMultiplyButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insMultiplyButton->Location = System::Drawing::Point(229, 215);
			this->insMultiplyButton->Name = L"insMultiplyButton";
			this->insMultiplyButton->Size = System::Drawing::Size(75, 50);
			this->insMultiplyButton->TabIndex = 14;
			this->insMultiplyButton->Text = L"x";
			this->insMultiplyButton->UseVisualStyleBackColor = true;
			// 
			// insDivideButton
			// 
			this->insDivideButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insDivideButton->Location = System::Drawing::Point(229, 287);
			this->insDivideButton->Name = L"insDivideButton";
			this->insDivideButton->Size = System::Drawing::Size(75, 50);
			this->insDivideButton->TabIndex = 15;
			this->insDivideButton->Text = L"÷";
			this->insDivideButton->UseVisualStyleBackColor = true;
			// 
			// backspaceButton
			// 
			this->backspaceButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backspaceButton->Location = System::Drawing::Point(326, 215);
			this->backspaceButton->Name = L"backspaceButton";
			this->backspaceButton->Size = System::Drawing::Size(50, 122);
			this->backspaceButton->TabIndex = 16;
			this->backspaceButton->Text = L"←";
			this->backspaceButton->UseVisualStyleBackColor = true;
			// 
			// clearButton
			// 
			this->clearButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearButton->Location = System::Drawing::Point(326, 69);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(50, 123);
			this->clearButton->TabIndex = 17;
			this->clearButton->Text = L"C";
			this->clearButton->UseVisualStyleBackColor = true;
			// 
			// CalcForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 362);
			this->Controls->Add(this->clearButton);
			this->Controls->Add(this->backspaceButton);
			this->Controls->Add(this->insDivideButton);
			this->Controls->Add(this->insMultiplyButton);
			this->Controls->Add(this->insMinusButton);
			this->Controls->Add(this->insPlusButton);
			this->Controls->Add(this->ins0Button);
			this->Controls->Add(this->equalsButton);
			this->Controls->Add(this->ins9Button);
			this->Controls->Add(this->ins8Button);
			this->Controls->Add(this->ins7Button);
			this->Controls->Add(this->ins6Button);
			this->Controls->Add(this->ins5Button);
			this->Controls->Add(this->ins4Button);
			this->Controls->Add(this->ins3Button);
			this->Controls->Add(this->ins2Button);
			this->Controls->Add(this->ins1Button);
			this->Controls->Add(this->calcTextbox);
			this->MaximizeBox = false;
			this->Name = L"CalcForm";
			this->Text = L"C++ Calculator";
			this->Load += gcnew System::EventHandler(this, &CalcForm::CalcForm_Load);
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

	private: System::Void memoryToolTip_Popup(System::Object^  sender, System::Windows::Forms::PopupEventArgs^  e) {

	}
	};

}
