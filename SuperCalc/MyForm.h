#pragma once
#include <queue>
#include <list>
#include <stack>
#include <regex>
#include <regex>
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal_cppstd.h>

namespace SuperCalc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ sum;
	private: System::Windows::Forms::Button^ minus;
	private: System::Windows::Forms::Button^ plus;
	private: System::Windows::Forms::Button^ multiply;
	private: System::Windows::Forms::Button^ divide;
	private: System::Windows::Forms::Button^ sqrt;
	private: System::Windows::Forms::Button^ square;
	private: System::Windows::Forms::Button^ three;
	private: System::Windows::Forms::Button^ nine;
	private: System::Windows::Forms::Button^ eight;
	private: System::Windows::Forms::Button^ seven;
	private: System::Windows::Forms::Button^ six;
	private: System::Windows::Forms::Button^ five;
	private: System::Windows::Forms::Button^ four;
	private: System::Windows::Forms::Button^ one;
	private: System::Windows::Forms::Button^ two;
	private: System::Windows::Forms::Button^ zero;
	private: System::Windows::Forms::Button^ decimal;


	private: System::Windows::Forms::Button^ sign;
	private: System::Windows::Forms::TextBox^ input;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Button^ backspace;
	private: System::Windows::Forms::TextBox^ output;
	private: System::Windows::Forms::Button^ leftParenthesis;
	private: System::Windows::Forms::Button^ rightParenthesis;









	protected:



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->sum = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->sqrt = (gcnew System::Windows::Forms::Button());
			this->square = (gcnew System::Windows::Forms::Button());
			this->three = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Button());
			this->seven = (gcnew System::Windows::Forms::Button());
			this->six = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Button());
			this->four = (gcnew System::Windows::Forms::Button());
			this->one = (gcnew System::Windows::Forms::Button());
			this->two = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->decimal = (gcnew System::Windows::Forms::Button());
			this->sign = (gcnew System::Windows::Forms::Button());
			this->input = (gcnew System::Windows::Forms::TextBox());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->backspace = (gcnew System::Windows::Forms::Button());
			this->output = (gcnew System::Windows::Forms::TextBox());
			this->leftParenthesis = (gcnew System::Windows::Forms::Button());
			this->rightParenthesis = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// sum
			// 
			this->sum->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->sum->Location = System::Drawing::Point(12, 388);
			this->sum->Name = L"sum";
			this->sum->Size = System::Drawing::Size(423, 65);
			this->sum->TabIndex = 0;
			this->sum->Text = L"=";
			this->sum->UseVisualStyleBackColor = false;
			this->sum->Click += gcnew System::EventHandler(this, &MyForm::Sum);
			// 
			// minus
			// 
			this->minus->Location = System::Drawing::Point(251, 248);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(82, 64);
			this->minus->TabIndex = 1;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = true;
			this->minus->Click += gcnew System::EventHandler(this, &MyForm::Minus);
			// 
			// plus
			// 
			this->plus->Location = System::Drawing::Point(251, 318);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(82, 64);
			this->plus->TabIndex = 2;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = true;
			this->plus->Click += gcnew System::EventHandler(this, &MyForm::Plus);
			// 
			// multiply
			// 
			this->multiply->Location = System::Drawing::Point(251, 177);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(82, 64);
			this->multiply->TabIndex = 3;
			this->multiply->Text = L"X";
			this->multiply->UseVisualStyleBackColor = true;
			this->multiply->Click += gcnew System::EventHandler(this, &MyForm::Multiply);
			// 
			// divide
			// 
			this->divide->Location = System::Drawing::Point(251, 107);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(82, 64);
			this->divide->TabIndex = 4;
			this->divide->Text = L"/";
			this->divide->UseVisualStyleBackColor = true;
			this->divide->Click += gcnew System::EventHandler(this, &MyForm::Divide);
			// 
			// sqrt
			// 
			this->sqrt->Location = System::Drawing::Point(339, 107);
			this->sqrt->Name = L"sqrt";
			this->sqrt->Size = System::Drawing::Size(45, 64);
			this->sqrt->TabIndex = 5;
			this->sqrt->Text = L"sqrt()";
			this->sqrt->UseVisualStyleBackColor = true;
			this->sqrt->Click += gcnew System::EventHandler(this, &MyForm::Sqrt);
			// 
			// square
			// 
			this->square->Location = System::Drawing::Point(390, 107);
			this->square->Name = L"square";
			this->square->Size = System::Drawing::Size(45, 64);
			this->square->TabIndex = 6;
			this->square->Text = L"^2";
			this->square->UseVisualStyleBackColor = true;
			this->square->Click += gcnew System::EventHandler(this, &MyForm::Square);
			// 
			// three
			// 
			this->three->Location = System::Drawing::Point(171, 244);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(74, 65);
			this->three->TabIndex = 7;
			this->three->Text = L"3";
			this->three->UseVisualStyleBackColor = true;
			this->three->Click += gcnew System::EventHandler(this, &MyForm::Three);
			// 
			// nine
			// 
			this->nine->Location = System::Drawing::Point(171, 106);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(74, 65);
			this->nine->TabIndex = 8;
			this->nine->Text = L"9";
			this->nine->UseVisualStyleBackColor = true;
			this->nine->Click += gcnew System::EventHandler(this, &MyForm::Nine);
			// 
			// eight
			// 
			this->eight->Location = System::Drawing::Point(91, 106);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(74, 65);
			this->eight->TabIndex = 9;
			this->eight->Text = L"8";
			this->eight->UseVisualStyleBackColor = true;
			this->eight->Click += gcnew System::EventHandler(this, &MyForm::Eight);
			// 
			// seven
			// 
			this->seven->Location = System::Drawing::Point(11, 106);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(74, 65);
			this->seven->TabIndex = 10;
			this->seven->Text = L"7";
			this->seven->UseVisualStyleBackColor = true;
			this->seven->Click += gcnew System::EventHandler(this, &MyForm::Seven);
			// 
			// six
			// 
			this->six->Location = System::Drawing::Point(171, 173);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(74, 65);
			this->six->TabIndex = 11;
			this->six->Text = L"6";
			this->six->UseVisualStyleBackColor = true;
			this->six->Click += gcnew System::EventHandler(this, &MyForm::Six);
			// 
			// five
			// 
			this->five->Location = System::Drawing::Point(91, 173);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(74, 65);
			this->five->TabIndex = 12;
			this->five->Text = L"5";
			this->five->UseVisualStyleBackColor = true;
			this->five->Click += gcnew System::EventHandler(this, &MyForm::Five);
			// 
			// four
			// 
			this->four->Location = System::Drawing::Point(11, 173);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(74, 65);
			this->four->TabIndex = 13;
			this->four->Text = L"4";
			this->four->UseVisualStyleBackColor = true;
			this->four->Click += gcnew System::EventHandler(this, &MyForm::Four);
			// 
			// one
			// 
			this->one->Location = System::Drawing::Point(11, 244);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(74, 65);
			this->one->TabIndex = 14;
			this->one->Text = L"1";
			this->one->UseVisualStyleBackColor = true;
			this->one->Click += gcnew System::EventHandler(this, &MyForm::One);
			// 
			// two
			// 
			this->two->Location = System::Drawing::Point(91, 244);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(74, 65);
			this->two->TabIndex = 15;
			this->two->Text = L"2";
			this->two->UseVisualStyleBackColor = true;
			this->two->Click += gcnew System::EventHandler(this, &MyForm::Two);
			// 
			// zero
			// 
			this->zero->Location = System::Drawing::Point(91, 317);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(74, 65);
			this->zero->TabIndex = 16;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = true;
			this->zero->Click += gcnew System::EventHandler(this, &MyForm::Zero);
			// 
			// decimal
			// 
			this->decimal->Location = System::Drawing::Point(171, 317);
			this->decimal->Name = L"decimal";
			this->decimal->Size = System::Drawing::Size(74, 65);
			this->decimal->TabIndex = 17;
			this->decimal->Text = L".";
			this->decimal->UseVisualStyleBackColor = true;
			this->decimal->Click += gcnew System::EventHandler(this, &MyForm::Decimal);
			// 
			// sign
			// 
			this->sign->Location = System::Drawing::Point(11, 315);
			this->sign->Name = L"sign";
			this->sign->Size = System::Drawing::Size(74, 65);
			this->sign->TabIndex = 18;
			this->sign->Text = L"+/-";
			this->sign->UseVisualStyleBackColor = true;
			this->sign->Click += gcnew System::EventHandler(this, &MyForm::Sign);
			// 
			// input
			// 
			this->input->Location = System::Drawing::Point(11, 61);
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(410, 29);
			this->input->TabIndex = 19;
			this->input->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->clear->Location = System::Drawing::Point(339, 248);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(96, 65);
			this->clear->TabIndex = 20;
			this->clear->Text = L"c";
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::Clear);
			// 
			// backspace
			// 
			this->backspace->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->backspace->Location = System::Drawing::Point(339, 315);
			this->backspace->Name = L"backspace";
			this->backspace->Size = System::Drawing::Size(96, 65);
			this->backspace->TabIndex = 21;
			this->backspace->Text = L"bkspc";
			this->backspace->UseVisualStyleBackColor = false;
			this->backspace->Click += gcnew System::EventHandler(this, &MyForm::Backspace);
			// 
			// output
			// 
			this->output->Location = System::Drawing::Point(11, 12);
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(410, 29);
			this->output->TabIndex = 22;
			this->output->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// leftParenthesis
			// 
			this->leftParenthesis->Location = System::Drawing::Point(339, 177);
			this->leftParenthesis->Name = L"leftParenthesis";
			this->leftParenthesis->Size = System::Drawing::Size(45, 65);
			this->leftParenthesis->TabIndex = 23;
			this->leftParenthesis->Text = L"(";
			this->leftParenthesis->UseVisualStyleBackColor = true;
			this->leftParenthesis->Click += gcnew System::EventHandler(this, &MyForm::LeftP);
			// 
			// rightParenthesis
			// 
			this->rightParenthesis->Location = System::Drawing::Point(390, 177);
			this->rightParenthesis->Name = L"rightParenthesis";
			this->rightParenthesis->Size = System::Drawing::Size(45, 65);
			this->rightParenthesis->TabIndex = 24;
			this->rightParenthesis->Text = L")";
			this->rightParenthesis->UseVisualStyleBackColor = true;
			this->rightParenthesis->Click += gcnew System::EventHandler(this, &MyForm::RightP);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(439, 499);
			this->Controls->Add(this->rightParenthesis);
			this->Controls->Add(this->leftParenthesis);
			this->Controls->Add(this->output);
			this->Controls->Add(this->backspace);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->input);
			this->Controls->Add(this->sign);
			this->Controls->Add(this->decimal);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->two);
			this->Controls->Add(this->one);
			this->Controls->Add(this->four);
			this->Controls->Add(this->five);
			this->Controls->Add(this->six);
			this->Controls->Add(this->seven);
			this->Controls->Add(this->eight);
			this->Controls->Add(this->nine);
			this->Controls->Add(this->three);
			this->Controls->Add(this->square);
			this->Controls->Add(this->sqrt);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->sum);
			this->Name = L"MyForm";
			this->Text = L"ShuntingYardCalc";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// equal button
	private: System::Void Sum(System::Object^ sender, System::EventArgs^ e) {
		std::stack<char> stack;
		std::queue<char> queue;
		String^ equation = this->input->Text;
		std::string eq = msclr::interop::marshal_as<std::string>(equation);
		for (char ch : eq)
		{
			if (isdigit(ch) || isalpha(ch) || ch == '.')
			{
				queue.push(ch);
			}
			else {
				while (!stack.empty() && stack.top() != '(' &&
					(ch == '*' || ch == '/' ? stack.top() == '*' || stack.top() == '/' || stack.top() == '^' || stack.top() == 'S' :
						(ch == '+' || ch == '-' ? stack.top() == '+' || stack.top() == '-' || stack.top() == '*' || stack.top() == '/' || stack.top() == '^' || stack.top() == 'S' :
							(ch == '^' ? stack.top() == '^' || stack.top() == 'S' :
								(ch == 'S' ? stack.top() == 'S' : false)))))
								{
									if (!stack.empty())
									{
										queue.push(stack.top());
										stack.pop();
									}
								}
				//if (ch == 'S' || ch == '^' || (stack.empty() ? false :
				//	(ch == '*' || ch == '/' ? stack.top() == '*' || stack.top() == '/' : (stack.top() == '+' || stack.top() == '-'))))
				//{
				//	stack.push(ch);
				//}
				 

				queue.push(' ');
				stack.push(ch);
				
			}
		}
		while (!stack.empty())
		{
			if (!stack.empty())
			{
				queue.push(stack.top());
			}
			stack.pop();
		}
		std::string result;
		while (!queue.empty())
		{
			if (!queue.empty())
			{
				result += queue.front();
			}
			queue.pop();
		}
		String^ out = gcnew String(result.c_str());
		this->output->Text = out;

		std::stack<double> operandStack;
		std::string currentOperand = "";
		double operand1, operand2;

		for (char ch : result) {
			if (isdigit(ch) || ch == '.') {
				currentOperand += ch;
			}
			else {
				if (!currentOperand.empty()) {
					double operand = stod(currentOperand);
					operandStack.push(operand);
					currentOperand = "";
				}

				if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^') {
					//
					if (!operandStack.empty()) {
						operand1 = operandStack.top();
						operandStack.pop();
					}

					if (!operandStack.empty()) {
						operand2 = operandStack.top();
						operandStack.pop();
					}
					//
					switch (ch) {
					case '+':
						operandStack.push(operand1 + operand2);
						break;
					case '-':
						operandStack.push(operand1 - operand2);
						break;
					case '*':
						operandStack.push(operand1 * operand2);
						break;
					case '/':
						operandStack.push(operand1 / operand2);
						break;
					case '^':
						operandStack.push(pow(operand1, operand2));
						break;
					}
				}
				else if (ch == 'S') {
					double operand = operandStack.top();
					operandStack.pop();
					operandStack.push(std::sqrt(operand));
					
				}
			}
		}

		if (!currentOperand.empty()) {
			double operand = stod(currentOperand);
			operandStack.push(operand);
		}
		std::string sum = std::to_string(operandStack.top());
		String^ sumout = gcnew String(sum.c_str());
		//this->input->Clear();
		this->input->Text = sumout;
	}
	

	// minus
	private: System::Void Minus(System::Object^ sender, System::EventArgs^ e) {
		if (this->input->Text->EndsWith("+") || this->input->Text->EndsWith("-") || this->input->Text->EndsWith("*") || this->input->Text->EndsWith("/"))
		{
			// label explanation added later
		}
		else if (this->input->Text != "")
		{
			this->input->Text += "-";
		}
		 
	}
	// plus
	private: System::Void Plus(System::Object^ sender, System::EventArgs^ e) {
		if (this->input->Text->EndsWith("+") || this->input->Text->EndsWith("-") || this->input->Text->EndsWith("*") || this->input->Text->EndsWith("/"))
		{
			// label explanation added later
		}
		else if (this->input->Text != "")
		{
			this->input->Text += "+";
		}
	}
	// multiply 
	private: System::Void Multiply(System::Object^ sender, System::EventArgs^ e) {
		if (this->input->Text->EndsWith("+") || this->input->Text->EndsWith("-") || this->input->Text->EndsWith("*") || this->input->Text->EndsWith("/"))
		{
			// label explanation added later
		}
		else if (this->input->Text != "")
		{
			this->input->Text += "*";
		}
	}
	// divide
	private: System::Void Divide(System::Object^ sender, System::EventArgs^ e) {
		if (this->input->Text->EndsWith("+") || this->input->Text->EndsWith("-") || this->input->Text->EndsWith("*") || this->input->Text->EndsWith("/"))
		{
			// label explanation added later
		}
		else if (this->input->Text != "")
		{
			this->input->Text += "/";
		}
	}
	// square root
	private: System::Void Sqrt(System::Object^ sender, System::EventArgs^ e) {
		this->input->Text += "S";
	}
	// square
	private: System::Void Square(System::Object^ sender, System::EventArgs^ e) {
		this->input->Text += "^";
	}
	// three 
	private: System::Void Three(System::Object^ sender, System::EventArgs^ e) {
		this->input->Text += "3";
	}
	// nine
	private: System::Void Nine(System::Object^ sender, System::EventArgs^ e) {
		this->input->Text += "9";
	}
	// eight
	private: System::Void Eight(System::Object^ sender, System::EventArgs^ e) {
		this->input->Text += "8";
	}
	// seven
	private: System::Void Seven(System::Object^ sender, System::EventArgs^ e) {
		this->input->Text += "7";
	}
	// six 
	private: System::Void Six(System::Object^ sender, System::EventArgs^ e) {
		this->input->Text += "6";
	}
	// five 
	private: System::Void Five(System::Object^ sender, System::EventArgs^ e) {
		this->input->Text += "5";
	}
	// four
	private: System::Void Four(System::Object^ sender, System::EventArgs^ e) {
		this->input->Text += "4";
	}
	// one
	private: System::Void One(System::Object^ sender, System::EventArgs^ e) {
		this->input->Text += "1";
	}
	// zero
	private: System::Void Zero(System::Object^ sender, System::EventArgs^ e) {
		this->input->Text += "0";
	}
	// two
	private: System::Void Two(System::Object^ sender, System::EventArgs^ e) {
		this->input->Text += "2";
	}
	// sign
	private: System::Void Sign(System::Object^ sender, System::EventArgs^ e) {

	}
	// one
	private: System::Void Clear(System::Object^ sender, System::EventArgs^ e) {
		this->input->Clear();
		this->output->Clear();
	}
	// decimal
	private: System::Void Decimal(System::Object^ sender, System::EventArgs^ e) {
		this->input->Text += ".";
	}
	// backspace
	private: System::Void Backspace(System::Object^ sender, System::EventArgs^ e) {
		// figure out how to pass keys 
		String^ st  = this->input->Text;
		String^ nst = "";
		nst = st->Substring(0, st->Length - 1);
		this->input->Text = nst;

	}
	// left parenthesis )
	private: System::Void LeftP(System::Object^ sender, System::EventArgs^ e) {
		this->input->Text += "(";
	}
	//  right parenthesis )
	private: System::Void RightP(System::Object^ sender, System::EventArgs^ e) {
		this->input->Text += ")";
	}
	 
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
 

	};
	}
