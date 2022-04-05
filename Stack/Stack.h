#pragma once
#include "ArrayStack.h"
#include "LinkedListStack.h"
#include "StackImplementationEnum.h"
#include <string>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>
#include <fstream>
#include <chrono>
#include <iomanip>  
#include <sstream>


namespace Stack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class Stack : public System::Windows::Forms::Form
	{
	public:
		Stack(void)
		{
			InitializeComponent();
			
			srand(time(NULL));


			refreshInfoBoxes("Stack ready!");
			this->popBox->Text = "";
		}

	protected:
		
		~Stack()
		{
			if (components)
			{
				delete components;
			}
		}

	private: StackBase<int>* stack;
	private: int popValue;

	private: System::Windows::Forms::Button^ pushButton;
	private: System::Windows::Forms::Label^ maxSizeLabel;
	private: System::Windows::Forms::TextBox^ maxSizeBox;
	private: System::Windows::Forms::TextBox^ currentSizeBox;
	private: System::Windows::Forms::Label^ currentSizeLabel;
	private: System::Windows::Forms::TextBox^ topBox;
	private: System::Windows::Forms::Label^ topLabel;
	private: System::Windows::Forms::TextBox^ popBox;
	private: System::Windows::Forms::Label^ popLabel;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ pushRandomButton;
	private: System::Windows::Forms::Button^ popButton;
	private: System::Windows::Forms::TextBox^ pushValueBox;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ infoBox;
	private: System::Windows::Forms::Label^ infoLabel;
	private: System::Windows::Forms::CheckBox^ isStackEmptyCheckBox;
	private: System::Windows::Forms::Label^ isEmptyLabel;
	private: System::Windows::Forms::Button^ clearButton;
	private: System::Windows::Forms::TextBox^ pushRandomCountBox;
	private: System::Windows::Forms::Button^ generatePerformanceRaportButton;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ statisticsBox;
	private: System::Windows::Forms::Label^ s0_1kLabel;
	private: System::Windows::Forms::TextBox^ s0_1kTextBox;
	private: System::Windows::Forms::Label^ s100kLabel;
	private: System::Windows::Forms::TextBox^ s100kTextBox;
	private: System::Windows::Forms::Label^ s1kLabel;
	private: System::Windows::Forms::TextBox^ s1kTextBox;
	private: System::Windows::Forms::RadioButton^ arrayStackRadioButton;
	private: System::Windows::Forms::RadioButton^ LinkedListStackRadioButton;
	private: System::Windows::Forms::GroupBox^ groupBox4;

	protected:

	private:
		
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->pushButton = (gcnew System::Windows::Forms::Button());
			this->pushRandomButton = (gcnew System::Windows::Forms::Button());
			this->popButton = (gcnew System::Windows::Forms::Button());
			this->maxSizeLabel = (gcnew System::Windows::Forms::Label());
			this->currentSizeLabel = (gcnew System::Windows::Forms::Label());
			this->topLabel = (gcnew System::Windows::Forms::Label());
			this->popLabel = (gcnew System::Windows::Forms::Label());
			this->infoLabel = (gcnew System::Windows::Forms::Label());
			this->isEmptyLabel = (gcnew System::Windows::Forms::Label());
			this->maxSizeBox = (gcnew System::Windows::Forms::TextBox());
			this->currentSizeBox = (gcnew System::Windows::Forms::TextBox());
			this->topBox = (gcnew System::Windows::Forms::TextBox());
			this->popBox = (gcnew System::Windows::Forms::TextBox());
			this->pushValueBox = (gcnew System::Windows::Forms::TextBox());
			this->infoBox = (gcnew System::Windows::Forms::TextBox());
			this->isStackEmptyCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pushRandomCountBox = (gcnew System::Windows::Forms::TextBox());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->generatePerformanceRaportButton = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->statisticsBox = (gcnew System::Windows::Forms::GroupBox());
			this->s100kLabel = (gcnew System::Windows::Forms::Label());
			this->s100kTextBox = (gcnew System::Windows::Forms::TextBox());
			this->s1kLabel = (gcnew System::Windows::Forms::Label());
			this->s1kTextBox = (gcnew System::Windows::Forms::TextBox());
			this->s0_1kLabel = (gcnew System::Windows::Forms::Label());
			this->s0_1kTextBox = (gcnew System::Windows::Forms::TextBox());
			this->arrayStackRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->LinkedListStackRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->statisticsBox->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// pushButton
			// 
			this->pushButton->Location = System::Drawing::Point(6, 19);
			this->pushButton->Name = L"pushButton";
			this->pushButton->Size = System::Drawing::Size(83, 23);
			this->pushButton->TabIndex = 0;
			this->pushButton->Text = L"push";
			this->pushButton->UseVisualStyleBackColor = true;
			this->pushButton->Click += gcnew System::EventHandler(this, &Stack::pushButton_Click);
			// 
			// pushRandomButton
			// 
			this->pushRandomButton->Location = System::Drawing::Point(6, 48);
			this->pushRandomButton->Name = L"pushRandomButton";
			this->pushRandomButton->Size = System::Drawing::Size(83, 23);
			this->pushRandomButton->TabIndex = 1;
			this->pushRandomButton->Text = L"push random";
			this->pushRandomButton->UseVisualStyleBackColor = true;
			this->pushRandomButton->Click += gcnew System::EventHandler(this, &Stack::pushRandomButton_Click);
			// 
			// popButton
			// 
			this->popButton->Location = System::Drawing::Point(6, 77);
			this->popButton->Name = L"popButton";
			this->popButton->Size = System::Drawing::Size(83, 23);
			this->popButton->TabIndex = 2;
			this->popButton->Text = L"pop";
			this->popButton->UseVisualStyleBackColor = true;
			this->popButton->Click += gcnew System::EventHandler(this, &Stack::popButton_Click);
			// 
			// maxSizeLabel
			// 
			this->maxSizeLabel->AutoSize = true;
			this->maxSizeLabel->Location = System::Drawing::Point(6, 16);
			this->maxSizeLabel->Name = L"maxSizeLabel";
			this->maxSizeLabel->Size = System::Drawing::Size(47, 13);
			this->maxSizeLabel->TabIndex = 1;
			this->maxSizeLabel->Text = L"max size";
			// 
			// currentSizeLabel
			// 
			this->currentSizeLabel->AutoSize = true;
			this->currentSizeLabel->Location = System::Drawing::Point(6, 42);
			this->currentSizeLabel->Name = L"currentSizeLabel";
			this->currentSizeLabel->Size = System::Drawing::Size(61, 13);
			this->currentSizeLabel->TabIndex = 3;
			this->currentSizeLabel->Text = L"current size";
			// 
			// topLabel
			// 
			this->topLabel->AutoSize = true;
			this->topLabel->Location = System::Drawing::Point(6, 68);
			this->topLabel->Name = L"topLabel";
			this->topLabel->Size = System::Drawing::Size(51, 13);
			this->topLabel->TabIndex = 5;
			this->topLabel->Text = L"top value";
			// 
			// popLabel
			// 
			this->popLabel->AutoSize = true;
			this->popLabel->Location = System::Drawing::Point(6, 94);
			this->popLabel->Name = L"popLabel";
			this->popLabel->Size = System::Drawing::Size(54, 13);
			this->popLabel->TabIndex = 7;
			this->popLabel->Text = L"pop value";
			// 
			// infoLabel
			// 
			this->infoLabel->AutoSize = true;
			this->infoLabel->Location = System::Drawing::Point(11, 392);
			this->infoLabel->Name = L"infoLabel";
			this->infoLabel->Size = System::Drawing::Size(24, 13);
			this->infoLabel->TabIndex = 11;
			this->infoLabel->Text = L"info";
			// 
			// isEmptyLabel
			// 
			this->isEmptyLabel->AutoSize = true;
			this->isEmptyLabel->Location = System::Drawing::Point(6, 122);
			this->isEmptyLabel->Name = L"isEmptyLabel";
			this->isEmptyLabel->Size = System::Drawing::Size(74, 13);
			this->isEmptyLabel->TabIndex = 9;
			this->isEmptyLabel->Text = L"is stack empty";
			// 
			// maxSizeBox
			// 
			this->maxSizeBox->Location = System::Drawing::Point(86, 13);
			this->maxSizeBox->Name = L"maxSizeBox";
			this->maxSizeBox->ReadOnly = true;
			this->maxSizeBox->Size = System::Drawing::Size(100, 20);
			this->maxSizeBox->TabIndex = 2;
			// 
			// currentSizeBox
			// 
			this->currentSizeBox->Location = System::Drawing::Point(86, 39);
			this->currentSizeBox->Name = L"currentSizeBox";
			this->currentSizeBox->ReadOnly = true;
			this->currentSizeBox->Size = System::Drawing::Size(100, 20);
			this->currentSizeBox->TabIndex = 4;
			// 
			// topBox
			// 
			this->topBox->Location = System::Drawing::Point(86, 65);
			this->topBox->Name = L"topBox";
			this->topBox->ReadOnly = true;
			this->topBox->Size = System::Drawing::Size(100, 20);
			this->topBox->TabIndex = 6;
			// 
			// popBox
			// 
			this->popBox->Location = System::Drawing::Point(86, 91);
			this->popBox->Name = L"popBox";
			this->popBox->ReadOnly = true;
			this->popBox->Size = System::Drawing::Size(100, 20);
			this->popBox->TabIndex = 8;
			// 
			// pushValueBox
			// 
			this->pushValueBox->Location = System::Drawing::Point(95, 21);
			this->pushValueBox->Name = L"pushValueBox";
			this->pushValueBox->Size = System::Drawing::Size(100, 20);
			this->pushValueBox->TabIndex = 5;
			this->pushValueBox->Text = L"0";
			// 
			// infoBox
			// 
			this->infoBox->Location = System::Drawing::Point(78, 391);
			this->infoBox->Name = L"infoBox";
			this->infoBox->ReadOnly = true;
			this->infoBox->Size = System::Drawing::Size(443, 20);
			this->infoBox->TabIndex = 12;
			// 
			// isStackEmptyCheckBox
			// 
			this->isStackEmptyCheckBox->AutoCheck = false;
			this->isStackEmptyCheckBox->AutoSize = true;
			this->isStackEmptyCheckBox->Location = System::Drawing::Point(86, 122);
			this->isStackEmptyCheckBox->Name = L"isStackEmptyCheckBox";
			this->isStackEmptyCheckBox->Size = System::Drawing::Size(15, 14);
			this->isStackEmptyCheckBox->TabIndex = 13;
			this->isStackEmptyCheckBox->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pushRandomCountBox);
			this->groupBox1->Controls->Add(this->clearButton);
			this->groupBox1->Controls->Add(this->pushValueBox);
			this->groupBox1->Controls->Add(this->popButton);
			this->groupBox1->Controls->Add(this->pushRandomButton);
			this->groupBox1->Controls->Add(this->pushButton);
			this->groupBox1->Location = System::Drawing::Point(14, 69);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(203, 170);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Modify stack";
			// 
			// pushRandomCountBox
			// 
			this->pushRandomCountBox->Location = System::Drawing::Point(95, 47);
			this->pushRandomCountBox->Name = L"pushRandomCountBox";
			this->pushRandomCountBox->Size = System::Drawing::Size(100, 20);
			this->pushRandomCountBox->TabIndex = 7;
			this->pushRandomCountBox->Text = L"1";
			// 
			// clearButton
			// 
			this->clearButton->Location = System::Drawing::Point(6, 106);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(83, 23);
			this->clearButton->TabIndex = 6;
			this->clearButton->Text = L"clear";
			this->clearButton->UseVisualStyleBackColor = true;
			this->clearButton->Click += gcnew System::EventHandler(this, &Stack::clearButton_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->isStackEmptyCheckBox);
			this->groupBox2->Controls->Add(this->isEmptyLabel);
			this->groupBox2->Controls->Add(this->popBox);
			this->groupBox2->Controls->Add(this->topBox);
			this->groupBox2->Controls->Add(this->popLabel);
			this->groupBox2->Controls->Add(this->maxSizeLabel);
			this->groupBox2->Controls->Add(this->maxSizeBox);
			this->groupBox2->Controls->Add(this->topLabel);
			this->groupBox2->Controls->Add(this->currentSizeLabel);
			this->groupBox2->Controls->Add(this->currentSizeBox);
			this->groupBox2->Location = System::Drawing::Point(312, 69);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(211, 170);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Stack info";
			// 
			// generatePerformanceRaportButton
			// 
			this->generatePerformanceRaportButton->Location = System::Drawing::Point(6, 19);
			this->generatePerformanceRaportButton->Name = L"generatePerformanceRaportButton";
			this->generatePerformanceRaportButton->Size = System::Drawing::Size(188, 23);
			this->generatePerformanceRaportButton->TabIndex = 13;
			this->generatePerformanceRaportButton->Text = L"generate performance raport";
			this->generatePerformanceRaportButton->UseVisualStyleBackColor = true;
			this->generatePerformanceRaportButton->Click += gcnew System::EventHandler(this, &Stack::generatePerformanceRaportButton_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->generatePerformanceRaportButton);
			this->groupBox3->Location = System::Drawing::Point(14, 245);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 54);
			this->groupBox3->TabIndex = 14;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Raport";
			// 
			// statisticsBox
			// 
			this->statisticsBox->Controls->Add(this->s100kLabel);
			this->statisticsBox->Controls->Add(this->s100kTextBox);
			this->statisticsBox->Controls->Add(this->s1kLabel);
			this->statisticsBox->Controls->Add(this->s1kTextBox);
			this->statisticsBox->Controls->Add(this->s0_1kLabel);
			this->statisticsBox->Controls->Add(this->s0_1kTextBox);
			this->statisticsBox->Location = System::Drawing::Point(312, 264);
			this->statisticsBox->Name = L"statisticsBox";
			this->statisticsBox->Size = System::Drawing::Size(211, 100);
			this->statisticsBox->TabIndex = 15;
			this->statisticsBox->TabStop = false;
			this->statisticsBox->Text = L"Statistics";
			// 
			// s100kLabel
			// 
			this->s100kLabel->AutoSize = true;
			this->s100kLabel->Location = System::Drawing::Point(6, 74);
			this->s100kLabel->Name = L"s100kLabel";
			this->s100kLabel->Size = System::Drawing::Size(31, 13);
			this->s100kLabel->TabIndex = 7;
			this->s100kLabel->Text = L"100k";
			// 
			// s100kTextBox
			// 
			this->s100kTextBox->Location = System::Drawing::Point(86, 71);
			this->s100kTextBox->Name = L"s100kTextBox";
			this->s100kTextBox->ReadOnly = true;
			this->s100kTextBox->Size = System::Drawing::Size(100, 20);
			this->s100kTextBox->TabIndex = 8;
			// 
			// s1kLabel
			// 
			this->s1kLabel->AutoSize = true;
			this->s1kLabel->Location = System::Drawing::Point(6, 48);
			this->s1kLabel->Name = L"s1kLabel";
			this->s1kLabel->Size = System::Drawing::Size(19, 13);
			this->s1kLabel->TabIndex = 5;
			this->s1kLabel->Text = L"1k";
			// 
			// s1kTextBox
			// 
			this->s1kTextBox->Location = System::Drawing::Point(86, 45);
			this->s1kTextBox->Name = L"s1kTextBox";
			this->s1kTextBox->ReadOnly = true;
			this->s1kTextBox->Size = System::Drawing::Size(100, 20);
			this->s1kTextBox->TabIndex = 6;
			// 
			// s0_1kLabel
			// 
			this->s0_1kLabel->AutoSize = true;
			this->s0_1kLabel->Location = System::Drawing::Point(6, 22);
			this->s0_1kLabel->Name = L"s0_1kLabel";
			this->s0_1kLabel->Size = System::Drawing::Size(28, 13);
			this->s0_1kLabel->TabIndex = 3;
			this->s0_1kLabel->Text = L"0.1k";
			// 
			// s0_1kTextBox
			// 
			this->s0_1kTextBox->Location = System::Drawing::Point(86, 19);
			this->s0_1kTextBox->Name = L"s0_1kTextBox";
			this->s0_1kTextBox->ReadOnly = true;
			this->s0_1kTextBox->Size = System::Drawing::Size(100, 20);
			this->s0_1kTextBox->TabIndex = 4;
			// 
			// arrayStackRadioButton
			// 
			this->arrayStackRadioButton->AutoSize = true;
			this->arrayStackRadioButton->Location = System::Drawing::Point(8, 19);
			this->arrayStackRadioButton->Name = L"arrayStackRadioButton";
			this->arrayStackRadioButton->Size = System::Drawing::Size(77, 17);
			this->arrayStackRadioButton->TabIndex = 16;
			this->arrayStackRadioButton->TabStop = true;
			this->arrayStackRadioButton->Text = L"ArrayStack";
			this->arrayStackRadioButton->UseVisualStyleBackColor = true;
			this->arrayStackRadioButton->CheckedChanged += gcnew System::EventHandler(this, &Stack::arrayStackRadioButton_CheckedChanged);
			// 
			// LinkedListStackRadioButton
			// 
			this->LinkedListStackRadioButton->AutoSize = true;
			this->LinkedListStackRadioButton->Location = System::Drawing::Point(91, 19);
			this->LinkedListStackRadioButton->Name = L"LinkedListStackRadioButton";
			this->LinkedListStackRadioButton->Size = System::Drawing::Size(101, 17);
			this->LinkedListStackRadioButton->TabIndex = 17;
			this->LinkedListStackRadioButton->TabStop = true;
			this->LinkedListStackRadioButton->Text = L"LinkedListStack";
			this->LinkedListStackRadioButton->UseVisualStyleBackColor = true;
			this->LinkedListStackRadioButton->CheckedChanged += gcnew System::EventHandler(this, &Stack::LinkedListStackRadioButton_CheckedChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->LinkedListStackRadioButton);
			this->groupBox4->Controls->Add(this->arrayStackRadioButton);
			this->groupBox4->Location = System::Drawing::Point(12, 14);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(509, 49);
			this->groupBox4->TabIndex = 18;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Stack implementation";
			// 
			// Stack
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(533, 423);
			this->Controls->Add(this->statisticsBox);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->infoBox);
			this->Controls->Add(this->infoLabel);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox4);
			this->Name = L"Stack";
			this->Text = L"Stack";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->statisticsBox->ResumeLayout(false);
			this->statisticsBox->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pushButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (stack == NULL) {
			stackNotSetInfo();
			return;
		}

		int push_value;
		bool is_succeeded = int::TryParse(this->pushValueBox->Text, push_value);

		if (!is_succeeded) {
			return;
		}

		stack->push(push_value);
		refreshInfoBoxes("Pushed " + std::to_string(push_value));
	}

	private: System::Void pushRandomButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (stack == NULL) {
			stackNotSetInfo();
			return;
		}

		int elements_count;
		bool is_succeeded = int::TryParse(this->pushRandomCountBox->Text, elements_count);

		if (!is_succeeded)
		{
			return;
		}

		for (size_t i = 0; i < elements_count; i++)
		{
			int randomValue = rand() % 100 + 1;;
			stack->push(randomValue);
		}

		refreshInfoBoxes("Pushed " + std::to_string(elements_count) + " random elements");
	}


	private: System::Void popButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (stack == NULL) {
			stackNotSetInfo();
			return;
		}

		try
		{
			this->popValue = stack->pop();
			refreshInfoBoxes("Popped");
		}
		catch (EmptyStackException err) {
			String^ message = gcnew String(err.what());
			this->infoBox->Text = "Exception: " + message;
		}
	}

	private: System::Void clearButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (stack == NULL) {
			stackNotSetInfo();
			return;
		}

		stack->clear();

		refreshInfoBoxes("Stack cleared");
	}

	private: void refreshInfoBoxes(std::string info) {
		if (stack == NULL) {
			stackNotSetInfo();
			return;
		}

		this->maxSizeBox->Text = System::Convert::ToString(stack->maxSize());
		this->currentSizeBox->Text = System::Convert::ToString(stack->size());
		this->topBox->Text = !stack->isEmpty() ? System::Convert::ToString(stack->top()) : "";
		this->popBox->Text = System::Convert::ToString(this->popValue);
		this->isStackEmptyCheckBox->Checked = stack->isEmpty();
		this->infoBox->Text = gcnew String(info.c_str());
	}



	private: System::Void generatePerformanceRaportButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		std::ofstream stream;
		std::ios_base::sync_with_stdio(false);
		stream.setf(std::ios::fixed);
		stream.precision(6);
		stream.open("performance_raport.txt");
		stream
			<< "Stack performance raport.\n\n"
			<< std::endl;

		stream << "\nArrayStack - int" << std::endl;
		double sai0_1k = runPerformanceTest<int>(arrayStack, &stream, 100);
		double sai1k = runPerformanceTest<int>(arrayStack, &stream, 1000);
		double sai100k = runPerformanceTest<int>(arrayStack, &stream, 100000);

		stream << "\nArrayStack - double" << std::endl;
		double sad0_1k = runPerformanceTest<double>(arrayStack, &stream, 100);
		double sad1k = runPerformanceTest<double>(arrayStack, &stream, 1000);
		double sad100k = runPerformanceTest<double>(arrayStack, &stream, 100000);

		stream << "\nLinkedListStack - int" << std::endl;
		double sli0_1k = runPerformanceTest<int>(linkedListStack, &stream, 100);
		double sli1k = runPerformanceTest<int>(linkedListStack, &stream, 1000);
		double sli100k = runPerformanceTest<int>(linkedListStack, &stream, 100000);

		stream << "\nLinkedListStack - double" << std::endl;
		double sld0_1k = runPerformanceTest<double>(linkedListStack, &stream, 100);
		double sld1k = runPerformanceTest<double>(linkedListStack, &stream, 1000);
		double sld100k = runPerformanceTest<double>(linkedListStack, &stream, 100000);

		stream
			<< "\n"
			<< "Raport generated!"
			<< std::endl;

		stream.close();

		refreshStatisticsBoxes(sli0_1k, sli1k, sli100k);

		this->infoBox->Text = "Performance raport generated";
	}

	private:
		template <typename K>
		double runPerformanceTest(StackImplementation stackImplementation, std::ofstream* str, int elementCount)
		{
			auto start = std::chrono::high_resolution_clock::now();

			StackBase<K>* p_stack;
			switch (stackImplementation)
			{
			case arrayStack:
				p_stack = new ArrayStack<K>(elementCount + 1);
				break;
			case linkedListStack:
				p_stack = new LinkedListStack<K>();
				break;
			default:
				throw "StackImplementation must be set";
				break;
			}

			for (size_t i = 0; i < elementCount; i++)
			{
				int randomValue = rand() % 100 + 1;;
				p_stack->push(randomValue);
			}
			delete p_stack;

			auto end = std::chrono::high_resolution_clock::now();
			double time_taken = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count() * 1e-6;

			*str
				<< "Test for "
				<< elementCount
				<< "elements:"
				<< (elementCount < 10000 ? "\t\t" : "\t")
				<< time_taken
				<< " sec"
				<< std::endl;

			return time_taken;
		}

	private: void refreshStatisticsBoxes(double s0_1k, double s1k, double s100k)
	{
		std::stringstream ss;
		ss.setf(std::ios::fixed);
		ss.precision(6);

		ss << s0_1k;
		this->s0_1kTextBox->Text = gcnew String(ss.str().c_str()) + " sec";
		ss.str("");

		ss << s1k;
		this->s1kTextBox->Text = gcnew String(ss.str().c_str()) + " sec";
		ss.str("");

		ss << s100k;
		this->s100kTextBox->Text = gcnew String(ss.str().c_str()) + " sec";
		ss.str("");
	}

	private: System::Void arrayStackRadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		setStackImplementation();
	}

	private: System::Void LinkedListStackRadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		setStackImplementation();
	}

	private: void setStackImplementation()
	{
		if (stack != NULL) {
			stack->clear();
			refreshInfoBoxes("Stack cleared");
			delete stack;
		}

		if (this->arrayStackRadioButton->Checked) {
			stack = new ArrayStack<int>(100);
		}
		else if (this->LinkedListStackRadioButton->Checked) {
			stack = new LinkedListStack<int>();
		}
		else
		{
			throw "none of radio buttons checked";
		}
	}

	private:void stackNotSetInfo() {
		this->infoBox->Text = "Set stack type first";
	}
	};
}
