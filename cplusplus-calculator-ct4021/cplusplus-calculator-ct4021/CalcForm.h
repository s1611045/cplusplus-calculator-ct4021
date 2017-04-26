#pragma once
#include "CalculatorLogic.h"
#include <msclr\marshal_cppstd.h>
#include <regex>

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

		bool checkTextLength()
		{
			if(this->calcTextbox->Text->Length < 17)
			{
				return true;
			} 
			else
			{
				return false;
			}
		}

		void disableNumButtons()
		{
			this->ins0Button->Enabled = false;
			this->ins1Button->Enabled = false;
			this->ins2Button->Enabled = false;
			this->ins3Button->Enabled = false;
			this->ins4Button->Enabled = false;
			this->ins5Button->Enabled = false;
			this->ins6Button->Enabled = false;
			this->ins7Button->Enabled = false;
			this->ins8Button->Enabled = false;
			this->ins9Button->Enabled = false;

			this->insPlusButton->Enabled = true;
			this->insMinusButton->Enabled = true;
			this->insMultiplyButton->Enabled = true;
			this->insDivideButton->Enabled = true;
			this->insPowerButton->Enabled = true;
			this->insRootButton->Enabled = false;

			this->backspaceButton->Enabled = true;
		}

		void disableSymbolButtons()
		{
			this->ins0Button->Enabled = true;
			this->ins1Button->Enabled = true;
			this->ins2Button->Enabled = true;
			this->ins3Button->Enabled = true;
			this->ins4Button->Enabled = true;
			this->ins5Button->Enabled = true;
			this->ins6Button->Enabled = true;
			this->ins7Button->Enabled = true;
			this->ins8Button->Enabled = true;
			this->ins9Button->Enabled = true;

			this->insPlusButton->Enabled = false;
			this->insMinusButton->Enabled = false;
			this->insMultiplyButton->Enabled = false;
			this->insDivideButton->Enabled = false;
			this->insPowerButton->Enabled = false;
			this->insRootButton->Enabled = false;

			this->equalsButton->Enabled = true;
			this->backspaceButton->Enabled = true;
		}

		void enableAllButtons()
		{
			this->ins0Button->Enabled = true;
			this->ins1Button->Enabled = true;
			this->ins2Button->Enabled = true;
			this->ins3Button->Enabled = true;
			this->ins4Button->Enabled = true;
			this->ins5Button->Enabled = true;
			this->ins6Button->Enabled = true;
			this->ins7Button->Enabled = true;
			this->ins8Button->Enabled = true;
			this->ins9Button->Enabled = true;

			this->insPlusButton->Enabled = true;
			this->insMinusButton->Enabled = true;
			this->insMultiplyButton->Enabled = true;
			this->insDivideButton->Enabled = true;
			this->insPowerButton->Enabled = true;
			this->insRootButton->Enabled = false;

			this->backspaceButton->Enabled = true;
		}

		void disableAllButtons()
		{
			this->ins0Button->Enabled = false;
			this->ins1Button->Enabled = false;
			this->ins2Button->Enabled = false;
			this->ins3Button->Enabled = false;
			this->ins4Button->Enabled = false;
			this->ins5Button->Enabled = false;
			this->ins6Button->Enabled = false;
			this->ins7Button->Enabled = false;
			this->ins8Button->Enabled = false;
			this->ins9Button->Enabled = false;

			this->insPlusButton->Enabled = false;
			this->insMinusButton->Enabled = false;
			this->insMultiplyButton->Enabled = false;
			this->insDivideButton->Enabled = false;
			this->insPowerButton->Enabled = false;

			this->backspaceButton->Enabled = false;
			this->insRootButton->Enabled = true;
		}

		bool formExpanded = false;

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
private: System::Windows::Forms::Button^  expandCollapseButton;
private: System::Windows::Forms::Button^  insPowerButton;
private: System::Windows::Forms::Button^  insRootButton;
private: System::Windows::Forms::Button^  storeMemoryButton;
private: System::Windows::Forms::Button^  insMemoryButton;
private: System::Windows::Forms::Button^  clearMemoryButton;







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
			this->expandCollapseButton = (gcnew System::Windows::Forms::Button());
			this->insPowerButton = (gcnew System::Windows::Forms::Button());
			this->insRootButton = (gcnew System::Windows::Forms::Button());
			this->storeMemoryButton = (gcnew System::Windows::Forms::Button());
			this->insMemoryButton = (gcnew System::Windows::Forms::Button());
			this->clearMemoryButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// calcTextbox
			// 
			this->calcTextbox->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->calcTextbox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calcTextbox->Location = System::Drawing::Point(17, 12);
			this->calcTextbox->MaxLength = 16;
			this->calcTextbox->Multiline = true;
			this->calcTextbox->Name = L"calcTextbox";
			this->calcTextbox->ReadOnly = true;
			this->calcTextbox->Size = System::Drawing::Size(295, 50);
			this->calcTextbox->TabIndex = 0;
			this->calcTextbox->TextChanged += gcnew System::EventHandler(this, &CalcForm::calcTextbox_TextChanged);
			// 
			// ins1Button
			// 
			this->ins1Button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ins1Button->Location = System::Drawing::Point(17, 78);
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
			this->ins2Button->Location = System::Drawing::Point(73, 78);
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
			this->ins3Button->Location = System::Drawing::Point(129, 78);
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
			this->ins6Button->Location = System::Drawing::Point(129, 134);
			this->ins6Button->Name = L"ins6Button";
			this->ins6Button->Size = System::Drawing::Size(50, 50);
			this->ins6Button->TabIndex = 6;
			this->ins6Button->Text = L"6";
			this->ins6Button->UseVisualStyleBackColor = true;
			this->ins6Button->Click += gcnew System::EventHandler(this, &CalcForm::ins6Button_Click);
			// 
			// ins5Button
			// 
			this->ins5Button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ins5Button->Location = System::Drawing::Point(73, 134);
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
			this->ins4Button->Location = System::Drawing::Point(17, 134);
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
			this->ins9Button->Location = System::Drawing::Point(129, 190);
			this->ins9Button->Name = L"ins9Button";
			this->ins9Button->Size = System::Drawing::Size(50, 50);
			this->ins9Button->TabIndex = 9;
			this->ins9Button->Text = L"9";
			this->ins9Button->UseVisualStyleBackColor = true;
			this->ins9Button->Click += gcnew System::EventHandler(this, &CalcForm::ins9Button_Click);
			// 
			// ins8Button
			// 
			this->ins8Button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ins8Button->Location = System::Drawing::Point(73, 190);
			this->ins8Button->Name = L"ins8Button";
			this->ins8Button->Size = System::Drawing::Size(50, 50);
			this->ins8Button->TabIndex = 8;
			this->ins8Button->Text = L"8";
			this->ins8Button->UseVisualStyleBackColor = true;
			this->ins8Button->Click += gcnew System::EventHandler(this, &CalcForm::ins8Button_Click);
			// 
			// ins7Button
			// 
			this->ins7Button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ins7Button->Location = System::Drawing::Point(17, 190);
			this->ins7Button->Name = L"ins7Button";
			this->ins7Button->Size = System::Drawing::Size(50, 50);
			this->ins7Button->TabIndex = 7;
			this->ins7Button->Text = L"7";
			this->ins7Button->UseVisualStyleBackColor = true;
			this->ins7Button->Click += gcnew System::EventHandler(this, &CalcForm::ins7Button_Click);
			// 
			// equalsButton
			// 
			this->equalsButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equalsButton->Location = System::Drawing::Point(73, 246);
			this->equalsButton->Name = L"equalsButton";
			this->equalsButton->Size = System::Drawing::Size(106, 50);
			this->equalsButton->TabIndex = 10;
			this->equalsButton->Text = L"=";
			this->equalsButton->UseVisualStyleBackColor = true;
			this->equalsButton->Click += gcnew System::EventHandler(this, &CalcForm::equalsButton_Click);
			// 
			// ins0Button
			// 
			this->ins0Button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ins0Button->Location = System::Drawing::Point(17, 246);
			this->ins0Button->Name = L"ins0Button";
			this->ins0Button->Size = System::Drawing::Size(50, 50);
			this->ins0Button->TabIndex = 11;
			this->ins0Button->Text = L"0";
			this->ins0Button->UseVisualStyleBackColor = true;
			this->ins0Button->Click += gcnew System::EventHandler(this, &CalcForm::ins0Button_Click);
			// 
			// insPlusButton
			// 
			this->insPlusButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insPlusButton->Location = System::Drawing::Point(200, 78);
			this->insPlusButton->Name = L"insPlusButton";
			this->insPlusButton->Size = System::Drawing::Size(56, 50);
			this->insPlusButton->TabIndex = 12;
			this->insPlusButton->Text = L"+";
			this->insPlusButton->UseVisualStyleBackColor = true;
			this->insPlusButton->Click += gcnew System::EventHandler(this, &CalcForm::insPlusButton_Click);
			// 
			// insMinusButton
			// 
			this->insMinusButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insMinusButton->Location = System::Drawing::Point(200, 134);
			this->insMinusButton->Name = L"insMinusButton";
			this->insMinusButton->Size = System::Drawing::Size(56, 50);
			this->insMinusButton->TabIndex = 13;
			this->insMinusButton->Text = L"-";
			this->insMinusButton->UseVisualStyleBackColor = true;
			this->insMinusButton->Click += gcnew System::EventHandler(this, &CalcForm::insMinusButton_Click);
			// 
			// insMultiplyButton
			// 
			this->insMultiplyButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insMultiplyButton->Location = System::Drawing::Point(200, 190);
			this->insMultiplyButton->Name = L"insMultiplyButton";
			this->insMultiplyButton->Size = System::Drawing::Size(56, 50);
			this->insMultiplyButton->TabIndex = 14;
			this->insMultiplyButton->Text = L"x";
			this->insMultiplyButton->UseVisualStyleBackColor = true;
			this->insMultiplyButton->Click += gcnew System::EventHandler(this, &CalcForm::insMultiplyButton_Click);
			// 
			// insDivideButton
			// 
			this->insDivideButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insDivideButton->Location = System::Drawing::Point(200, 246);
			this->insDivideButton->Name = L"insDivideButton";
			this->insDivideButton->Size = System::Drawing::Size(56, 50);
			this->insDivideButton->TabIndex = 15;
			this->insDivideButton->Text = L"÷";
			this->insDivideButton->UseVisualStyleBackColor = true;
			this->insDivideButton->Click += gcnew System::EventHandler(this, &CalcForm::insDivideButton_Click);
			// 
			// backspaceButton
			// 
			this->backspaceButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backspaceButton->Location = System::Drawing::Point(262, 190);
			this->backspaceButton->Name = L"backspaceButton";
			this->backspaceButton->Size = System::Drawing::Size(50, 106);
			this->backspaceButton->TabIndex = 16;
			this->backspaceButton->Text = L"←";
			this->backspaceButton->UseVisualStyleBackColor = true;
			this->backspaceButton->Click += gcnew System::EventHandler(this, &CalcForm::backspaceButton_Click);
			// 
			// clearButton
			// 
			this->clearButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearButton->Location = System::Drawing::Point(262, 78);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(50, 106);
			this->clearButton->TabIndex = 17;
			this->clearButton->Text = L"C";
			this->clearButton->UseVisualStyleBackColor = true;
			this->clearButton->Click += gcnew System::EventHandler(this, &CalcForm::clearButton_Click);
			// 
			// expandCollapseButton
			// 
			this->expandCollapseButton->Location = System::Drawing::Point(17, 302);
			this->expandCollapseButton->Name = L"expandCollapseButton";
			this->expandCollapseButton->Size = System::Drawing::Size(295, 23);
			this->expandCollapseButton->TabIndex = 18;
			this->expandCollapseButton->Text = L"Expand";
			this->expandCollapseButton->UseVisualStyleBackColor = true;
			this->expandCollapseButton->Click += gcnew System::EventHandler(this, &CalcForm::expandCollapseButton_Click);
			// 
			// insPowerButton
			// 
			this->insPowerButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold));
			this->insPowerButton->Location = System::Drawing::Point(17, 331);
			this->insPowerButton->Name = L"insPowerButton";
			this->insPowerButton->Size = System::Drawing::Size(50, 37);
			this->insPowerButton->TabIndex = 19;
			this->insPowerButton->Text = L"^";
			this->insPowerButton->UseVisualStyleBackColor = true;
			this->insPowerButton->Click += gcnew System::EventHandler(this, &CalcForm::insPowerButton_Click);
			// 
			// insRootButton
			// 
			this->insRootButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold));
			this->insRootButton->Location = System::Drawing::Point(73, 331);
			this->insRootButton->Name = L"insRootButton";
			this->insRootButton->Size = System::Drawing::Size(50, 37);
			this->insRootButton->TabIndex = 20;
			this->insRootButton->Text = L"√";
			this->insRootButton->UseVisualStyleBackColor = true;
			this->insRootButton->Click += gcnew System::EventHandler(this, &CalcForm::insRootButton_Click);
			// 
			// storeMemoryButton
			// 
			this->storeMemoryButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13, System::Drawing::FontStyle::Bold));
			this->storeMemoryButton->Location = System::Drawing::Point(150, 331);
			this->storeMemoryButton->Name = L"storeMemoryButton";
			this->storeMemoryButton->Size = System::Drawing::Size(50, 37);
			this->storeMemoryButton->TabIndex = 21;
			this->storeMemoryButton->Text = L"M+";
			this->storeMemoryButton->UseVisualStyleBackColor = true;
			// 
			// insMemoryButton
			// 
			this->insMemoryButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold));
			this->insMemoryButton->Location = System::Drawing::Point(206, 331);
			this->insMemoryButton->Name = L"insMemoryButton";
			this->insMemoryButton->Size = System::Drawing::Size(50, 37);
			this->insMemoryButton->TabIndex = 22;
			this->insMemoryButton->Text = L"M";
			this->insMemoryButton->UseVisualStyleBackColor = true;
			// 
			// clearMemoryButton
			// 
			this->clearMemoryButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold));
			this->clearMemoryButton->Location = System::Drawing::Point(262, 331);
			this->clearMemoryButton->Name = L"clearMemoryButton";
			this->clearMemoryButton->Size = System::Drawing::Size(50, 37);
			this->clearMemoryButton->TabIndex = 23;
			this->clearMemoryButton->Text = L"MC";
			this->clearMemoryButton->UseVisualStyleBackColor = true;
			// 
			// CalcForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(324, 376);
			this->Controls->Add(this->clearMemoryButton);
			this->Controls->Add(this->insMemoryButton);
			this->Controls->Add(this->storeMemoryButton);
			this->Controls->Add(this->insRootButton);
			this->Controls->Add(this->insPowerButton);
			this->Controls->Add(this->expandCollapseButton);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
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
		//On form load, disable symbol buttons and backspace button
		this->disableSymbolButtons();
		this->backspaceButton->Enabled = false;
		this->equalsButton->Enabled = false;
		this->ClientSize = System::Drawing::Size(324, 330);
	}

	private: System::Void Ins1Button_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (checkTextLength())
		{
			this->calcTextbox->Text = this->calcTextbox->Text + "1";
			this->disableNumButtons();
		}
		else
		{}
	}

	private: System::Void Ins2Button_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->checkTextLength())
		{
			this->calcTextbox->Text = this->calcTextbox->Text + "2";
			this->disableNumButtons();
		}
		else
		{}
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->checkTextLength())
		{
			this->calcTextbox->Text = this->calcTextbox->Text + "3";
			this->disableNumButtons();
		}
		else
		{}
	}

	private: System::Void Ins4Button_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->checkTextLength())
		{
			this->calcTextbox->Text = this->calcTextbox->Text + "4";
			this->disableNumButtons();
		}
		else
		{}
	}

	private: System::Void Ins5Button_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->checkTextLength())
		{
			this->calcTextbox->Text = this->calcTextbox->Text + "5";
			this->disableNumButtons();
		}
		else
		{}
	}

	private: System::Void ins6Button_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->checkTextLength())
		{
			this->calcTextbox->Text = this->calcTextbox->Text + "6";
			this->disableNumButtons();
		}
		else
		{}
	}

	private: System::Void ins7Button_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->checkTextLength())
		{
			this->calcTextbox->Text = this->calcTextbox->Text + "7";
			this->disableNumButtons();
		}
		else
		{}
	}

	private: System::Void ins8Button_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (this->checkTextLength())
		{
			this->calcTextbox->Text = this->calcTextbox->Text + "8";
			this->disableNumButtons();
		}
		else
		{}
	}

	private: System::Void ins9Button_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->checkTextLength())
		{
			this->calcTextbox->Text = this->calcTextbox->Text + "9";
			this->disableNumButtons();
		}
		else
		{}
	}

	private: System::Void ins0Button_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if(this->checkTextLength())
		{
			this->calcTextbox->Text = this->calcTextbox->Text + "0";
			this->disableNumButtons();
		}
		else
		{}
	}

	private: System::Void insPlusButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if(this->checkTextLength())
		{
			this->calcTextbox->Text = this->calcTextbox->Text + "+";
			this->disableSymbolButtons();
		}
		else
		{}
	}

	private: System::Void insMinusButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->checkTextLength())
		{
			this->calcTextbox->Text = this->calcTextbox->Text + "-";
			this->disableSymbolButtons();
		}
		else
		{}
	}

	private: System::Void insMultiplyButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->checkTextLength())
		{
			this->calcTextbox->Text = this->calcTextbox->Text + "*";
			this->disableSymbolButtons();
		}
		else
		{}
	}

	private: System::Void insDivideButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->checkTextLength())
		{
			this->calcTextbox->Text = this->calcTextbox->Text + "/";
			this->disableSymbolButtons();
		}
		else
		{}
	}

	private: System::Void clearButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//Clear text in textbox, and enable/disable form controls appropriately
		this->calcTextbox->Text = "";
		this->enableAllButtons();
		this->disableSymbolButtons();
		this->backspaceButton->Enabled = false;
		this->equalsButton->Enabled = false;
	}

	private: System::Void backspaceButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//Delete last character in textbox
		if (this->calcTextbox->Text != "")
		{
			//Get substring of textbox with last character removed, and assign the substring to text property of textbox
			System::String^ s = this->calcTextbox->Text->Substring(0, this->calcTextbox->Text->Length - 1);
			this->calcTextbox->Text = s;

			//Check if input can be calculated, and enable/disable form controls appropriately
			if (this->calcTextbox->Text->EndsWith("+") || this->calcTextbox->Text->EndsWith("-") || this->calcTextbox->Text->EndsWith("/") || this->calcTextbox->Text->EndsWith("*"))
			{
				this->enableAllButtons();
				this->disableSymbolButtons();
				this->equalsButton->Enabled = false;
			}
			else
			{
				this->enableAllButtons();
				this->disableNumButtons();
				this->equalsButton->Enabled = true;

			}

			//Disable backspace & equals if textbox is empty
			if (this->calcTextbox->Text->Length == 0)
			{
				this->enableAllButtons();
				this->disableSymbolButtons();
				this->equalsButton->Enabled = false;
				this->backspaceButton->Enabled = false;
			}
			else
			{}
		}
		else
		{}
	}

	private: System::Void equalsButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//Checking user input for errors
		if (this->calcTextbox->Text->EndsWith("+") || this->calcTextbox->Text->EndsWith("-") || this->calcTextbox->Text->EndsWith("/") || this->calcTextbox->Text->EndsWith("*"))
		{
			MessageBox::Show("The calculation input must end with a number, not an operator.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			//Instantiating calculator logic class
			calculator calc;

			//Converting system string to std::string
			calc.inputCalculation = msclr::interop::marshal_as<std::string>(this->calcTextbox->Text);
			calc.calculationStack = calc.convertToPostfix();
			std::string result = calc.calculate();

			//Converting std::string back to system string and displaying result
			String^ sysResult = gcnew String(result.c_str());
			this->calcTextbox->Text = sysResult;

			//Disable further calculations if result is more than 1 digit
			if (this->calcTextbox->Text->Length > 1)
			{
				this->disableSymbolButtons();
			}
			else
			{}

			//Disable all buttons except 'clear'
			this->backspaceButton->Enabled = false;
			this->disableAllButtons();
			this->equalsButton->Enabled = false;
		}
	}
	private: System::Void calcTextbox_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{}

	private: System::Void insPowerButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->checkTextLength())
		{
			this->calcTextbox->Text = this->calcTextbox->Text + "^";
			this->disableSymbolButtons();
		}
		else
		{}
	}

	private: System::Void insRootButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//Instantiating calculator class
		calculator calc;

		//Convert text in textbox to integer
		int input = int::Parse(this->calcTextbox->Text);

		//Calculate square root
		input = calc.squareRoot(input);

		//Convert integer back to system string and display result
		std::string stringResult = std::to_string(input);
		String^ result = gcnew String(stringResult.c_str());
		this->calcTextbox->Text = result;

	}

	private: System::Void expandCollapseButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (!formExpanded)
		{
			this->ClientSize = System::Drawing::Size(324, 380);
			this->expandCollapseButton->Text = "Collapse";
			formExpanded = true;
		}
		else
		{
			this->ClientSize = System::Drawing::Size(324, 330);
			this->expandCollapseButton->Text = "Expand";
			formExpanded = false;
		}
	}
};

}