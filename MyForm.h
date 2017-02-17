#pragma once
#include <msclr/marshal_cppstd.h>
#include <windows.h>
#include <string>
#include "Tree.h"
#include "ListOfTree.h"
#include "Proses.h"
#include <math.h>
#include <time.h>
#include <iostream>
#include <fstream>

namespace CppWinForm3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_Compress;
	private: System::Windows::Forms::Button^  button_Add;
	private: System::Windows::Forms::CheckedListBox^  lbxAllFiles;
	private: System::Windows::Forms::ListBox^  lbxName;
	protected:

	protected:



	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Button^  btn_Extract;
	private: System::Windows::Forms::Button^  btn_Delete;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  addToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteAllToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  closeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  actionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  compressToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  extractToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  instructionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  compressToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  extractToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  documentationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  referenceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^  buyFullVersionToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ListBox^  lbxSize;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ToolStripStatusLabel^  Status;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ToolStripStatusLabel^  Copyright;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^  selectThemesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  defaultToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  lightToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  darkToolStripMenuItem;




	protected:

	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn_Compress = (gcnew System::Windows::Forms::Button());
			this->button_Add = (gcnew System::Windows::Forms::Button());
			this->lbxAllFiles = (gcnew System::Windows::Forms::CheckedListBox());
			this->lbxName = (gcnew System::Windows::Forms::ListBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->btn_Extract = (gcnew System::Windows::Forms::Button());
			this->btn_Delete = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->compressToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->extractToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->selectThemesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->defaultToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lightToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->darkToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->instructionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->compressToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->extractToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->documentationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->referenceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->buyFullVersionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->Copyright = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->Status = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->lbxSize = (gcnew System::Windows::Forms::ListBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_Compress
			// 
			this->btn_Compress->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Compress.BackgroundImage")));
			this->btn_Compress->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_Compress->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Compress->Location = System::Drawing::Point(8, 31);
			this->btn_Compress->Name = L"btn_Compress";
			this->btn_Compress->Size = System::Drawing::Size(74, 61);
			this->btn_Compress->TabIndex = 0;
			this->btn_Compress->UseVisualStyleBackColor = true;
			this->btn_Compress->Click += gcnew System::EventHandler(this, &MyForm::btn_Compress_Click);
			// 
			// button_Add
			// 
			this->button_Add->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_Add.BackgroundImage")));
			this->button_Add->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button_Add->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_Add->Location = System::Drawing::Point(198, 31);
			this->button_Add->Name = L"button_Add";
			this->button_Add->Size = System::Drawing::Size(74, 61);
			this->button_Add->TabIndex = 1;
			this->button_Add->UseVisualStyleBackColor = true;
			this->button_Add->Click += gcnew System::EventHandler(this, &MyForm::button_Add_Click);
			// 
			// lbxAllFiles
			// 
			this->lbxAllFiles->CheckOnClick = true;
			this->lbxAllFiles->FormattingEnabled = true;
			this->lbxAllFiles->HorizontalScrollbar = true;
			this->lbxAllFiles->Location = System::Drawing::Point(8, 129);
			this->lbxAllFiles->Name = L"lbxAllFiles";
			this->lbxAllFiles->Size = System::Drawing::Size(168, 169);
			this->lbxAllFiles->TabIndex = 2;
			this->lbxAllFiles->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::lbxAllFiles_SelectedIndexChanged);
			// 
			// lbxName
			// 
			this->lbxName->FormattingEnabled = true;
			this->lbxName->HorizontalScrollbar = true;
			this->lbxName->Location = System::Drawing::Point(182, 129);
			this->lbxName->Name = L"lbxName";
			this->lbxName->Size = System::Drawing::Size(122, 160);
			this->lbxName->TabIndex = 3;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// btn_Extract
			// 
			this->btn_Extract->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Extract.BackgroundImage")));
			this->btn_Extract->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_Extract->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Extract->Location = System::Drawing::Point(102, 31);
			this->btn_Extract->Name = L"btn_Extract";
			this->btn_Extract->Size = System::Drawing::Size(74, 61);
			this->btn_Extract->TabIndex = 4;
			this->btn_Extract->UseVisualStyleBackColor = true;
			this->btn_Extract->Click += gcnew System::EventHandler(this, &MyForm::btn_Extract_Click);
			// 
			// btn_Delete
			// 
			this->btn_Delete->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Delete.BackgroundImage")));
			this->btn_Delete->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_Delete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Delete->Location = System::Drawing::Point(300, 31);
			this->btn_Delete->Name = L"btn_Delete";
			this->btn_Delete->Size = System::Drawing::Size(74, 61);
			this->btn_Delete->TabIndex = 5;
			this->btn_Delete->UseVisualStyleBackColor = true;
			this->btn_Delete->Click += gcnew System::EventHandler(this, &MyForm::btn_Delete_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Compress";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(118, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Extract";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(222, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Add";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(318, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Delete";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->actionToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(394, 24);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->addToolStripMenuItem,
					this->deleteToolStripMenuItem, this->deleteAllToolStripMenuItem, this->toolStripSeparator1, this->closeToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->addToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->addToolStripMenuItem->Text = L"Add";
			this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button_Add_Click);
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::Delete;
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->deleteToolStripMenuItem->Text = L"Delete";
			this->deleteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::btn_Delete_Click);
			// 
			// deleteAllToolStripMenuItem
			// 
			this->deleteAllToolStripMenuItem->Name = L"deleteAllToolStripMenuItem";
			this->deleteAllToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->deleteAllToolStripMenuItem->Text = L"Delete All";
			this->deleteAllToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(142, 6);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->closeToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->closeToolStripMenuItem->Text = L"Close";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::closeToolStripMenuItem_Click);
			// 
			// actionToolStripMenuItem
			// 
			this->actionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->compressToolStripMenuItem,
					this->extractToolStripMenuItem, this->toolStripSeparator4, this->selectThemesToolStripMenuItem
			});
			this->actionToolStripMenuItem->Name = L"actionToolStripMenuItem";
			this->actionToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->actionToolStripMenuItem->Text = L"Action";
			// 
			// compressToolStripMenuItem
			// 
			this->compressToolStripMenuItem->Name = L"compressToolStripMenuItem";
			this->compressToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->compressToolStripMenuItem->Text = L"Compress";
			this->compressToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::btn_Compress_Click);
			// 
			// extractToolStripMenuItem
			// 
			this->extractToolStripMenuItem->Name = L"extractToolStripMenuItem";
			this->extractToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->extractToolStripMenuItem->Text = L"Extract";
			this->extractToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::btn_Extract_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(147, 6);
			// 
			// selectThemesToolStripMenuItem
			// 
			this->selectThemesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->defaultToolStripMenuItem,
					this->lightToolStripMenuItem, this->darkToolStripMenuItem
			});
			this->selectThemesToolStripMenuItem->Name = L"selectThemesToolStripMenuItem";
			this->selectThemesToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->selectThemesToolStripMenuItem->Text = L"Select Themes";
			// 
			// defaultToolStripMenuItem
			// 
			this->defaultToolStripMenuItem->Name = L"defaultToolStripMenuItem";
			this->defaultToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->defaultToolStripMenuItem->Text = L"Default";
			this->defaultToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::defaultToolStripMenuItem_Click);
			// 
			// lightToolStripMenuItem
			// 
			this->lightToolStripMenuItem->Name = L"lightToolStripMenuItem";
			this->lightToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->lightToolStripMenuItem->Text = L"Light";
			this->lightToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::lightToolStripMenuItem_Click);
			// 
			// darkToolStripMenuItem
			// 
			this->darkToolStripMenuItem->Name = L"darkToolStripMenuItem";
			this->darkToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->darkToolStripMenuItem->Text = L"Dark";
			this->darkToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::darkToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->instructionToolStripMenuItem,
					this->toolStripSeparator2, this->documentationToolStripMenuItem, this->referenceToolStripMenuItem, this->toolStripSeparator3,
					this->buyFullVersionToolStripMenuItem
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// instructionToolStripMenuItem
			// 
			this->instructionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->compressToolStripMenuItem1,
					this->extractToolStripMenuItem1
			});
			this->instructionToolStripMenuItem->Name = L"instructionToolStripMenuItem";
			this->instructionToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->instructionToolStripMenuItem->Text = L"Instruction";
			// 
			// compressToolStripMenuItem1
			// 
			this->compressToolStripMenuItem1->Name = L"compressToolStripMenuItem1";
			this->compressToolStripMenuItem1->Size = System::Drawing::Size(127, 22);
			this->compressToolStripMenuItem1->Text = L"Compress";
			this->compressToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::compressToolStripMenuItem1_Click);
			// 
			// extractToolStripMenuItem1
			// 
			this->extractToolStripMenuItem1->Name = L"extractToolStripMenuItem1";
			this->extractToolStripMenuItem1->Size = System::Drawing::Size(127, 22);
			this->extractToolStripMenuItem1->Text = L"Extract";
			this->extractToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::extractToolStripMenuItem1_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(154, 6);
			// 
			// documentationToolStripMenuItem
			// 
			this->documentationToolStripMenuItem->Name = L"documentationToolStripMenuItem";
			this->documentationToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->documentationToolStripMenuItem->Text = L"Documentation";
			// 
			// referenceToolStripMenuItem
			// 
			this->referenceToolStripMenuItem->Name = L"referenceToolStripMenuItem";
			this->referenceToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->referenceToolStripMenuItem->Text = L"Reference";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(154, 6);
			// 
			// buyFullVersionToolStripMenuItem
			// 
			this->buyFullVersionToolStripMenuItem->Name = L"buyFullVersionToolStripMenuItem";
			this->buyFullVersionToolStripMenuItem->Size = System::Drawing::Size(157, 22);
			this->buyFullVersionToolStripMenuItem->Text = L"Buy Full Version";
			this->buyFullVersionToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::buyFullVersionToolStripMenuItem_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->Copyright, this->Status });
			this->statusStrip1->Location = System::Drawing::Point(0, 401);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->statusStrip1->Size = System::Drawing::Size(394, 22);
			this->statusStrip1->TabIndex = 11;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// Copyright
			// 
			this->Copyright->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->Copyright->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Copyright->Name = L"Copyright";
			this->Copyright->Size = System::Drawing::Size(43, 17);
			this->Copyright->Text = L"Copyright";
			// 
			// Status
			// 
			this->Status->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->Status->Font = (gcnew System::Drawing::Font(L"Segoe UI", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Status->Name = L"Status";
			this->Status->Size = System::Drawing::Size(30, 17);
			this->Status->Text = L"Status";
			// 
			// lbxSize
			// 
			this->lbxSize->FormattingEnabled = true;
			this->lbxSize->HorizontalScrollbar = true;
			this->lbxSize->Location = System::Drawing::Point(308, 128);
			this->lbxSize->Name = L"lbxSize";
			this->lbxSize->Size = System::Drawing::Size(69, 160);
			this->lbxSize->TabIndex = 12;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(0, 378);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(393, 20);
			this->progressBar1->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(6, 116);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"All Files";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(179, 116);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Name";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(307, 115);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Size (kb)";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(8, 304);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(368, 68);
			this->textBox1->TabIndex = 17;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(394, 423);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->lbxSize);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_Delete);
			this->Controls->Add(this->btn_Extract);
			this->Controls->Add(this->lbxName);
			this->Controls->Add(this->lbxAllFiles);
			this->Controls->Add(this->button_Add);
			this->Controls->Add(this->btn_Compress);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"LaoZip";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	//Status ketersediaan Button
	btn_Compress->Enabled = false;
	compressToolStripMenuItem->Enabled = false;
	btn_Delete->Enabled = false;
	deleteToolStripMenuItem->Enabled = false;
	btn_Extract->Enabled = false;
	extractToolStripMenuItem->Enabled = false;

	//Tampilan
	Status->Text = "";
	Copyright->Text = "Copyright © 2016 LaoZip";
	lbxAllFiles->Items->Clear();
	lbxName->Items->Clear();
	lbxSize->Items->Clear();
	textBox1->Text = "";
	progressBar1->Value = 0;
	progressBar1->Visible = false;
}

private: System::Void button_Add_Click(System::Object^  sender, System::EventArgs^  e) {
	//Setting OpenFileDialog
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	openFileDialog1->InitialDirectory = "d:\\";
	openFileDialog1->Filter = "All files (*.*)|*.*";
	openFileDialog1->Multiselect = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		textBox1->Text = "";
		
		cli::array<System::String ^, 1> ^ TabNama = openFileDialog1->FileNames;
		if (TabNama->Length >= 1) {
			//Mengubah status Button
			btn_Compress->Enabled = true;
			compressToolStripMenuItem->Enabled = true;
			btn_Delete->Enabled = true;
			deleteToolStripMenuItem->Enabled = true;
			btn_Extract->Enabled = true;
			extractToolStripMenuItem->Enabled = true;

			//Insert item ke kolom All Files
			lbxAllFiles->Items->Clear();
			for (int i = 0; i < TabNama->Length; i++) {
				lbxAllFiles->Items->Insert(i, TabNama[i]);
			}
		}
		Status->Text = "Ready";
		progressBar1->Value = 0;
		progressBar1->Visible = false;

	}
}

private: System::Void btn_Compress_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lbxAllFiles->CheckedItems->Count == 0) {
		MessageBox::Show("No file(s) selected!!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		textBox1->Text = "";

		//Setting saveFileDialog
		SaveFileDialog ^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->AddExtension = ".tua";
		saveFileDialog1->DefaultExt = ".tua";
		saveFileDialog1->Filter = "Tua File (*.tua)|*.tua";

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::String^ filehasil = saveFileDialog1->FileName;
			Status->Text = "Compressing..";
			//File hasil
			std::string stdfilehasil = msclr::interop::marshal_as< std::string >(filehasil);
			char *outname = &stdfilehasil[0u];

			//File masukan
			System::String^ temp;
			std::string fileproses[100];
			char *filenamee[100];
			for (int i = 0; i < 100; i++) {
				fileproses[i] = "";
				filenamee[i] = "";
			}
			for (int i = 0; i < (lbxAllFiles->CheckedItems->Count); i++) {
				temp = lbxAllFiles->CheckedItems[i]->ToString();
				fileproses[i] = msclr::interop::marshal_as< std::string >(temp);
				filenamee[i] = &fileproses[i][0u];
			}

			//Encoding
			int jmlfile = lbxAllFiles->CheckedItems->Count;
			Proses ClassDummy;
			progressBar1->Value = 0;
			progressBar1->Visible = true;
			//---------------------------------------------------------
					time_t start, now;
					double seconds;
					time(&start);

					int cntfile;
					ListOfTree A;
					for (cntfile = 0; cntfile < jmlfile; cntfile++) {
						ifstream f(filenamee[cntfile], ios::binary | ios::in | ios::ate);
						A.ReadFile(f);
					}



					int z;
					int sum = 0;
					float frek;
					float entropi = 0;
					long long sizeawal = 0;
					long long copybuf[256];
					for (z = 0; z < 256; z++) {
						sum = sum + A.buf[z];
					}

					for (z = 0; z < 256; z++) {
						frek = (float)A.buf[z] / (float)sum;
						if (frek != 0) {
							entropi = entropi + (frek * (-log2(frek)));
						}
						copybuf[z] = A.buf[z];
						sizeawal += A.buf[z];
					}

					ofstream fileencode(outname, ios::binary | ios::out);
					A.savelist(fileencode);
					fileencode << jmlfile << "." << endl;

					A.MakeList();
					Tree X;
					X = A.HuffmanTree();
					X.generatecode();

					float jmlbit = 0;
					for (z = 0; z < 256; z++) {
						frek = (float)copybuf[z] / (float)sum;
						jmlbit = jmlbit + (frek * float(strlen(X.kode[z])));
					}

					long long encoded = 0;
					
					progressBar1->Value = 0;
					double progress = 0;
					for (cntfile = 0; cntfile < jmlfile; cntfile++) {
						//fileencode
						
						//yg gw ubah buat nama
						ifstream f(filenamee[cntfile], ios::binary | ios::ate);
						int len = strlen(filenamee[cntfile]);
						char purename[100] = "";
						int j = len;
						while ((filenamee[cntfile][j] != '\\') && (j>0))
							j--;
						if (j == 0)
							fileencode << filenamee[cntfile] << endl;
						else {
							strcat(purename, filenamee[cntfile] + j + 1);
							fileencode << purename << endl;
						}

						fileencode << f.tellg() << endl;
						f.seekg(0, ios::beg);
						//encode(f, fileencode, X, sizeawal);
						//**************************************************************
							string biner = "";
							char c; //karakter dari file
							int x; //ubah karakter file ke integer
							char huruf; // karakter yg udh 8 bit diubah ke karakter baru
							int pjg = 0; // panjang karakter udh 8 atau belum, digunain pas akhir kalau ga 8 panjangnya
							int z;
							if (!f) {
								//cout << "File not found!!" << endl;
							}
							else {
								//double progress = cntfile * jatahfile;
								while (f.get(c)) {
									progress += 1 / double(sizeawal) * 100;
									progressBar1->Value = ceilf(progress*100) / 100;
									x = int(c);
									if (x<0) {
										x += 256;
									}
									for (z = 0; z<256; z++) {
										if (x == z) {
											int length;
											length = strlen(X.kode[z]);
											int i;
											for (i = 0; i < length; i++) {
												if (pjg == 8) {
													huruf = ClassDummy.ChangeToChar(biner);

													fileencode << huruf;
													pjg = 0;
													biner = "";
													biner = biner + X.kode[z][i];
													pjg = pjg + 1;
												}
												else {
													biner = biner + X.kode[z][i];
													pjg = pjg + 1;
												}

											}
										}
									}

								}
								if (pjg != 8) {
									int tambah;
									tambah = 8 - pjg;
									int i;
									for (i = 0; i < tambah; i++) {
										biner = biner + '0';
									}
								}
								huruf = ClassDummy.ChangeToChar(biner);
								fileencode << huruf;
							}





						//**************************************************************
						fileencode << "\n.\n";
					}
					long long sizeakhir = fileencode.tellp();
					fileencode.close();
					char intStr[100];
					string stemp;
					time(&now);
					seconds = difftime(now, start);
					string statistik = "";
					statistik = statistik + "Waktu pemampatan	: ";
					if (int(seconds / 60) != 0) {
						int menit = seconds / 60;
						seconds = int(seconds) % 60;
						itoa(menit, intStr, 10);
						stemp = string(intStr);
						statistik += stemp + " menit ";
					}
					itoa(seconds, intStr, 10);
					stemp = string(intStr);
					statistik += stemp + " detik\r\n";
					statistik += "Ukuran awal	: ";
					itoa(sizeawal, intStr, 10);
					stemp = string(intStr);
					statistik += stemp += " bytes\r\n";
					statistik += "Ukuran akhir	: ";
					itoa(sizeakhir, intStr, 10);
					stemp = string(intStr);
					statistik += stemp += " bytes\r\n";
					float nisbah = float(sizeakhir) / float(sizeawal) * 100;
					float desimal = nisbah - int(nisbah);
					desimal *= 10000;
					itoa(nisbah, intStr, 10);
					stemp = string(intStr);
					statistik += "Nisbah pemampatan	: " + stemp + ".";
					itoa(desimal, intStr, 10);
					stemp = string(intStr);
					statistik += stemp + "%\r\n";
					itoa(entropi, intStr, 10);
					stemp = string(intStr);
					statistik += "Entropi		: " + stemp + ".";
					desimal = entropi - int(entropi);
					desimal *= 100000;
					itoa(desimal, intStr, 10);
					stemp = string(intStr);
					statistik += stemp + "\r\n";
					itoa(jmlbit, intStr, 10);
					stemp = string(intStr);
					statistik += "Jumlah bit per karakter : " + stemp + ".";
					desimal = jmlbit - int(jmlbit);
					desimal *= 100000;
					itoa(desimal, intStr, 10);
					stemp = string(intStr);
					statistik += stemp + "\r\n";


			//---------------------------------------------------------

			//Refresh item
			lbxAllFiles->Items->Clear();
			lbxAllFiles->Items->Insert(0, filehasil);
			lbxName->Items->Clear();
			lbxSize->Items->Clear();
			Status->Text = "Done";
			String^ sdata = msclr::interop::marshal_as< System::String^ >(statistik);			
			textBox1->Text = sdata;
		}
	}
}

private: System::Void btn_Extract_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lbxAllFiles->CheckedItems->Count != 1) {
		MessageBox::Show("To extract file, you only can choose 1 file from All Files List", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		textBox1->Text = "";

		//setting folderBrowserDialog
		FolderBrowserDialog ^ folderBrowserDialog1 = gcnew FolderBrowserDialog();
		Status->Text = "Extracting..";
		//File masukan
		System::String^ fileinput12 = lbxAllFiles->CheckedItems[0]->ToString();
		std::string stdfileinput = msclr::interop::marshal_as< std::string >(fileinput12);
		char *fileinput = &stdfileinput[0u];

		Proses D;
		if (D.istua(fileinput) == 1) {
			if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				//Alamat disimpan
				System::String^ fileout = folderBrowserDialog1->SelectedPath->ToString();
				std::string stdfileout = msclr::interop::marshal_as< std::string >(fileout);
				char *target = &stdfileout[0u];

				//Decoding
				progressBar1->Value = 0;
				progressBar1->Visible = true;
				//---------------------------------------------------------------------------
					time_t start, now;
					double seconds;
					time(&start);
					ifstream f(fileinput, ios::binary | ios::in);
					ListOfTree A;
					A.readlist(f);
					A.MakeList();
					Tree X;
					X = A.HuffmanTree();
					X.generatecode();


					int jmlfile;
					f >> jmlfile;

					int z;
					for (z = 1; z <= jmlfile; z++) {
						//decode(X, f, target);
						//*********************************************
							ElemenTree* P;
							P = X.getroot();


							int z;
							char dummy;
							f.get(dummy);
							while (dummy != '.') {
								f.get(dummy);
							}
							f.get(dummy); //baca newline

							char namafile[100];
							f.getline(namafile, 100);
							char newnamafile[100];
							strcpy(newnamafile, target);
							strcat(newnamafile, "\\");
							strcat(newnamafile, namafile);
							ofstream filedecode(newnamafile, ios::binary | ios::out);

							long long size;
							f >> size;
							f.get(dummy); //baca newline




							int count = 0;
							long long decompressed = 0;
							char huruf;
							char c;
							int x;
							string biner = "";
							char filename[100];

							if (!f) {
							}
							else {
								double progress = 0 ;
								while (decompressed < size) {
									f.get(c);
									x = (int)c;

									biner = D.ChangeToBinary(x);

									int i;

									for (i = 0; i < 8; i++) {
										if (biner[i] == '0') {
											if (decompressed < size)
												P = P->getLeft();
											if ((P->getLeft() == Nil) && (P->getRight() == Nil)) {
												huruf = char(P->getname());
												if (P->getname() == 10) {
													count += 1;
												}
												filedecode << huruf;
												decompressed++;
												progress = double(decompressed) / double(size) * 100;
												P = X.getroot();
											}
										}
										else {
											if (decompressed < size)
												P = P->getRight();
											if ((P->getLeft() == Nil) && (P->getRight() == Nil)) {
												huruf = char(P->getname());
												if (P->getname() == 10) {
													count += 1;
												}
												filedecode << huruf;
												decompressed++;
												progress = double(decompressed) / double(size) * 100;
												P = X.getroot();
											}
										}
									}
									progressBar1->Value = ceilf(progress * 100) / 100 ;
								}
							}

						//*********************************************
					}

					char intStr[100];
					string stemp;
					time(&now);
					seconds = difftime(now, start);
					string statistik = "";
					statistik = statistik + "Waktu pernimampatan	: ";
					if (int(seconds / 60) != 0) {
						int menit = seconds / 60;
						seconds = int(seconds) % 60;
						itoa(menit, intStr, 10);
						stemp = string(intStr);
						statistik += stemp + " menit ";
					}
					itoa(seconds, intStr, 10);
					stemp = string(intStr);
					statistik += stemp + " detik\n";


				//---------------------------------------------------------------------------

				//Refresh
				lbxAllFiles->Items->Clear();
				lbxName->Items->Clear();
				lbxSize->Items->Clear();
				Status->Text = "Done";
				String^ sdata = msclr::interop::marshal_as< System::String^ >(statistik);
				textBox1->Text = sdata;

				if (lbxAllFiles->Items->Count == 0) {
				btn_Compress->Enabled = false;
				compressToolStripMenuItem->Enabled = false;
				btn_Delete->Enabled = false;
				deleteToolStripMenuItem->Enabled = false;
				btn_Extract->Enabled = false;
				extractToolStripMenuItem->Enabled = false;
				}
			}
		}
		else {
			MessageBox::Show("File must have .tua extension, if you want extract another extension please buy full version", "Buy Full Version", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
}

private: System::Void btn_Delete_Click(System::Object^  sender, System::EventArgs^  e) {
	if (lbxAllFiles->CheckedItems->Count == 0) {
		MessageBox::Show("No file(s) selected!!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		for (int i = 0; i < lbxAllFiles->CheckedItems->Count; i++) {
			lbxAllFiles->Items->Remove(lbxAllFiles->CheckedItems[i]);
		}
		progressBar1->Value = 0;
		if (lbxAllFiles->Items->Count == 0) {
			btn_Compress->Enabled = false;
			compressToolStripMenuItem->Enabled = false;
			btn_Delete->Enabled = false;
			deleteToolStripMenuItem->Enabled = false;
			btn_Extract->Enabled = false;
			extractToolStripMenuItem->Enabled = false;
		}
	}
}

private: System::Void lbxAllFiles_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	lbxName->Items->Clear();
	lbxSize->Items->Clear();
	int ctr = 0 ;
	double sze;
	String^ temp;
	Proses E;

	for (int i = 0; i < lbxAllFiles->CheckedItems->Count; i++) {			

			System::String^ fileinput = lbxAllFiles->CheckedItems[i]->ToString();
			std::string stdfileinput = msclr::interop::marshal_as< std::string >(fileinput);
			char *strin = &stdfileinput[0u];

			//input nama
			temp = msclr::interop::marshal_as< System::String^ >(E.filename(strin));
			lbxName->Items->Insert(ctr, temp);

			//input size
			sze = E.filesize(strin);
			lbxSize->Items->Insert(ctr, sze);

			ctr++;

		
	}
}
private: System::Void compressToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = "1. Add file(s) from directory \r\n2. Select file(s) in All Files Box \r\n3. Press Compress Button or File->Action->Compress";
}
private: System::Void extractToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = "1. Press Extract Button or File->Action->Extract \r\n2. Select file from directory";
}
private: System::Void closeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void buyFullVersionToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("If you can pay us much enough, we will considering to make LaoZip in better version.\r\nSend your offer to Support@LaoZip.com", "Buy Full Version", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
}
private: System::Void defaultToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//Penyesuaian Tampilan
	this->BackColor = SystemColors::Control;
	btn_Compress->BackColor = SystemColors::Control;
	btn_Extract->BackColor = SystemColors::Control;
	button_Add->BackColor = SystemColors::Control;
	btn_Delete->BackColor = SystemColors::Control;
	Copyright->BackColor = SystemColors::Control;
	Status->BackColor = SystemColors::Control;
	menuStrip1->BackColor = SystemColors::Control;
	statusStrip1->BackColor = SystemColors::Control;
	lbxAllFiles->BackColor = SystemColors::Window;
	lbxName->BackColor = SystemColors::Window;
	lbxSize->BackColor = SystemColors::Window;
	textBox1->BackColor = SystemColors::Window;
}
private: System::Void lightToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//Penyesuaian Tampilan
	this->BackColor = SystemColors::ButtonHighlight;
	btn_Compress->BackColor = SystemColors::ButtonHighlight;
	btn_Extract->BackColor = SystemColors::ButtonHighlight;
	button_Add->BackColor = SystemColors::ButtonHighlight;
	btn_Delete->BackColor = SystemColors::ButtonHighlight;
	Copyright->BackColor = SystemColors::ButtonHighlight;
	Status->BackColor = SystemColors::ButtonHighlight;
	menuStrip1->BackColor = SystemColors::ButtonHighlight;
	statusStrip1->BackColor = SystemColors::ButtonHighlight;
	lbxAllFiles->BackColor = SystemColors::Window;
	lbxName->BackColor = SystemColors::Window;
	lbxSize->BackColor = SystemColors::Window;
	textBox1->BackColor = SystemColors::Window;
}
private: System::Void darkToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//Penyesuaian Tampilan
	this->BackColor = SystemColors::ControlDarkDark;
	btn_Compress->BackColor = SystemColors::ControlDarkDark;
	btn_Extract->BackColor = SystemColors::ControlDarkDark;
	button_Add->BackColor = SystemColors::ControlDarkDark;
	btn_Delete->BackColor = SystemColors::ControlDarkDark;
	Copyright->BackColor = SystemColors::ControlDarkDark;
	Status->BackColor = SystemColors::ControlDarkDark;
	menuStrip1->BackColor = SystemColors::ControlDarkDark;
	statusStrip1->BackColor = SystemColors::ControlDarkDark;
	lbxAllFiles->BackColor = SystemColors::ControlDarkDark;
	lbxName->BackColor = SystemColors::ControlDarkDark;
	lbxSize->BackColor = SystemColors::ControlDarkDark;
	textBox1->BackColor = SystemColors::ControlDarkDark;
}
};
}
