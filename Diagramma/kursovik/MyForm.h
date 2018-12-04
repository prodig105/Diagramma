#pragma once
#include"Diagramma.h"
namespace kursovik {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//	using namespace System::Collections::Generic;
	//	using namespace System::Text;
	//	using namespace System::Threading::Tasks;
	//	using namespace System::Windows::Forms;
	//	using namespace System::IO;
	//	using namespace System::Windows::Forms::DataVisualization::Charting;



		/// <summary>
		/// Сводка для MyForm
		/// </summary>


	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^  Вывод;
	public: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::TextBox^  textBox1;
	public:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;

	private:



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->Вывод = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
			// 
			// Вывод
			// 
			this->Вывод->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Вывод->Location = System::Drawing::Point(575, 425);
			this->Вывод->Name = L"Вывод";
			this->Вывод->Size = System::Drawing::Size(185, 41);
			this->Вывод->TabIndex = 1;
			this->Вывод->Text = L"Вывод";
			this->Вывод->UseVisualStyleBackColor = true;
			this->Вывод->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::Transparent;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(0, 0);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(477, 476);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(525, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(250, 30);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(525, 48);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(250, 30);
			this->textBox2->TabIndex = 4;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox1_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(525, 84);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(250, 30);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox1_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(525, 121);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(250, 30);
			this->textBox4->TabIndex = 6;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox1_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(525, 157);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(250, 30);
			this->textBox5->TabIndex = 7;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox1_KeyPress);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(525, 193);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(250, 30);
			this->textBox6->TabIndex = 8;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox1_KeyPress);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(525, 229);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(250, 30);
			this->textBox7->TabIndex = 9;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(470, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 29);
			this->label1->TabIndex = 10;
			this->label1->Text = L"№1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(470, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 29);
			this->label2->TabIndex = 11;
			this->label2->Text = L"№2";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(470, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 29);
			this->label3->TabIndex = 12;
			this->label3->Text = L"№4";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(470, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 29);
			this->label4->TabIndex = 13;
			this->label4->Text = L"№3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(470, 157);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 29);
			this->label5->TabIndex = 14;
			this->label5->Text = L"№5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(470, 193);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 29);
			this->label6->TabIndex = 15;
			this->label6->Text = L"№6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(470, 228);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 29);
			this->label7->TabIndex = 16;
			this->label7->Text = L"№7";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(781, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 30);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Очистить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(781, 48);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 30);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(781, 84);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 30);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(781, 119);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(91, 30);
			this->button4->TabIndex = 20;
			this->button4->Text = L"Очистить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(781, 156);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(91, 30);
			this->button5->TabIndex = 21;
			this->button5->Text = L"Очистить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(781, 192);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(91, 30);
			this->button6->TabIndex = 22;
			this->button6->Text = L"Очистить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(781, 228);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(91, 30);
			this->button7->TabIndex = 23;
			this->button7->Text = L"Очистить";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// chart2
			// 
			this->chart2->BackColor = System::Drawing::Color::Transparent;
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(911, 12);
			this->chart2->Name = L"chart2";
			this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Fire;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StackedColumn;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(456, 464);
			this->chart2->TabIndex = 24;
			this->chart2->Text = L"Диаграмма 2";
			this->chart2->Click += gcnew System::EventHandler(this, &MyForm::chart2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1388, 488);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->Вывод);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion


	private: System::Void TextBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  Key) {//исключение символов из TextBox
		if ((textBox1->Text->Length != 0) && (Key->KeyChar == '-')) {
			Key->Handled = true;
			return;
		}
		if (!((Key->KeyChar >= '0') && (Key->KeyChar <= '9') ||
			(Key->KeyChar == ',') || (Key->KeyChar == '-') || (Key->KeyChar == 8))) {
			Key->Handled = true;
		}
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//Обработчик для TextBox
		textBox1->Click += gcnew EventHandler(this, &MyForm::Operation1);
		textBox2->Click += gcnew EventHandler(this, &MyForm::Operation2);
		textBox3->Click += gcnew EventHandler(this, &MyForm::Operation3);
		textBox4->Click += gcnew EventHandler(this, &MyForm::Operation4);
		textBox5->Click += gcnew EventHandler(this, &MyForm::Operation5);
		textBox6->Click += gcnew EventHandler(this, &MyForm::Operation6);
		textBox7->Click += gcnew EventHandler(this, &MyForm::Operation7);
		textBox1->Text = textBox1->Text + "";
		textBox2->Text = textBox2->Text + "";
		textBox3->Text = textBox3->Text + "";
		textBox4->Text = textBox4->Text + "";
		textBox5->Text = textBox5->Text + "";
		textBox6->Text = textBox6->Text + "";
		textBox7->Text = textBox7->Text + "";
		
	}
	private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int Number[7]; int i; for (i = 0; i <= 6; i++) Number[i] = 0;
		if(textBox1->Text!="") Number[0] = Double::Parse(textBox1->Text);
		if (textBox2->Text != "")Number[1] = Double::Parse(textBox2->Text);
		if (textBox3->Text != "")Number[2] = Double::Parse(textBox3->Text);
		if (textBox4->Text != "")Number[3] = Double::Parse(textBox4->Text);
		if (textBox5->Text != "")Number[4] = Double::Parse(textBox5->Text);
		if (textBox6->Text != "")Number[5] = Double::Parse(textBox6->Text);
		if (textBox7->Text != "")Number[6] = Double::Parse(textBox7->Text);
		chart1->Series["Series1"]->Points->Clear();
		chart2->Series["Series1"]->Points->Clear();
		Diagramma Hed(chart1, Number[0], Number[1], Number[2], Number[3], Number[4], Number[5], Number[6]);
		Diagramma Hed1(chart1, Number[0], Number[1], Number[2], Number[3], Number[4], Number[5], Number[6]);
		Diag *px = &Hed;
		px->dray(chart1);
		Diag *py = &Hed1;
		py->dray(chart2);
	}
	private: System::Void chart1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}


	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = "";
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Text = "";
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox3->Text = "";
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox4->Text = "";
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox5->Text = "";
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox6->Text = "";
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox7->Text = "";
}
	private: System::Void Operation1(System::Object^ sender, System::EventArgs^  e) {
		textBox1->Text = "";
	}
	private: System::Void Operation2(System::Object^ sender, System::EventArgs^  e) {
		textBox2->Text = "";
	}
	private: System::Void Operation3(System::Object^ sender, System::EventArgs^  e) {
		textBox3->Text = "";
	}
	private: System::Void Operation4(System::Object^ sender, System::EventArgs^  e) {
		textBox4->Text = "";
	}
	private: System::Void Operation5(System::Object^ sender, System::EventArgs^  e) {
		textBox5->Text = "";
	}
	private: System::Void Operation6(System::Object^ sender, System::EventArgs^  e) {
		textBox6->Text = "";
	}
	 private: System::Void Operation7(System::Object^ sender, System::EventArgs^  e) {
				 textBox7->Text = "";
			 }
private: System::Void chart2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}