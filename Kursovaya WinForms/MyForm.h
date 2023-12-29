#pragma once
#include <string>

float ZH(int index_B, int index_contour_displacement_coefficient);
float KHa(float peripheral_speed, int degree_accuracy);
float KHb(int s_k, int r_k, int s_v, int t_p);

float deltaH(int index_tv_zub, int index_vid_zub);
int g0(float module_m, int index_stepen_tochnosti);
float wHv(float module_m, int index_stepen_tochnosti, float deltaH, int g0, float v, int aw, float u);
float KHv(float wHv, float bw, float KHa, float KHb);
float wHt(float bw, float KHa, float KHb, float KHv);

float sigmaH(float ZH, float ZM, float ZE, float wHt, float dw1, float u);

namespace KursovayaWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ create_ZH;
	private: System::Windows::Forms::Label^ label_ZH;
	protected:



	private: System::Windows::Forms::ComboBox^ comboBox_ugol_B;
	private: System::Windows::Forms::ComboBox^ comboBox_koeff_smech_contura;
	private: System::Windows::Forms::Label^ label_ugol_B;
	private: System::Windows::Forms::Label^ label_koeff_smech_contura;

	private:






	private: System::Windows::Forms::Panel^ panel_ZH;
	private: System::Windows::Forms::ComboBox^ comboBox_material_shesterni;
	private: System::Windows::Forms::ComboBox^ comboBox_material_kolesa;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ create_ZM;
	private: System::Windows::Forms::Label^ label_ZM;
	private: System::Windows::Forms::Label^ print_ZM;
	private: System::Windows::Forms::Label^ print_ZH;









	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ print_bw;

	private: System::Windows::Forms::Label^ label_bw;
	private: System::Windows::Forms::Label^ print_ZE;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ create_ZE_and_bw;
	private: System::Windows::Forms::Label^ label_ZE;








	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox_z2;

	private: System::Windows::Forms::TextBox^ textBox_z1;










































private: System::Windows::Forms::TextBox^ textBox_m;







private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::TextBox^ textBox_dw1;
private: System::Windows::Forms::Label^ print_sigmaH;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Button^ create_sigmaH;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::Label^ print_wHt;
private: System::Windows::Forms::Label^ print_g0;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ print_deltaH;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::TextBox^ textBox_u;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ textBox_aw;
private: System::Windows::Forms::Label^ print_wHv;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::ComboBox^ comboBox_vid_zubyev;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ print_KHv;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Button^ create_wHv_KHv_wHt;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Label^ print_KHa;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Button^ create_KHa;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::ComboBox^ comboBox_degree_accuracy;
private: System::Windows::Forms::ComboBox^ comboBox_peripheral_speed;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::ComboBox^ comboBox_tverdost_poverhnostey;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::ComboBox^ comboBox_shestkost_vala;
private: System::Windows::Forms::ComboBox^ comboBox_raspolochenie_koles;
private: System::Windows::Forms::ComboBox^ comboBox_shirina_koles;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ print_KHb;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Button^ create_KHb;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::TextBox^ textBox_sigmaHP;


private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ label_delta;
private: System::Windows::Forms::Label^ label_dost;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label26;
































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
			this->create_ZH = (gcnew System::Windows::Forms::Button());
			this->label_ZH = (gcnew System::Windows::Forms::Label());
			this->comboBox_ugol_B = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_koeff_smech_contura = (gcnew System::Windows::Forms::ComboBox());
			this->label_ugol_B = (gcnew System::Windows::Forms::Label());
			this->label_koeff_smech_contura = (gcnew System::Windows::Forms::Label());
			this->panel_ZH = (gcnew System::Windows::Forms::Panel());
			this->print_ZH = (gcnew System::Windows::Forms::Label());
			this->comboBox_material_shesterni = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_material_kolesa = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->print_ZM = (gcnew System::Windows::Forms::Label());
			this->create_ZM = (gcnew System::Windows::Forms::Button());
			this->label_ZM = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox_m = (gcnew System::Windows::Forms::TextBox());
			this->textBox_z2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_z1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->print_bw = (gcnew System::Windows::Forms::Label());
			this->label_bw = (gcnew System::Windows::Forms::Label());
			this->print_ZE = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->create_ZE_and_bw = (gcnew System::Windows::Forms::Button());
			this->label_ZE = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox_dw1 = (gcnew System::Windows::Forms::TextBox());
			this->print_sigmaH = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->create_sigmaH = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->print_wHt = (gcnew System::Windows::Forms::Label());
			this->print_g0 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->print_deltaH = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox_u = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox_aw = (gcnew System::Windows::Forms::TextBox());
			this->print_wHv = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->comboBox_vid_zubyev = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->print_KHv = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->create_wHv_KHv_wHt = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->print_KHa = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->create_KHa = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox_degree_accuracy = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_peripheral_speed = (gcnew System::Windows::Forms::ComboBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->comboBox_tverdost_poverhnostey = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->comboBox_shestkost_vala = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_raspolochenie_koles = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_shirina_koles = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->print_KHb = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->create_KHb = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label_dost = (gcnew System::Windows::Forms::Label());
			this->textBox_sigmaHP = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label_delta = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->panel_ZH->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->SuspendLayout();
			// 
			// create_ZH
			// 
			this->create_ZH->Location = System::Drawing::Point(5, 75);
			this->create_ZH->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->create_ZH->Name = L"create_ZH";
			this->create_ZH->Size = System::Drawing::Size(134, 23);
			this->create_ZH->TabIndex = 0;
			this->create_ZH->Text = L"Вычислить ZH";
			this->create_ZH->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->create_ZH->UseVisualStyleBackColor = true;
			this->create_ZH->Click += gcnew System::EventHandler(this, &MyForm::create_ZH_Click);
			// 
			// label_ZH
			// 
			this->label_ZH->AutoSize = true;
			this->label_ZH->Location = System::Drawing::Point(3, 112);
			this->label_ZH->Name = L"label_ZH";
			this->label_ZH->Size = System::Drawing::Size(38, 16);
			this->label_ZH->TabIndex = 3;
			this->label_ZH->Text = L"ZH = ";
			// 
			// comboBox_ugol_B
			// 
			this->comboBox_ugol_B->FormattingEnabled = true;
			this->comboBox_ugol_B->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"0", L"10", L"15", L"20", L"25", L"30",
					L"35", L"40"
			});
			this->comboBox_ugol_B->Location = System::Drawing::Point(326, 13);
			this->comboBox_ugol_B->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox_ugol_B->Name = L"comboBox_ugol_B";
			this->comboBox_ugol_B->Size = System::Drawing::Size(91, 24);
			this->comboBox_ugol_B->TabIndex = 4;
			// 
			// comboBox_koeff_smech_contura
			// 
			this->comboBox_koeff_smech_contura->FormattingEnabled = true;
			this->comboBox_koeff_smech_contura->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"0.08", L"0.05", L"0.03", L"0.02",
					L"0.01", L"0.005", L"0", L"-0.005", L"-0.01", L"-0.015", L"-0.02"
			});
			this->comboBox_koeff_smech_contura->Location = System::Drawing::Point(326, 44);
			this->comboBox_koeff_smech_contura->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox_koeff_smech_contura->Name = L"comboBox_koeff_smech_contura";
			this->comboBox_koeff_smech_contura->Size = System::Drawing::Size(91, 24);
			this->comboBox_koeff_smech_contura->TabIndex = 5;
			// 
			// label_ugol_B
			// 
			this->label_ugol_B->AutoSize = true;
			this->label_ugol_B->Location = System::Drawing::Point(3, 16);
			this->label_ugol_B->Name = L"label_ugol_B";
			this->label_ugol_B->Size = System::Drawing::Size(289, 16);
			this->label_ugol_B->TabIndex = 6;
			this->label_ugol_B->Text = L"Выберите угол наклона линии зуба B, град";
			// 
			// label_koeff_smech_contura
			// 
			this->label_koeff_smech_contura->AutoSize = true;
			this->label_koeff_smech_contura->Location = System::Drawing::Point(3, 47);
			this->label_koeff_smech_contura->Name = L"label_koeff_smech_contura";
			this->label_koeff_smech_contura->Size = System::Drawing::Size(291, 16);
			this->label_koeff_smech_contura->TabIndex = 7;
			this->label_koeff_smech_contura->Text = L"Выберите коэффициент смещения контура";
			// 
			// panel_ZH
			// 
			this->panel_ZH->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_ZH->Controls->Add(this->print_ZH);
			this->panel_ZH->Controls->Add(this->label_ugol_B);
			this->panel_ZH->Controls->Add(this->label_koeff_smech_contura);
			this->panel_ZH->Controls->Add(this->create_ZH);
			this->panel_ZH->Controls->Add(this->label_ZH);
			this->panel_ZH->Controls->Add(this->comboBox_koeff_smech_contura);
			this->panel_ZH->Controls->Add(this->comboBox_ugol_B);
			this->panel_ZH->Location = System::Drawing::Point(15, 52);
			this->panel_ZH->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel_ZH->Name = L"panel_ZH";
			this->panel_ZH->Size = System::Drawing::Size(425, 135);
			this->panel_ZH->TabIndex = 8;
			// 
			// print_ZH
			// 
			this->print_ZH->AutoSize = true;
			this->print_ZH->Location = System::Drawing::Point(47, 112);
			this->print_ZH->Name = L"print_ZH";
			this->print_ZH->Size = System::Drawing::Size(14, 16);
			this->print_ZH->TabIndex = 14;
			this->print_ZH->Text = L"0";
			// 
			// comboBox_material_shesterni
			// 
			this->comboBox_material_shesterni->FormattingEnabled = true;
			this->comboBox_material_shesterni->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"сталь", L"чугун", L"текстолит",
					L"ДСП", L"полиамид(карпалон)"
			});
			this->comboBox_material_shesterni->Location = System::Drawing::Point(253, 10);
			this->comboBox_material_shesterni->Name = L"comboBox_material_shesterni";
			this->comboBox_material_shesterni->Size = System::Drawing::Size(164, 24);
			this->comboBox_material_shesterni->TabIndex = 9;
			// 
			// comboBox_material_kolesa
			// 
			this->comboBox_material_kolesa->FormattingEnabled = true;
			this->comboBox_material_kolesa->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"сталь", L"чугун", L"бронза" });
			this->comboBox_material_kolesa->Location = System::Drawing::Point(253, 41);
			this->comboBox_material_kolesa->Name = L"comboBox_material_kolesa";
			this->comboBox_material_kolesa->Size = System::Drawing::Size(164, 24);
			this->comboBox_material_kolesa->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 16);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Выберите материал шестерни";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(188, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Выберите материал колеса";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->print_ZM);
			this->panel1->Controls->Add(this->create_ZM);
			this->panel1->Controls->Add(this->label_ZM);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->comboBox_material_shesterni);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->comboBox_material_kolesa);
			this->panel1->Location = System::Drawing::Point(15, 214);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(425, 135);
			this->panel1->TabIndex = 13;
			// 
			// print_ZM
			// 
			this->print_ZM->AutoSize = true;
			this->print_ZM->Location = System::Drawing::Point(47, 113);
			this->print_ZM->Name = L"print_ZM";
			this->print_ZM->Size = System::Drawing::Size(14, 16);
			this->print_ZM->TabIndex = 16;
			this->print_ZM->Text = L"0";
			// 
			// create_ZM
			// 
			this->create_ZM->Location = System::Drawing::Point(6, 76);
			this->create_ZM->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->create_ZM->Name = L"create_ZM";
			this->create_ZM->Size = System::Drawing::Size(133, 23);
			this->create_ZM->TabIndex = 14;
			this->create_ZM->Text = L"Вычислить ZM";
			this->create_ZM->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->create_ZM->UseVisualStyleBackColor = true;
			this->create_ZM->Click += gcnew System::EventHandler(this, &MyForm::create_ZM_Click);
			// 
			// label_ZM
			// 
			this->label_ZM->AutoSize = true;
			this->label_ZM->Location = System::Drawing::Point(4, 113);
			this->label_ZM->Name = L"label_ZM";
			this->label_ZM->Size = System::Drawing::Size(39, 16);
			this->label_ZM->TabIndex = 15;
			this->label_ZM->Text = L"ZM = ";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->textBox_m);
			this->panel3->Controls->Add(this->textBox_z2);
			this->panel3->Controls->Add(this->textBox_z1);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->print_bw);
			this->panel3->Controls->Add(this->label_bw);
			this->panel3->Controls->Add(this->print_ZE);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->create_ZE_and_bw);
			this->panel3->Controls->Add(this->label_ZE);
			this->panel3->Location = System::Drawing::Point(15, 377);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(425, 172);
			this->panel3->TabIndex = 15;
			// 
			// textBox_m
			// 
			this->textBox_m->Location = System::Drawing::Point(342, 13);
			this->textBox_m->Name = L"textBox_m";
			this->textBox_m->Size = System::Drawing::Size(75, 22);
			this->textBox_m->TabIndex = 18;
			// 
			// textBox_z2
			// 
			this->textBox_z2->Location = System::Drawing::Point(342, 73);
			this->textBox_z2->Name = L"textBox_z2";
			this->textBox_z2->Size = System::Drawing::Size(75, 22);
			this->textBox_z2->TabIndex = 18;
			// 
			// textBox_z1
			// 
			this->textBox_z1->Location = System::Drawing::Point(342, 45);
			this->textBox_z1->Name = L"textBox_z1";
			this->textBox_z1->Size = System::Drawing::Size(75, 22);
			this->textBox_z1->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 76);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(301, 16);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Выберите число зубьев колеса z2 (от 4 до 35)";
			// 
			// print_bw
			// 
			this->print_bw->AutoSize = true;
			this->print_bw->Location = System::Drawing::Point(145, 143);
			this->print_bw->Name = L"print_bw";
			this->print_bw->Size = System::Drawing::Size(14, 16);
			this->print_bw->TabIndex = 16;
			this->print_bw->Text = L"0";
			// 
			// label_bw
			// 
			this->label_bw->AutoSize = true;
			this->label_bw->Location = System::Drawing::Point(102, 143);
			this->label_bw->Name = L"label_bw";
			this->label_bw->Size = System::Drawing::Size(37, 16);
			this->label_bw->TabIndex = 16;
			this->label_bw->Text = L"bw = ";
			// 
			// print_ZE
			// 
			this->print_ZE->AutoSize = true;
			this->print_ZE->Location = System::Drawing::Point(46, 143);
			this->print_ZE->Name = L"print_ZE";
			this->print_ZE->Size = System::Drawing::Size(14, 16);
			this->print_ZE->TabIndex = 14;
			this->print_ZE->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(320, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Выберите модуль на выносливость по изгибу m";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 47);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(318, 16);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Выберите число зубьев шестерни z1 (от 4 до 35)";
			// 
			// create_ZE_and_bw
			// 
			this->create_ZE_and_bw->Location = System::Drawing::Point(7, 106);
			this->create_ZE_and_bw->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->create_ZE_and_bw->Name = L"create_ZE_and_bw";
			this->create_ZE_and_bw->Size = System::Drawing::Size(157, 23);
			this->create_ZE_and_bw->TabIndex = 0;
			this->create_ZE_and_bw->Text = L"Вычислить ZE и bw";
			this->create_ZE_and_bw->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->create_ZE_and_bw->UseVisualStyleBackColor = true;
			this->create_ZE_and_bw->Click += gcnew System::EventHandler(this, &MyForm::create_ZE_and_bw_Click);
			// 
			// label_ZE
			// 
			this->label_ZE->AutoSize = true;
			this->label_ZE->Location = System::Drawing::Point(3, 143);
			this->label_ZE->Name = L"label_ZE";
			this->label_ZE->Size = System::Drawing::Size(37, 16);
			this->label_ZE->TabIndex = 3;
			this->label_ZE->Text = L"ZE = ";
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->textBox_dw1);
			this->panel6->Controls->Add(this->print_sigmaH);
			this->panel6->Controls->Add(this->label23);
			this->panel6->Controls->Add(this->create_sigmaH);
			this->panel6->Controls->Add(this->label25);
			this->panel6->Location = System::Drawing::Point(1072, 186);
			this->panel6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(397, 135);
			this->panel6->TabIndex = 19;
			// 
			// textBox_dw1
			// 
			this->textBox_dw1->Location = System::Drawing::Point(294, 13);
			this->textBox_dw1->Name = L"textBox_dw1";
			this->textBox_dw1->Size = System::Drawing::Size(98, 22);
			this->textBox_dw1->TabIndex = 20;
			// 
			// print_sigmaH
			// 
			this->print_sigmaH->AutoSize = true;
			this->print_sigmaH->Location = System::Drawing::Point(76, 87);
			this->print_sigmaH->Name = L"print_sigmaH";
			this->print_sigmaH->Size = System::Drawing::Size(14, 16);
			this->print_sigmaH->TabIndex = 14;
			this->print_sigmaH->Text = L"0";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(3, 16);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(248, 16);
			this->label23->TabIndex = 6;
			this->label23->Text = L"Выберите диаметр шестерни dw1, мм";
			// 
			// create_sigmaH
			// 
			this->create_sigmaH->Location = System::Drawing::Point(6, 45);
			this->create_sigmaH->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->create_sigmaH->Name = L"create_sigmaH";
			this->create_sigmaH->Size = System::Drawing::Size(160, 29);
			this->create_sigmaH->TabIndex = 0;
			this->create_sigmaH->Text = L"Вычислить sigmaH";
			this->create_sigmaH->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->create_sigmaH->UseVisualStyleBackColor = true;
			this->create_sigmaH->Click += gcnew System::EventHandler(this, &MyForm::create_sigmaH_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(3, 87);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(67, 16);
			this->label25->TabIndex = 3;
			this->label25->Text = L"sigmaH = ";
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->label10);
			this->panel7->Controls->Add(this->panel_ZH);
			this->panel7->Controls->Add(this->panel1);
			this->panel7->Controls->Add(this->panel3);
			this->panel7->Location = System::Drawing::Point(7, 11);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(460, 592);
			this->panel7->TabIndex = 20;
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->print_wHt);
			this->panel5->Controls->Add(this->print_g0);
			this->panel5->Controls->Add(this->label22);
			this->panel5->Controls->Add(this->print_deltaH);
			this->panel5->Controls->Add(this->label20);
			this->panel5->Controls->Add(this->textBox_u);
			this->panel5->Controls->Add(this->label12);
			this->panel5->Controls->Add(this->textBox_aw);
			this->panel5->Controls->Add(this->print_wHv);
			this->panel5->Controls->Add(this->label21);
			this->panel5->Controls->Add(this->comboBox_vid_zubyev);
			this->panel5->Controls->Add(this->label11);
			this->panel5->Controls->Add(this->print_KHv);
			this->panel5->Controls->Add(this->label17);
			this->panel5->Controls->Add(this->label18);
			this->panel5->Controls->Add(this->create_wHv_KHv_wHt);
			this->panel5->Controls->Add(this->label19);
			this->panel5->Location = System::Drawing::Point(15, 444);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(486, 229);
			this->panel5->TabIndex = 17;
			// 
			// print_wHt
			// 
			this->print_wHt->AutoSize = true;
			this->print_wHt->Location = System::Drawing::Point(55, 190);
			this->print_wHt->Name = L"print_wHt";
			this->print_wHt->Size = System::Drawing::Size(14, 16);
			this->print_wHt->TabIndex = 20;
			this->print_wHt->Text = L"0";
			// 
			// print_g0
			// 
			this->print_g0->AutoSize = true;
			this->print_g0->Location = System::Drawing::Point(179, 151);
			this->print_g0->Name = L"print_g0";
			this->print_g0->Size = System::Drawing::Size(14, 16);
			this->print_g0->TabIndex = 23;
			this->print_g0->Text = L"0";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(7, 190);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(42, 16);
			this->label22->TabIndex = 19;
			this->label22->Text = L"wHt = ";
			// 
			// print_deltaH
			// 
			this->print_deltaH->AutoSize = true;
			this->print_deltaH->Location = System::Drawing::Point(69, 151);
			this->print_deltaH->Name = L"print_deltaH";
			this->print_deltaH->Size = System::Drawing::Size(14, 16);
			this->print_deltaH->TabIndex = 21;
			this->print_deltaH->Text = L"0";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(138, 151);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(35, 16);
			this->label20->TabIndex = 22;
			this->label20->Text = L"g0 = ";
			// 
			// textBox_u
			// 
			this->textBox_u->Location = System::Drawing::Point(393, 75);
			this->textBox_u->Name = L"textBox_u";
			this->textBox_u->Size = System::Drawing::Size(88, 22);
			this->textBox_u->TabIndex = 19;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(3, 151);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(60, 16);
			this->label12->TabIndex = 20;
			this->label12->Text = L"deltaH = ";
			// 
			// textBox_aw
			// 
			this->textBox_aw->Location = System::Drawing::Point(393, 47);
			this->textBox_aw->Name = L"textBox_aw";
			this->textBox_aw->Size = System::Drawing::Size(88, 22);
			this->textBox_aw->TabIndex = 18;
			// 
			// print_wHv
			// 
			this->print_wHv->AutoSize = true;
			this->print_wHv->Location = System::Drawing::Point(199, 190);
			this->print_wHv->Name = L"print_wHv";
			this->print_wHv->Size = System::Drawing::Size(14, 16);
			this->print_wHv->TabIndex = 19;
			this->print_wHv->Text = L"0";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(147, 190);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(46, 16);
			this->label21->TabIndex = 18;
			this->label21->Text = L"wHv = ";
			// 
			// comboBox_vid_zubyev
			// 
			this->comboBox_vid_zubyev->FormattingEnabled = true;
			this->comboBox_vid_zubyev->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Прямые без модификации головки", L"Прямые с модификацией головки",
					L"Косые"
			});
			this->comboBox_vid_zubyev->Location = System::Drawing::Point(201, 13);
			this->comboBox_vid_zubyev->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox_vid_zubyev->Name = L"comboBox_vid_zubyev";
			this->comboBox_vid_zubyev->Size = System::Drawing::Size(280, 24);
			this->comboBox_vid_zubyev->TabIndex = 17;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 76);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(224, 16);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Выберите Передаточное число u";
			// 
			// print_KHv
			// 
			this->print_KHv->AutoSize = true;
			this->print_KHv->Location = System::Drawing::Point(334, 190);
			this->print_KHv->Name = L"print_KHv";
			this->print_KHv->Size = System::Drawing::Size(14, 16);
			this->print_KHv->TabIndex = 14;
			this->print_KHv->Text = L"0";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(3, 16);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(149, 16);
			this->label17->TabIndex = 6;
			this->label17->Text = L"Выберите вид зубьев";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(3, 47);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(249, 16);
			this->label18->TabIndex = 7;
			this->label18->Text = L"Выберите Межосевое расстояние aw";
			// 
			// create_wHv_KHv_wHt
			// 
			this->create_wHv_KHv_wHt->Location = System::Drawing::Point(6, 110);
			this->create_wHv_KHv_wHt->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->create_wHv_KHv_wHt->Name = L"create_wHv_KHv_wHt";
			this->create_wHv_KHv_wHt->Size = System::Drawing::Size(207, 23);
			this->create_wHv_KHv_wHt->TabIndex = 0;
			this->create_wHv_KHv_wHt->Text = L"Вычислить wHv, KHv и wHt";
			this->create_wHv_KHv_wHt->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->create_wHv_KHv_wHt->UseVisualStyleBackColor = true;
			this->create_wHv_KHv_wHt->Click += gcnew System::EventHandler(this, &MyForm::create_wHv_KHv_wHt_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(282, 190);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(45, 16);
			this->label19->TabIndex = 3;
			this->label19->Text = L"KHv = ";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->print_KHa);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->create_KHa);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->comboBox_degree_accuracy);
			this->panel2->Controls->Add(this->comboBox_peripheral_speed);
			this->panel2->Location = System::Drawing::Point(15, 51);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(370, 135);
			this->panel2->TabIndex = 14;
			// 
			// print_KHa
			// 
			this->print_KHa->AutoSize = true;
			this->print_KHa->Location = System::Drawing::Point(55, 112);
			this->print_KHa->Name = L"print_KHa";
			this->print_KHa->Size = System::Drawing::Size(14, 16);
			this->print_KHa->TabIndex = 14;
			this->print_KHa->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(239, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Выберите окружную скорость v, м/c";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 47);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(192, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Выберите степень точности";
			// 
			// create_KHa
			// 
			this->create_KHa->Location = System::Drawing::Point(5, 75);
			this->create_KHa->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->create_KHa->Name = L"create_KHa";
			this->create_KHa->Size = System::Drawing::Size(131, 23);
			this->create_KHa->TabIndex = 0;
			this->create_KHa->Text = L"Вычислить KHa";
			this->create_KHa->UseVisualStyleBackColor = true;
			this->create_KHa->Click += gcnew System::EventHandler(this, &MyForm::create_KHa_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 112);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 16);
			this->label6->TabIndex = 3;
			this->label6->Text = L"KHa = ";
			// 
			// comboBox_degree_accuracy
			// 
			this->comboBox_degree_accuracy->FormattingEnabled = true;
			this->comboBox_degree_accuracy->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"5", L"6", L"7", L"8", L"9" });
			this->comboBox_degree_accuracy->Location = System::Drawing::Point(268, 44);
			this->comboBox_degree_accuracy->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox_degree_accuracy->Name = L"comboBox_degree_accuracy";
			this->comboBox_degree_accuracy->Size = System::Drawing::Size(88, 24);
			this->comboBox_degree_accuracy->TabIndex = 5;
			// 
			// comboBox_peripheral_speed
			// 
			this->comboBox_peripheral_speed->FormattingEnabled = true;
			this->comboBox_peripheral_speed->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"2.5", L"5", L"10", L"15", L"20",
					L"25"
			});
			this->comboBox_peripheral_speed->Location = System::Drawing::Point(268, 14);
			this->comboBox_peripheral_speed->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox_peripheral_speed->Name = L"comboBox_peripheral_speed";
			this->comboBox_peripheral_speed->Size = System::Drawing::Size(88, 24);
			this->comboBox_peripheral_speed->TabIndex = 4;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->comboBox_tverdost_poverhnostey);
			this->panel4->Controls->Add(this->label16);
			this->panel4->Controls->Add(this->comboBox_shestkost_vala);
			this->panel4->Controls->Add(this->comboBox_raspolochenie_koles);
			this->panel4->Controls->Add(this->comboBox_shirina_koles);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->print_KHb);
			this->panel4->Controls->Add(this->label13);
			this->panel4->Controls->Add(this->label14);
			this->panel4->Controls->Add(this->create_KHb);
			this->panel4->Controls->Add(this->label15);
			this->panel4->Location = System::Drawing::Point(15, 213);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(486, 208);
			this->panel4->TabIndex = 16;
			// 
			// comboBox_tverdost_poverhnostey
			// 
			this->comboBox_tverdost_poverhnostey->FormattingEnabled = true;
			this->comboBox_tverdost_poverhnostey->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L">350", L"<=350" });
			this->comboBox_tverdost_poverhnostey->Location = System::Drawing::Point(375, 105);
			this->comboBox_tverdost_poverhnostey->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox_tverdost_poverhnostey->Name = L"comboBox_tverdost_poverhnostey";
			this->comboBox_tverdost_poverhnostey->Size = System::Drawing::Size(106, 24);
			this->comboBox_tverdost_poverhnostey->TabIndex = 20;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(2, 108);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(345, 16);
			this->label16->TabIndex = 17;
			this->label16->Text = L"Выберите твердость рабочих поверхностей зубьев";
			// 
			// comboBox_shestkost_vala
			// 
			this->comboBox_shestkost_vala->FormattingEnabled = true;
			this->comboBox_shestkost_vala->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"-", L"Весьма жесткий вал", L"Менее жесткий вал" });
			this->comboBox_shestkost_vala->Location = System::Drawing::Point(375, 72);
			this->comboBox_shestkost_vala->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox_shestkost_vala->Name = L"comboBox_shestkost_vala";
			this->comboBox_shestkost_vala->Size = System::Drawing::Size(106, 24);
			this->comboBox_shestkost_vala->TabIndex = 19;
			// 
			// comboBox_raspolochenie_koles
			// 
			this->comboBox_raspolochenie_koles->FormattingEnabled = true;
			this->comboBox_raspolochenie_koles->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Симметричное", L"Несимметричное",
					L"Консольное"
			});
			this->comboBox_raspolochenie_koles->Location = System::Drawing::Point(375, 41);
			this->comboBox_raspolochenie_koles->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox_raspolochenie_koles->Name = L"comboBox_raspolochenie_koles";
			this->comboBox_raspolochenie_koles->Size = System::Drawing::Size(106, 24);
			this->comboBox_raspolochenie_koles->TabIndex = 18;
			// 
			// comboBox_shirina_koles
			// 
			this->comboBox_shirina_koles->FormattingEnabled = true;
			this->comboBox_shirina_koles->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"0.2", L"0.4", L"0.6", L"0.8", L"1.0",
					L"1.2", L"1.4", L"1.6"
			});
			this->comboBox_shirina_koles->Location = System::Drawing::Point(375, 12);
			this->comboBox_shirina_koles->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox_shirina_koles->Name = L"comboBox_shirina_koles";
			this->comboBox_shirina_koles->Size = System::Drawing::Size(106, 24);
			this->comboBox_shirina_koles->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(177, 16);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Выберите жесткость вала";
			// 
			// print_KHb
			// 
			this->print_KHb->AutoSize = true;
			this->print_KHb->Location = System::Drawing::Point(55, 176);
			this->print_KHb->Name = L"print_KHb";
			this->print_KHb->Size = System::Drawing::Size(14, 16);
			this->print_KHb->TabIndex = 14;
			this->print_KHb->Text = L"0";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(3, 16);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(278, 16);
			this->label13->TabIndex = 6;
			this->label13->Text = L"Выберите относительную ширину колеса";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(3, 47);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(342, 16);
			this->label14->TabIndex = 7;
			this->label14->Text = L"Выберите расположение колес относительно опор";
			// 
			// create_KHb
			// 
			this->create_KHb->Location = System::Drawing::Point(6, 143);
			this->create_KHb->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->create_KHb->Name = L"create_KHb";
			this->create_KHb->Size = System::Drawing::Size(130, 23);
			this->create_KHb->TabIndex = 0;
			this->create_KHb->Text = L"Вычислить KHb";
			this->create_KHb->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->create_KHb->UseVisualStyleBackColor = true;
			this->create_KHb->Click += gcnew System::EventHandler(this, &MyForm::create_KHb_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(3, 176);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(46, 16);
			this->label15->TabIndex = 3;
			this->label15->Text = L"KHb = ";
			// 
			// panel8
			// 
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->label26);
			this->panel8->Controls->Add(this->panel4);
			this->panel8->Controls->Add(this->panel2);
			this->panel8->Controls->Add(this->panel5);
			this->panel8->Location = System::Drawing::Point(500, 12);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(518, 717);
			this->panel8->TabIndex = 21;
			// 
			// panel9
			// 
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Controls->Add(this->label_dost);
			this->panel9->Controls->Add(this->textBox_sigmaHP);
			this->panel9->Controls->Add(this->label24);
			this->panel9->Controls->Add(this->button1);
			this->panel9->Controls->Add(this->label_delta);
			this->panel9->Location = System::Drawing::Point(1072, 343);
			this->panel9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(397, 177);
			this->panel9->TabIndex = 22;
			// 
			// label_dost
			// 
			this->label_dost->AutoSize = true;
			this->label_dost->Location = System::Drawing::Point(3, 132);
			this->label_dost->MinimumSize = System::Drawing::Size(50, 18);
			this->label_dost->Name = L"label_dost";
			this->label_dost->Size = System::Drawing::Size(50, 18);
			this->label_dost->TabIndex = 23;
			// 
			// textBox_sigmaHP
			// 
			this->textBox_sigmaHP->Location = System::Drawing::Point(328, 13);
			this->textBox_sigmaHP->Name = L"textBox_sigmaHP";
			this->textBox_sigmaHP->Size = System::Drawing::Size(64, 22);
			this->textBox_sigmaHP->TabIndex = 20;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(3, 16);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(307, 16);
			this->label24->TabIndex = 6;
			this->label24->Text = L"Выберите допускаемое напряжение  sigmaHP";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 45);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(245, 29);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Провести проверочный расчет ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label_delta
			// 
			this->label_delta->AutoSize = true;
			this->label_delta->Location = System::Drawing::Point(3, 88);
			this->label_delta->MinimumSize = System::Drawing::Size(50, 18);
			this->label_delta->Name = L"label_delta";
			this->label_delta->Size = System::Drawing::Size(50, 18);
			this->label_delta->TabIndex = 3;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(196, 18);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 16);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Этап 1";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(247, 17);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(50, 16);
			this->label26->TabIndex = 17;
			this->label26->Text = L"Этап 2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1582, 753);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel_ZH->ResumeLayout(false);
			this->panel_ZH->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	//Вычислить ZH
	private: System::Void create_ZH_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (this->comboBox_ugol_B->SelectedIndex != -1 && this->comboBox_koeff_smech_contura->SelectedIndex != -1)
		{
			int index_B = Convert::ToInt32(this->comboBox_ugol_B->SelectedIndex);
			int index_koeff_smech_contura = Convert::ToInt32(this->comboBox_koeff_smech_contura->SelectedIndex);

			this->print_ZH->Text = ZH(index_B, index_koeff_smech_contura).ToString();
		}
		else 
		{
			MessageBox::Show(this, "По-моему ты чего-то перепутал, не?", "Error", MessageBoxButtons::OK);
		}
	}

	//Вычислить ZM
	private: System::Void create_ZM_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (this->comboBox_material_shesterni->SelectedIndex != -1 && this->comboBox_material_kolesa->SelectedIndex != -1)
		{

			float ZM = Convert::ToSingle(this->print_ZM->Text);

			System::String^ material_shesterni = Convert::ToString(this->comboBox_material_shesterni->SelectedItem);
			System::String^ material_kolesa = Convert::ToString(this->comboBox_material_kolesa->SelectedItem);


			if (material_kolesa == "сталь")
			{
				if (material_shesterni == "сталь")
					ZM = 274;
				else if (material_shesterni == "текстолит")
					ZM = 69.5;
				else if (material_shesterni == "ДСП")
					ZM = 35;
				else if (material_shesterni == "полиамид(карпалон)")
					ZM = 47.5;
				else
				{
					ZM = 0;
					MessageBox::Show(this, "По-моему ты чего-то перепутал, не?", "Error", MessageBoxButtons::OK);
				}
			}

			else if (material_kolesa == "чугун")
			{
				if (material_shesterni == "сталь")
					ZM = 234;
				else if (material_shesterni == "чугун")
					ZM = 209;
				else
				{
					ZM = 0;
					MessageBox::Show(this, "По-моему ты чего-то перепутал, не?", "Error", MessageBoxButtons::OK);
				}
			}

			else if (material_kolesa =="бронза")
			{
				if (material_shesterni == "сталь")
					ZM = 225;
				else
				{
					ZM = 0;
					MessageBox::Show(this, "По-моему ты чего-то перепутал, не?", "Error", MessageBoxButtons::OK);
				}
			}

			this->print_ZM->Text = ZM.ToString();
		}
		else 
		{
			MessageBox::Show(this, "По-моему ты чего-то перепутал, не?", "Error", MessageBoxButtons::OK);
		}
	}

	//Вычислить ZE и bw
	private: System::Void create_ZE_and_bw_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->comboBox_ugol_B->SelectedIndex != -1 && this->textBox_m->Text != "" && this->textBox_z1->Text != "" && this->textBox_z2->Text != "")
		{
			float m = Convert::ToSingle(this->textBox_m->Text);
			int angle_radians = Convert::ToInt32(this->comboBox_ugol_B->SelectedItem);
			double B = angle_radians * (3.14 / 180.0);

			int z1 = Convert::ToInt32(this->textBox_z1->Text);
			int z2 = Convert::ToInt32(this->textBox_z2->Text);

			float bw = (0.89 * 3.14 * m) / sin(B);
			this->print_bw->Text = bw.ToString();

			float Ea = (1.88 - 3.2 * ((1 / z1) + (1 / z2))) * cos(B);
			float ZE = sqrt((4 - Ea) / 3);
			this->print_ZE->Text = ZE.ToString();
		}
		else
		{
			MessageBox::Show(this, "По-моему ты чего-то перепутал, не?", "Error", MessageBoxButtons::OK);
		}
	}

	//Вычислить KHa
	private: System::Void create_KHa_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBox_peripheral_speed->SelectedIndex != -1 && this->comboBox_degree_accuracy->SelectedIndex != -1)
		{
			float okr_speed_v;
			if (this->comboBox_peripheral_speed->Text->ToString() == "2.5")
				okr_speed_v = 2.5;
			else
				okr_speed_v = Convert::ToSingle(this->comboBox_peripheral_speed->Text);

			int degree_accuracy = Convert::ToInt32(this->comboBox_degree_accuracy->SelectedItem);

			this->print_KHa->Text = KHa(okr_speed_v, degree_accuracy).ToString();
		}
		else
		{
			MessageBox::Show(this, "По-моему ты чего-то перепутал, не?", "Error", MessageBoxButtons::OK);
		}
	}

	//Вычислить KHb
	private: System::Void create_KHb_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBox_shirina_koles->SelectedIndex != -1 && this->comboBox_raspolochenie_koles->SelectedIndex != -1 && this->comboBox_shestkost_vala->SelectedIndex != -1 && this->comboBox_tverdost_poverhnostey->SelectedIndex != -1)
		{
			int s_k = Convert::ToInt32(this->comboBox_shirina_koles->SelectedIndex);
			int r_k = Convert::ToInt32(this->comboBox_raspolochenie_koles->SelectedIndex);
			int s_v = Convert::ToInt32(this->comboBox_shestkost_vala->SelectedIndex);
			int t_p = Convert::ToInt32(this->comboBox_tverdost_poverhnostey->SelectedIndex);

			this->print_KHb->Text = KHb(s_k, r_k, s_v, t_p).ToString();
		}
		else
		{
			MessageBox::Show(this, "По-моему ты чего-то перепутал, не?", "Error", MessageBoxButtons::OK);
		}
	}

	//Вычислить KHv, wHt и wHv
	private: System::Void create_wHv_KHv_wHt_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBox_tverdost_poverhnostey->SelectedIndex != -1 &&
			this->comboBox_vid_zubyev->SelectedIndex != -1 && 
			this->textBox_aw->Text != "" && this->textBox_u->Text != "" &&
			this->comboBox_degree_accuracy->SelectedIndex != -1 && this->textBox_m->Text != "" && 
			this->comboBox_peripheral_speed->SelectedIndex != -1)
		{
			int index_tv_zub = Convert::ToInt32(this->comboBox_tverdost_poverhnostey->SelectedIndex);
			int index_vid_zub = Convert::ToInt32(this->comboBox_vid_zubyev->SelectedIndex);
			float module_m = Convert::ToSingle(this->textBox_m->Text);
			int index_stepen_tochnosti = Convert::ToInt32(this->comboBox_degree_accuracy->SelectedIndex);

			float okr_speed_v;
			if (this->comboBox_peripheral_speed->Text->ToString() == "2.5")
				okr_speed_v = 2.5;
			else 
				okr_speed_v = Convert::ToSingle(this->comboBox_peripheral_speed->Text);
			int aw = Convert::ToSingle(this->textBox_aw->Text);
			float u = Convert::ToSingle(this->textBox_u->Text);


			float delta_H = Convert::ToSingle(deltaH(index_tv_zub, index_vid_zub));
			int g_0 = Convert::ToInt32(g0(index_tv_zub, index_vid_zub));
			float w_Hv= Convert::ToSingle(wHv(module_m, index_stepen_tochnosti,delta_H, g_0, okr_speed_v, aw, u));
			float K_Hv = Convert::ToSingle(KHv(w_Hv, Convert::ToSingle(this->print_bw->Text), Convert::ToSingle(this->print_KHa->Text), Convert::ToSingle(this->print_KHb->Text)));
			float w_Ht = Convert::ToSingle(wHt(Convert::ToSingle(this->print_bw->Text), Convert::ToSingle(this->print_KHa->Text), Convert::ToSingle(this->print_KHb->Text), K_Hv));

			this->print_deltaH->Text = delta_H.ToString();
			this->print_g0->Text = g_0.ToString();
			this->print_wHv->Text = w_Hv.ToString();
			this->print_KHv->Text = K_Hv.ToString();
			this->print_wHt->Text = w_Ht.ToString();

		}
		else
		{
			MessageBox::Show(this, "По-моему ты чего-то перепутал, не?", "Error", MessageBoxButtons::OK);
		}
	}

	//Вычислить sigmaH
	private: System::Void create_sigmaH_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->print_ZH->Text != "" && this->print_ZH->Text != "0" && this->print_ZM->Text != "" && this->print_ZM->Text != "0" && this->print_ZE->Text != "" && this->print_ZE->Text != "0" && this->print_wHt->Text != "" && this->print_wHt->Text != "0" && this->textBox_dw1->Text != "" && this->textBox_u->Text != "")
		{
			float ZH = Convert::ToSingle(this->print_ZH->Text);
			float ZM = Convert::ToSingle(this->print_ZM->Text);
			float ZE = Convert::ToSingle(this->print_ZE->Text);
			float wHt = Convert::ToSingle(this->print_wHt->Text);
			float dw1 = Convert::ToSingle(this->textBox_dw1->Text);
			float u = Convert::ToSingle(this->textBox_u->Text);

			float sigma_H = Convert::ToSingle(sigmaH(ZH, ZM, ZE, wHt, dw1, u));

			this->print_sigmaH->Text = sigma_H.ToString();
		}
		else 
		{
			MessageBox::Show(this, "По-моему ты чего-то перепутал, не?", "Error", MessageBoxButtons::OK);
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->print_sigmaH->Text != "" && this->textBox_sigmaHP->Text != "")
		{
			float sigmaH = Convert::ToSingle(this->print_sigmaH->Text);
			float sigmaHP = Convert::ToSingle(this->textBox_sigmaHP->Text);

			float delta = sigmaHP - sigmaH;

			this->label_delta->Text = "Отклонение delta = " + delta.ToString();
			if (delta<0)
				this->label_dost->Text = "Требуется определение степени достоверности расчета в зависимости от отклонения delta";
		}
		else
		{
			MessageBox::Show(this, "По-моему ты чего-то перепутал, не?", "Error", MessageBoxButtons::OK);
		}
	}
};
}


float ZH(int index_B, int index_contour_displacement_coefficient) {

	float _ZH[8][11] = {
		{1.48, 1.52, 1.58, 1.62, 1.68, 1.71, 1.76, 1.83, 1.93, 2.14, 0},
		{1.47, 1.51, 1.56, 1.60, 1.66, 1.69, 1.74, 1.80, 1.90, 2.07, 0},
		{1.46, 1.50, 1.55, 1.58, 1.63, 1.67, 1.71, 1.77, 1.86, 2.00, 2.35},
		{1.43, 1.47, 1.52, 1.55, 1.60, 1.63, 1.67, 1.72, 1.80, 1.91, 2.13},
		{1.42, 1.45, 1.49, 1.52, 1.57, 1.59, 1.62, 1.67, 1.73, 1.81, 1.97},
		{1.38, 1.42, 1.45, 1.48, 1.52, 1.53, 1.56, 1.60, 1.65, 1.70, 1.81},
		{1.35, 1.37, 1.40, 1.42, 1.46, 1.48, 1.50, 1.53, 1.56, 1.60, 1.66},
		{1.30, 1.32, 1.34, 1.37, 1.39, 1.41, 1.42, 1.45, 1.47, 1.50, 1.53} 
	};

	float ZH = _ZH[index_B][index_contour_displacement_coefficient];
	return (ZH);
}

float KHa(float peripheral_speed, int degree_accuracy) {

	float KHa = 1;
	return(KHa);
}

float KHb(int s_k, int r_k, int s_v, int t_p) {

	if ((s_k == 0 && r_k == 0 && s_v == 0 && t_p == 0) || (s_k == 0 && r_k == 0 && s_v == 0 && t_p == 1)
		|| (s_k == 0 && r_k == 1 && s_v == 1 && t_p == 1) || (s_k == 1 && r_k == 0 && s_v == 0 && t_p == 1))
		return (1.0);
	else if ((s_k == 0 && r_k == 1 && s_v == 1 && t_p == 0) || (s_k == 1 && r_k == 0 && s_v == 0 && t_p == 0)
		|| (s_k == 2 && r_k == 0 && s_v == 0 && t_p == 1))
		return (1.01);
	else if ((s_k == 0 && r_k == 1 && s_v == 2 && t_p == 1) || (s_k == 1 && r_k == 1 && s_v == 1 && t_p == 1))
		return (1.02);
	else if ((s_k == 2 && r_k == 0 && s_v == 0 && t_p == 0) || (s_k == 3 && r_k == 0 && s_v == 0 && t_p == 1))
		return (1.03);
	else if ((s_k == 2 && r_k == 1 && s_v == 1 && t_p == 1) || (s_k == 4 && r_k == 0 && s_v == 0 && t_p == 1))
		return (1.04);
	else if ((s_k == 1 && r_k == 1 && s_v == 1 && t_p == 0) || (s_k == 1 && r_k == 1 && s_v == 2 && t_p == 1)
		|| (s_k == 5 && r_k == 0 && s_v == 0 && t_p == 1))
		return (1.05);
	else if ((s_k == 0 && r_k == 1 && s_v == 2 && t_p == 0) || (s_k == 3 && r_k == 1 && s_v == 1 && t_p == 1))
		return (1.06);
	else if ((s_k == 0 && r_k == 2 && s_v == 0 && t_p == 1) || (s_k == 6 && r_k == 0 && s_v == 0 && t_p == 1))
		return (1.07);
	else if (s_k == 3 && r_k == 2 && s_v == 0 && t_p == 0)
		return (1.85);
	else if (s_k == 3 && r_k == 2 && s_v == 0 && t_p == 1)
		return (1.35);
	else if (s_k == 4 && r_k == 1 && s_v == 2 && t_p == 0)
		return (1.37);
	else if (s_k == 5 && r_k == 1 && s_v == 2 && t_p == 0)
		return (1.5);
	else if (s_k == 6 && r_k == 1 && s_v == 1 && t_p == 0)
		return (1.32);
	else if (s_k == 6 && r_k == 1 && s_v == 2 && t_p == 0)
		return (1.6);
	else if (s_k == 7 && r_k == 1 && s_v == 1 && t_p == 0)
		return (1.4);
	else if (s_k == 7 && r_k == 1 && s_v == 2 && t_p == 1)
		return (1.28);
	else if ((s_k == 1 && r_k == 2 && s_v == 0 && t_p == 1) || (s_k == 6 && r_k == 0 && s_v == 0 && t_p == 0))
		return (1.15);
	else if ((s_k == 2 && r_k == 1 && s_v == 2 && t_p == 0) || (s_k == 7 && r_k == 0 && s_v == 0 && t_p == 0))
		return (1.20);
	else if (s_k == 3 && r_k == 1 && s_v == 1 && t_p == 0)
		return (1.14);
	else if (s_k == 3 && r_k == 1 && s_v == 2 && t_p == 1)
		return (1.12);
	else if (s_k == 4 && r_k == 0 && s_v == 0 && t_p == 0)
		return (1.10);
	else if (s_k == 5 && r_k == 0 && s_v == 0 && t_p == 0)
		return (1.13);


	else if ((s_k == 7 && r_k == 2 && s_v == 0 && t_p == 0) || (s_k == 7 && r_k == 2 && s_v == 0 && t_p == 1)
		|| (s_k == 7 && r_k == 1 && s_v == 2 && t_p == 0) || (s_k == 6 && r_k == 2 && s_v == 0 && t_p == 0)
		|| (s_k == 6 && r_k == 2 && s_v == 0 && t_p == 1) || (s_k == 5 && r_k == 2 && s_v == 0 && t_p == 0)
		|| (s_k == 5 && r_k == 2 && s_v == 0 && t_p == 1) || (s_k == 4 && r_k == 2 && s_v == 0 && t_p == 0)
		|| (s_k == 4 && r_k == 2 && s_v == 0 && t_p == 1))
		return (0);
	else
		return (0);
}

float deltaH(int index_tv_zub, int index_vid_zub)
{
	float delta_H[2][3] = { {0.014, 0.010, 0.004},{0.006, 0.004, 0.002}};
	return(delta_H[index_tv_zub][index_vid_zub]);
}

int g0(float module_m, int index_stepen_tochnosti)
{
	int index_module_m;
	if (module_m <= 3.5)
		index_module_m = 0;
	else if (module_m > 3.5 && module_m <= 10)
		index_module_m = 1;
	else if (module_m > 10)
		index_module_m = 2;

	float g0[3][5] = { {28, 38, 47, 56, 73}, {31, 42, 53, 61, 82}, {37, 48, 64, 73, 100} };
	return(g0[index_module_m][index_stepen_tochnosti]);
}

float wHv(float module_m, int index_stepen_tochnosti, float deltaH, int g0, float v, int aw, float u)
{
	float wHv = deltaH * g0 * v * sqrt(aw / u);

	float _wHv[3][5] = { {85, 160, 240, 380, 700}, {105, 194, 310, 410, 880}, {150, 250, 450, 590, 1050} };
	int index_module_m;
	if (module_m <= 3.5)
		index_module_m = 0;
	else if (module_m > 3.5 && module_m <= 10)
		index_module_m = 1;
	else if (module_m > 10)
		index_module_m = 2;

	if (wHv > _wHv[index_module_m][index_stepen_tochnosti])
		wHv = _wHv[index_module_m][index_stepen_tochnosti];

	return(wHv);
}

float KHv(float wHv, float bw, float KHa, float KHb)
{
	int Ft = 50;
	float KHv = 1 + (wHv * bw) / (Ft * KHa * KHb);
	return(KHv);
}

float wHt(float bw, float KHa, float KHb, float KHv)
{
	float Ft = 50;
	float wHt = (Ft / bw) * KHa * KHb * KHv;

	return(wHt);
}

float sigmaH(float ZH, float ZM, float ZE, float wHt, float dw1, float u)
{
	float sigmaH = ZH * ZM * ZE * sqrt(wHt * (u + 1) / dw1 / u);
	return(sigmaH);
}