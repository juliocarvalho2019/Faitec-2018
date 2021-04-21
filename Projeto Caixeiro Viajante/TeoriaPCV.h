#pragma once
#include"TeoriaPCV1.h"
namespace ProjetoCaixeiroViajante {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TeoriaPCV
	/// </summary>
	public ref class TeoriaPCV : public System::Windows::Forms::Form
	{
	public:
		TeoriaPCV(void)
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
		~TeoriaPCV()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_voltar;
	private: System::Windows::Forms::Button^  btn_Proximo;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TeoriaPCV::typeid));
			this->btn_voltar = (gcnew System::Windows::Forms::Button());
			this->btn_Proximo = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_voltar
			// 
			this->btn_voltar->BackColor = System::Drawing::Color::Transparent;
			this->btn_voltar->FlatAppearance->BorderSize = 0;
			this->btn_voltar->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_voltar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_voltar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_voltar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_voltar->Location = System::Drawing::Point(46, 539);
			this->btn_voltar->Name = L"btn_voltar";
			this->btn_voltar->Size = System::Drawing::Size(120, 30);
			this->btn_voltar->TabIndex = 0;
			this->btn_voltar->UseVisualStyleBackColor = false;
			this->btn_voltar->Click += gcnew System::EventHandler(this, &TeoriaPCV::btn_voltar_Click);
			// 
			// btn_Proximo
			// 
			this->btn_Proximo->BackColor = System::Drawing::Color::Transparent;
			this->btn_Proximo->FlatAppearance->BorderSize = 0;
			this->btn_Proximo->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->btn_Proximo->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->btn_Proximo->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btn_Proximo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Proximo->Location = System::Drawing::Point(881, 539);
			this->btn_Proximo->Name = L"btn_Proximo";
			this->btn_Proximo->Size = System::Drawing::Size(130, 30);
			this->btn_Proximo->TabIndex = 1;
			this->btn_Proximo->UseVisualStyleBackColor = false;
			this->btn_Proximo->Click += gcnew System::EventHandler(this, &TeoriaPCV::btn_Proximo_Click);
			// 
			// TeoriaPCV
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1039, 595);
			this->Controls->Add(this->btn_Proximo);
			this->Controls->Add(this->btn_voltar);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TeoriaPCV";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TeoriaPCV";
			this->Load += gcnew System::EventHandler(this, &TeoriaPCV::TeoriaPCV_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn_voltar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		Close();
	}
	private: System::Void btn_Proximo_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Visible = false;
		Close();
		TeoriaPCV1 tpcv;
		tpcv.ShowDialog();
		this->Visible = true;
	}
	private: System::Void TeoriaPCV_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}