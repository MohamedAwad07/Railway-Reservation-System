#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include "Railway.h"
using namespace std;
stack<string>pages;
string session_username = "Name", session_email = "Email@gmail.com";
vector<Trip> trip_vec2 = { Trip(1,10,20,"Cairo", "Alexandria", "01:20","02:00" ,"29/05/2023"),
Trip(3,13,15,"Cairo", "Alexandria", "04:23","05:12", "2/06/2023"),
Trip(1,16,30,"Cairo", "Qena", "02:20","03:00" ,"01/06/2023"),
Trip(1,20,25,"Cairo", "Alexandria", "01:29","02:40" ,"09/06/2023"),
Trip(1,13,29,"Cairo", "Sohage", "09:20","10:00" ,"12/06/2023"),
Trip(1,40,8,"Cairo", "Alexandria", "10:20","10:35" ,"12/06/2023"),
Trip(1,13,29,"Cairo", "Alexandria", "09:20","10:00" ,"12/06/2023"),
Trip(1,40,8,"Cairo", "Alexandria", "10:20","10:35" ,"12/06/2023"),
Trip(1,16,30,"Cairo", "Alexandria", "02:20","03:00" ,"01/06/2023"),
Trip(1,20,25,"Cairo", "Assiut", "01:29","02:40" ,"09/06/2023"),
Trip(1,13,29,"Cairo", "Alexandria", "09:20","10:00" ,"12/06/2023"),
Trip(1,40,8,"Cairo", "Alexandria", "10:20","10:35" ,"12/06/2023"),
Trip(1,13,29,"Cairo", "Alexandria", "09:20","10:00" ,"12/06/2023"),
Trip(1,40,8,"Cairo", "Minya", "10:20","10:35" ,"12/06/2023"),
Trip(1,16,30,"Cairo", "Alexandria", "02:20","03:00" ,"01/06/2023"),
Trip(1,20,25,"Cairo", "Alexandria", "01:29","02:40" ,"09/06/2023"),
Trip(1,13,29,"Cairo", "Giza", "09:20","10:00" ,"12/06/2023"),
Trip(1,40,8,"Cairo", "Alexandria", "10:20","10:35" ,"12/06/2023"),
Trip(1,13,29,"Cairo", "Alexandria", "09:20","10:00" ,"12/06/2023"),
Trip(1,40,8,"Cairo", "Alexandria", "10:20","10:35" ,"12/06/2023"),
Trip(2,20,43,"Cairo", "Luxor", "22:10","23:35", "25/05/2023") };
namespace RailwayGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ComponentFactory::Krypton::Toolkit;
	using namespace System::Data::OracleClient;

	
	// convert string from System to Std
	void MarshalString(String^ s, string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : KryptonForm
	{
		OracleConnection^ con = gcnew OracleConnection("Uid=railway;password=railway");
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
	String^ reserved_tickets="";
	// my comps
	private: ComponentFactory::Krypton::Toolkit::KryptonPalette^ kryptonPalette1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ active_trip;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::FlowLayoutPanel^ home_layout;
	private: ComponentFactory::Krypton::Toolkit::KryptonPanel^ kryptonPanel2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel3;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton7;
	private: System::Windows::Forms::Label^ label8;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton8;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton10;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton3;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton2;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton4;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton12;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton11;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton5;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton1;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton6;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::UserControl^ MyUserControl1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel10;





	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton14;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton16;
	private: ComponentFactory::Krypton::Toolkit::KryptonBorderEdge^ kryptonBorderEdge1;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton15;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton13;
	private: System::Windows::Forms::Panel^ panel5;
	private: ComponentFactory::Krypton::Toolkit::KryptonBorderEdge^ kryptonBorderEdge2;



	private: System::Windows::Forms::Panel^ page2_container;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Book_btn;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton17;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label22;

	private: System::Windows::Forms::Panel^ panel6;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton19;
	private: System::Windows::Forms::Label^ label25;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton21;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Reserve_new_btn;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Panel^ admin_page;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ trip_tools;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Manage_trips_btn;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label35;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Manage_trains_btn;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton23;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton26;
	private: System::Windows::Forms::Label^ label37;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton27;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton31;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton30;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton29;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton28;
	private: System::Windows::Forms::Label^ label41;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton32;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton25;
	private: System::Windows::Forms::Panel^ panel13;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton34;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton42;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Panel^ Trips_management_panel;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ delete_trip_btn;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ edit_trip_btn;
	private: System::Windows::Forms::Panel^ Trains_management_panel;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Panel^ panel18;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton18;
	private: System::Windows::Forms::Panel^ panel19;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton33;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton35;
	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton37;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Label^ label57;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton43;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton44;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton36;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton20;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ header_acc;
	//private: System::ComponentModel::IContainer^ components;

	// login comps
	private: System::Windows::Forms::Panel^ panel_con_Login;
	private: System::Windows::Forms::PictureBox^ pictureBox_back_login;
	private: System::Windows::Forms::Panel^ panel_login;
	private: System::Windows::Forms::TextBox^ textBox_password;
private: System::Windows::Forms::TextBox^ textBox_email;



	private: System::Windows::Forms::Label^ label_down_signin;
	private: System::Windows::Forms::Label^ label_sign_in_word;
	private: System::Windows::Forms::CheckBox^ checkBox1_agree;
	private: System::Windows::Forms::Label^ label_register;
	private: System::Windows::Forms::Panel^ panel_con_register;
	private: System::Windows::Forms::Panel^ panel_reg;
	private: System::Windows::Forms::TextBox^ textBox3_email;

	private: System::Windows::Forms::CheckBox^ checkBox2_agree;
	private: System::Windows::Forms::TextBox^ textBox1_password;

	private: System::Windows::Forms::TextBox^ textBox2_username;

	private: System::Windows::Forms::Label^ label2_down_reg;
	private: System::Windows::Forms::Label^ label_reg;
	private: System::Windows::Forms::PictureBox^ pictureBox_reg_back;
	private: System::Windows::Forms::Panel^ panel_logo;


	private: System::Windows::Forms::PictureBox^ pictureBox2_avatar;
	private: System::Windows::Forms::PictureBox^ pictureBox3_icon;
	private: System::Windows::Forms::PictureBox^ pictureBox4_icon;
	private: System::Windows::Forms::PictureBox^ pictureBox7_icon;
	private: System::Windows::Forms::PictureBox^ pictureBox6_icon;
	private: System::Windows::Forms::PictureBox^ pictureBox5_icon;
	private: System::Windows::Forms::PictureBox^ pictureBox8_avatar;
	private: System::Windows::Forms::PictureBox^ pictureBox1_spin;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton_register;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton38_signin_btn;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton24_login_btn;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton22_reg_btn;


	// my profile
		private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel_container_;
	private: System::Windows::Forms::Panel^ panel_header_;
	private: System::Windows::Forms::PictureBox^ pictureBox_logo_;
	private: System::Windows::Forms::Panel^ panel_main_;
	private: ComponentFactory::Krypton::Toolkit::KryptonBorderEdge^ kryptonBorderEdge_downname_;
	private: System::Windows::Forms::PictureBox^ pictureBox_profile_photo_;
	private: System::Windows::Forms::Panel^ panel3_Edit_;
	private: System::Windows::Forms::TextBox^ textBox_password_;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton_password_;

	private: System::Windows::Forms::TextBox^ textBox_username_;

	private: System::Windows::Forms::Label^ label_header_;
	private: System::Windows::Forms::Panel^ panel_win1_;
	private: ComponentFactory::Krypton::Toolkit::KryptonBorderEdge^ edge1;
	private: ComponentFactory::Krypton::Toolkit::KryptonBorderEdge^ edge2;
	private: ComponentFactory::Krypton::Toolkit::KryptonBorderEdge^ edge3;
	private: System::Windows::Forms::Label^ label_pic3;
	private: System::Windows::Forms::Label^ label_pic2;
	private: System::Windows::Forms::Label^ label_pic1;
	private: System::Windows::Forms::Label^ label_welcome;
	private: System::Windows::Forms::PictureBox^ pictureBox_pic3;
	private: System::Windows::Forms::PictureBox^ pictureBox_pic2;
	private: System::Windows::Forms::PictureBox^ pictureBox_pic1;
	private: System::Windows::Forms::Label^ label_down_welcome;
	private: System::Windows::Forms::Panel^ panel_chooses;
	private: System::Windows::Forms::Button^ button_log_out;
	private: ComponentFactory::Krypton::Toolkit::KryptonBorderEdge^ edge11;
	private: ComponentFactory::Krypton::Toolkit::KryptonBorderEdge^ edge22;
	private: ComponentFactory::Krypton::Toolkit::KryptonBorderEdge^ edge33;
	private: System::Windows::Forms::Label^ Link1;
	private: System::Windows::Forms::Label^ Link2;
	private: System::Windows::Forms::Label^ Link;
	private: System::Windows::Forms::Label^ label_email;
	private: System::Windows::Forms::Label^ label_name;
	private: System::Windows::Forms::Label^ label_Emaill;
	private: System::Windows::Forms::Label^ label_after_save;
	private: System::Windows::Forms::Panel^ panel_edit_res;
	private: System::Windows::Forms::TextBox^ textBox1_number;

	private: System::Windows::Forms::Label^ label2_down_save_button;
	private: System::Windows::Forms::Label^ label27_edit;


	private: System::Windows::Forms::Panel^ panel1_res;
	private: System::Windows::Forms::Label^ label_MyRes;
	private: System::Windows::Forms::Panel^ panel_con;
	private: System::Windows::Forms::Label^ label4_totalfare;
	private: System::Windows::Forms::Label^ label3_reserved_tickets;
	private: System::Windows::Forms::Label^ label2_t_num;
	private: System::Windows::Forms::Label^ label1_time;
	private: System::Windows::Forms::Label^ label9_date;
	private: System::Windows::Forms::CheckBox^ checkBox1_check;
	private: System::Windows::Forms::Label^ label11_board_dest;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton1_edit_container;
	private: ComponentFactory::Krypton::Toolkit::KryptonBorderEdge^ kryptonBorderEdge1_;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ Button1_edit;
	private: System::Windows::Forms::Label^ label5_no_of_tickets;
	private: System::Windows::Forms::Label^ label6_uptickets;
	private: ComponentFactory::Krypton::Toolkit::KryptonBorderEdge^ kryptonBorderEdge2_;

	private: System::Windows::Forms::Panel^ panel_delete;


	private: System::Windows::Forms::Panel^ panel_end;


	private: System::Windows::Forms::PictureBox^ pictureBox9_backend;
private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton24;
private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton22;

private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton39;


private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton45;
private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton40;
private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton46;
private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton41;
private: System::Windows::Forms::PictureBox^ pictureBox2_logo;
private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton48;
private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton47;
private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton51;
private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton50;
private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton49;
private: System::Windows::Forms::Label^ label51;
private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton38;
private: ComponentFactory::Krypton::Toolkit::KryptonButton^ edit_train_btn;
private: ComponentFactory::Krypton::Toolkit::KryptonButton^ delete_train_btn;
private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton52;
private: System::Windows::Forms::Panel^ edit_trip_wind;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::TextBox^ textBox12;
private: ComponentFactory::Krypton::Toolkit::KryptonButton^ save_edited_trip;

private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton54;
private: System::Windows::Forms::TextBox^ textBox10;
private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton55;
private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton56;
private: System::Windows::Forms::Label^ edited_trip_saved;


private: System::Windows::Forms::Label^ label18;
private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton53;
private: System::Windows::Forms::Panel^ edit_train_wind;
private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton57;
private: System::Windows::Forms::TextBox^ textBox14;
private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton58;
private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton59;
private: System::Windows::Forms::Label^ edited_train_saved;

private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::PictureBox^ password_hide;
private: System::Windows::Forms::PictureBox^ password_show;
private: System::Windows::Forms::PictureBox^ password_reg_hide;

private: System::Windows::Forms::PictureBox^ password_reg_show;
private: System::Windows::Forms::PictureBox^ password_PD_hide;
private: System::Windows::Forms::PictureBox^ password_PD_show;






private: System::ComponentModel::IContainer^ components;



#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->kryptonPalette1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPalette(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->kryptonButton52 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton20 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->header_acc = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->home_layout = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->kryptonPanel2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPanel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->kryptonButton9 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton6 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton7 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->kryptonButton8 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->kryptonButton10 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->kryptonButton11 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton5 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton3 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton4 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->kryptonButton12 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->MyUserControl1 = (gcnew System::Windows::Forms::UserControl());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->kryptonButton21 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->Reserve_new_btn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->kryptonButton19 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->kryptonButton14 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton16 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonBorderEdge1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonBorderEdge());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->kryptonButton15 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton13 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->kryptonBorderEdge2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonBorderEdge());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->Book_btn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton17 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->page2_container = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->admin_page = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->edit_train_wind = (gcnew System::Windows::Forms::Panel());
			this->kryptonButton57 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->kryptonButton58 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton59 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->edited_train_saved = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->Trains_management_panel = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->kryptonButton18 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->kryptonButton36 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton33 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->kryptonButton35 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->kryptonButton37 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->kryptonButton43 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton44 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->Trips_management_panel = (gcnew System::Windows::Forms::Panel());
			this->edit_trip_wind = (gcnew System::Windows::Forms::Panel());
			this->kryptonButton53 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->save_edited_trip = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton54 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->kryptonButton55 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton56 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->edited_trip_saved = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->kryptonButton34 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->kryptonButton32 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->kryptonButton31 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->kryptonButton30 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->kryptonButton29 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->kryptonButton28 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->kryptonButton23 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton26 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton27 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton25 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->trip_tools = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton42 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->Manage_trips_btn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->Manage_trains_btn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->delete_trip_btn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->edit_trip_btn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->panel_con_Login = (gcnew System::Windows::Forms::Panel());
			this->panel_login = (gcnew System::Windows::Forms::Panel());
			this->password_show = (gcnew System::Windows::Forms::PictureBox());
			this->password_hide = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4_icon = (gcnew System::Windows::Forms::PictureBox());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->kryptonButton48 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->pictureBox3_icon = (gcnew System::Windows::Forms::PictureBox());
			this->textBox_email = (gcnew System::Windows::Forms::TextBox());
			this->kryptonButton47 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton_register = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton38_signin_btn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->checkBox1_agree = (gcnew System::Windows::Forms::CheckBox());
			this->label_register = (gcnew System::Windows::Forms::Label());
			this->label_down_signin = (gcnew System::Windows::Forms::Label());
			this->label_sign_in_word = (gcnew System::Windows::Forms::Label());
			this->pictureBox2_avatar = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_back_login = (gcnew System::Windows::Forms::PictureBox());
			this->panel_con_register = (gcnew System::Windows::Forms::Panel());
			this->panel_reg = (gcnew System::Windows::Forms::Panel());
			this->password_reg_show = (gcnew System::Windows::Forms::PictureBox());
			this->password_reg_hide = (gcnew System::Windows::Forms::PictureBox());
			this->kryptonButton24_login_btn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7_icon = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1_password = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox6_icon = (gcnew System::Windows::Forms::PictureBox());
			this->textBox3_email = (gcnew System::Windows::Forms::TextBox());
			this->kryptonButton51 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton50 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->pictureBox5_icon = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2_username = (gcnew System::Windows::Forms::TextBox());
			this->kryptonButton49 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton22_reg_btn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->checkBox2_agree = (gcnew System::Windows::Forms::CheckBox());
			this->label2_down_reg = (gcnew System::Windows::Forms::Label());
			this->label_reg = (gcnew System::Windows::Forms::Label());
			this->pictureBox8_avatar = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_reg_back = (gcnew System::Windows::Forms::PictureBox());
			this->panel_logo = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2_logo = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1_spin = (gcnew System::Windows::Forms::PictureBox());
			this->flowLayoutPanel_container_ = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel_main_ = (gcnew System::Windows::Forms::Panel());
			this->edge11 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonBorderEdge());
			this->panel_delete = (gcnew System::Windows::Forms::Panel());
			this->kryptonButton46 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton41 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->panel1_res = (gcnew System::Windows::Forms::Panel());
			this->label_MyRes = (gcnew System::Windows::Forms::Label());
			this->panel_con = (gcnew System::Windows::Forms::Panel());
			this->label5_no_of_tickets = (gcnew System::Windows::Forms::Label());
			this->kryptonBorderEdge2_ = (gcnew ComponentFactory::Krypton::Toolkit::KryptonBorderEdge());
			this->Button1_edit = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonBorderEdge1_ = (gcnew ComponentFactory::Krypton::Toolkit::KryptonBorderEdge());
			this->label4_totalfare = (gcnew System::Windows::Forms::Label());
			this->label3_reserved_tickets = (gcnew System::Windows::Forms::Label());
			this->label2_t_num = (gcnew System::Windows::Forms::Label());
			this->label1_time = (gcnew System::Windows::Forms::Label());
			this->label9_date = (gcnew System::Windows::Forms::Label());
			this->checkBox1_check = (gcnew System::Windows::Forms::CheckBox());
			this->label11_board_dest = (gcnew System::Windows::Forms::Label());
			this->kryptonButton1_edit_container = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->panel_edit_res = (gcnew System::Windows::Forms::Panel());
			this->kryptonButton40 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton45 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->textBox1_number = (gcnew System::Windows::Forms::TextBox());
			this->kryptonButton39 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->label6_uptickets = (gcnew System::Windows::Forms::Label());
			this->label2_down_save_button = (gcnew System::Windows::Forms::Label());
			this->label27_edit = (gcnew System::Windows::Forms::Label());
			this->panel_chooses = (gcnew System::Windows::Forms::Panel());
			this->button_log_out = (gcnew System::Windows::Forms::Button());
			this->edge22 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonBorderEdge());
			this->edge33 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonBorderEdge());
			this->Link1 = (gcnew System::Windows::Forms::Label());
			this->Link2 = (gcnew System::Windows::Forms::Label());
			this->Link = (gcnew System::Windows::Forms::Label());
			this->kryptonBorderEdge_downname_ = (gcnew ComponentFactory::Krypton::Toolkit::KryptonBorderEdge());
			this->pictureBox_profile_photo_ = (gcnew System::Windows::Forms::PictureBox());
			this->label_email = (gcnew System::Windows::Forms::Label());
			this->label_name = (gcnew System::Windows::Forms::Label());
			this->panel3_Edit_ = (gcnew System::Windows::Forms::Panel());
			this->password_PD_show = (gcnew System::Windows::Forms::PictureBox());
			this->password_PD_hide = (gcnew System::Windows::Forms::PictureBox());
			this->kryptonButton38 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->label_Emaill = (gcnew System::Windows::Forms::Label());
			this->kryptonButton24 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->textBox_username_ = (gcnew System::Windows::Forms::TextBox());
			this->kryptonButton22 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->textBox_password_ = (gcnew System::Windows::Forms::TextBox());
			this->kryptonButton_password_ = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->label_after_save = (gcnew System::Windows::Forms::Label());
			this->label_header_ = (gcnew System::Windows::Forms::Label());
			this->panel_win1_ = (gcnew System::Windows::Forms::Panel());
			this->pictureBox_pic3 = (gcnew System::Windows::Forms::PictureBox());
			this->edge1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonBorderEdge());
			this->edge2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonBorderEdge());
			this->edge3 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonBorderEdge());
			this->label_pic3 = (gcnew System::Windows::Forms::Label());
			this->label_pic2 = (gcnew System::Windows::Forms::Label());
			this->label_pic1 = (gcnew System::Windows::Forms::Label());
			this->label_welcome = (gcnew System::Windows::Forms::Label());
			this->pictureBox_pic2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_pic1 = (gcnew System::Windows::Forms::PictureBox());
			this->label_down_welcome = (gcnew System::Windows::Forms::Label());
			this->panel_header_ = (gcnew System::Windows::Forms::Panel());
			this->pictureBox_logo_ = (gcnew System::Windows::Forms::PictureBox());
			this->panel_end = (gcnew System::Windows::Forms::Panel());
			this->pictureBox9_backend = (gcnew System::Windows::Forms::PictureBox());
			this->edit_train_btn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->delete_train_btn = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->home_layout->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonPanel2))->BeginInit();
			this->kryptonPanel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->page2_container->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->admin_page->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			this->panel11->SuspendLayout();
			this->edit_train_wind->SuspendLayout();
			this->Trains_management_panel->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel19->SuspendLayout();
			this->Trips_management_panel->SuspendLayout();
			this->edit_trip_wind->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel_con_Login->SuspendLayout();
			this->panel_login->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->password_show))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->password_hide))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4_icon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3_icon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2_avatar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_back_login))->BeginInit();
			this->panel_con_register->SuspendLayout();
			this->panel_reg->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->password_reg_show))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->password_reg_hide))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7_icon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6_icon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5_icon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8_avatar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_reg_back))->BeginInit();
			this->panel_logo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2_logo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1_spin))->BeginInit();
			this->flowLayoutPanel_container_->SuspendLayout();
			this->panel_main_->SuspendLayout();
			this->panel_delete->SuspendLayout();
			this->panel1_res->SuspendLayout();
			this->panel_con->SuspendLayout();
			this->panel_edit_res->SuspendLayout();
			this->panel_chooses->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_profile_photo_))->BeginInit();
			this->panel3_Edit_->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->password_PD_show))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->password_PD_hide))->BeginInit();
			this->panel_win1_->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_pic3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_pic2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_pic1))->BeginInit();
			this->panel_header_->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_logo_))->BeginInit();
			this->panel_end->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9_backend))->BeginInit();
			this->SuspendLayout();
			// 
			// kryptonPalette1
			// 
			this->kryptonPalette1->Common->StateCommon->Border->DrawBorders = ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::None;
			this->kryptonPalette1->FormStyles->FormMain->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->kryptonPalette1->FormStyles->FormMain->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->kryptonPalette1->FormStyles->FormMain->StateCommon->Back->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonPalette1->FormStyles->FormMain->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)),
				static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(252)));
			this->kryptonPalette1->FormStyles->FormMain->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonPalette1->FormStyles->FormMain->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::None;
			this->kryptonPalette1->FormStyles->FormMain->StateCommon->Border->Rounding = 10;
			this->kryptonPalette1->FormStyles->FormMain->StateCommon->Border->Width = 1;
			this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->ButtonEdgeInset = 15;
			this->kryptonPalette1->HeaderStyles->HeaderForm->StateCommon->Content->Padding = System::Windows::Forms::Padding(10, -1, -1, -1);
			this->kryptonPalette1->PanelStyles->PanelCommon->StateCommon->Color1 = System::Drawing::Color::Green;
			this->kryptonPalette1->PanelStyles->PanelCommon->StateCommon->ColorStyle = ComponentFactory::Krypton::Toolkit::PaletteColorStyle::Rounded;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->kryptonButton52);
			this->panel1->Controls->Add(this->kryptonButton20);
			this->panel1->Controls->Add(this->header_acc);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1913, 82);
			this->panel1->TabIndex = 0;
			// 
			// kryptonButton52
			// 
			this->kryptonButton52->Cursor = System::Windows::Forms::Cursors::Hand;
			this->kryptonButton52->Enabled = false;
			this->kryptonButton52->Location = System::Drawing::Point(18, 15);
			this->kryptonButton52->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton52->Name = L"kryptonButton52";
			this->kryptonButton52->OverrideDefault->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton52->OverrideDefault->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton52->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton52->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton52->OverrideDefault->Border->Rounding = 50;
			this->kryptonButton52->OverrideDefault->Content->Padding = System::Windows::Forms::Padding(-6, -11, -10, -20);
			this->kryptonButton52->OverrideDefault->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold));
			this->kryptonButton52->OverrideDefault->Content->ShortText->TextH = ComponentFactory::Krypton::Toolkit::PaletteRelativeAlign::Near;
			this->kryptonButton52->OverrideDefault->Content->ShortText->TextV = ComponentFactory::Krypton::Toolkit::PaletteRelativeAlign::Near;
			this->kryptonButton52->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton52->OverrideFocus->Border->Rounding = 50;
			this->kryptonButton52->OverrideFocus->Content->Padding = System::Windows::Forms::Padding(-6, -11, -10, -20);
			this->kryptonButton52->OverrideFocus->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold));
			this->kryptonButton52->OverrideFocus->Content->ShortText->TextH = ComponentFactory::Krypton::Toolkit::PaletteRelativeAlign::Near;
			this->kryptonButton52->OverrideFocus->Content->ShortText->TextV = ComponentFactory::Krypton::Toolkit::PaletteRelativeAlign::Near;
			this->kryptonButton52->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->kryptonButton52->Size = System::Drawing::Size(60, 59);
			this->kryptonButton52->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton52->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton52->StateCommon->Border->Rounding = 15;
			this->kryptonButton52->StateCommon->Content->Padding = System::Windows::Forms::Padding(-6, -11, -10, -20);
			this->kryptonButton52->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold));
			this->kryptonButton52->StateCommon->Content->ShortText->TextH = ComponentFactory::Krypton::Toolkit::PaletteRelativeAlign::Near;
			this->kryptonButton52->StateCommon->Content->ShortText->TextV = ComponentFactory::Krypton::Toolkit::PaletteRelativeAlign::Near;
			this->kryptonButton52->StateDisabled->Back->Color1 = System::Drawing::Color::DarkGray;
			this->kryptonButton52->StateDisabled->Back->Color2 = System::Drawing::Color::DarkGray;
			this->kryptonButton52->StateDisabled->Border->Color1 = System::Drawing::Color::DarkGray;
			this->kryptonButton52->StateDisabled->Border->Color2 = System::Drawing::Color::DarkGray;
			this->kryptonButton52->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton52->StateDisabled->Border->Rounding = 50;
			this->kryptonButton52->StateDisabled->Content->Padding = System::Windows::Forms::Padding(-6, -11, -10, -20);
			this->kryptonButton52->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton52->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold));
			this->kryptonButton52->StateDisabled->Content->ShortText->TextH = ComponentFactory::Krypton::Toolkit::PaletteRelativeAlign::Near;
			this->kryptonButton52->StateDisabled->Content->ShortText->TextV = ComponentFactory::Krypton::Toolkit::PaletteRelativeAlign::Near;
			this->kryptonButton52->StateNormal->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton52->StateNormal->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton52->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton52->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton52->StateNormal->Border->Rounding = 50;
			this->kryptonButton52->StateNormal->Content->Padding = System::Windows::Forms::Padding(-6, -11, -10, -20);
			this->kryptonButton52->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton52->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold));
			this->kryptonButton52->StateNormal->Content->ShortText->TextH = ComponentFactory::Krypton::Toolkit::PaletteRelativeAlign::Near;
			this->kryptonButton52->StateNormal->Content->ShortText->TextV = ComponentFactory::Krypton::Toolkit::PaletteRelativeAlign::Near;
			this->kryptonButton52->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton52->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton52->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton52->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton52->StatePressed->Border->Rounding = 50;
			this->kryptonButton52->StatePressed->Content->Padding = System::Windows::Forms::Padding(-6, -11, -10, -20);
			this->kryptonButton52->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton52->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold));
			this->kryptonButton52->StatePressed->Content->ShortText->TextH = ComponentFactory::Krypton::Toolkit::PaletteRelativeAlign::Near;
			this->kryptonButton52->StatePressed->Content->ShortText->TextV = ComponentFactory::Krypton::Toolkit::PaletteRelativeAlign::Near;
			this->kryptonButton52->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton52->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton52->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton52->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton52->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton52->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton52->StateTracking->Border->Rounding = 50;
			this->kryptonButton52->StateTracking->Content->Padding = System::Windows::Forms::Padding(-6, -11, -10, -20);
			this->kryptonButton52->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton52->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold));
			this->kryptonButton52->StateTracking->Content->ShortText->TextH = ComponentFactory::Krypton::Toolkit::PaletteRelativeAlign::Near;
			this->kryptonButton52->StateTracking->Content->ShortText->TextV = ComponentFactory::Krypton::Toolkit::PaletteRelativeAlign::Near;
			this->kryptonButton52->TabIndex = 41;
			this->kryptonButton52->Values->Text = L"◀";
			this->kryptonButton52->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton52_Click);
			// 
			// kryptonButton20
			// 
			this->kryptonButton20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->kryptonButton20->Location = System::Drawing::Point(1731, 15);
			this->kryptonButton20->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton20->Name = L"kryptonButton20";
			this->kryptonButton20->OverrideDefault->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton20->OverrideDefault->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton20->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton20->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>(((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton20->OverrideDefault->Border->Rounding = 20;
			this->kryptonButton20->OverrideDefault->Content->ShortText->Color1 = System::Drawing::Color::Red;
			this->kryptonButton20->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>(((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton20->OverrideFocus->Border->Rounding = 20;
			this->kryptonButton20->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->kryptonButton20->Size = System::Drawing::Size(112, 60);
			this->kryptonButton20->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton20->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton20->StateCommon->Border->Rounding = 15;
			this->kryptonButton20->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton20->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton20->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton20->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton20->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton20->StateDisabled->Border->Rounding = 15;
			this->kryptonButton20->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton20->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton20->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton20->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton20->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton20->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>(((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton20->StateNormal->Border->Rounding = 20;
			this->kryptonButton20->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::Red;
			this->kryptonButton20->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton20->StateNormal->Content->ShortText->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::CenterRight;
			this->kryptonButton20->StatePressed->Back->Color1 = System::Drawing::Color::Red;
			this->kryptonButton20->StatePressed->Back->Color2 = System::Drawing::Color::Red;
			this->kryptonButton20->StatePressed->Border->Color1 = System::Drawing::Color::Red;
			this->kryptonButton20->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>(((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton20->StatePressed->Border->Rounding = 20;
			this->kryptonButton20->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton20->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton20->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->kryptonButton20->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->kryptonButton20->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->kryptonButton20->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->kryptonButton20->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton20->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>(((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton20->StateTracking->Border->Rounding = 20;
			this->kryptonButton20->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton20->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton20->TabIndex = 40;
			this->kryptonButton20->Values->Text = L"log out";
			this->kryptonButton20->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton20_Click_1);
			// 
			// header_acc
			// 
			this->header_acc->Cursor = System::Windows::Forms::Cursors::Hand;
			this->header_acc->Location = System::Drawing::Point(1548, 15);
			this->header_acc->Margin = System::Windows::Forms::Padding(0);
			this->header_acc->Name = L"header_acc";
			this->header_acc->OverrideDefault->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->header_acc->OverrideDefault->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->header_acc->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->header_acc->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>(((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left));
			this->header_acc->OverrideDefault->Border->Rounding = 20;
			this->header_acc->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>(((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left));
			this->header_acc->OverrideFocus->Border->Rounding = 20;
			this->header_acc->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->header_acc->Size = System::Drawing::Size(185, 60);
			this->header_acc->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->header_acc->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->header_acc->StateCommon->Border->Rounding = 15;
			this->header_acc->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->header_acc->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->header_acc->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->header_acc->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->header_acc->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>(((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left));
			this->header_acc->StateDisabled->Border->Rounding = 20;
			this->header_acc->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->header_acc->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->header_acc->StateNormal->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->header_acc->StateNormal->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->header_acc->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->header_acc->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>(((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left));
			this->header_acc->StateNormal->Border->Rounding = 20;
			this->header_acc->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->header_acc->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->header_acc->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->header_acc->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->header_acc->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->header_acc->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>(((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left));
			this->header_acc->StatePressed->Border->Rounding = 20;
			this->header_acc->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->header_acc->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->header_acc->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->header_acc->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->header_acc->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->header_acc->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->header_acc->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->header_acc->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>(((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left));
			this->header_acc->StateTracking->Border->Rounding = 20;
			this->header_acc->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->header_acc->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->header_acc->TabIndex = 39;
			this->header_acc->Values->Text = L"username";
			this->header_acc->Click += gcnew System::EventHandler(this, &MyForm::header_acc_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(86, -15);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(258, 120);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// home_layout
			// 
			this->home_layout->AutoScroll = true;
			this->home_layout->Controls->Add(this->kryptonPanel2);
			this->home_layout->Controls->Add(this->panel2);
			this->home_layout->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->home_layout->Location = System::Drawing::Point(0, 82);
			this->home_layout->Margin = System::Windows::Forms::Padding(0);
			this->home_layout->MaximumSize = System::Drawing::Size(1920, 1200);
			this->home_layout->MinimumSize = System::Drawing::Size(1920, 900);
			this->home_layout->Name = L"home_layout";
			this->home_layout->Size = System::Drawing::Size(1920, 1200);
			this->home_layout->TabIndex = 5;
			this->home_layout->WrapContents = false;
			// 
			// kryptonPanel2
			// 
			this->kryptonPanel2->Controls->Add(this->label6);
			this->kryptonPanel2->Controls->Add(this->label7);
			this->kryptonPanel2->Controls->Add(this->panel3);
			this->kryptonPanel2->Controls->Add(this->kryptonButton10);
			this->kryptonPanel2->Location = System::Drawing::Point(0, 0);
			this->kryptonPanel2->Margin = System::Windows::Forms::Padding(0);
			this->kryptonPanel2->Name = L"kryptonPanel2";
			this->kryptonPanel2->Size = System::Drawing::Size(1920, 855);
			this->kryptonPanel2->StateNormal->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonPanel2.StateNormal.Image")));
			this->kryptonPanel2->StateNormal->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Stretch;
			this->kryptonPanel2->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 40, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(566, 218);
			this->label6->Margin = System::Windows::Forms::Padding(0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(275, 89);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Reserve";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 30, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(566, 292);
			this->label7->Margin = System::Windows::Forms::Padding(0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(780, 67);
			this->label7->TabIndex = 3;
			this->label7->Text = L"ticket and make the world closer.";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Controls->Add(this->comboBox2);
			this->panel3->Controls->Add(this->comboBox1);
			this->panel3->Controls->Add(this->kryptonButton9);
			this->panel3->Controls->Add(this->kryptonButton6);
			this->panel3->Controls->Add(this->kryptonButton7);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->kryptonButton8);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Location = System::Drawing::Point(531, 638);
			this->panel3->Margin = System::Windows::Forms::Padding(0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(858, 202);
			this->panel3->TabIndex = 1;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(34, 105);
			this->label13->Margin = System::Windows::Forms::Padding(0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 23);
			this->label13->TabIndex = 21;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(592, 62);
			this->textBox1->Margin = System::Windows::Forms::Padding(0);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(222, 23);
			this->textBox1->TabIndex = 20;
			this->textBox1->Text = L"Enter number of tickets:";
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::textBox_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Cairo", L"Alexandria", L"Assiut", L"Qena", L"Giza",
					L"Luxor"
			});
			this->comboBox2->Location = System::Drawing::Point(308, 60);
			this->comboBox2->Margin = System::Windows::Forms::Padding(0);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(244, 31);
			this->comboBox2->TabIndex = 19;
			this->comboBox2->Text = L"Enter Destination place:";
			// 
			// comboBox1
			// 
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Cairo", L"Alexandria", L"Assiut", L"Qena", L"Giza",
					L"Luxor"
			});
			this->comboBox1->Location = System::Drawing::Point(24, 60);
			this->comboBox1->Margin = System::Windows::Forms::Padding(0);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(244, 31);
			this->comboBox1->TabIndex = 18;
			this->comboBox1->Text = L"Enter Boarding place:";
			// 
			// kryptonButton9
			// 
			this->kryptonButton9->Enabled = false;
			this->kryptonButton9->Location = System::Drawing::Point(18, 52);
			this->kryptonButton9->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton9->Name = L"kryptonButton9";
			this->kryptonButton9->OverrideDefault->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton9->OverrideDefault->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton9->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton9->OverrideDefault->Border->Rounding = 8;
			this->kryptonButton9->Size = System::Drawing::Size(258, 45);
			this->kryptonButton9->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton9->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton9->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton9->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton9->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton9->StateDisabled->Border->Rounding = 10;
			this->kryptonButton9->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton9->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton9->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton9->StateNormal->Border->Rounding = 8;
			this->kryptonButton9->TabIndex = 9;
			this->kryptonButton9->Values->Text = L"";
			// 
			// kryptonButton6
			// 
			this->kryptonButton6->Location = System::Drawing::Point(309, 135);
			this->kryptonButton6->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton6->Name = L"kryptonButton6";
			this->kryptonButton6->OverrideDefault->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton6->OverrideDefault->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton6->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton6->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton6->OverrideDefault->Border->Rounding = 10;
			this->kryptonButton6->OverrideDefault->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton6->OverrideFocus->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton6->OverrideFocus->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton6->OverrideFocus->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton6->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton6->OverrideFocus->Border->Rounding = 10;
			this->kryptonButton6->OverrideFocus->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton6->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->kryptonButton6->Size = System::Drawing::Size(240, 45);
			this->kryptonButton6->StateNormal->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton6->StateNormal->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton6->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton6->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton6->StateNormal->Border->Rounding = 10;
			this->kryptonButton6->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton6->StateTracking->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton6->StateTracking->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton6->StateTracking->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton6->StateTracking->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton6->StateTracking->Border->ColorAlign = ComponentFactory::Krypton::Toolkit::PaletteRectangleAlign::Control;
			this->kryptonButton6->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton6->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton6->StateTracking->Border->Rounding = 10;
			this->kryptonButton6->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton6->TabIndex = 15;
			this->kryptonButton6->Values->Text = L"Search";
			this->kryptonButton6->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton6_Click);
			// 
			// kryptonButton7
			// 
			this->kryptonButton7->Enabled = false;
			this->kryptonButton7->Location = System::Drawing::Point(582, 52);
			this->kryptonButton7->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton7->Name = L"kryptonButton7";
			this->kryptonButton7->Size = System::Drawing::Size(258, 45);
			this->kryptonButton7->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton7->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton7->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton7->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton7->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton7->StateDisabled->Border->Rounding = 10;
			this->kryptonButton7->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton7->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton7->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton7->StateNormal->Border->Rounding = 8;
			this->kryptonButton7->TabIndex = 14;
			this->kryptonButton7->Values->Text = L"";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(582, 22);
			this->label8->Margin = System::Windows::Forms::Padding(0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(91, 23);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Tickets no";
			// 
			// kryptonButton8
			// 
			this->kryptonButton8->Enabled = false;
			this->kryptonButton8->Location = System::Drawing::Point(300, 52);
			this->kryptonButton8->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton8->Name = L"kryptonButton8";
			this->kryptonButton8->Size = System::Drawing::Size(258, 45);
			this->kryptonButton8->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton8->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton8->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton8->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton8->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton8->StateDisabled->Border->Rounding = 10;
			this->kryptonButton8->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton8->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton8->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton8->StateNormal->Border->Rounding = 8;
			this->kryptonButton8->TabIndex = 11;
			this->kryptonButton8->Values->Text = L"";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(300, 22);
			this->label9->Margin = System::Windows::Forms::Padding(0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(28, 23);
			this->label9->TabIndex = 5;
			this->label9->Text = L"To";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(34, 22);
			this->label10->Margin = System::Windows::Forms::Padding(0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 23);
			this->label10->TabIndex = 4;
			this->label10->Text = L"From";
			// 
			// kryptonButton10
			// 
			this->kryptonButton10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->kryptonButton10->Enabled = false;
			this->kryptonButton10->Location = System::Drawing::Point(514, 615);
			this->kryptonButton10->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton10->Name = L"kryptonButton10";
			this->kryptonButton10->Palette = this->kryptonPalette1;
			this->kryptonButton10->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Custom;
			this->kryptonButton10->Size = System::Drawing::Size(891, 240);
			this->kryptonButton10->StateCommon->Back->Color1 = System::Drawing::Color::Red;
			this->kryptonButton10->StateCommon->Back->Color2 = System::Drawing::Color::WhiteSmoke;
			this->kryptonButton10->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton10->StateCommon->Border->Rounding = 10;
			this->kryptonButton10->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton10->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton10->StateDisabled->Border->Color1 = System::Drawing::Color::Gainsboro;
			this->kryptonButton10->StateDisabled->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton10->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton10->StateDisabled->Border->Width = 1;
			this->kryptonButton10->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton10->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton10->StateNormal->Border->Color1 = System::Drawing::Color::LightSteelBlue;
			this->kryptonButton10->StateNormal->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton10->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton10->StateNormal->Border->Rounding = 8;
			this->kryptonButton10->StateNormal->Border->Width = 1;
			this->kryptonButton10->StatePressed->Back->Color1 = System::Drawing::Color::WhiteSmoke;
			this->kryptonButton10->StatePressed->Back->Color2 = System::Drawing::Color::WhiteSmoke;
			this->kryptonButton10->StateTracking->Back->Color1 = System::Drawing::Color::WhiteSmoke;
			this->kryptonButton10->StateTracking->Back->Color2 = System::Drawing::Color::WhiteSmoke;
			this->kryptonButton10->StateTracking->Border->Color1 = System::Drawing::Color::WhiteSmoke;
			this->kryptonButton10->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton10->TabIndex = 2;
			this->kryptonButton10->Values->Text = L"";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->kryptonButton11);
			this->panel2->Controls->Add(this->kryptonButton5);
			this->panel2->Controls->Add(this->kryptonButton1);
			this->panel2->Controls->Add(this->kryptonButton3);
			this->panel2->Controls->Add(this->kryptonButton2);
			this->panel2->Controls->Add(this->kryptonButton4);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->kryptonButton12);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(0, 855);
			this->panel2->Margin = System::Windows::Forms::Padding(0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1800, 1500);
			this->panel2->TabIndex = 8;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::Window;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(446, 750);
			this->label12->Margin = System::Windows::Forms::Padding(0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 22);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Giza";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::Window;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(806, 750);
			this->label11->Margin = System::Windows::Forms::Padding(0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(59, 22);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Assiut";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Window;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1166, 750);
			this->label5->Margin = System::Windows::Forms::Padding(0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 22);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Qena";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::AliceBlue;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1166, 465);
			this->label4->Margin = System::Windows::Forms::Padding(0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 22);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Cairo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::AliceBlue;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(806, 465);
			this->label3->Margin = System::Windows::Forms::Padding(0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 22);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Alexandria";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::AliceBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(446, 465);
			this->label2->Margin = System::Windows::Forms::Padding(0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 22);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Luxor";
			// 
			// kryptonButton11
			// 
			this->kryptonButton11->Enabled = false;
			this->kryptonButton11->Location = System::Drawing::Point(1166, 525);
			this->kryptonButton11->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton11->Name = L"kryptonButton11";
			this->kryptonButton11->Size = System::Drawing::Size(309, 210);
			this->kryptonButton11->StateCommon->Back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonButton11.StateCommon.Back.Image")));
			this->kryptonButton11->StateCommon->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Stretch;
			this->kryptonButton11->StateCommon->Border->Color1 = System::Drawing::Color::White;
			this->kryptonButton11->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton11->StateCommon->Border->Rounding = 15;
			this->kryptonButton11->StateTracking->Border->Color1 = System::Drawing::Color::White;
			this->kryptonButton11->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton11->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton11->TabIndex = 14;
			this->kryptonButton11->Values->Text = L"";
			// 
			// kryptonButton5
			// 
			this->kryptonButton5->Enabled = false;
			this->kryptonButton5->Location = System::Drawing::Point(806, 525);
			this->kryptonButton5->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton5->Name = L"kryptonButton5";
			this->kryptonButton5->Size = System::Drawing::Size(309, 210);
			this->kryptonButton5->StateCommon->Back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonButton5.StateCommon.Back.Image")));
			this->kryptonButton5->StateCommon->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Stretch;
			this->kryptonButton5->StateCommon->Border->Color1 = System::Drawing::Color::White;
			this->kryptonButton5->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton5->StateCommon->Border->Rounding = 15;
			this->kryptonButton5->StateTracking->Border->Color1 = System::Drawing::Color::White;
			this->kryptonButton5->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton5->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton5->TabIndex = 13;
			this->kryptonButton5->Values->Text = L"";
			// 
			// kryptonButton1
			// 
			this->kryptonButton1->Enabled = false;
			this->kryptonButton1->Location = System::Drawing::Point(429, 525);
			this->kryptonButton1->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton1->Name = L"kryptonButton1";
			this->kryptonButton1->Size = System::Drawing::Size(309, 210);
			this->kryptonButton1->StateCommon->Back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonButton1.StateCommon.Back.Image")));
			this->kryptonButton1->StateCommon->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Stretch;
			this->kryptonButton1->StateCommon->Border->Color1 = System::Drawing::Color::White;
			this->kryptonButton1->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton1->StateCommon->Border->Rounding = 15;
			this->kryptonButton1->StateTracking->Border->Color1 = System::Drawing::Color::White;
			this->kryptonButton1->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton1->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton1->TabIndex = 12;
			this->kryptonButton1->Values->Text = L"";
			// 
			// kryptonButton3
			// 
			this->kryptonButton3->Enabled = false;
			this->kryptonButton3->Location = System::Drawing::Point(1166, 240);
			this->kryptonButton3->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton3->Name = L"kryptonButton3";
			this->kryptonButton3->Size = System::Drawing::Size(309, 210);
			this->kryptonButton3->StateCommon->Back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonButton3.StateCommon.Back.Image")));
			this->kryptonButton3->StateCommon->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Stretch;
			this->kryptonButton3->StateCommon->Border->Color1 = System::Drawing::Color::White;
			this->kryptonButton3->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton3->StateCommon->Border->Rounding = 15;
			this->kryptonButton3->StateTracking->Border->Color1 = System::Drawing::Color::White;
			this->kryptonButton3->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton3->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton3->TabIndex = 10;
			this->kryptonButton3->Values->Text = L"";
			// 
			// kryptonButton2
			// 
			this->kryptonButton2->Enabled = false;
			this->kryptonButton2->Location = System::Drawing::Point(806, 240);
			this->kryptonButton2->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton2->Name = L"kryptonButton2";
			this->kryptonButton2->Size = System::Drawing::Size(309, 210);
			this->kryptonButton2->StateCommon->Back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonButton2.StateCommon.Back.Image")));
			this->kryptonButton2->StateCommon->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Stretch;
			this->kryptonButton2->StateCommon->Border->Color1 = System::Drawing::Color::White;
			this->kryptonButton2->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton2->StateCommon->Border->Rounding = 15;
			this->kryptonButton2->StateTracking->Border->Color1 = System::Drawing::Color::White;
			this->kryptonButton2->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton2->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton2->TabIndex = 8;
			this->kryptonButton2->Values->Text = L"";
			// 
			// kryptonButton4
			// 
			this->kryptonButton4->Enabled = false;
			this->kryptonButton4->Location = System::Drawing::Point(429, 240);
			this->kryptonButton4->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton4->Name = L"kryptonButton4";
			this->kryptonButton4->Size = System::Drawing::Size(309, 210);
			this->kryptonButton4->StateCommon->Back->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kryptonButton4.StateCommon.Back.Image")));
			this->kryptonButton4->StateCommon->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Stretch;
			this->kryptonButton4->StateCommon->Border->Color1 = System::Drawing::Color::White;
			this->kryptonButton4->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton4->StateCommon->Border->Rounding = 15;
			this->kryptonButton4->StateTracking->Border->Color1 = System::Drawing::Color::White;
			this->kryptonButton4->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton4->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton4->TabIndex = 6;
			this->kryptonButton4->Values->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::AliceBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(738, 120);
			this->label1->Margin = System::Windows::Forms::Padding(0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(468, 49);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Some popular places.";
			// 
			// kryptonButton12
			// 
			this->kryptonButton12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->kryptonButton12->Enabled = false;
			this->kryptonButton12->Location = System::Drawing::Point(342, 68);
			this->kryptonButton12->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton12->Name = L"kryptonButton12";
			this->kryptonButton12->Palette = this->kryptonPalette1;
			this->kryptonButton12->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Custom;
			this->kryptonButton12->Size = System::Drawing::Size(1251, 802);
			this->kryptonButton12->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton12->StateCommon->Border->Rounding = 20;
			this->kryptonButton12->StateDisabled->Back->Color1 = System::Drawing::Color::AliceBlue;
			this->kryptonButton12->StateDisabled->Back->Color2 = System::Drawing::SystemColors::Window;
			this->kryptonButton12->StateDisabled->Back->ColorStyle = ComponentFactory::Krypton::Toolkit::PaletteColorStyle::Linear50;
			this->kryptonButton12->StateDisabled->Back->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton12->StateDisabled->Border->Color1 = System::Drawing::Color::LightSteelBlue;
			this->kryptonButton12->StateDisabled->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::False;
			this->kryptonButton12->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton12->StateDisabled->Border->Width = 1;
			this->kryptonButton12->StateNormal->Back->Color1 = System::Drawing::Color::AliceBlue;
			this->kryptonButton12->StateNormal->Back->Color2 = System::Drawing::SystemColors::Window;
			this->kryptonButton12->StateNormal->Back->ColorStyle = ComponentFactory::Krypton::Toolkit::PaletteColorStyle::Linear50;
			this->kryptonButton12->StateNormal->Back->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton12->StateNormal->Border->Color1 = System::Drawing::Color::LightSteelBlue;
			this->kryptonButton12->StateNormal->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::False;
			this->kryptonButton12->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton12->StateNormal->Border->Rounding = 15;
			this->kryptonButton12->StateNormal->Border->Width = 1;
			this->kryptonButton12->StatePressed->Back->Color1 = System::Drawing::Color::WhiteSmoke;
			this->kryptonButton12->StatePressed->Back->Color2 = System::Drawing::Color::WhiteSmoke;
			this->kryptonButton12->StateTracking->Back->Color1 = System::Drawing::Color::WhiteSmoke;
			this->kryptonButton12->StateTracking->Back->Color2 = System::Drawing::Color::WhiteSmoke;
			this->kryptonButton12->StateTracking->Border->Color1 = System::Drawing::Color::WhiteSmoke;
			this->kryptonButton12->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton12->TabIndex = 11;
			this->kryptonButton12->Values->Text = L"";
			// 
			// MyUserControl1
			// 
			this->MyUserControl1->Location = System::Drawing::Point(0, 0);
			this->MyUserControl1->Name = L"MyUserControl1";
			this->MyUserControl1->Size = System::Drawing::Size(150, 150);
			this->MyUserControl1->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->AutoSize = true;
			this->panel4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Controls->Add(this->panel8);
			this->panel4->Controls->Add(this->label22);
			this->panel4->Controls->Add(this->panel10);
			this->panel4->Controls->Add(this->kryptonButton14);
			this->panel4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Margin = System::Windows::Forms::Padding(0);
			this->panel4->MinimumSize = System::Drawing::Size(1920, 802);
			this->panel4->Name = L"panel4";
			this->panel4->Padding = System::Windows::Forms::Padding(0, 0, 0, 202);
			this->panel4->Size = System::Drawing::Size(1920, 802);
			this->panel4->TabIndex = 0;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Controls->Add(this->label33);
			this->panel6->Controls->Add(this->kryptonButton21);
			this->panel6->Controls->Add(this->Reserve_new_btn);
			this->panel6->Controls->Add(this->label32);
			this->panel6->Controls->Add(this->label31);
			this->panel6->Controls->Add(this->label29);
			this->panel6->Controls->Add(this->label30);
			this->panel6->Controls->Add(this->label28);
			this->panel6->Controls->Add(this->label27);
			this->panel6->Controls->Add(this->label26);
			this->panel6->Controls->Add(this->kryptonButton19);
			this->panel6->Controls->Add(this->label25);
			this->panel6->Location = System::Drawing::Point(619, 76);
			this->panel6->Margin = System::Windows::Forms::Padding(0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(686, 420);
			this->panel6->TabIndex = 15;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(51, 180);
			this->label33->Margin = System::Windows::Forms::Padding(0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(178, 25);
			this->label33->TabIndex = 13;
			this->label33->Text = L"Time:  01:30 → 02:00";
			// 
			// kryptonButton21
			// 
			this->kryptonButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->kryptonButton21->Location = System::Drawing::Point(360, 322);
			this->kryptonButton21->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton21->Name = L"kryptonButton21";
			this->kryptonButton21->OverrideDefault->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton21->OverrideDefault->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton21->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton21->OverrideDefault->Border->Rounding = 15;
			this->kryptonButton21->OverrideDefault->Content->ShortText->Color1 = System::Drawing::Color::DarkGreen;
			this->kryptonButton21->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton21->OverrideFocus->Border->Rounding = 15;
			this->kryptonButton21->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->kryptonButton21->Size = System::Drawing::Size(240, 60);
			this->kryptonButton21->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton21->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton21->StateCommon->Border->Rounding = 15;
			this->kryptonButton21->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton21->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton21->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton21->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton21->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton21->StateDisabled->Border->Rounding = 15;
			this->kryptonButton21->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton21->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton21->StateNormal->Back->Color1 = System::Drawing::Color::Transparent;
			this->kryptonButton21->StateNormal->Back->Color2 = System::Drawing::Color::Transparent;
			this->kryptonButton21->StateNormal->Border->Color1 = System::Drawing::Color::ForestGreen;
			this->kryptonButton21->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton21->StateNormal->Border->Rounding = 15;
			this->kryptonButton21->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::DarkGreen;
			this->kryptonButton21->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton21->StatePressed->Back->Color1 = System::Drawing::Color::DarkGreen;
			this->kryptonButton21->StatePressed->Back->Color2 = System::Drawing::Color::DarkGreen;
			this->kryptonButton21->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton21->StatePressed->Border->Rounding = 15;
			this->kryptonButton21->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton21->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton21->StateTracking->Back->Color1 = System::Drawing::Color::Green;
			this->kryptonButton21->StateTracking->Back->Color2 = System::Drawing::Color::Green;
			this->kryptonButton21->StateTracking->Border->Color1 = System::Drawing::Color::ForestGreen;
			this->kryptonButton21->StateTracking->Border->Color2 = System::Drawing::Color::ForestGreen;
			this->kryptonButton21->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton21->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton21->StateTracking->Border->Rounding = 15;
			this->kryptonButton21->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton21->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton21->TabIndex = 12;
			this->kryptonButton21->Values->Text = L"Cancel";
			this->kryptonButton21->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton21_Click);
			// 
			// Reserve_new_btn
			// 
			this->Reserve_new_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Reserve_new_btn->Location = System::Drawing::Point(102, 322);
			this->Reserve_new_btn->Margin = System::Windows::Forms::Padding(0);
			this->Reserve_new_btn->Name = L"Reserve_new_btn";
			this->Reserve_new_btn->OverrideDefault->Back->Color1 = System::Drawing::Color::ForestGreen;
			this->Reserve_new_btn->OverrideDefault->Back->Color2 = System::Drawing::Color::ForestGreen;
			this->Reserve_new_btn->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Reserve_new_btn->OverrideDefault->Border->Rounding = 15;
			this->Reserve_new_btn->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Reserve_new_btn->OverrideFocus->Border->Rounding = 15;
			this->Reserve_new_btn->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->Reserve_new_btn->Size = System::Drawing::Size(240, 60);
			this->Reserve_new_btn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Reserve_new_btn->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->Reserve_new_btn->StateCommon->Border->Rounding = 15;
			this->Reserve_new_btn->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->Reserve_new_btn->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->Reserve_new_btn->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->Reserve_new_btn->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->Reserve_new_btn->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Reserve_new_btn->StateDisabled->Border->Rounding = 15;
			this->Reserve_new_btn->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->Reserve_new_btn->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->Reserve_new_btn->StateNormal->Back->Color1 = System::Drawing::Color::ForestGreen;
			this->Reserve_new_btn->StateNormal->Back->Color2 = System::Drawing::Color::ForestGreen;
			this->Reserve_new_btn->StateNormal->Border->Color1 = System::Drawing::Color::ForestGreen;
			this->Reserve_new_btn->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Reserve_new_btn->StateNormal->Border->Rounding = 15;
			this->Reserve_new_btn->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->Reserve_new_btn->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Reserve_new_btn->StatePressed->Back->Color1 = System::Drawing::Color::DarkGreen;
			this->Reserve_new_btn->StatePressed->Back->Color2 = System::Drawing::Color::DarkGreen;
			this->Reserve_new_btn->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Reserve_new_btn->StatePressed->Border->Rounding = 15;
			this->Reserve_new_btn->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->Reserve_new_btn->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->Reserve_new_btn->StateTracking->Back->Color1 = System::Drawing::Color::Green;
			this->Reserve_new_btn->StateTracking->Back->Color2 = System::Drawing::Color::Green;
			this->Reserve_new_btn->StateTracking->Border->Color1 = System::Drawing::Color::ForestGreen;
			this->Reserve_new_btn->StateTracking->Border->Color2 = System::Drawing::Color::ForestGreen;
			this->Reserve_new_btn->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->Reserve_new_btn->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Reserve_new_btn->StateTracking->Border->Rounding = 15;
			this->Reserve_new_btn->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->Reserve_new_btn->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->Reserve_new_btn->TabIndex = 11;
			this->Reserve_new_btn->Values->Text = L"Reserve new trip";
			this->Reserve_new_btn->Click += gcnew System::EventHandler(this, &MyForm::Reserve_new_btn_Click);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(51, 255);
			this->label32->Margin = System::Windows::Forms::Padding(0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(145, 25);
			this->label32->TabIndex = 10;
			this->label32->Text = L"Total fare: 30 L.E";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(51, 225);
			this->label31->Margin = System::Windows::Forms::Padding(0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(167, 25);
			this->label31->TabIndex = 9;
			this->label31->Text = L"Reserved tickets: 3";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(51, 202);
			this->label29->Margin = System::Windows::Forms::Padding(0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(119, 25);
			this->label29->TabIndex = 8;
			this->label29->Text = L"Train no: 505";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(51, 158);
			this->label30->Margin = System::Windows::Forms::Padding(0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(151, 25);
			this->label30->TabIndex = 7;
			this->label30->Text = L"Date: 17/06/2023";
			// 
			// label28
			// 
			this->label28->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(342, 105);
			this->label28->Margin = System::Windows::Forms::Padding(0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(291, 22);
			this->label28->TabIndex = 5;
			this->label28->Text = L"Alexandria";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::White;
			this->label27->Font = (gcnew System::Drawing::Font(L"Tahoma", 15));
			this->label27->ForeColor = System::Drawing::Color::Gray;
			this->label27->Location = System::Drawing::Point(309, 98);
			this->label27->Margin = System::Windows::Forms::Padding(0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(38, 30);
			this->label27->TabIndex = 4;
			this->label27->Text = L"→";
			// 
			// label26
			// 
			this->label26->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(51, 105);
			this->label26->Margin = System::Windows::Forms::Padding(0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(258, 22);
			this->label26->TabIndex = 2;
			this->label26->Text = L"Cairo";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// kryptonButton19
			// 
			this->kryptonButton19->Enabled = false;
			this->kryptonButton19->Location = System::Drawing::Point(18, 90);
			this->kryptonButton19->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton19->Name = L"kryptonButton19";
			this->kryptonButton19->Size = System::Drawing::Size(634, 210);
			this->kryptonButton19->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton19->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton19->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton19->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton19->StateDisabled->Border->Rounding = 15;
			this->kryptonButton19->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton19->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton19->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton19->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton19->StateNormal->Border->Rounding = 15;
			this->kryptonButton19->TabIndex = 1;
			this->kryptonButton19->Values->Text = L"";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::DarkGreen;
			this->label25->Location = System::Drawing::Point(240, 30);
			this->label25->Margin = System::Windows::Forms::Padding(0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(208, 23);
			this->label25->TabIndex = 0;
			this->label25->Text = L"Trip reserved successfully!";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Gainsboro;
			this->panel8->Location = System::Drawing::Point(624, 82);
			this->panel8->Margin = System::Windows::Forms::Padding(0);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(686, 420);
			this->panel8->TabIndex = 17;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::White;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12));
			this->label22->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label22->Location = System::Drawing::Point(669, 98);
			this->label22->Margin = System::Windows::Forms::Padding(0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(164, 28);
			this->label22->TabIndex = 15;
			this->label22->Text = L"10 Available trips";
			// 
			// panel10
			// 
			this->panel10->AutoSize = true;
			this->panel10->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel10->BackColor = System::Drawing::Color::White;
			this->panel10->Location = System::Drawing::Point(634, 135);
			this->panel10->Margin = System::Windows::Forms::Padding(0);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(0, 0);
			this->panel10->TabIndex = 19;
			// 
			// kryptonButton14
			// 
			this->kryptonButton14->AutoSize = true;
			this->kryptonButton14->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->kryptonButton14->Enabled = false;
			this->kryptonButton14->Location = System::Drawing::Point(634, 82);
			this->kryptonButton14->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton14->MinimumSize = System::Drawing::Size(651, 518);
			this->kryptonButton14->Name = L"kryptonButton14";
			this->kryptonButton14->Size = System::Drawing::Size(651, 518);
			this->kryptonButton14->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton14->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton14->StateDisabled->Border->Color1 = System::Drawing::Color::AliceBlue;
			this->kryptonButton14->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton14->StateDisabled->Border->Rounding = 15;
			this->kryptonButton14->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton14->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton14->StateNormal->Border->Color1 = System::Drawing::Color::AliceBlue;
			this->kryptonButton14->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton14->StateNormal->Border->Rounding = 15;
			this->kryptonButton14->TabIndex = 9;
			this->kryptonButton14->Values->Text = L"";
			// 
			// kryptonButton16
			// 
			this->kryptonButton16->Enabled = false;
			this->kryptonButton16->Location = System::Drawing::Point(618, 22);
			this->kryptonButton16->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton16->Name = L"kryptonButton16";
			this->kryptonButton16->Size = System::Drawing::Size(138, 68);
			this->kryptonButton16->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton16->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton16->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton16->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton16->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton16->StateDisabled->Border->Rounding = 15;
			this->kryptonButton16->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton16->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton16->StateNormal->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton16->StateNormal->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton16->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton16->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton16->StateNormal->Border->Rounding = 15;
			this->kryptonButton16->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton16->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton16->TabIndex = 6;
			this->kryptonButton16->Values->Text = L"Cairo";
			// 
			// kryptonBorderEdge1
			// 
			this->kryptonBorderEdge1->Location = System::Drawing::Point(994, 75);
			this->kryptonBorderEdge1->Margin = System::Windows::Forms::Padding(0);
			this->kryptonBorderEdge1->Name = L"kryptonBorderEdge1";
			this->kryptonBorderEdge1->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->kryptonBorderEdge1->Size = System::Drawing::Size(1, 38);
			this->kryptonBorderEdge1->StateCommon->Color1 = System::Drawing::Color::Gray;
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::White;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label15->Location = System::Drawing::Point(738, 120);
			this->label15->Margin = System::Windows::Forms::Padding(0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(100, 28);
			this->label15->TabIndex = 4;
			this->label15->Text = L"10 Tickets";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::White;
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 20));
			this->label14->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label14->Location = System::Drawing::Point(754, 30);
			this->label14->Margin = System::Windows::Forms::Padding(0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(52, 41);
			this->label14->TabIndex = 3;
			this->label14->Text = L"→";
			// 
			// kryptonButton15
			// 
			this->kryptonButton15->Enabled = false;
			this->kryptonButton15->Location = System::Drawing::Point(806, 22);
			this->kryptonButton15->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton15->Name = L"kryptonButton15";
			this->kryptonButton15->Size = System::Drawing::Size(138, 68);
			this->kryptonButton15->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton15->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton15->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton15->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton15->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton15->StateDisabled->Border->Rounding = 15;
			this->kryptonButton15->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton15->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton15->StateNormal->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton15->StateNormal->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton15->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton15->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton15->StateNormal->Border->Rounding = 15;
			this->kryptonButton15->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton15->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton15->TabIndex = 2;
			this->kryptonButton15->Values->Text = L"Cairo";
			// 
			// kryptonButton13
			// 
			this->kryptonButton13->Enabled = false;
			this->kryptonButton13->Location = System::Drawing::Point(600, 8);
			this->kryptonButton13->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton13->Name = L"kryptonButton13";
			this->kryptonButton13->Size = System::Drawing::Size(360, 165);
			this->kryptonButton13->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton13->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton13->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton13->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton13->StateDisabled->Border->Rounding = 15;
			this->kryptonButton13->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton13->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton13->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton13->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton13->StateNormal->Border->Rounding = 15;
			this->kryptonButton13->TabIndex = 0;
			this->kryptonButton13->Values->Text = L"";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Controls->Add(this->kryptonBorderEdge2);
			this->panel5->Controls->Add(this->label24);
			this->panel5->Controls->Add(this->label23);
			this->panel5->Controls->Add(this->Book_btn);
			this->panel5->Controls->Add(this->kryptonButton17);
			this->panel5->Controls->Add(this->label14);
			this->panel5->Controls->Add(this->label15);
			this->panel5->Controls->Add(this->kryptonBorderEdge1);
			this->panel5->Controls->Add(this->kryptonButton15);
			this->panel5->Controls->Add(this->kryptonButton16);
			this->panel5->Controls->Add(this->kryptonButton13);
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Margin = System::Windows::Forms::Padding(0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1920, 188);
			this->panel5->TabIndex = 8;
			// 
			// kryptonBorderEdge2
			// 
			this->kryptonBorderEdge2->AutoSize = false;
			this->kryptonBorderEdge2->Location = System::Drawing::Point(630, 108);
			this->kryptonBorderEdge2->Margin = System::Windows::Forms::Padding(0);
			this->kryptonBorderEdge2->Name = L"kryptonBorderEdge2";
			this->kryptonBorderEdge2->Size = System::Drawing::Size(300, 2);
			this->kryptonBorderEdge2->StateCommon->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonBorderEdge2->StateCommon->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonBorderEdge2->StateNormal->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonBorderEdge2->StateNormal->Color2 = System::Drawing::Color::White;
			this->kryptonBorderEdge2->StateNormal->ColorAlign = ComponentFactory::Krypton::Toolkit::PaletteRectangleAlign::Control;
			this->kryptonBorderEdge2->StateNormal->ColorAngle = 20;
			this->kryptonBorderEdge2->StateNormal->ColorStyle = ComponentFactory::Krypton::Toolkit::PaletteColorStyle::LinearShadow;
			this->kryptonBorderEdge2->Text = L"kryptonBorderEdge2";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::AliceBlue;
			this->label24->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10));
			this->label24->Location = System::Drawing::Point(1046, 15);
			this->label24->Margin = System::Windows::Forms::Padding(0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(81, 23);
			this->label24->TabIndex = 12;
			this->label24->Text = L"Total fare";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::AliceBlue;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 25, System::Drawing::FontStyle::Bold));
			this->label23->Location = System::Drawing::Point(1046, 30);
			this->label23->Margin = System::Windows::Forms::Padding(0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(121, 57);
			this->label23->TabIndex = 11;
			this->label23->Text = L"0 L.E";
			// 
			// Book_btn
			// 
			this->Book_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Book_btn->Enabled = false;
			this->Book_btn->Location = System::Drawing::Point(1038, 98);
			this->Book_btn->Margin = System::Windows::Forms::Padding(0);
			this->Book_btn->Name = L"Book_btn";
			this->Book_btn->OverrideDefault->Back->Color1 = System::Drawing::Color::ForestGreen;
			this->Book_btn->OverrideDefault->Back->Color2 = System::Drawing::Color::ForestGreen;
			this->Book_btn->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Book_btn->OverrideDefault->Border->Rounding = 15;
			this->Book_btn->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Book_btn->OverrideFocus->Border->Rounding = 15;
			this->Book_btn->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->Book_btn->Size = System::Drawing::Size(291, 68);
			this->Book_btn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Book_btn->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->Book_btn->StateCommon->Border->Rounding = 15;
			this->Book_btn->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->Book_btn->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->Book_btn->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->Book_btn->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->Book_btn->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Book_btn->StateDisabled->Border->Rounding = 15;
			this->Book_btn->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->Book_btn->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->Book_btn->StateNormal->Back->Color1 = System::Drawing::Color::ForestGreen;
			this->Book_btn->StateNormal->Back->Color2 = System::Drawing::Color::ForestGreen;
			this->Book_btn->StateNormal->Border->Color1 = System::Drawing::Color::ForestGreen;
			this->Book_btn->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Book_btn->StateNormal->Border->Rounding = 15;
			this->Book_btn->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->Book_btn->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Book_btn->StatePressed->Back->Color1 = System::Drawing::Color::DarkGreen;
			this->Book_btn->StatePressed->Back->Color2 = System::Drawing::Color::DarkGreen;
			this->Book_btn->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Book_btn->StatePressed->Border->Rounding = 15;
			this->Book_btn->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->Book_btn->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->Book_btn->StateTracking->Back->Color1 = System::Drawing::Color::Green;
			this->Book_btn->StateTracking->Back->Color2 = System::Drawing::Color::Green;
			this->Book_btn->StateTracking->Border->Color1 = System::Drawing::Color::ForestGreen;
			this->Book_btn->StateTracking->Border->Color2 = System::Drawing::Color::ForestGreen;
			this->Book_btn->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->Book_btn->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Book_btn->StateTracking->Border->Rounding = 15;
			this->Book_btn->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->Book_btn->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->Book_btn->TabIndex = 8;
			this->Book_btn->Values->Text = L"Book";
			this->Book_btn->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton18_Click);
			// 
			// kryptonButton17
			// 
			this->kryptonButton17->Enabled = false;
			this->kryptonButton17->Location = System::Drawing::Point(1029, 8);
			this->kryptonButton17->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton17->Name = L"kryptonButton17";
			this->kryptonButton17->Size = System::Drawing::Size(309, 165);
			this->kryptonButton17->StateDisabled->Back->Color1 = System::Drawing::Color::AliceBlue;
			this->kryptonButton17->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton17->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton17->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton17->StateDisabled->Border->Rounding = 15;
			this->kryptonButton17->StateNormal->Back->Color1 = System::Drawing::Color::AliceBlue;
			this->kryptonButton17->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton17->StateNormal->Back->ColorStyle = ComponentFactory::Krypton::Toolkit::PaletteColorStyle::Linear;
			this->kryptonButton17->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton17->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton17->StateNormal->Border->Rounding = 15;
			this->kryptonButton17->TabIndex = 7;
			this->kryptonButton17->Values->Text = L"";
			// 
			// page2_container
			// 
			this->page2_container->AutoSize = true;
			this->page2_container->Controls->Add(this->flowLayoutPanel1);
			this->page2_container->Controls->Add(this->panel5);
			this->page2_container->Location = System::Drawing::Point(0, 82);
			this->page2_container->Margin = System::Windows::Forms::Padding(0);
			this->page2_container->Name = L"page2_container";
			this->page2_container->Size = System::Drawing::Size(1920, 1245);
			this->page2_container->TabIndex = 20;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Controls->Add(this->panel4);
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 188);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1920, 795);
			this->flowLayoutPanel1->TabIndex = 20;
			// 
			// admin_page
			// 
			this->admin_page->BackColor = System::Drawing::Color::White;
			this->admin_page->Controls->Add(this->flowLayoutPanel3);
			this->admin_page->Location = System::Drawing::Point(0, 82);
			this->admin_page->Margin = System::Windows::Forms::Padding(0);
			this->admin_page->Name = L"admin_page";
			this->admin_page->Size = System::Drawing::Size(1920, 1245);
			this->admin_page->TabIndex = 20;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->AutoScroll = true;
			this->flowLayoutPanel3->Controls->Add(this->panel11);
			this->flowLayoutPanel3->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel3->Margin = System::Windows::Forms::Padding(0);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(1920, 968);
			this->flowLayoutPanel3->TabIndex = 16;
			// 
			// panel11
			// 
			this->panel11->AutoSize = true;
			this->panel11->BackColor = System::Drawing::Color::White;
			this->panel11->Controls->Add(this->Trips_management_panel);
			this->panel11->Controls->Add(this->Trains_management_panel);
			this->panel11->Controls->Add(this->kryptonButton42);
			this->panel11->Location = System::Drawing::Point(0, 0);
			this->panel11->Margin = System::Windows::Forms::Padding(0);
			this->panel11->MinimumSize = System::Drawing::Size(0, 938);
			this->panel11->Name = L"panel11";
			this->panel11->Padding = System::Windows::Forms::Padding(0, 0, 0, 68);
			this->panel11->Size = System::Drawing::Size(3771, 1680);
			this->panel11->TabIndex = 16;
			// 
			// edit_train_wind
			// 
			this->edit_train_wind->BackColor = System::Drawing::Color::White;
			this->edit_train_wind->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->edit_train_wind->Controls->Add(this->kryptonButton57);
			this->edit_train_wind->Controls->Add(this->textBox14);
			this->edit_train_wind->Controls->Add(this->kryptonButton58);
			this->edit_train_wind->Controls->Add(this->kryptonButton59);
			this->edit_train_wind->Controls->Add(this->edited_train_saved);
			this->edit_train_wind->Controls->Add(this->label17);
			this->edit_train_wind->Location = System::Drawing::Point(296, 202);
			this->edit_train_wind->Margin = System::Windows::Forms::Padding(0);
			this->edit_train_wind->Name = L"edit_train_wind";
			this->edit_train_wind->Size = System::Drawing::Size(550, 401);
			this->edit_train_wind->TabIndex = 45;
			// 
			// kryptonButton57
			// 
			this->kryptonButton57->Cursor = System::Windows::Forms::Cursors::Hand;
			this->kryptonButton57->Location = System::Drawing::Point(280, 242);
			this->kryptonButton57->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton57->Name = L"kryptonButton57";
			this->kryptonButton57->OverrideDefault->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton57->OverrideDefault->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton57->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton57->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton57->OverrideDefault->Border->Rounding = 15;
			this->kryptonButton57->OverrideDefault->Content->ShortText->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton57->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton57->OverrideFocus->Border->Rounding = 15;
			this->kryptonButton57->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->kryptonButton57->Size = System::Drawing::Size(175, 54);
			this->kryptonButton57->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton57->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton57->StateCommon->Border->Rounding = 15;
			this->kryptonButton57->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton57->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton57->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton57->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton57->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton57->StateDisabled->Border->Rounding = 15;
			this->kryptonButton57->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton57->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton57->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton57->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton57->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton57->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton57->StateNormal->Border->Rounding = 15;
			this->kryptonButton57->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton57->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton57->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton57->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton57->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton57->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton57->StatePressed->Border->Rounding = 15;
			this->kryptonButton57->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton57->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton57->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton57->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton57->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton57->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton57->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton57->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton57->StateTracking->Border->Rounding = 15;
			this->kryptonButton57->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton57->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton57->TabIndex = 44;
			this->kryptonButton57->Values->Text = L"Cancel";
			this->kryptonButton57->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton57_Click);
			// 
			// textBox14
			// 
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(104, 148);
			this->textBox14->Margin = System::Windows::Forms::Padding(0);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(345, 32);
			this->textBox14->TabIndex = 42;
			this->textBox14->Text = L"Train capacity";
			this->textBox14->Click += gcnew System::EventHandler(this, &MyForm::textBox_Click);
			// 
			// kryptonButton58
			// 
			this->kryptonButton58->Cursor = System::Windows::Forms::Cursors::Hand;
			this->kryptonButton58->Location = System::Drawing::Point(92, 242);
			this->kryptonButton58->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton58->Name = L"kryptonButton58";
			this->kryptonButton58->OverrideDefault->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton58->OverrideDefault->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton58->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton58->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton58->OverrideDefault->Border->Rounding = 15;
			this->kryptonButton58->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton58->OverrideFocus->Border->Rounding = 15;
			this->kryptonButton58->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->kryptonButton58->Size = System::Drawing::Size(175, 54);
			this->kryptonButton58->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton58->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton58->StateCommon->Border->Rounding = 15;
			this->kryptonButton58->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton58->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton58->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton58->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton58->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton58->StateDisabled->Border->Rounding = 15;
			this->kryptonButton58->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton58->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton58->StateNormal->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton58->StateNormal->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton58->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton58->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton58->StateNormal->Border->Rounding = 15;
			this->kryptonButton58->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton58->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton58->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton58->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton58->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton58->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton58->StatePressed->Border->Rounding = 15;
			this->kryptonButton58->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton58->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton58->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton58->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton58->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton58->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton58->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton58->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton58->StateTracking->Border->Rounding = 15;
			this->kryptonButton58->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton58->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton58->TabIndex = 41;
			this->kryptonButton58->Values->Text = L"Save";
			this->kryptonButton58->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton58_Click);
			// 
			// kryptonButton59
			// 
			this->kryptonButton59->Enabled = false;
			this->kryptonButton59->Location = System::Drawing::Point(90, 138);
			this->kryptonButton59->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton59->Name = L"kryptonButton59";
			this->kryptonButton59->Size = System::Drawing::Size(371, 54);
			this->kryptonButton59->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton59->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton59->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton59->StateCommon->Border->Rounding = 8;
			this->kryptonButton59->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton59->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton59->TabIndex = 19;
			this->kryptonButton59->Values->Text = L"";
			// 
			// edited_train_saved
			// 
			this->edited_train_saved->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edited_train_saved->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->edited_train_saved->Location = System::Drawing::Point(98, 321);
			this->edited_train_saved->Margin = System::Windows::Forms::Padding(0);
			this->edited_train_saved->Name = L"edited_train_saved";
			this->edited_train_saved->Size = System::Drawing::Size(355, 30);
			this->edited_train_saved->TabIndex = 8;
			this->edited_train_saved->Text = L"Your information changed successfully ";
			this->edited_train_saved->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label17->Location = System::Drawing::Point(105, 42);
			this->label17->Margin = System::Windows::Forms::Padding(0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(326, 60);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Edit Train";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Trains_management_panel
			// 
			this->Trains_management_panel->AutoSize = true;
			this->Trains_management_panel->Controls->Add(this->edit_train_wind);
			this->Trains_management_panel->Controls->Add(this->panel16);
			this->Trains_management_panel->Controls->Add(this->panel19);
			this->Trains_management_panel->Controls->Add(this->kryptonButton44);
			this->Trains_management_panel->Location = System::Drawing::Point(360, 30);
			this->Trains_management_panel->Margin = System::Windows::Forms::Padding(0);
			this->Trains_management_panel->Name = L"Trains_management_panel";
			this->Trains_management_panel->Padding = System::Windows::Forms::Padding(0, 0, 0, 52);
			this->Trains_management_panel->Size = System::Drawing::Size(3411, 1582);
			this->Trains_management_panel->TabIndex = 39;
			// 
			// panel16
			// 
			this->panel16->AutoSize = true;
			this->panel16->BackColor = System::Drawing::Color::AliceBlue;
			this->panel16->Controls->Add(this->label47);
			this->panel16->Controls->Add(this->panel18);
			this->panel16->Controls->Add(this->kryptonButton18);
			this->panel16->Location = System::Drawing::Point(391, 435);
			this->panel16->Margin = System::Windows::Forms::Padding(0);
			this->panel16->Name = L"panel16";
			this->panel16->Padding = System::Windows::Forms::Padding(0, 0, 0, 22);
			this->panel16->Size = System::Drawing::Size(772, 502);
			this->panel16->TabIndex = 37;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->BackColor = System::Drawing::Color::White;
			this->label47->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12));
			this->label47->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label47->Location = System::Drawing::Point(18, 8);
			this->label47->Margin = System::Windows::Forms::Padding(0);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(174, 28);
			this->label47->TabIndex = 21;
			this->label47->Text = L"10 Available trains";
			this->label47->Visible = false;
			// 
			// panel18
			// 
			this->panel18->AutoSize = true;
			this->panel18->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel18->BackColor = System::Drawing::Color::White;
			this->panel18->Location = System::Drawing::Point(2, 52);
			this->panel18->Margin = System::Windows::Forms::Padding(0);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(0, 0);
			this->panel18->TabIndex = 37;
			// 
			// kryptonButton18
			// 
			this->kryptonButton18->AutoSize = true;
			this->kryptonButton18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->kryptonButton18->Enabled = false;
			this->kryptonButton18->Location = System::Drawing::Point(0, 0);
			this->kryptonButton18->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton18->Name = L"kryptonButton18";
			this->kryptonButton18->Size = System::Drawing::Size(772, 480);
			this->kryptonButton18->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton18->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton18->StateDisabled->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->kryptonButton18->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton18->StateDisabled->Border->Rounding = 15;
			this->kryptonButton18->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton18->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton18->StateNormal->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->kryptonButton18->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton18->StateNormal->Border->Rounding = 15;
			this->kryptonButton18->TabIndex = 36;
			this->kryptonButton18->Values->Text = L"";
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::AliceBlue;
			this->panel19->Controls->Add(this->label49);
			this->panel19->Controls->Add(this->textBox8);
			this->panel19->Controls->Add(this->kryptonButton36);
			this->panel19->Controls->Add(this->kryptonButton33);
			this->panel19->Controls->Add(this->label48);
			this->panel19->Controls->Add(this->label50);
			this->panel19->Controls->Add(this->textBox7);
			this->panel19->Controls->Add(this->kryptonButton35);
			this->panel19->Controls->Add(this->label55);
			this->panel19->Controls->Add(this->textBox9);
			this->panel19->Controls->Add(this->kryptonButton37);
			this->panel19->Controls->Add(this->label56);
			this->panel19->Controls->Add(this->label57);
			this->panel19->Controls->Add(this->kryptonButton43);
			this->panel19->Location = System::Drawing::Point(342, 142);
			this->panel19->Margin = System::Windows::Forms::Padding(0);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(874, 240);
			this->panel19->TabIndex = 16;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->BackColor = System::Drawing::Color::White;
			this->label49->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(582, 30);
			this->label49->Margin = System::Windows::Forms::Padding(0);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(121, 23);
			this->label49->TabIndex = 36;
			this->label49->Text = L"Train capacity";
			// 
			// textBox8
			// 
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(600, 79);
			this->textBox8->Margin = System::Windows::Forms::Padding(0);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(222, 23);
			this->textBox8->TabIndex = 38;
			this->textBox8->Text = L"Enter train capacity";
			this->textBox8->Click += gcnew System::EventHandler(this, &MyForm::textBox_Click);
			// 
			// kryptonButton36
			// 
			this->kryptonButton36->Enabled = false;
			this->kryptonButton36->Location = System::Drawing::Point(582, 68);
			this->kryptonButton36->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton36->Name = L"kryptonButton36";
			this->kryptonButton36->Size = System::Drawing::Size(258, 45);
			this->kryptonButton36->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton36->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton36->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton36->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton36->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton36->StateDisabled->Border->Rounding = 10;
			this->kryptonButton36->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton36->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton36->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton36->StateNormal->Border->Rounding = 8;
			this->kryptonButton36->TabIndex = 37;
			this->kryptonButton36->Values->Text = L"";
			// 
			// kryptonButton33
			// 
			this->kryptonButton33->Cursor = System::Windows::Forms::Cursors::Hand;
			this->kryptonButton33->Location = System::Drawing::Point(300, 150);
			this->kryptonButton33->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton33->Name = L"kryptonButton33";
			this->kryptonButton33->OverrideDefault->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton33->OverrideDefault->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton33->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton33->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton33->OverrideDefault->Border->Rounding = 15;
			this->kryptonButton33->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton33->OverrideFocus->Border->Rounding = 15;
			this->kryptonButton33->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->kryptonButton33->Size = System::Drawing::Size(274, 60);
			this->kryptonButton33->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton33->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton33->StateCommon->Border->Rounding = 15;
			this->kryptonButton33->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton33->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton33->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton33->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton33->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton33->StateDisabled->Border->Rounding = 15;
			this->kryptonButton33->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton33->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton33->StateNormal->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton33->StateNormal->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton33->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton33->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton33->StateNormal->Border->Rounding = 15;
			this->kryptonButton33->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton33->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton33->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton33->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton33->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton33->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton33->StatePressed->Border->Rounding = 15;
			this->kryptonButton33->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton33->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton33->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton33->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton33->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton33->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton33->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton33->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton33->StateTracking->Border->Rounding = 15;
			this->kryptonButton33->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton33->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton33->TabIndex = 17;
			this->kryptonButton33->Values->Text = L"Add";
			this->kryptonButton33->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton33_Click);
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->BackColor = System::Drawing::Color::White;
			this->label48->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(309, 30);
			this->label48->Margin = System::Windows::Forms::Padding(0);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(99, 23);
			this->label48->TabIndex = 33;
			this->label48->Text = L"Train name";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->BackColor = System::Drawing::Color::White;
			this->label50->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(34, 30);
			this->label50->Margin = System::Windows::Forms::Padding(0);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(118, 23);
			this->label50->TabIndex = 26;
			this->label50->Text = L"Train number";
			// 
			// textBox7
			// 
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(326, 79);
			this->textBox7->Margin = System::Windows::Forms::Padding(0);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(222, 23);
			this->textBox7->TabIndex = 35;
			this->textBox7->Text = L"Enter train name";
			this->textBox7->Click += gcnew System::EventHandler(this, &MyForm::textBox_Click);
			// 
			// kryptonButton35
			// 
			this->kryptonButton35->Enabled = false;
			this->kryptonButton35->Location = System::Drawing::Point(309, 68);
			this->kryptonButton35->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton35->Name = L"kryptonButton35";
			this->kryptonButton35->Size = System::Drawing::Size(258, 45);
			this->kryptonButton35->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton35->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton35->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton35->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton35->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton35->StateDisabled->Border->Rounding = 10;
			this->kryptonButton35->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton35->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton35->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton35->StateNormal->Border->Rounding = 8;
			this->kryptonButton35->TabIndex = 34;
			this->kryptonButton35->Values->Text = L"";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label55->ForeColor = System::Drawing::Color::Red;
			this->label55->Location = System::Drawing::Point(566, 15);
			this->label55->Margin = System::Windows::Forms::Padding(0);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(0, 23);
			this->label55->TabIndex = 29;
			// 
			// textBox9
			// 
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(51, 79);
			this->textBox9->Margin = System::Windows::Forms::Padding(0);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(222, 23);
			this->textBox9->TabIndex = 28;
			this->textBox9->Text = L"Enter train number";
			this->textBox9->Click += gcnew System::EventHandler(this, &MyForm::textBox_Click);
			// 
			// kryptonButton37
			// 
			this->kryptonButton37->Enabled = false;
			this->kryptonButton37->Location = System::Drawing::Point(34, 68);
			this->kryptonButton37->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton37->Name = L"kryptonButton37";
			this->kryptonButton37->Size = System::Drawing::Size(258, 45);
			this->kryptonButton37->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton37->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton37->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton37->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton37->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton37->StateDisabled->Border->Rounding = 10;
			this->kryptonButton37->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton37->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton37->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton37->StateNormal->Border->Rounding = 8;
			this->kryptonButton37->TabIndex = 27;
			this->kryptonButton37->Values->Text = L"";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label56->ForeColor = System::Drawing::Color::Red;
			this->label56->Location = System::Drawing::Point(291, 112);
			this->label56->Margin = System::Windows::Forms::Padding(0);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(0, 23);
			this->label56->TabIndex = 25;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label57->ForeColor = System::Drawing::Color::Red;
			this->label57->Location = System::Drawing::Point(34, 105);
			this->label57->Margin = System::Windows::Forms::Padding(0);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(0, 23);
			this->label57->TabIndex = 21;
			// 
			// kryptonButton43
			// 
			this->kryptonButton43->AutoSize = true;
			this->kryptonButton43->Dock = System::Windows::Forms::DockStyle::Fill;
			this->kryptonButton43->Enabled = false;
			this->kryptonButton43->Location = System::Drawing::Point(0, 0);
			this->kryptonButton43->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton43->Name = L"kryptonButton43";
			this->kryptonButton43->Size = System::Drawing::Size(874, 240);
			this->kryptonButton43->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton43->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton43->StateDisabled->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->kryptonButton43->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton43->StateDisabled->Border->Rounding = 15;
			this->kryptonButton43->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton43->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton43->StateNormal->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->kryptonButton43->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton43->StateNormal->Border->Rounding = 15;
			this->kryptonButton43->TabIndex = 18;
			this->kryptonButton43->Values->Text = L"";
			// 
			// kryptonButton44
			// 
			this->kryptonButton44->AutoSize = true;
			this->kryptonButton44->Dock = System::Windows::Forms::DockStyle::Fill;
			this->kryptonButton44->Enabled = false;
			this->kryptonButton44->Location = System::Drawing::Point(0, 0);
			this->kryptonButton44->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton44->Name = L"kryptonButton44";
			this->kryptonButton44->OverrideDefault->Back->Color1 = System::Drawing::Color::Red;
			this->kryptonButton44->OverrideDefault->Back->Color2 = System::Drawing::Color::Red;
			this->kryptonButton44->OverrideDefault->Border->Color1 = System::Drawing::Color::Red;
			this->kryptonButton44->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton44->OverrideDefault->Border->Rounding = 15;
			this->kryptonButton44->Size = System::Drawing::Size(3411, 1530);
			this->kryptonButton44->StateDisabled->Back->Color1 = System::Drawing::Color::AliceBlue;
			this->kryptonButton44->StateDisabled->Back->Color2 = System::Drawing::Color::AliceBlue;
			this->kryptonButton44->StateDisabled->Border->Color1 = System::Drawing::Color::AliceBlue;
			this->kryptonButton44->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton44->StateDisabled->Border->Rounding = 15;
			this->kryptonButton44->StateNormal->Back->Color1 = System::Drawing::Color::AliceBlue;
			this->kryptonButton44->StateNormal->Back->Color2 = System::Drawing::Color::AliceBlue;
			this->kryptonButton44->StateNormal->Border->Color1 = System::Drawing::Color::AliceBlue;
			this->kryptonButton44->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton44->StateNormal->Border->Rounding = 15;
			this->kryptonButton44->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton44->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton44->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton44->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton44->StatePressed->Border->Rounding = 15;
			this->kryptonButton44->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton44->StateTracking->Border->Rounding = 15;
			this->kryptonButton44->TabIndex = 15;
			this->kryptonButton44->Values->Text = L"";
			// 
			// Trips_management_panel
			// 
			this->Trips_management_panel->AutoSize = true;
			this->Trips_management_panel->Controls->Add(this->edit_trip_wind);
			this->Trips_management_panel->Controls->Add(this->panel13);
			this->Trips_management_panel->Controls->Add(this->panel12);
			this->Trips_management_panel->Controls->Add(this->trip_tools);
			this->Trips_management_panel->Location = System::Drawing::Point(360, 30);
			this->Trips_management_panel->Margin = System::Windows::Forms::Padding(0);
			this->Trips_management_panel->Name = L"Trips_management_panel";
			this->Trips_management_panel->Padding = System::Windows::Forms::Padding(0, 0, 0, 52);
			this->Trips_management_panel->Size = System::Drawing::Size(3222, 1582);
			this->Trips_management_panel->TabIndex = 38;
			// 
			// edit_trip_wind
			// 
			this->edit_trip_wind->BackColor = System::Drawing::Color::White;
			this->edit_trip_wind->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->edit_trip_wind->Controls->Add(this->kryptonButton53);
			this->edit_trip_wind->Controls->Add(this->textBox11);
			this->edit_trip_wind->Controls->Add(this->textBox12);
			this->edit_trip_wind->Controls->Add(this->save_edited_trip);
			this->edit_trip_wind->Controls->Add(this->kryptonButton54);
			this->edit_trip_wind->Controls->Add(this->textBox10);
			this->edit_trip_wind->Controls->Add(this->kryptonButton55);
			this->edit_trip_wind->Controls->Add(this->kryptonButton56);
			this->edit_trip_wind->Controls->Add(this->edited_trip_saved);
			this->edit_trip_wind->Controls->Add(this->label18);
			this->edit_trip_wind->Location = System::Drawing::Point(332, 242);
			this->edit_trip_wind->Margin = System::Windows::Forms::Padding(0);
			this->edit_trip_wind->Name = L"edit_trip_wind";
			this->edit_trip_wind->Size = System::Drawing::Size(550, 488);
			this->edit_trip_wind->TabIndex = 38;
			// 
			// kryptonButton53
			// 
			this->kryptonButton53->Cursor = System::Windows::Forms::Cursors::Hand;
			this->kryptonButton53->Location = System::Drawing::Point(278, 356);
			this->kryptonButton53->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton53->Name = L"kryptonButton53";
			this->kryptonButton53->OverrideDefault->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton53->OverrideDefault->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton53->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton53->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton53->OverrideDefault->Border->Rounding = 15;
			this->kryptonButton53->OverrideDefault->Content->ShortText->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton53->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton53->OverrideFocus->Border->Rounding = 15;
			this->kryptonButton53->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->kryptonButton53->Size = System::Drawing::Size(175, 54);
			this->kryptonButton53->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton53->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton53->StateCommon->Border->Rounding = 15;
			this->kryptonButton53->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton53->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton53->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton53->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton53->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton53->StateDisabled->Border->Rounding = 15;
			this->kryptonButton53->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton53->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton53->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton53->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton53->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton53->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton53->StateNormal->Border->Rounding = 15;
			this->kryptonButton53->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton53->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton53->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton53->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton53->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton53->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton53->StatePressed->Border->Rounding = 15;
			this->kryptonButton53->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton53->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton53->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton53->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton53->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton53->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton53->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton53->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton53->StateTracking->Border->Rounding = 15;
			this->kryptonButton53->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton53->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton53->TabIndex = 44;
			this->kryptonButton53->Values->Text = L"Cancel";
			this->kryptonButton53->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton53_Click_1);
			// 
			// textBox11
			// 
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(104, 272);
			this->textBox11->Margin = System::Windows::Forms::Padding(0);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(345, 32);
			this->textBox11->TabIndex = 43;
			this->textBox11->Text = L"Arrive time";
			this->textBox11->Click += gcnew System::EventHandler(this, &MyForm::textBox_Click);
			// 
			// textBox12
			// 
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(104, 144);
			this->textBox12->Margin = System::Windows::Forms::Padding(0);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(345, 32);
			this->textBox12->TabIndex = 42;
			this->textBox12->Text = L"Date";
			this->textBox12->Click += gcnew System::EventHandler(this, &MyForm::textBox_Click);
			// 
			// save_edited_trip
			// 
			this->save_edited_trip->Cursor = System::Windows::Forms::Cursors::Hand;
			this->save_edited_trip->Location = System::Drawing::Point(90, 356);
			this->save_edited_trip->Margin = System::Windows::Forms::Padding(0);
			this->save_edited_trip->Name = L"save_edited_trip";
			this->save_edited_trip->OverrideDefault->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->save_edited_trip->OverrideDefault->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->save_edited_trip->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->save_edited_trip->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->save_edited_trip->OverrideDefault->Border->Rounding = 15;
			this->save_edited_trip->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->save_edited_trip->OverrideFocus->Border->Rounding = 15;
			this->save_edited_trip->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->save_edited_trip->Size = System::Drawing::Size(175, 54);
			this->save_edited_trip->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->save_edited_trip->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->save_edited_trip->StateCommon->Border->Rounding = 15;
			this->save_edited_trip->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->save_edited_trip->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->save_edited_trip->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->save_edited_trip->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->save_edited_trip->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->save_edited_trip->StateDisabled->Border->Rounding = 15;
			this->save_edited_trip->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->save_edited_trip->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->save_edited_trip->StateNormal->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->save_edited_trip->StateNormal->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->save_edited_trip->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->save_edited_trip->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->save_edited_trip->StateNormal->Border->Rounding = 15;
			this->save_edited_trip->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->save_edited_trip->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->save_edited_trip->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->save_edited_trip->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->save_edited_trip->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->save_edited_trip->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->save_edited_trip->StatePressed->Border->Rounding = 15;
			this->save_edited_trip->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->save_edited_trip->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->save_edited_trip->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->save_edited_trip->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->save_edited_trip->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->save_edited_trip->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->save_edited_trip->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->save_edited_trip->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->save_edited_trip->StateTracking->Border->Rounding = 15;
			this->save_edited_trip->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->save_edited_trip->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->save_edited_trip->TabIndex = 41;
			this->save_edited_trip->Values->Text = L"Save";
			this->save_edited_trip->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton53_Click);
			// 
			// kryptonButton54
			// 
			this->kryptonButton54->Enabled = false;
			this->kryptonButton54->Location = System::Drawing::Point(90, 134);
			this->kryptonButton54->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton54->Name = L"kryptonButton54";
			this->kryptonButton54->Size = System::Drawing::Size(371, 54);
			this->kryptonButton54->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton54->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton54->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton54->StateCommon->Border->Rounding = 8;
			this->kryptonButton54->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton54->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton54->TabIndex = 19;
			this->kryptonButton54->Values->Text = L"";
			// 
			// textBox10
			// 
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(104, 206);
			this->textBox10->Margin = System::Windows::Forms::Padding(0);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(345, 32);
			this->textBox10->TabIndex = 10;
			this->textBox10->Text = L"Departure time";
			this->textBox10->Click += gcnew System::EventHandler(this, &MyForm::textBox_Click);
			// 
			// kryptonButton55
			// 
			this->kryptonButton55->Enabled = false;
			this->kryptonButton55->Location = System::Drawing::Point(90, 198);
			this->kryptonButton55->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton55->Name = L"kryptonButton55";
			this->kryptonButton55->Size = System::Drawing::Size(371, 54);
			this->kryptonButton55->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton55->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton55->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton55->StateCommon->Border->Rounding = 8;
			this->kryptonButton55->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton55->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton55->TabIndex = 18;
			this->kryptonButton55->Values->Text = L"";
			// 
			// kryptonButton56
			// 
			this->kryptonButton56->Enabled = false;
			this->kryptonButton56->Location = System::Drawing::Point(90, 262);
			this->kryptonButton56->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton56->Name = L"kryptonButton56";
			this->kryptonButton56->Size = System::Drawing::Size(371, 54);
			this->kryptonButton56->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton56->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton56->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton56->StateCommon->Border->Rounding = 8;
			this->kryptonButton56->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton56->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton56->TabIndex = 13;
			this->kryptonButton56->Values->Text = L"";
			// 
			// edited_trip_saved
			// 
			this->edited_trip_saved->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edited_trip_saved->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->edited_trip_saved->Location = System::Drawing::Point(106, 435);
			this->edited_trip_saved->Margin = System::Windows::Forms::Padding(0);
			this->edited_trip_saved->Name = L"edited_trip_saved";
			this->edited_trip_saved->Size = System::Drawing::Size(355, 30);
			this->edited_trip_saved->TabIndex = 8;
			this->edited_trip_saved->Text = L"Your information changed successfully ";
			this->edited_trip_saved->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label18->Location = System::Drawing::Point(105, 42);
			this->label18->Margin = System::Windows::Forms::Padding(0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(326, 60);
			this->label18->TabIndex = 0;
			this->label18->Text = L"Edit Trip";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel13
			// 
			this->panel13->AutoSize = true;
			this->panel13->BackColor = System::Drawing::Color::AliceBlue;
			this->panel13->Controls->Add(this->label46);
			this->panel13->Controls->Add(this->panel14);
			this->panel13->Controls->Add(this->kryptonButton34);
			this->panel13->Location = System::Drawing::Point(390, 489);
			this->panel13->Margin = System::Windows::Forms::Padding(0);
			this->panel13->Name = L"panel13";
			this->panel13->Padding = System::Windows::Forms::Padding(0, 0, 0, 50);
			this->panel13->Size = System::Drawing::Size(800, 502);
			this->panel13->TabIndex = 37;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->BackColor = System::Drawing::Color::White;
			this->label46->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12));
			this->label46->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label46->Location = System::Drawing::Point(18, 8);
			this->label46->Margin = System::Windows::Forms::Padding(0);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(164, 28);
			this->label46->TabIndex = 21;
			this->label46->Text = L"10 Available trips";
			this->label46->Visible = false;
			// 
			// panel14
			// 
			this->panel14->AutoSize = true;
			this->panel14->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel14->BackColor = System::Drawing::Color::White;
			this->panel14->Location = System::Drawing::Point(2, 52);
			this->panel14->Margin = System::Windows::Forms::Padding(0);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(0, 0);
			this->panel14->TabIndex = 37;
			// 
			// kryptonButton34
			// 
			this->kryptonButton34->AutoSize = true;
			this->kryptonButton34->Dock = System::Windows::Forms::DockStyle::Fill;
			this->kryptonButton34->Enabled = false;
			this->kryptonButton34->Location = System::Drawing::Point(0, 0);
			this->kryptonButton34->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton34->MinimumSize = System::Drawing::Size(800, 0);
			this->kryptonButton34->Name = L"kryptonButton34";
			this->kryptonButton34->Size = System::Drawing::Size(800, 452);
			this->kryptonButton34->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton34->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton34->StateDisabled->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->kryptonButton34->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton34->StateDisabled->Border->Rounding = 15;
			this->kryptonButton34->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton34->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton34->StateNormal->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->kryptonButton34->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton34->StateNormal->Border->Rounding = 15;
			this->kryptonButton34->TabIndex = 36;
			this->kryptonButton34->Values->Text = L"";
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::AliceBlue;
			this->panel12->Controls->Add(this->kryptonButton32);
			this->panel12->Controls->Add(this->label45);
			this->panel12->Controls->Add(this->label44);
			this->panel12->Controls->Add(this->label43);
			this->panel12->Controls->Add(this->label41);
			this->panel12->Controls->Add(this->label37);
			this->panel12->Controls->Add(this->label38);
			this->panel12->Controls->Add(this->label39);
			this->panel12->Controls->Add(this->textBox6);
			this->panel12->Controls->Add(this->kryptonButton31);
			this->panel12->Controls->Add(this->textBox5);
			this->panel12->Controls->Add(this->kryptonButton30);
			this->panel12->Controls->Add(this->label42);
			this->panel12->Controls->Add(this->textBox4);
			this->panel12->Controls->Add(this->kryptonButton29);
			this->panel12->Controls->Add(this->label40);
			this->panel12->Controls->Add(this->textBox3);
			this->panel12->Controls->Add(this->kryptonButton28);
			this->panel12->Controls->Add(this->label36);
			this->panel12->Controls->Add(this->textBox2);
			this->panel12->Controls->Add(this->comboBox4);
			this->panel12->Controls->Add(this->comboBox5);
			this->panel12->Controls->Add(this->kryptonButton23);
			this->panel12->Controls->Add(this->kryptonButton26);
			this->panel12->Controls->Add(this->kryptonButton27);
			this->panel12->Controls->Add(this->kryptonButton25);
			this->panel12->Location = System::Drawing::Point(222, 82);
			this->panel12->Margin = System::Windows::Forms::Padding(0);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(1131, 330);
			this->panel12->TabIndex = 16;
			// 
			// kryptonButton32
			// 
			this->kryptonButton32->Cursor = System::Windows::Forms::Cursors::Hand;
			this->kryptonButton32->Location = System::Drawing::Point(428, 248);
			this->kryptonButton32->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton32->Name = L"kryptonButton32";
			this->kryptonButton32->OverrideDefault->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton32->OverrideDefault->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton32->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton32->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton32->OverrideDefault->Border->Rounding = 15;
			this->kryptonButton32->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton32->OverrideFocus->Border->Rounding = 15;
			this->kryptonButton32->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->kryptonButton32->Size = System::Drawing::Size(274, 60);
			this->kryptonButton32->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton32->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton32->StateCommon->Border->Rounding = 15;
			this->kryptonButton32->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton32->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton32->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton32->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton32->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton32->StateDisabled->Border->Rounding = 15;
			this->kryptonButton32->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton32->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton32->StateNormal->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton32->StateNormal->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton32->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton32->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton32->StateNormal->Border->Rounding = 15;
			this->kryptonButton32->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton32->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton32->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton32->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton32->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton32->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton32->StatePressed->Border->Rounding = 15;
			this->kryptonButton32->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton32->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton32->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton32->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton32->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton32->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton32->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton32->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton32->StateTracking->Border->Rounding = 15;
			this->kryptonButton32->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton32->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton32->TabIndex = 17;
			this->kryptonButton32->Values->Text = L"Add trip";
			this->kryptonButton32->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton32_Click);
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->BackColor = System::Drawing::Color::White;
			this->label45->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(858, 22);
			this->label45->Margin = System::Windows::Forms::Padding(0);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(118, 23);
			this->label45->TabIndex = 33;
			this->label45->Text = L"Train number";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->BackColor = System::Drawing::Color::White;
			this->label44->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(582, 120);
			this->label44->Margin = System::Windows::Forms::Padding(0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(126, 23);
			this->label44->TabIndex = 30;
			this->label44->Text = L"Fare per ticket";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::Color::White;
			this->label43->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(582, 22);
			this->label43->Margin = System::Windows::Forms::Padding(0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(83, 23);
			this->label43->TabIndex = 26;
			this->label43->Text = L"Trip date";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::White;
			this->label41->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(309, 120);
			this->label41->Margin = System::Windows::Forms::Padding(0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(101, 23);
			this->label41->TabIndex = 22;
			this->label41->Text = L"Arrive time\r\n";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::White;
			this->label37->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(22, 118);
			this->label37->Margin = System::Windows::Forms::Padding(0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(134, 23);
			this->label37->TabIndex = 12;
			this->label37->Text = L"Departure time";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::White;
			this->label38->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(309, 22);
			this->label38->Margin = System::Windows::Forms::Padding(0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(28, 23);
			this->label38->TabIndex = 5;
			this->label38->Text = L"To";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::White;
			this->label39->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(22, 22);
			this->label39->Margin = System::Windows::Forms::Padding(0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(52, 23);
			this->label39->TabIndex = 4;
			this->label39->Text = L"From";
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(868, 62);
			this->textBox6->Margin = System::Windows::Forms::Padding(0);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(232, 23);
			this->textBox6->TabIndex = 35;
			this->textBox6->Text = L"Enter train number";
			this->textBox6->Click += gcnew System::EventHandler(this, &MyForm::textBox_Click);
			// 
			// kryptonButton31
			// 
			this->kryptonButton31->Enabled = false;
			this->kryptonButton31->Location = System::Drawing::Point(858, 52);
			this->kryptonButton31->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton31->Name = L"kryptonButton31";
			this->kryptonButton31->Size = System::Drawing::Size(258, 45);
			this->kryptonButton31->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton31->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton31->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton31->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton31->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton31->StateDisabled->Border->Rounding = 10;
			this->kryptonButton31->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton31->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton31->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton31->StateNormal->Border->Rounding = 8;
			this->kryptonButton31->TabIndex = 34;
			this->kryptonButton31->Values->Text = L"";
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(592, 161);
			this->textBox5->Margin = System::Windows::Forms::Padding(0);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(230, 23);
			this->textBox5->TabIndex = 32;
			this->textBox5->Text = L"Enter price of ticket";
			this->textBox5->Click += gcnew System::EventHandler(this, &MyForm::textBox_Click);
			// 
			// kryptonButton30
			// 
			this->kryptonButton30->Enabled = false;
			this->kryptonButton30->Location = System::Drawing::Point(582, 150);
			this->kryptonButton30->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton30->Name = L"kryptonButton30";
			this->kryptonButton30->Size = System::Drawing::Size(258, 45);
			this->kryptonButton30->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton30->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton30->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton30->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton30->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton30->StateDisabled->Border->Rounding = 10;
			this->kryptonButton30->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton30->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton30->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton30->StateNormal->Border->Rounding = 8;
			this->kryptonButton30->TabIndex = 31;
			this->kryptonButton30->Values->Text = L"";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label42->ForeColor = System::Drawing::Color::Red;
			this->label42->Location = System::Drawing::Point(566, 15);
			this->label42->Margin = System::Windows::Forms::Padding(0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(0, 23);
			this->label42->TabIndex = 29;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(594, 62);
			this->textBox4->Margin = System::Windows::Forms::Padding(0);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(232, 23);
			this->textBox4->TabIndex = 28;
			this->textBox4->Text = L"DD:MM:YYYY";
			this->textBox4->Click += gcnew System::EventHandler(this, &MyForm::textBox_Click);
			// 
			// kryptonButton29
			// 
			this->kryptonButton29->Enabled = false;
			this->kryptonButton29->Location = System::Drawing::Point(582, 52);
			this->kryptonButton29->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton29->Name = L"kryptonButton29";
			this->kryptonButton29->Size = System::Drawing::Size(258, 45);
			this->kryptonButton29->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton29->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton29->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton29->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton29->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton29->StateDisabled->Border->Rounding = 10;
			this->kryptonButton29->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton29->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton29->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton29->StateNormal->Border->Rounding = 8;
			this->kryptonButton29->TabIndex = 27;
			this->kryptonButton29->Values->Text = L"";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label40->ForeColor = System::Drawing::Color::Red;
			this->label40->Location = System::Drawing::Point(291, 112);
			this->label40->Margin = System::Windows::Forms::Padding(0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(0, 23);
			this->label40->TabIndex = 25;
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(320, 161);
			this->textBox3->Margin = System::Windows::Forms::Padding(0);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(230, 23);
			this->textBox3->TabIndex = 24;
			this->textBox3->Text = L"HH:MM";
			this->textBox3->Click += gcnew System::EventHandler(this, &MyForm::textBox_Click);
			// 
			// kryptonButton28
			// 
			this->kryptonButton28->Enabled = false;
			this->kryptonButton28->Location = System::Drawing::Point(309, 150);
			this->kryptonButton28->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton28->Name = L"kryptonButton28";
			this->kryptonButton28->Size = System::Drawing::Size(258, 45);
			this->kryptonButton28->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton28->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton28->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton28->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton28->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton28->StateDisabled->Border->Rounding = 10;
			this->kryptonButton28->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton28->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton28->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton28->StateNormal->Border->Rounding = 8;
			this->kryptonButton28->TabIndex = 23;
			this->kryptonButton28->Values->Text = L"";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label36->ForeColor = System::Drawing::Color::Red;
			this->label36->Location = System::Drawing::Point(34, 105);
			this->label36->Margin = System::Windows::Forms::Padding(0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(0, 23);
			this->label36->TabIndex = 21;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(29, 160);
			this->textBox2->Margin = System::Windows::Forms::Padding(0);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(229, 23);
			this->textBox2->TabIndex = 20;
			this->textBox2->Text = L"HH:MM";
			this->textBox2->Click += gcnew System::EventHandler(this, &MyForm::textBox_Click);
			// 
			// comboBox4
			// 
			this->comboBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Cairo", L"Alexandria", L"Assiut", L"Qena", L"Giza",
					L"Luxor"
			});
			this->comboBox4->Location = System::Drawing::Point(316, 59);
			this->comboBox4->Margin = System::Windows::Forms::Padding(0);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(244, 31);
			this->comboBox4->TabIndex = 19;
			this->comboBox4->Text = L"Enter Destination place:";
			// 
			// comboBox5
			// 
			this->comboBox5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Cairo", L"Alexandria", L"Assiut", L"Qena", L"Giza",
					L"Luxor", L"Hader Saber"
			});
			this->comboBox5->Location = System::Drawing::Point(25, 59);
			this->comboBox5->Margin = System::Windows::Forms::Padding(0);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(244, 31);
			this->comboBox5->TabIndex = 18;
			this->comboBox5->Text = L"Enter Boarding place:";
			// 
			// kryptonButton23
			// 
			this->kryptonButton23->Enabled = false;
			this->kryptonButton23->Location = System::Drawing::Point(18, 52);
			this->kryptonButton23->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton23->Name = L"kryptonButton23";
			this->kryptonButton23->OverrideDefault->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton23->OverrideDefault->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton23->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton23->OverrideDefault->Border->Rounding = 8;
			this->kryptonButton23->Size = System::Drawing::Size(258, 45);
			this->kryptonButton23->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton23->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton23->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton23->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton23->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton23->StateDisabled->Border->Rounding = 10;
			this->kryptonButton23->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton23->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton23->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton23->StateNormal->Border->Rounding = 8;
			this->kryptonButton23->TabIndex = 9;
			this->kryptonButton23->Values->Text = L"";
			// 
			// kryptonButton26
			// 
			this->kryptonButton26->Enabled = false;
			this->kryptonButton26->Location = System::Drawing::Point(18, 150);
			this->kryptonButton26->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton26->Name = L"kryptonButton26";
			this->kryptonButton26->Size = System::Drawing::Size(258, 45);
			this->kryptonButton26->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton26->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton26->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton26->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton26->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton26->StateDisabled->Border->Rounding = 10;
			this->kryptonButton26->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton26->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton26->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton26->StateNormal->Border->Rounding = 8;
			this->kryptonButton26->TabIndex = 14;
			this->kryptonButton26->Values->Text = L"";
			// 
			// kryptonButton27
			// 
			this->kryptonButton27->Enabled = false;
			this->kryptonButton27->Location = System::Drawing::Point(309, 52);
			this->kryptonButton27->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton27->Name = L"kryptonButton27";
			this->kryptonButton27->Size = System::Drawing::Size(258, 45);
			this->kryptonButton27->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton27->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton27->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton27->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton27->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton27->StateDisabled->Border->Rounding = 10;
			this->kryptonButton27->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton27->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton27->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton27->StateNormal->Border->Rounding = 8;
			this->kryptonButton27->TabIndex = 11;
			this->kryptonButton27->Values->Text = L"";
			// 
			// kryptonButton25
			// 
			this->kryptonButton25->AutoSize = true;
			this->kryptonButton25->Enabled = false;
			this->kryptonButton25->Location = System::Drawing::Point(0, 0);
			this->kryptonButton25->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton25->Name = L"kryptonButton25";
			this->kryptonButton25->Size = System::Drawing::Size(1131, 330);
			this->kryptonButton25->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton25->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton25->StateDisabled->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->kryptonButton25->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton25->StateDisabled->Border->Rounding = 15;
			this->kryptonButton25->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton25->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton25->StateNormal->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->kryptonButton25->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton25->StateNormal->Border->Rounding = 15;
			this->kryptonButton25->TabIndex = 18;
			this->kryptonButton25->Values->Text = L"";
			// 
			// trip_tools
			// 
			this->trip_tools->AutoSize = true;
			this->trip_tools->Dock = System::Windows::Forms::DockStyle::Fill;
			this->trip_tools->Enabled = false;
			this->trip_tools->Location = System::Drawing::Point(0, 0);
			this->trip_tools->Margin = System::Windows::Forms::Padding(0);
			this->trip_tools->Name = L"trip_tools";
			this->trip_tools->OverrideDefault->Back->Color1 = System::Drawing::Color::Red;
			this->trip_tools->OverrideDefault->Back->Color2 = System::Drawing::Color::Red;
			this->trip_tools->OverrideDefault->Border->Color1 = System::Drawing::Color::Red;
			this->trip_tools->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->trip_tools->OverrideDefault->Border->Rounding = 15;
			this->trip_tools->Size = System::Drawing::Size(3222, 1530);
			this->trip_tools->StateDisabled->Back->Color1 = System::Drawing::Color::AliceBlue;
			this->trip_tools->StateDisabled->Back->Color2 = System::Drawing::Color::AliceBlue;
			this->trip_tools->StateDisabled->Border->Color1 = System::Drawing::Color::AliceBlue;
			this->trip_tools->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->trip_tools->StateDisabled->Border->Rounding = 15;
			this->trip_tools->StateNormal->Back->Color1 = System::Drawing::Color::AliceBlue;
			this->trip_tools->StateNormal->Back->Color2 = System::Drawing::Color::AliceBlue;
			this->trip_tools->StateNormal->Border->Color1 = System::Drawing::Color::AliceBlue;
			this->trip_tools->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->trip_tools->StateNormal->Border->Rounding = 15;
			this->trip_tools->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->trip_tools->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->trip_tools->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->trip_tools->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->trip_tools->StatePressed->Border->Rounding = 15;
			this->trip_tools->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->trip_tools->StateTracking->Border->Rounding = 15;
			this->trip_tools->TabIndex = 15;
			this->trip_tools->Values->Text = L"";
			// 
			// kryptonButton42
			// 
			this->kryptonButton42->AutoSize = true;
			this->kryptonButton42->Enabled = false;
			this->kryptonButton42->Location = System::Drawing::Point(514, 442);
			this->kryptonButton42->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton42->Name = L"kryptonButton42";
			this->kryptonButton42->Size = System::Drawing::Size(1131, 330);
			this->kryptonButton42->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton42->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton42->StateDisabled->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->kryptonButton42->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton42->StateDisabled->Border->Rounding = 15;
			this->kryptonButton42->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton42->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton42->StateNormal->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->kryptonButton42->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton42->StateNormal->Border->Rounding = 15;
			this->kryptonButton42->TabIndex = 18;
			this->kryptonButton42->Values->Text = L"";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Bold));
			this->label34->Location = System::Drawing::Point(86, 38);
			this->label34->Margin = System::Windows::Forms::Padding(0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(140, 46);
			this->label34->TabIndex = 16;
			this->label34->Text = L"ADMIN";
			// 
			// Manage_trips_btn
			// 
			this->Manage_trips_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Manage_trips_btn->Location = System::Drawing::Point(34, 165);
			this->Manage_trips_btn->Margin = System::Windows::Forms::Padding(0);
			this->Manage_trips_btn->Name = L"Manage_trips_btn";
			this->Manage_trips_btn->OverrideDefault->Back->Color1 = System::Drawing::Color::AliceBlue;
			this->Manage_trips_btn->OverrideDefault->Back->Color2 = System::Drawing::Color::AliceBlue;
			this->Manage_trips_btn->OverrideDefault->Border->Color1 = System::Drawing::Color::AliceBlue;
			this->Manage_trips_btn->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Manage_trips_btn->OverrideDefault->Border->Rounding = 15;
			this->Manage_trips_btn->OverrideDefault->Content->Padding = System::Windows::Forms::Padding(20, -1, -1, -1);
			this->Manage_trips_btn->OverrideDefault->Content->ShortText->Color1 = System::Drawing::Color::DodgerBlue;
			this->Manage_trips_btn->OverrideDefault->Content->ShortText->TextH = ComponentFactory::Krypton::Toolkit::PaletteRelativeAlign::Near;
			this->Manage_trips_btn->OverrideFocus->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Manage_trips_btn->OverrideFocus->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Manage_trips_btn->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Manage_trips_btn->OverrideFocus->Border->Rounding = 15;
			this->Manage_trips_btn->OverrideFocus->Content->ShortText->Color1 = System::Drawing::Color::DodgerBlue;
			this->Manage_trips_btn->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->Manage_trips_btn->Size = System::Drawing::Size(291, 68);
			this->Manage_trips_btn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Manage_trips_btn->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->Manage_trips_btn->StateCommon->Border->Rounding = 15;
			this->Manage_trips_btn->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->Manage_trips_btn->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->Manage_trips_btn->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->Manage_trips_btn->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->Manage_trips_btn->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Manage_trips_btn->StateDisabled->Border->Rounding = 15;
			this->Manage_trips_btn->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->Manage_trips_btn->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->Manage_trips_btn->StateNormal->Back->Color1 = System::Drawing::Color::AliceBlue;
			this->Manage_trips_btn->StateNormal->Back->Color2 = System::Drawing::Color::AliceBlue;
			this->Manage_trips_btn->StateNormal->Border->Color1 = System::Drawing::Color::AliceBlue;
			this->Manage_trips_btn->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Manage_trips_btn->StateNormal->Border->Rounding = 15;
			this->Manage_trips_btn->StateNormal->Content->Padding = System::Windows::Forms::Padding(20, -1, -1, -1);
			this->Manage_trips_btn->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::Black;
			this->Manage_trips_btn->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 10.8F, System::Drawing::FontStyle::Bold));
			this->Manage_trips_btn->StateNormal->Content->ShortText->TextH = ComponentFactory::Krypton::Toolkit::PaletteRelativeAlign::Near;
			this->Manage_trips_btn->StatePressed->Back->Color1 = System::Drawing::Color::Gainsboro;
			this->Manage_trips_btn->StatePressed->Back->Color2 = System::Drawing::Color::Gainsboro;
			this->Manage_trips_btn->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Manage_trips_btn->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Manage_trips_btn->StatePressed->Border->Rounding = 15;
			this->Manage_trips_btn->StatePressed->Content->Padding = System::Windows::Forms::Padding(20, -1, -1, -1);
			this->Manage_trips_btn->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::Black;
			this->Manage_trips_btn->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->Manage_trips_btn->StatePressed->Content->ShortText->TextH = ComponentFactory::Krypton::Toolkit::PaletteRelativeAlign::Near;
			this->Manage_trips_btn->StateTracking->Back->Color1 = System::Drawing::Color::WhiteSmoke;
			this->Manage_trips_btn->StateTracking->Back->Color2 = System::Drawing::Color::WhiteSmoke;
			this->Manage_trips_btn->StateTracking->Border->Color1 = System::Drawing::Color::WhiteSmoke;
			this->Manage_trips_btn->StateTracking->Border->Color2 = System::Drawing::Color::WhiteSmoke;
			this->Manage_trips_btn->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->Manage_trips_btn->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Manage_trips_btn->StateTracking->Border->Rounding = 15;
			this->Manage_trips_btn->StateTracking->Content->Padding = System::Windows::Forms::Padding(20, -1, -1, -1);
			this->Manage_trips_btn->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::Black;
			this->Manage_trips_btn->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Manage_trips_btn->StateTracking->Content->ShortText->TextH = ComponentFactory::Krypton::Toolkit::PaletteRelativeAlign::Near;
			this->Manage_trips_btn->TabIndex = 17;
			this->Manage_trips_btn->Values->Text = L"Trips";
			this->Manage_trips_btn->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton20_Click);
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->label34);
			this->panel9->Controls->Add(this->Manage_trips_btn);
			this->panel9->Controls->Add(this->Manage_trains_btn);
			this->panel9->Controls->Add(this->label35);
			this->panel9->Location = System::Drawing::Point(18, 142);
			this->panel9->Margin = System::Windows::Forms::Padding(0);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(342, 472);
			this->panel9->TabIndex = 20;
			// 
			// Manage_trains_btn
			// 
			this->Manage_trains_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Manage_trains_btn->Location = System::Drawing::Point(34, 242);
			this->Manage_trains_btn->Margin = System::Windows::Forms::Padding(0);
			this->Manage_trains_btn->Name = L"Manage_trains_btn";
			this->Manage_trains_btn->OverrideDefault->Back->Color1 = System::Drawing::Color::AliceBlue;
			this->Manage_trains_btn->OverrideDefault->Back->Color2 = System::Drawing::Color::AliceBlue;
			this->Manage_trains_btn->OverrideDefault->Border->Color1 = System::Drawing::Color::AliceBlue;
			this->Manage_trains_btn->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Manage_trains_btn->OverrideDefault->Border->Rounding = 15;
			this->Manage_trains_btn->OverrideDefault->Content->Padding = System::Windows::Forms::Padding(20, -1, -1, -1);
			this->Manage_trains_btn->OverrideDefault->Content->ShortText->Color1 = System::Drawing::Color::DodgerBlue;
			this->Manage_trains_btn->OverrideDefault->Content->ShortText->TextH = ComponentFactory::Krypton::Toolkit::PaletteRelativeAlign::Near;
			this->Manage_trains_btn->OverrideFocus->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Manage_trains_btn->OverrideFocus->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Manage_trains_btn->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Manage_trains_btn->OverrideFocus->Border->Rounding = 15;
			this->Manage_trains_btn->OverrideFocus->Content->ShortText->Color1 = System::Drawing::Color::DodgerBlue;
			this->Manage_trains_btn->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->Manage_trains_btn->Size = System::Drawing::Size(291, 68);
			this->Manage_trains_btn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Manage_trains_btn->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->Manage_trains_btn->StateCommon->Border->Rounding = 15;
			this->Manage_trains_btn->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->Manage_trains_btn->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->Manage_trains_btn->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->Manage_trains_btn->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->Manage_trains_btn->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Manage_trains_btn->StateDisabled->Border->Rounding = 15;
			this->Manage_trains_btn->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->Manage_trains_btn->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->Manage_trains_btn->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->Manage_trains_btn->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->Manage_trains_btn->StateNormal->Border->Color1 = System::Drawing::Color::White;
			this->Manage_trains_btn->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Manage_trains_btn->StateNormal->Border->Rounding = 15;
			this->Manage_trains_btn->StateNormal->Content->Padding = System::Windows::Forms::Padding(20, -1, -1, -1);
			this->Manage_trains_btn->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::Black;
			this->Manage_trains_btn->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 10.8F, System::Drawing::FontStyle::Bold));
			this->Manage_trains_btn->StateNormal->Content->ShortText->TextH = ComponentFactory::Krypton::Toolkit::PaletteRelativeAlign::Near;
			this->Manage_trains_btn->StatePressed->Back->Color1 = System::Drawing::Color::Gainsboro;
			this->Manage_trains_btn->StatePressed->Back->Color2 = System::Drawing::Color::Gainsboro;
			this->Manage_trains_btn->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Manage_trains_btn->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Manage_trains_btn->StatePressed->Border->Rounding = 15;
			this->Manage_trains_btn->StatePressed->Content->Padding = System::Windows::Forms::Padding(20, -1, -1, -1);
			this->Manage_trains_btn->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::Black;
			this->Manage_trains_btn->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->Manage_trains_btn->StatePressed->Content->ShortText->TextH = ComponentFactory::Krypton::Toolkit::PaletteRelativeAlign::Near;
			this->Manage_trains_btn->StateTracking->Back->Color1 = System::Drawing::Color::WhiteSmoke;
			this->Manage_trains_btn->StateTracking->Back->Color2 = System::Drawing::Color::WhiteSmoke;
			this->Manage_trains_btn->StateTracking->Border->Color1 = System::Drawing::Color::WhiteSmoke;
			this->Manage_trains_btn->StateTracking->Border->Color2 = System::Drawing::Color::WhiteSmoke;
			this->Manage_trains_btn->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->Manage_trains_btn->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Manage_trains_btn->StateTracking->Border->Rounding = 15;
			this->Manage_trains_btn->StateTracking->Content->Padding = System::Windows::Forms::Padding(20, -1, -1, -1);
			this->Manage_trains_btn->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::Black;
			this->Manage_trains_btn->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Manage_trains_btn->StateTracking->Content->ShortText->TextH = ComponentFactory::Krypton::Toolkit::PaletteRelativeAlign::Near;
			this->Manage_trains_btn->TabIndex = 21;
			this->Manage_trains_btn->Values->Text = L"Trains";
			this->Manage_trains_btn->Click += gcnew System::EventHandler(this, &MyForm::Manage_trains_btn_Click);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::Color::DimGray;
			this->label35->Location = System::Drawing::Point(18, 120);
			this->label35->Margin = System::Windows::Forms::Padding(0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(73, 23);
			this->label35->TabIndex = 0;
			this->label35->Text = L"Manage";
			// 
			// delete_trip_btn
			// 
			this->delete_trip_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->delete_trip_btn->Location = System::Drawing::Point(1720, 900);
			this->delete_trip_btn->Margin = System::Windows::Forms::Padding(0);
			this->delete_trip_btn->Name = L"delete_trip_btn";
			this->delete_trip_btn->OverrideDefault->Back->Color1 = System::Drawing::Color::Red;
			this->delete_trip_btn->OverrideDefault->Back->Color2 = System::Drawing::Color::Red;
			this->delete_trip_btn->OverrideDefault->Border->Color1 = System::Drawing::Color::Red;
			this->delete_trip_btn->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->delete_trip_btn->OverrideDefault->Border->Rounding = 15;
			this->delete_trip_btn->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->delete_trip_btn->OverrideFocus->Border->Rounding = 15;
			this->delete_trip_btn->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->delete_trip_btn->Size = System::Drawing::Size(154, 60);
			this->delete_trip_btn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->delete_trip_btn->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->delete_trip_btn->StateCommon->Border->Rounding = 15;
			this->delete_trip_btn->StateDisabled->Back->Color1 = System::Drawing::Color::Silver;
			this->delete_trip_btn->StateDisabled->Back->Color2 = System::Drawing::Color::Silver;
			this->delete_trip_btn->StateDisabled->Border->Color1 = System::Drawing::Color::Silver;
			this->delete_trip_btn->StateDisabled->Border->Color2 = System::Drawing::Color::Silver;
			this->delete_trip_btn->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->delete_trip_btn->StateDisabled->Border->Rounding = 15;
			this->delete_trip_btn->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::Black;
			this->delete_trip_btn->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->delete_trip_btn->StateNormal->Back->Color1 = System::Drawing::Color::Red;
			this->delete_trip_btn->StateNormal->Back->Color2 = System::Drawing::Color::Red;
			this->delete_trip_btn->StateNormal->Border->Color1 = System::Drawing::Color::Red;
			this->delete_trip_btn->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->delete_trip_btn->StateNormal->Border->Rounding = 15;
			this->delete_trip_btn->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->delete_trip_btn->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->delete_trip_btn->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delete_trip_btn->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delete_trip_btn->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delete_trip_btn->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->delete_trip_btn->StatePressed->Border->Rounding = 15;
			this->delete_trip_btn->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->delete_trip_btn->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->delete_trip_btn->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delete_trip_btn->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delete_trip_btn->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delete_trip_btn->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delete_trip_btn->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->delete_trip_btn->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->delete_trip_btn->StateTracking->Border->Rounding = 15;
			this->delete_trip_btn->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->delete_trip_btn->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->delete_trip_btn->TabIndex = 36;
			this->delete_trip_btn->Values->Text = L"Delete";
			this->delete_trip_btn->Click += gcnew System::EventHandler(this, &MyForm::delete_trip_click);
			// 
			// edit_trip_btn
			// 
			this->edit_trip_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->edit_trip_btn->Location = System::Drawing::Point(1560, 900);
			this->edit_trip_btn->Margin = System::Windows::Forms::Padding(0);
			this->edit_trip_btn->Name = L"edit_trip_btn";
			this->edit_trip_btn->OverrideDefault->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->edit_trip_btn->OverrideDefault->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->edit_trip_btn->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->edit_trip_btn->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->edit_trip_btn->OverrideDefault->Border->Rounding = 15;
			this->edit_trip_btn->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->edit_trip_btn->OverrideFocus->Border->Rounding = 15;
			this->edit_trip_btn->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->edit_trip_btn->Size = System::Drawing::Size(154, 60);
			this->edit_trip_btn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->edit_trip_btn->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->edit_trip_btn->StateCommon->Border->Rounding = 15;
			this->edit_trip_btn->StateDisabled->Back->Color1 = System::Drawing::Color::Silver;
			this->edit_trip_btn->StateDisabled->Back->Color2 = System::Drawing::Color::Silver;
			this->edit_trip_btn->StateDisabled->Border->Color1 = System::Drawing::Color::Silver;
			this->edit_trip_btn->StateDisabled->Border->Color2 = System::Drawing::Color::Silver;
			this->edit_trip_btn->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->edit_trip_btn->StateDisabled->Border->Rounding = 15;
			this->edit_trip_btn->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::Black;
			this->edit_trip_btn->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->edit_trip_btn->StateNormal->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->edit_trip_btn->StateNormal->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->edit_trip_btn->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->edit_trip_btn->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->edit_trip_btn->StateNormal->Border->Rounding = 15;
			this->edit_trip_btn->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->edit_trip_btn->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->edit_trip_btn->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->edit_trip_btn->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->edit_trip_btn->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->edit_trip_btn->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->edit_trip_btn->StatePressed->Border->Rounding = 15;
			this->edit_trip_btn->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->edit_trip_btn->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->edit_trip_btn->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->edit_trip_btn->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->edit_trip_btn->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->edit_trip_btn->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->edit_trip_btn->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->edit_trip_btn->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->edit_trip_btn->StateTracking->Border->Rounding = 15;
			this->edit_trip_btn->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->edit_trip_btn->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->edit_trip_btn->TabIndex = 36;
			this->edit_trip_btn->Values->Text = L"Edit";
			this->edit_trip_btn->Click += gcnew System::EventHandler(this, &MyForm::edit_trip_btn_Click);
			// 
			// panel_con_Login
			// 
			this->panel_con_Login->Controls->Add(this->panel_login);
			this->panel_con_Login->Controls->Add(this->pictureBox_back_login);
			this->panel_con_Login->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_con_Login->Location = System::Drawing::Point(0, 82);
			this->panel_con_Login->Margin = System::Windows::Forms::Padding(0);
			this->panel_con_Login->Name = L"panel_con_Login";
			this->panel_con_Login->Size = System::Drawing::Size(1913, 973);
			this->panel_con_Login->TabIndex = 0;
			// 
			// panel_login
			// 
			this->panel_login->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel_login->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel_login->Controls->Add(this->password_show);
			this->panel_login->Controls->Add(this->password_hide);
			this->panel_login->Controls->Add(this->pictureBox4_icon);
			this->panel_login->Controls->Add(this->textBox_password);
			this->panel_login->Controls->Add(this->kryptonButton48);
			this->panel_login->Controls->Add(this->pictureBox3_icon);
			this->panel_login->Controls->Add(this->textBox_email);
			this->panel_login->Controls->Add(this->kryptonButton47);
			this->panel_login->Controls->Add(this->kryptonButton_register);
			this->panel_login->Controls->Add(this->kryptonButton38_signin_btn);
			this->panel_login->Controls->Add(this->checkBox1_agree);
			this->panel_login->Controls->Add(this->label_register);
			this->panel_login->Controls->Add(this->label_down_signin);
			this->panel_login->Controls->Add(this->label_sign_in_word);
			this->panel_login->Controls->Add(this->pictureBox2_avatar);
			this->panel_login->ForeColor = System::Drawing::Color::White;
			this->panel_login->Location = System::Drawing::Point(514, 202);
			this->panel_login->Margin = System::Windows::Forms::Padding(102, 98, 102, 98);
			this->panel_login->Name = L"panel_login";
			this->panel_login->Size = System::Drawing::Size(826, 596);
			this->panel_login->TabIndex = 1;
			// 
			// password_show
			// 
			this->password_show->BackColor = System::Drawing::Color::White;
			this->password_show->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->password_show->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"password_show.Image")));
			this->password_show->Location = System::Drawing::Point(380, 280);
			this->password_show->Margin = System::Windows::Forms::Padding(0);
			this->password_show->Name = L"password_show";
			this->password_show->Size = System::Drawing::Size(34, 30);
			this->password_show->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->password_show->TabIndex = 47;
			this->password_show->TabStop = false;
			this->password_show->Click += gcnew System::EventHandler(this, &MyForm::password_show_Click);
			// 
			// password_hide
			// 
			this->password_hide->BackColor = System::Drawing::Color::White;
			this->password_hide->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->password_hide->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"password_hide.Image")));
			this->password_hide->Location = System::Drawing::Point(380, 280);
			this->password_hide->Margin = System::Windows::Forms::Padding(0);
			this->password_hide->Name = L"password_hide";
			this->password_hide->Size = System::Drawing::Size(34, 30);
			this->password_hide->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->password_hide->TabIndex = 48;
			this->password_hide->TabStop = false;
			this->password_hide->Click += gcnew System::EventHandler(this, &MyForm::password_hide_Click);
			// 
			// pictureBox4_icon
			// 
			this->pictureBox4_icon->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4_icon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4_icon.BackgroundImage")));
			this->pictureBox4_icon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4_icon->Location = System::Drawing::Point(116, 280);
			this->pictureBox4_icon->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox4_icon->Name = L"pictureBox4_icon";
			this->pictureBox4_icon->Size = System::Drawing::Size(34, 30);
			this->pictureBox4_icon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4_icon->TabIndex = 14;
			this->pictureBox4_icon->TabStop = false;
			// 
			// textBox_password
			// 
			this->textBox_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_password->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_password->Location = System::Drawing::Point(168, 278);
			this->textBox_password->Margin = System::Windows::Forms::Padding(0);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->Size = System::Drawing::Size(240, 32);
			this->textBox_password->TabIndex = 6;
			this->textBox_password->Text = L"password";
			this->textBox_password->UseSystemPasswordChar = true;
			this->textBox_password->Click += gcnew System::EventHandler(this, &MyForm::textBox_Click);
			// 
			// kryptonButton48
			// 
			this->kryptonButton48->Enabled = false;
			this->kryptonButton48->Location = System::Drawing::Point(99, 269);
			this->kryptonButton48->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton48->Name = L"kryptonButton48";
			this->kryptonButton48->Size = System::Drawing::Size(325, 52);
			this->kryptonButton48->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton48->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton48->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton48->StateCommon->Border->Rounding = 8;
			this->kryptonButton48->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton48->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton48->TabIndex = 46;
			this->kryptonButton48->Values->Text = L"";
			// 
			// pictureBox3_icon
			// 
			this->pictureBox3_icon->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3_icon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3_icon.BackgroundImage")));
			this->pictureBox3_icon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3_icon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3_icon.Image")));
			this->pictureBox3_icon->Location = System::Drawing::Point(116, 218);
			this->pictureBox3_icon->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox3_icon->Name = L"pictureBox3_icon";
			this->pictureBox3_icon->Size = System::Drawing::Size(34, 30);
			this->pictureBox3_icon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3_icon->TabIndex = 13;
			this->pictureBox3_icon->TabStop = false;
			// 
			// textBox_email
			// 
			this->textBox_email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_email->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_email->Location = System::Drawing::Point(169, 216);
			this->textBox_email->Margin = System::Windows::Forms::Padding(0);
			this->textBox_email->Name = L"textBox_email";
			this->textBox_email->Size = System::Drawing::Size(240, 32);
			this->textBox_email->TabIndex = 4;
			this->textBox_email->Text = L"Email";
			this->textBox_email->WordWrap = false;
			this->textBox_email->Click += gcnew System::EventHandler(this, &MyForm::textBox_Click);
			// 
			// kryptonButton47
			// 
			this->kryptonButton47->Enabled = false;
			this->kryptonButton47->Location = System::Drawing::Point(99, 205);
			this->kryptonButton47->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton47->Name = L"kryptonButton47";
			this->kryptonButton47->Size = System::Drawing::Size(325, 52);
			this->kryptonButton47->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton47->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton47->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton47->StateCommon->Border->Rounding = 8;
			this->kryptonButton47->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton47->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton47->TabIndex = 45;
			this->kryptonButton47->Values->Text = L"";
			// 
			// kryptonButton_register
			// 
			this->kryptonButton_register->Cursor = System::Windows::Forms::Cursors::Hand;
			this->kryptonButton_register->Location = System::Drawing::Point(99, 465);
			this->kryptonButton_register->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton_register->Name = L"kryptonButton_register";
			this->kryptonButton_register->OverrideDefault->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton_register->OverrideDefault->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton_register->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton_register->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton_register->OverrideDefault->Border->Rounding = 15;
			this->kryptonButton_register->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton_register->OverrideFocus->Border->Rounding = 15;
			this->kryptonButton_register->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->kryptonButton_register->Size = System::Drawing::Size(325, 52);
			this->kryptonButton_register->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton_register->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton_register->StateCommon->Border->Rounding = 15;
			this->kryptonButton_register->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton_register->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton_register->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton_register->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton_register->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton_register->StateDisabled->Border->Rounding = 15;
			this->kryptonButton_register->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton_register->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton_register->StateNormal->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton_register->StateNormal->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton_register->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton_register->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton_register->StateNormal->Border->Rounding = 15;
			this->kryptonButton_register->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton_register->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton_register->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton_register->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton_register->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton_register->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton_register->StatePressed->Border->Rounding = 15;
			this->kryptonButton_register->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton_register->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton_register->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton_register->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton_register->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton_register->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton_register->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton_register->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton_register->StateTracking->Border->Rounding = 15;
			this->kryptonButton_register->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton_register->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton_register->TabIndex = 44;
			this->kryptonButton_register->Values->Text = L"Register";
			this->kryptonButton_register->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton_register_Click);
			// 
			// kryptonButton38_signin_btn
			// 
			this->kryptonButton38_signin_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->kryptonButton38_signin_btn->Location = System::Drawing::Point(99, 366);
			this->kryptonButton38_signin_btn->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton38_signin_btn->Name = L"kryptonButton38_signin_btn";
			this->kryptonButton38_signin_btn->OverrideDefault->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton38_signin_btn->OverrideDefault->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton38_signin_btn->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton38_signin_btn->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton38_signin_btn->OverrideDefault->Border->Rounding = 15;
			this->kryptonButton38_signin_btn->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton38_signin_btn->OverrideFocus->Border->Rounding = 15;
			this->kryptonButton38_signin_btn->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->kryptonButton38_signin_btn->Size = System::Drawing::Size(325, 52);
			this->kryptonButton38_signin_btn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton38_signin_btn->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton38_signin_btn->StateCommon->Border->Rounding = 15;
			this->kryptonButton38_signin_btn->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton38_signin_btn->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton38_signin_btn->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton38_signin_btn->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton38_signin_btn->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton38_signin_btn->StateDisabled->Border->Rounding = 15;
			this->kryptonButton38_signin_btn->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton38_signin_btn->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton38_signin_btn->StateNormal->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton38_signin_btn->StateNormal->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton38_signin_btn->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton38_signin_btn->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton38_signin_btn->StateNormal->Border->Rounding = 15;
			this->kryptonButton38_signin_btn->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton38_signin_btn->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton38_signin_btn->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton38_signin_btn->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton38_signin_btn->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton38_signin_btn->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton38_signin_btn->StatePressed->Border->Rounding = 15;
			this->kryptonButton38_signin_btn->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton38_signin_btn->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton38_signin_btn->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton38_signin_btn->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton38_signin_btn->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton38_signin_btn->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton38_signin_btn->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton38_signin_btn->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton38_signin_btn->StateTracking->Border->Rounding = 15;
			this->kryptonButton38_signin_btn->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton38_signin_btn->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton38_signin_btn->TabIndex = 43;
			this->kryptonButton38_signin_btn->Values->Text = L"Sign in";
			this->kryptonButton38_signin_btn->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton38_Click);
			// 
			// checkBox1_agree
			// 
			this->checkBox1_agree->AutoSize = true;
			this->checkBox1_agree->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1_agree->Checked = true;
			this->checkBox1_agree->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1_agree->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox1_agree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1_agree->ForeColor = System::Drawing::Color::White;
			this->checkBox1_agree->Location = System::Drawing::Point(118, 330);
			this->checkBox1_agree->Margin = System::Windows::Forms::Padding(0);
			this->checkBox1_agree->Name = L"checkBox1_agree";
			this->checkBox1_agree->Size = System::Drawing::Size(255, 21);
			this->checkBox1_agree->TabIndex = 10;
			this->checkBox1_agree->Text = L"I agree in terms and conditions";
			this->checkBox1_agree->UseVisualStyleBackColor = false;
			// 
			// label_register
			// 
			this->label_register->BackColor = System::Drawing::Color::Transparent;
			this->label_register->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label_register->ForeColor = System::Drawing::Color::White;
			this->label_register->Location = System::Drawing::Point(115, 432);
			this->label_register->Margin = System::Windows::Forms::Padding(0);
			this->label_register->Name = L"label_register";
			this->label_register->Size = System::Drawing::Size(258, 30);
			this->label_register->TabIndex = 9;
			this->label_register->Text = L"Do not have an account \?";
			// 
			// label_down_signin
			// 
			this->label_down_signin->BackColor = System::Drawing::Color::Transparent;
			this->label_down_signin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_down_signin->ForeColor = System::Drawing::Color::White;
			this->label_down_signin->Location = System::Drawing::Point(101, 128);
			this->label_down_signin->Margin = System::Windows::Forms::Padding(0);
			this->label_down_signin->Name = L"label_down_signin";
			this->label_down_signin->Size = System::Drawing::Size(326, 60);
			this->label_down_signin->TabIndex = 1;
			this->label_down_signin->Text = L"Sign in to your account so that we can import settings and adjust your experience"
				L"\r\n";
			// 
			// label_sign_in_word
			// 
			this->label_sign_in_word->BackColor = System::Drawing::Color::Transparent;
			this->label_sign_in_word->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_sign_in_word->ForeColor = System::Drawing::Color::Aqua;
			this->label_sign_in_word->Location = System::Drawing::Point(90, 48);
			this->label_sign_in_word->Margin = System::Windows::Forms::Padding(0);
			this->label_sign_in_word->Name = L"label_sign_in_word";
			this->label_sign_in_word->Size = System::Drawing::Size(274, 88);
			this->label_sign_in_word->TabIndex = 0;
			this->label_sign_in_word->Text = L"Sign in";
			// 
			// pictureBox2_avatar
			// 
			this->pictureBox2_avatar->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2_avatar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2_avatar.BackgroundImage")));
			this->pictureBox2_avatar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2_avatar->Location = System::Drawing::Point(446, -180);
			this->pictureBox2_avatar->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox2_avatar->Name = L"pictureBox2_avatar";
			this->pictureBox2_avatar->Size = System::Drawing::Size(394, 750);
			this->pictureBox2_avatar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2_avatar->TabIndex = 12;
			this->pictureBox2_avatar->TabStop = false;
			// 
			// pictureBox_back_login
			// 
			this->pictureBox_back_login->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_back_login.BackgroundImage")));
			this->pictureBox_back_login->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox_back_login->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox_back_login->Location = System::Drawing::Point(0, 0);
			this->pictureBox_back_login->Margin = System::Windows::Forms::Padding(0, 8, 0, 8);
			this->pictureBox_back_login->Name = L"pictureBox_back_login";
			this->pictureBox_back_login->Size = System::Drawing::Size(1913, 973);
			this->pictureBox_back_login->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_back_login->TabIndex = 0;
			this->pictureBox_back_login->TabStop = false;
			// 
			// panel_con_register
			// 
			this->panel_con_register->Controls->Add(this->panel_reg);
			this->panel_con_register->Controls->Add(this->pictureBox_reg_back);
			this->panel_con_register->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_con_register->Location = System::Drawing::Point(0, 82);
			this->panel_con_register->Margin = System::Windows::Forms::Padding(0);
			this->panel_con_register->Name = L"panel_con_register";
			this->panel_con_register->Size = System::Drawing::Size(1913, 973);
			this->panel_con_register->TabIndex = 2;
			// 
			// panel_reg
			// 
			this->panel_reg->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel_reg->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel_reg->Controls->Add(this->password_reg_show);
			this->panel_reg->Controls->Add(this->password_reg_hide);
			this->panel_reg->Controls->Add(this->kryptonButton24_login_btn);
			this->panel_reg->Controls->Add(this->label51);
			this->panel_reg->Controls->Add(this->pictureBox7_icon);
			this->panel_reg->Controls->Add(this->textBox1_password);
			this->panel_reg->Controls->Add(this->pictureBox6_icon);
			this->panel_reg->Controls->Add(this->textBox3_email);
			this->panel_reg->Controls->Add(this->kryptonButton51);
			this->panel_reg->Controls->Add(this->kryptonButton50);
			this->panel_reg->Controls->Add(this->pictureBox5_icon);
			this->panel_reg->Controls->Add(this->textBox2_username);
			this->panel_reg->Controls->Add(this->kryptonButton49);
			this->panel_reg->Controls->Add(this->kryptonButton22_reg_btn);
			this->panel_reg->Controls->Add(this->checkBox2_agree);
			this->panel_reg->Controls->Add(this->label2_down_reg);
			this->panel_reg->Controls->Add(this->label_reg);
			this->panel_reg->Controls->Add(this->pictureBox8_avatar);
			this->panel_reg->ForeColor = System::Drawing::Color::White;
			this->panel_reg->Location = System::Drawing::Point(514, 202);
			this->panel_reg->Margin = System::Windows::Forms::Padding(0, 8, 0, 8);
			this->panel_reg->Name = L"panel_reg";
			this->panel_reg->Size = System::Drawing::Size(826, 596);
			this->panel_reg->TabIndex = 2;
			// 
			// password_reg_show
			// 
			this->password_reg_show->BackColor = System::Drawing::Color::White;
			this->password_reg_show->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->password_reg_show->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"password_reg_show.Image")));
			this->password_reg_show->Location = System::Drawing::Point(361, 335);
			this->password_reg_show->Margin = System::Windows::Forms::Padding(0);
			this->password_reg_show->Name = L"password_reg_show";
			this->password_reg_show->Size = System::Drawing::Size(34, 30);
			this->password_reg_show->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->password_reg_show->TabIndex = 51;
			this->password_reg_show->TabStop = false;
			this->password_reg_show->Click += gcnew System::EventHandler(this, &MyForm::password_reg_show_Click);
			// 
			// password_reg_hide
			// 
			this->password_reg_hide->BackColor = System::Drawing::Color::White;
			this->password_reg_hide->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->password_reg_hide->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"password_reg_hide.Image")));
			this->password_reg_hide->Location = System::Drawing::Point(361, 335);
			this->password_reg_hide->Margin = System::Windows::Forms::Padding(0);
			this->password_reg_hide->Name = L"password_reg_hide";
			this->password_reg_hide->Size = System::Drawing::Size(34, 30);
			this->password_reg_hide->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->password_reg_hide->TabIndex = 52;
			this->password_reg_hide->TabStop = false;
			this->password_reg_hide->Click += gcnew System::EventHandler(this, &MyForm::password_reg_hide_Click);
			// 
			// kryptonButton24_login_btn
			// 
			this->kryptonButton24_login_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->kryptonButton24_login_btn->Location = System::Drawing::Point(82, 490);
			this->kryptonButton24_login_btn->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton24_login_btn->Name = L"kryptonButton24_login_btn";
			this->kryptonButton24_login_btn->OverrideDefault->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton24_login_btn->OverrideDefault->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton24_login_btn->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton24_login_btn->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton24_login_btn->OverrideDefault->Border->Rounding = 15;
			this->kryptonButton24_login_btn->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton24_login_btn->OverrideFocus->Border->Rounding = 15;
			this->kryptonButton24_login_btn->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->kryptonButton24_login_btn->Size = System::Drawing::Size(325, 52);
			this->kryptonButton24_login_btn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton24_login_btn->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton24_login_btn->StateCommon->Border->Rounding = 15;
			this->kryptonButton24_login_btn->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton24_login_btn->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton24_login_btn->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton24_login_btn->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton24_login_btn->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton24_login_btn->StateDisabled->Border->Rounding = 15;
			this->kryptonButton24_login_btn->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton24_login_btn->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton24_login_btn->StateNormal->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton24_login_btn->StateNormal->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton24_login_btn->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton24_login_btn->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton24_login_btn->StateNormal->Border->Rounding = 15;
			this->kryptonButton24_login_btn->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton24_login_btn->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton24_login_btn->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton24_login_btn->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton24_login_btn->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton24_login_btn->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton24_login_btn->StatePressed->Border->Rounding = 15;
			this->kryptonButton24_login_btn->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton24_login_btn->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton24_login_btn->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton24_login_btn->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton24_login_btn->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton24_login_btn->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton24_login_btn->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton24_login_btn->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton24_login_btn->StateTracking->Border->Rounding = 15;
			this->kryptonButton24_login_btn->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton24_login_btn->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton24_login_btn->TabIndex = 46;
			this->kryptonButton24_login_btn->Values->Text = L"Log in";
			this->kryptonButton24_login_btn->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton2_Click);
			// 
			// label51
			// 
			this->label51->BackColor = System::Drawing::Color::Transparent;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label51->ForeColor = System::Drawing::Color::White;
			this->label51->Location = System::Drawing::Point(85, 462);
			this->label51->Margin = System::Windows::Forms::Padding(0);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(258, 30);
			this->label51->TabIndex = 50;
			this->label51->Text = L"Already have an account \?";
			// 
			// pictureBox7_icon
			// 
			this->pictureBox7_icon->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7_icon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7_icon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7_icon.Image")));
			this->pictureBox7_icon->Location = System::Drawing::Point(99, 334);
			this->pictureBox7_icon->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox7_icon->Name = L"pictureBox7_icon";
			this->pictureBox7_icon->Size = System::Drawing::Size(34, 30);
			this->pictureBox7_icon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7_icon->TabIndex = 16;
			this->pictureBox7_icon->TabStop = false;
			// 
			// textBox1_password
			// 
			this->textBox1_password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1_password->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1_password->Location = System::Drawing::Point(148, 332);
			this->textBox1_password->Margin = System::Windows::Forms::Padding(0);
			this->textBox1_password->Name = L"textBox1_password";
			this->textBox1_password->Size = System::Drawing::Size(240, 32);
			this->textBox1_password->TabIndex = 6;
			this->textBox1_password->Text = L"password";
			this->textBox1_password->UseSystemPasswordChar = true;
			this->textBox1_password->Click += gcnew System::EventHandler(this, &MyForm::textBox_Click);
			// 
			// pictureBox6_icon
			// 
			this->pictureBox6_icon->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6_icon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6_icon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6_icon.Image")));
			this->pictureBox6_icon->Location = System::Drawing::Point(101, 270);
			this->pictureBox6_icon->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox6_icon->Name = L"pictureBox6_icon";
			this->pictureBox6_icon->Size = System::Drawing::Size(34, 30);
			this->pictureBox6_icon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6_icon->TabIndex = 15;
			this->pictureBox6_icon->TabStop = false;
			// 
			// textBox3_email
			// 
			this->textBox3_email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3_email->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3_email->Location = System::Drawing::Point(148, 269);
			this->textBox3_email->Margin = System::Windows::Forms::Padding(0);
			this->textBox3_email->Name = L"textBox3_email";
			this->textBox3_email->Size = System::Drawing::Size(240, 32);
			this->textBox3_email->TabIndex = 12;
			this->textBox3_email->Text = L"Email";
			this->textBox3_email->Click += gcnew System::EventHandler(this, &MyForm::textBox_Click);
			// 
			// kryptonButton51
			// 
			this->kryptonButton51->Enabled = false;
			this->kryptonButton51->Location = System::Drawing::Point(82, 322);
			this->kryptonButton51->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton51->Name = L"kryptonButton51";
			this->kryptonButton51->Size = System::Drawing::Size(325, 52);
			this->kryptonButton51->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton51->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton51->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton51->StateCommon->Border->Rounding = 8;
			this->kryptonButton51->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton51->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton51->TabIndex = 49;
			this->kryptonButton51->Values->Text = L"";
			// 
			// kryptonButton50
			// 
			this->kryptonButton50->Enabled = false;
			this->kryptonButton50->Location = System::Drawing::Point(82, 258);
			this->kryptonButton50->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton50->Name = L"kryptonButton50";
			this->kryptonButton50->Size = System::Drawing::Size(325, 52);
			this->kryptonButton50->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton50->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton50->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton50->StateCommon->Border->Rounding = 8;
			this->kryptonButton50->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton50->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton50->TabIndex = 48;
			this->kryptonButton50->Values->Text = L"";
			// 
			// pictureBox5_icon
			// 
			this->pictureBox5_icon->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5_icon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5_icon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5_icon.Image")));
			this->pictureBox5_icon->Location = System::Drawing::Point(101, 202);
			this->pictureBox5_icon->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox5_icon->Name = L"pictureBox5_icon";
			this->pictureBox5_icon->Size = System::Drawing::Size(34, 30);
			this->pictureBox5_icon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5_icon->TabIndex = 14;
			this->pictureBox5_icon->TabStop = false;
			// 
			// textBox2_username
			// 
			this->textBox2_username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2_username->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2_username->Location = System::Drawing::Point(148, 201);
			this->textBox2_username->Margin = System::Windows::Forms::Padding(0);
			this->textBox2_username->Name = L"textBox2_username";
			this->textBox2_username->Size = System::Drawing::Size(240, 32);
			this->textBox2_username->TabIndex = 4;
			this->textBox2_username->Text = L"Username";
			this->textBox2_username->WordWrap = false;
			this->textBox2_username->Click += gcnew System::EventHandler(this, &MyForm::textBox_Click);
			// 
			// kryptonButton49
			// 
			this->kryptonButton49->Enabled = false;
			this->kryptonButton49->Location = System::Drawing::Point(82, 191);
			this->kryptonButton49->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton49->Name = L"kryptonButton49";
			this->kryptonButton49->Size = System::Drawing::Size(325, 52);
			this->kryptonButton49->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton49->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton49->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton49->StateCommon->Border->Rounding = 8;
			this->kryptonButton49->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton49->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton49->TabIndex = 47;
			this->kryptonButton49->Values->Text = L"";
			// 
			// kryptonButton22_reg_btn
			// 
			this->kryptonButton22_reg_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->kryptonButton22_reg_btn->Location = System::Drawing::Point(82, 410);
			this->kryptonButton22_reg_btn->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton22_reg_btn->Name = L"kryptonButton22_reg_btn";
			this->kryptonButton22_reg_btn->OverrideDefault->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton22_reg_btn->OverrideDefault->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton22_reg_btn->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton22_reg_btn->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton22_reg_btn->OverrideDefault->Border->Rounding = 15;
			this->kryptonButton22_reg_btn->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton22_reg_btn->OverrideFocus->Border->Rounding = 15;
			this->kryptonButton22_reg_btn->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->kryptonButton22_reg_btn->Size = System::Drawing::Size(325, 52);
			this->kryptonButton22_reg_btn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton22_reg_btn->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton22_reg_btn->StateCommon->Border->Rounding = 15;
			this->kryptonButton22_reg_btn->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton22_reg_btn->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton22_reg_btn->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton22_reg_btn->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton22_reg_btn->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton22_reg_btn->StateDisabled->Border->Rounding = 15;
			this->kryptonButton22_reg_btn->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton22_reg_btn->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton22_reg_btn->StateNormal->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton22_reg_btn->StateNormal->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton22_reg_btn->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton22_reg_btn->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton22_reg_btn->StateNormal->Border->Rounding = 15;
			this->kryptonButton22_reg_btn->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton22_reg_btn->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton22_reg_btn->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton22_reg_btn->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton22_reg_btn->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton22_reg_btn->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton22_reg_btn->StatePressed->Border->Rounding = 15;
			this->kryptonButton22_reg_btn->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton22_reg_btn->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton22_reg_btn->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton22_reg_btn->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton22_reg_btn->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton22_reg_btn->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton22_reg_btn->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton22_reg_btn->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton22_reg_btn->StateTracking->Border->Rounding = 15;
			this->kryptonButton22_reg_btn->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton22_reg_btn->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton22_reg_btn->TabIndex = 45;
			this->kryptonButton22_reg_btn->Values->Text = L"Register";
			this->kryptonButton22_reg_btn->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton22_reg_btn_Click);
			// 
			// checkBox2_agree
			// 
			this->checkBox2_agree->AutoSize = true;
			this->checkBox2_agree->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2_agree->Checked = true;
			this->checkBox2_agree->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2_agree->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox2_agree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2_agree->ForeColor = System::Drawing::Color::White;
			this->checkBox2_agree->Location = System::Drawing::Point(101, 380);
			this->checkBox2_agree->Margin = System::Windows::Forms::Padding(0);
			this->checkBox2_agree->Name = L"checkBox2_agree";
			this->checkBox2_agree->Size = System::Drawing::Size(255, 21);
			this->checkBox2_agree->TabIndex = 10;
			this->checkBox2_agree->Text = L"I agree in terms and conditions";
			this->checkBox2_agree->UseVisualStyleBackColor = false;
			// 
			// label2_down_reg
			// 
			this->label2_down_reg->BackColor = System::Drawing::Color::Transparent;
			this->label2_down_reg->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2_down_reg->ForeColor = System::Drawing::Color::White;
			this->label2_down_reg->Location = System::Drawing::Point(85, 112);
			this->label2_down_reg->Margin = System::Windows::Forms::Padding(0);
			this->label2_down_reg->Name = L"label2_down_reg";
			this->label2_down_reg->Size = System::Drawing::Size(340, 52);
			this->label2_down_reg->TabIndex = 1;
			this->label2_down_reg->Text = L"Register in our website so that we can import settings and adjust your experience"
				L"\r\n";
			// 
			// label_reg
			// 
			this->label_reg->BackColor = System::Drawing::Color::Transparent;
			this->label_reg->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_reg->ForeColor = System::Drawing::Color::Aqua;
			this->label_reg->Location = System::Drawing::Point(72, 36);
			this->label_reg->Margin = System::Windows::Forms::Padding(0);
			this->label_reg->Name = L"label_reg";
			this->label_reg->Size = System::Drawing::Size(309, 82);
			this->label_reg->TabIndex = 0;
			this->label_reg->Text = L"Register";
			// 
			// pictureBox8_avatar
			// 
			this->pictureBox8_avatar->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8_avatar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8_avatar.BackgroundImage")));
			this->pictureBox8_avatar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox8_avatar->Location = System::Drawing::Point(429, 22);
			this->pictureBox8_avatar->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox8_avatar->Name = L"pictureBox8_avatar";
			this->pictureBox8_avatar->Size = System::Drawing::Size(326, 548);
			this->pictureBox8_avatar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8_avatar->TabIndex = 17;
			this->pictureBox8_avatar->TabStop = false;
			// 
			// pictureBox_reg_back
			// 
			this->pictureBox_reg_back->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_reg_back.BackgroundImage")));
			this->pictureBox_reg_back->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox_reg_back->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox_reg_back->Location = System::Drawing::Point(0, 0);
			this->pictureBox_reg_back->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox_reg_back->Name = L"pictureBox_reg_back";
			this->pictureBox_reg_back->Size = System::Drawing::Size(1913, 973);
			this->pictureBox_reg_back->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_reg_back->TabIndex = 0;
			this->pictureBox_reg_back->TabStop = false;
			// 
			// panel_logo
			// 
			this->panel_logo->BackColor = System::Drawing::Color::White;
			this->panel_logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel_logo->Controls->Add(this->pictureBox2_logo);
			this->panel_logo->Controls->Add(this->pictureBox1_spin);
			this->panel_logo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_logo->Location = System::Drawing::Point(0, 82);
			this->panel_logo->Margin = System::Windows::Forms::Padding(0);
			this->panel_logo->Name = L"panel_logo";
			this->panel_logo->Size = System::Drawing::Size(1913, 973);
			this->panel_logo->TabIndex = 2;
			// 
			// pictureBox2_logo
			// 
			this->pictureBox2_logo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2_logo.Image")));
			this->pictureBox2_logo->Location = System::Drawing::Point(524, 112);
			this->pictureBox2_logo->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox2_logo->Name = L"pictureBox2_logo";
			this->pictureBox2_logo->Size = System::Drawing::Size(841, 628);
			this->pictureBox2_logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2_logo->TabIndex = 1;
			this->pictureBox2_logo->TabStop = false;
			// 
			// pictureBox1_spin
			// 
			this->pictureBox1_spin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1_spin.Image")));
			this->pictureBox1_spin->Location = System::Drawing::Point(912, 788);
			this->pictureBox1_spin->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1_spin->Name = L"pictureBox1_spin";
			this->pictureBox1_spin->Size = System::Drawing::Size(69, 68);
			this->pictureBox1_spin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1_spin->TabIndex = 2;
			this->pictureBox1_spin->TabStop = false;
			// 
			// flowLayoutPanel_container_
			// 
			this->flowLayoutPanel_container_->AutoScroll = true;
			this->flowLayoutPanel_container_->BackColor = System::Drawing::Color::MintCream;
			this->flowLayoutPanel_container_->Controls->Add(this->panel_main_);
			this->flowLayoutPanel_container_->Location = System::Drawing::Point(0, 82);
			this->flowLayoutPanel_container_->Margin = System::Windows::Forms::Padding(0);
			this->flowLayoutPanel_container_->MinimumSize = System::Drawing::Size(1920, 975);
			this->flowLayoutPanel_container_->Name = L"flowLayoutPanel_container_";
			this->flowLayoutPanel_container_->Size = System::Drawing::Size(1920, 975);
			this->flowLayoutPanel_container_->TabIndex = 6;
			// 
			// panel_main_
			// 
			this->panel_main_->AutoSize = true;
			this->panel_main_->BackColor = System::Drawing::Color::MintCream;
			this->panel_main_->Controls->Add(this->edge11);
			this->panel_main_->Controls->Add(this->panel_delete);
			this->panel_main_->Controls->Add(this->panel1_res);
			this->panel_main_->Controls->Add(this->panel_edit_res);
			this->panel_main_->Controls->Add(this->panel_chooses);
			this->panel_main_->Controls->Add(this->kryptonBorderEdge_downname_);
			this->panel_main_->Controls->Add(this->pictureBox_profile_photo_);
			this->panel_main_->Controls->Add(this->label_email);
			this->panel_main_->Controls->Add(this->label_name);
			this->panel_main_->Controls->Add(this->panel3_Edit_);
			this->panel_main_->Controls->Add(this->panel_win1_);
			this->panel_main_->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_main_->Location = System::Drawing::Point(0, 0);
			this->panel_main_->Margin = System::Windows::Forms::Padding(0);
			this->panel_main_->MinimumSize = System::Drawing::Size(1920, 1200);
			this->panel_main_->Name = L"panel_main_";
			this->panel_main_->Padding = System::Windows::Forms::Padding(0, 0, 0, 100);
			this->panel_main_->Size = System::Drawing::Size(1920, 1589);
			this->panel_main_->TabIndex = 6;
			// 
			// edge11
			// 
			this->edge11->Location = System::Drawing::Point(761, 251);
			this->edge11->Margin = System::Windows::Forms::Padding(0);
			this->edge11->Name = L"edge11";
			this->edge11->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->edge11->Size = System::Drawing::Size(1, 292);
			this->edge11->Text = L"kryptonBorderEdge1_5";
			// 
			// panel_delete
			// 
			this->panel_delete->BackColor = System::Drawing::Color::MintCream;
			this->panel_delete->Controls->Add(this->kryptonButton46);
			this->panel_delete->Controls->Add(this->kryptonButton41);
			this->panel_delete->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel_delete->Location = System::Drawing::Point(0, 1399);
			this->panel_delete->Margin = System::Windows::Forms::Padding(0);
			this->panel_delete->Name = L"panel_delete";
			this->panel_delete->Padding = System::Windows::Forms::Padding(0, 0, 0, 502);
			this->panel_delete->Size = System::Drawing::Size(1920, 90);
			this->panel_delete->TabIndex = 14;
			// 
			// kryptonButton46
			// 
			this->kryptonButton46->Cursor = System::Windows::Forms::Cursors::Hand;
			this->kryptonButton46->Location = System::Drawing::Point(981, 18);
			this->kryptonButton46->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton46->Name = L"kryptonButton46";
			this->kryptonButton46->OverrideDefault->Back->Color1 = System::Drawing::Color::ForestGreen;
			this->kryptonButton46->OverrideDefault->Back->Color2 = System::Drawing::Color::ForestGreen;
			this->kryptonButton46->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton46->OverrideDefault->Border->Rounding = 15;
			this->kryptonButton46->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton46->OverrideFocus->Border->Rounding = 15;
			this->kryptonButton46->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->kryptonButton46->Size = System::Drawing::Size(198, 54);
			this->kryptonButton46->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton46->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton46->StateCommon->Border->Rounding = 15;
			this->kryptonButton46->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton46->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton46->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton46->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton46->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton46->StateDisabled->Border->Rounding = 15;
			this->kryptonButton46->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton46->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton46->StateNormal->Back->Color1 = System::Drawing::Color::ForestGreen;
			this->kryptonButton46->StateNormal->Back->Color2 = System::Drawing::Color::ForestGreen;
			this->kryptonButton46->StateNormal->Border->Color1 = System::Drawing::Color::ForestGreen;
			this->kryptonButton46->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton46->StateNormal->Border->Rounding = 15;
			this->kryptonButton46->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton46->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton46->StatePressed->Back->Color1 = System::Drawing::Color::DarkGreen;
			this->kryptonButton46->StatePressed->Back->Color2 = System::Drawing::Color::DarkGreen;
			this->kryptonButton46->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton46->StatePressed->Border->Rounding = 15;
			this->kryptonButton46->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton46->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton46->StateTracking->Back->Color1 = System::Drawing::Color::Green;
			this->kryptonButton46->StateTracking->Back->Color2 = System::Drawing::Color::Green;
			this->kryptonButton46->StateTracking->Border->Color1 = System::Drawing::Color::ForestGreen;
			this->kryptonButton46->StateTracking->Border->Color2 = System::Drawing::Color::ForestGreen;
			this->kryptonButton46->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton46->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton46->StateTracking->Border->Rounding = 15;
			this->kryptonButton46->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton46->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton46->TabIndex = 38;
			this->kryptonButton46->Values->Text = L"+  Reserve new trip";
			this->kryptonButton46->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton46_Click);
			// 
			// kryptonButton41
			// 
			this->kryptonButton41->Cursor = System::Windows::Forms::Cursors::Hand;
			this->kryptonButton41->Enabled = false;
			this->kryptonButton41->Location = System::Drawing::Point(1215, 18);
			this->kryptonButton41->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton41->Name = L"kryptonButton41";
			this->kryptonButton41->OverrideDefault->Back->Color1 = System::Drawing::Color::Red;
			this->kryptonButton41->OverrideDefault->Back->Color2 = System::Drawing::Color::Red;
			this->kryptonButton41->OverrideDefault->Border->Color1 = System::Drawing::Color::Red;
			this->kryptonButton41->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton41->OverrideDefault->Border->Rounding = 15;
			this->kryptonButton41->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton41->OverrideFocus->Border->Rounding = 15;
			this->kryptonButton41->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->kryptonButton41->Size = System::Drawing::Size(198, 54);
			this->kryptonButton41->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton41->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton41->StateCommon->Border->Rounding = 15;
			this->kryptonButton41->StateDisabled->Back->Color1 = System::Drawing::Color::Silver;
			this->kryptonButton41->StateDisabled->Back->Color2 = System::Drawing::Color::Silver;
			this->kryptonButton41->StateDisabled->Border->Color1 = System::Drawing::Color::Silver;
			this->kryptonButton41->StateDisabled->Border->Color2 = System::Drawing::Color::Silver;
			this->kryptonButton41->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton41->StateDisabled->Border->Rounding = 15;
			this->kryptonButton41->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::Black;
			this->kryptonButton41->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton41->StateNormal->Back->Color1 = System::Drawing::Color::Red;
			this->kryptonButton41->StateNormal->Back->Color2 = System::Drawing::Color::Red;
			this->kryptonButton41->StateNormal->Border->Color1 = System::Drawing::Color::Red;
			this->kryptonButton41->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton41->StateNormal->Border->Rounding = 15;
			this->kryptonButton41->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton41->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton41->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton41->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton41->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton41->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton41->StatePressed->Border->Rounding = 15;
			this->kryptonButton41->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton41->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton41->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton41->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton41->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton41->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton41->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton41->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton41->StateTracking->Border->Rounding = 15;
			this->kryptonButton41->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton41->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton41->TabIndex = 37;
			this->kryptonButton41->Values->Text = L"⨉  Delete";
			this->kryptonButton41->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton41_Click);
			// 
			// panel1_res
			// 
			this->panel1_res->AutoSize = true;
			this->panel1_res->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel1_res->BackColor = System::Drawing::Color::White;
			this->panel1_res->Controls->Add(this->label_MyRes);
			this->panel1_res->Controls->Add(this->panel_con);
			this->panel1_res->Location = System::Drawing::Point(318, 1068);
			this->panel1_res->Margin = System::Windows::Forms::Padding(0);
			this->panel1_res->Name = L"panel1_res";
			this->panel1_res->Padding = System::Windows::Forms::Padding(0, 0, 0, 98);
			this->panel1_res->Size = System::Drawing::Size(628, 421);
			this->panel1_res->TabIndex = 12;
			// 
			// label_MyRes
			// 
			this->label_MyRes->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_MyRes->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label_MyRes->Location = System::Drawing::Point(150, 8);
			this->label_MyRes->Margin = System::Windows::Forms::Padding(0);
			this->label_MyRes->Name = L"label_MyRes";
			this->label_MyRes->Size = System::Drawing::Size(452, 90);
			this->label_MyRes->TabIndex = 1;
			this->label_MyRes->Text = L"My Reservations";
			this->label_MyRes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel_con
			// 
			this->panel_con->AutoSize = true;
			this->panel_con->BackColor = System::Drawing::Color::White;
			this->panel_con->Controls->Add(this->label5_no_of_tickets);
			this->panel_con->Controls->Add(this->kryptonBorderEdge2_);
			this->panel_con->Controls->Add(this->Button1_edit);
			this->panel_con->Controls->Add(this->kryptonBorderEdge1_);
			this->panel_con->Controls->Add(this->label4_totalfare);
			this->panel_con->Controls->Add(this->label3_reserved_tickets);
			this->panel_con->Controls->Add(this->label2_t_num);
			this->panel_con->Controls->Add(this->label1_time);
			this->panel_con->Controls->Add(this->label9_date);
			this->panel_con->Controls->Add(this->checkBox1_check);
			this->panel_con->Controls->Add(this->label11_board_dest);
			this->panel_con->Controls->Add(this->kryptonButton1_edit_container);
			this->panel_con->Location = System::Drawing::Point(0, 98);
			this->panel_con->Margin = System::Windows::Forms::Padding(0);
			this->panel_con->Name = L"panel_con";
			this->panel_con->Size = System::Drawing::Size(628, 225);
			this->panel_con->TabIndex = 0;
			// 
			// label5_no_of_tickets
			// 
			this->label5_no_of_tickets->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold));
			this->label5_no_of_tickets->Location = System::Drawing::Point(171, 132);
			this->label5_no_of_tickets->Margin = System::Windows::Forms::Padding(0);
			this->label5_no_of_tickets->Name = L"label5_no_of_tickets";
			this->label5_no_of_tickets->Size = System::Drawing::Size(120, 22);
			this->label5_no_of_tickets->TabIndex = 22;
			this->label5_no_of_tickets->Text = L"7";
			// 
			// kryptonBorderEdge2_
			// 
			this->kryptonBorderEdge2_->Location = System::Drawing::Point(120, 218);
			this->kryptonBorderEdge2_->Margin = System::Windows::Forms::Padding(0);
			this->kryptonBorderEdge2_->Name = L"kryptonBorderEdge2_";
			this->kryptonBorderEdge2_->Size = System::Drawing::Size(342, 1);
			this->kryptonBorderEdge2_->Text = L"kryptonBorderEdge2_";
			// 
			// Button1_edit
			// 
			this->Button1_edit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Button1_edit->Location = System::Drawing::Point(449, 150);
			this->Button1_edit->Margin = System::Windows::Forms::Padding(0);
			this->Button1_edit->Name = L"Button1_edit";
			this->Button1_edit->OverrideDefault->Back->Color1 = System::Drawing::Color::Maroon;
			this->Button1_edit->OverrideDefault->Back->Color2 = System::Drawing::Color::Maroon;
			this->Button1_edit->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->Button1_edit->OverrideDefault->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->Button1_edit->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Button1_edit->OverrideDefault->Content->ShortText->Color1 = System::Drawing::Color::DodgerBlue;
			this->Button1_edit->OverrideDefault->Content->ShortText->Color2 = System::Drawing::Color::DodgerBlue;
			this->Button1_edit->OverrideFocus->Back->Color1 = System::Drawing::Color::RoyalBlue;
			this->Button1_edit->OverrideFocus->Back->Color2 = System::Drawing::Color::RoyalBlue;
			this->Button1_edit->OverrideFocus->Border->Color1 = System::Drawing::Color::Blue;
			this->Button1_edit->OverrideFocus->Border->Color2 = System::Drawing::Color::Blue;
			this->Button1_edit->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Button1_edit->OverrideFocus->Border->Rounding = 15;
			this->Button1_edit->OverrideFocus->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->Button1_edit->OverrideFocus->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->Button1_edit->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->Button1_edit->Size = System::Drawing::Size(154, 45);
			this->Button1_edit->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Button1_edit->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Button1_edit->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->Button1_edit->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->Button1_edit->StateDisabled->Border->Color1 = System::Drawing::Color::Blue;
			this->Button1_edit->StateDisabled->Border->Color2 = System::Drawing::Color::Blue;
			this->Button1_edit->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Button1_edit->StateDisabled->Border->Rounding = 15;
			this->Button1_edit->StateNormal->Back->Color1 = System::Drawing::Color::Transparent;
			this->Button1_edit->StateNormal->Back->Color2 = System::Drawing::Color::Transparent;
			this->Button1_edit->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->Button1_edit->StateNormal->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->Button1_edit->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Button1_edit->StateNormal->Border->Rounding = 15;
			this->Button1_edit->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::DodgerBlue;
			this->Button1_edit->StateNormal->Content->ShortText->Color2 = System::Drawing::Color::DodgerBlue;
			this->Button1_edit->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Button1_edit->StatePressed->Back->Color1 = System::Drawing::Color::DarkBlue;
			this->Button1_edit->StatePressed->Back->Color2 = System::Drawing::Color::DarkBlue;
			this->Button1_edit->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Button1_edit->StatePressed->Border->Rounding = 15;
			this->Button1_edit->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->Button1_edit->StatePressed->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->Button1_edit->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Bold));
			this->Button1_edit->StateTracking->Back->Color1 = System::Drawing::Color::RoyalBlue;
			this->Button1_edit->StateTracking->Back->Color2 = System::Drawing::Color::RoyalBlue;
			this->Button1_edit->StateTracking->Border->Color1 = System::Drawing::Color::White;
			this->Button1_edit->StateTracking->Border->Color2 = System::Drawing::Color::White;
			this->Button1_edit->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->Button1_edit->StateTracking->Border->Rounding = 15;
			this->Button1_edit->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->Button1_edit->StateTracking->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->Button1_edit->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold));
			this->Button1_edit->TabIndex = 20;
			this->Button1_edit->Values->Text = L"Edit";
			this->Button1_edit->Click += gcnew System::EventHandler(this, &MyForm::Button1_edit_Click);
			// 
			// kryptonBorderEdge1_
			// 
			this->kryptonBorderEdge1_->Location = System::Drawing::Point(206, 52);
			this->kryptonBorderEdge1_->Margin = System::Windows::Forms::Padding(0);
			this->kryptonBorderEdge1_->Name = L"kryptonBorderEdge1_";
			this->kryptonBorderEdge1_->Size = System::Drawing::Size(206, 1);
			this->kryptonBorderEdge1_->Text = L"kryptonBorderEdge1_";
			// 
			// label4_totalfare
			// 
			this->label4_totalfare->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold));
			this->label4_totalfare->ForeColor = System::Drawing::Color::MediumBlue;
			this->label4_totalfare->Location = System::Drawing::Point(34, 165);
			this->label4_totalfare->Margin = System::Windows::Forms::Padding(0);
			this->label4_totalfare->Name = L"label4_totalfare";
			this->label4_totalfare->Size = System::Drawing::Size(258, 22);
			this->label4_totalfare->TabIndex = 21;
			this->label4_totalfare->Text = L"Total Fare : 70 L.E";
			// 
			// label3_reserved_tickets
			// 
			this->label3_reserved_tickets->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold));
			this->label3_reserved_tickets->Location = System::Drawing::Point(34, 132);
			this->label3_reserved_tickets->Margin = System::Windows::Forms::Padding(0);
			this->label3_reserved_tickets->Name = L"label3_reserved_tickets";
			this->label3_reserved_tickets->Size = System::Drawing::Size(138, 22);
			this->label3_reserved_tickets->TabIndex = 20;
			this->label3_reserved_tickets->Text = L"Reserved Tickets : ";
			// 
			// label2_t_num
			// 
			this->label2_t_num->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold));
			this->label2_t_num->Location = System::Drawing::Point(34, 108);
			this->label2_t_num->Margin = System::Windows::Forms::Padding(0);
			this->label2_t_num->Name = L"label2_t_num";
			this->label2_t_num->Size = System::Drawing::Size(429, 22);
			this->label2_t_num->TabIndex = 19;
			this->label2_t_num->Text = L"Train Number : 707";
			// 
			// label1_time
			// 
			this->label1_time->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold));
			this->label1_time->Location = System::Drawing::Point(34, 82);
			this->label1_time->Margin = System::Windows::Forms::Padding(0);
			this->label1_time->Name = L"label1_time";
			this->label1_time->Size = System::Drawing::Size(429, 22);
			this->label1_time->TabIndex = 18;
			this->label1_time->Text = L"Time :   01:00   ⇒   02:00";
			// 
			// label9_date
			// 
			this->label9_date->BackColor = System::Drawing::Color::Transparent;
			this->label9_date->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold));
			this->label9_date->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label9_date->Location = System::Drawing::Point(34, 60);
			this->label9_date->Margin = System::Windows::Forms::Padding(0);
			this->label9_date->Name = L"label9_date";
			this->label9_date->Size = System::Drawing::Size(429, 22);
			this->label9_date->TabIndex = 17;
			this->label9_date->Text = L"Date :   07/5/2023  ";
			// 
			// checkBox1_check
			// 
			this->checkBox1_check->AutoEllipsis = true;
			this->checkBox1_check->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox1_check->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1_check->Location = System::Drawing::Point(514, 15);
			this->checkBox1_check->Margin = System::Windows::Forms::Padding(0);
			this->checkBox1_check->Name = L"checkBox1_check";
			this->checkBox1_check->Size = System::Drawing::Size(89, 22);
			this->checkBox1_check->TabIndex = 16;
			this->checkBox1_check->Text = L"Select";
			this->checkBox1_check->UseVisualStyleBackColor = true;
			this->checkBox1_check->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_check_CheckedChanged);
			// 
			// label11_board_dest
			// 
			this->label11_board_dest->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11_board_dest->ForeColor = System::Drawing::Color::Black;
			this->label11_board_dest->Location = System::Drawing::Point(171, 15);
			this->label11_board_dest->Margin = System::Windows::Forms::Padding(0);
			this->label11_board_dest->Name = L"label11_board_dest";
			this->label11_board_dest->Size = System::Drawing::Size(240, 38);
			this->label11_board_dest->TabIndex = 13;
			this->label11_board_dest->Text = L"Cairo   ⇒  Alex";
			this->label11_board_dest->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// kryptonButton1_edit_container
			// 
			this->kryptonButton1_edit_container->Enabled = false;
			this->kryptonButton1_edit_container->Location = System::Drawing::Point(0, 0);
			this->kryptonButton1_edit_container->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton1_edit_container->Name = L"kryptonButton1_edit_container";
			this->kryptonButton1_edit_container->Size = System::Drawing::Size(628, 218);
			this->kryptonButton1_edit_container->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton1_edit_container->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton1_edit_container->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton1_edit_container->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton1_edit_container->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton1_edit_container->StateDisabled->Border->Rounding = 15;
			this->kryptonButton1_edit_container->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton1_edit_container->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton1_edit_container->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton1_edit_container->StateNormal->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton1_edit_container->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton1_edit_container->StateNormal->Border->Rounding = 15;
			this->kryptonButton1_edit_container->TabIndex = 2;
			this->kryptonButton1_edit_container->Values->Text = L"";
			// 
			// panel_edit_res
			// 
			this->panel_edit_res->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel_edit_res->BackColor = System::Drawing::Color::White;
			this->panel_edit_res->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel_edit_res->Controls->Add(this->kryptonButton40);
			this->panel_edit_res->Controls->Add(this->kryptonButton45);
			this->panel_edit_res->Controls->Add(this->textBox1_number);
			this->panel_edit_res->Controls->Add(this->kryptonButton39);
			this->panel_edit_res->Controls->Add(this->label6_uptickets);
			this->panel_edit_res->Controls->Add(this->label2_down_save_button);
			this->panel_edit_res->Controls->Add(this->label27_edit);
			this->panel_edit_res->Location = System::Drawing::Point(51, 570);
			this->panel_edit_res->Margin = System::Windows::Forms::Padding(0);
			this->panel_edit_res->Name = L"panel_edit_res";
			this->panel_edit_res->Size = System::Drawing::Size(481, 394);
			this->panel_edit_res->TabIndex = 10;
			// 
			// kryptonButton40
			// 
			this->kryptonButton40->Cursor = System::Windows::Forms::Cursors::Hand;
			this->kryptonButton40->Location = System::Drawing::Point(240, 252);
			this->kryptonButton40->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton40->Name = L"kryptonButton40";
			this->kryptonButton40->OverrideDefault->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton40->OverrideDefault->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton40->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton40->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton40->OverrideDefault->Border->Rounding = 15;
			this->kryptonButton40->OverrideDefault->Content->ShortText->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton40->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton40->OverrideFocus->Border->Rounding = 15;
			this->kryptonButton40->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->kryptonButton40->Size = System::Drawing::Size(175, 54);
			this->kryptonButton40->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton40->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton40->StateCommon->Border->Rounding = 15;
			this->kryptonButton40->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton40->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton40->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton40->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton40->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton40->StateDisabled->Border->Rounding = 15;
			this->kryptonButton40->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton40->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton40->StateNormal->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton40->StateNormal->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton40->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton40->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton40->StateNormal->Border->Rounding = 15;
			this->kryptonButton40->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton40->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton40->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton40->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton40->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton40->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton40->StatePressed->Border->Rounding = 15;
			this->kryptonButton40->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton40->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton40->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton40->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton40->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton40->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton40->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton40->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton40->StateTracking->Border->Rounding = 15;
			this->kryptonButton40->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton40->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton40->TabIndex = 41;
			this->kryptonButton40->Values->Text = L"Cancel";
			this->kryptonButton40->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton40_Click);
			// 
			// kryptonButton45
			// 
			this->kryptonButton45->Cursor = System::Windows::Forms::Cursors::Hand;
			this->kryptonButton45->Location = System::Drawing::Point(56, 252);
			this->kryptonButton45->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton45->Name = L"kryptonButton45";
			this->kryptonButton45->OverrideDefault->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton45->OverrideDefault->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton45->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton45->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton45->OverrideDefault->Border->Rounding = 15;
			this->kryptonButton45->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton45->OverrideFocus->Border->Rounding = 15;
			this->kryptonButton45->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->kryptonButton45->Size = System::Drawing::Size(175, 54);
			this->kryptonButton45->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton45->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton45->StateCommon->Border->Rounding = 15;
			this->kryptonButton45->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton45->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton45->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton45->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton45->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton45->StateDisabled->Border->Rounding = 15;
			this->kryptonButton45->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton45->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton45->StateNormal->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton45->StateNormal->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton45->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton45->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton45->StateNormal->Border->Rounding = 15;
			this->kryptonButton45->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton45->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton45->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton45->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton45->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton45->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton45->StatePressed->Border->Rounding = 15;
			this->kryptonButton45->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton45->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton45->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton45->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton45->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton45->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton45->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton45->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton45->StateTracking->Border->Rounding = 15;
			this->kryptonButton45->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton45->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton45->TabIndex = 40;
			this->kryptonButton45->Values->Text = L"Save";
			this->kryptonButton45->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton45_Click);
			// 
			// textBox1_number
			// 
			this->textBox1_number->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1_number->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1_number->Location = System::Drawing::Point(65, 156);
			this->textBox1_number->Margin = System::Windows::Forms::Padding(0);
			this->textBox1_number->Multiline = true;
			this->textBox1_number->Name = L"textBox1_number";
			this->textBox1_number->Size = System::Drawing::Size(339, 36);
			this->textBox1_number->TabIndex = 17;
			this->textBox1_number->Text = L"Number of new tickets";
			this->textBox1_number->Click += gcnew System::EventHandler(this, &MyForm::textBox_Click);
			// 
			// kryptonButton39
			// 
			this->kryptonButton39->Enabled = false;
			this->kryptonButton39->Location = System::Drawing::Point(52, 146);
			this->kryptonButton39->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton39->Name = L"kryptonButton39";
			this->kryptonButton39->Size = System::Drawing::Size(371, 54);
			this->kryptonButton39->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton39->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton39->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton39->StateCommon->Border->Rounding = 8;
			this->kryptonButton39->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton39->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton39->TabIndex = 25;
			this->kryptonButton39->Values->Text = L"";
			// 
			// label6_uptickets
			// 
			this->label6_uptickets->BackColor = System::Drawing::Color::Transparent;
			this->label6_uptickets->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6_uptickets->Location = System::Drawing::Point(56, 114);
			this->label6_uptickets->Margin = System::Windows::Forms::Padding(0);
			this->label6_uptickets->Name = L"label6_uptickets";
			this->label6_uptickets->Size = System::Drawing::Size(189, 22);
			this->label6_uptickets->TabIndex = 24;
			this->label6_uptickets->Text = L"Enter new tickets number";
			// 
			// label2_down_save_button
			// 
			this->label2_down_save_button->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2_down_save_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2_down_save_button->Location = System::Drawing::Point(58, 325);
			this->label2_down_save_button->Margin = System::Windows::Forms::Padding(0);
			this->label2_down_save_button->Name = L"label2_down_save_button";
			this->label2_down_save_button->Size = System::Drawing::Size(360, 30);
			this->label2_down_save_button->TabIndex = 8;
			this->label2_down_save_button->Text = L"Your information changed successfully ";
			this->label2_down_save_button->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label27_edit
			// 
			this->label27_edit->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27_edit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label27_edit->Location = System::Drawing::Point(72, 24);
			this->label27_edit->Margin = System::Windows::Forms::Padding(0);
			this->label27_edit->Name = L"label27_edit";
			this->label27_edit->Size = System::Drawing::Size(326, 60);
			this->label27_edit->TabIndex = 0;
			this->label27_edit->Text = L"Edit Reservation";
			this->label27_edit->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel_chooses
			// 
			this->panel_chooses->Controls->Add(this->button_log_out);
			this->panel_chooses->Controls->Add(this->edge22);
			this->panel_chooses->Controls->Add(this->edge33);
			this->panel_chooses->Controls->Add(this->Link1);
			this->panel_chooses->Controls->Add(this->Link2);
			this->panel_chooses->Controls->Add(this->Link);
			this->panel_chooses->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel_chooses->Location = System::Drawing::Point(480, 234);
			this->panel_chooses->Margin = System::Windows::Forms::Padding(0);
			this->panel_chooses->Name = L"panel_chooses";
			this->panel_chooses->Size = System::Drawing::Size(271, 320);
			this->panel_chooses->TabIndex = 6;
			// 
			// button_log_out
			// 
			this->button_log_out->BackColor = System::Drawing::Color::Beige;
			this->button_log_out->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_log_out->FlatAppearance->BorderColor = System::Drawing::Color::Beige;
			this->button_log_out->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button_log_out->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button_log_out->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_log_out->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13, System::Drawing::FontStyle::Bold));
			this->button_log_out->ForeColor = System::Drawing::Color::Red;
			this->button_log_out->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_log_out.Image")));
			this->button_log_out->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button_log_out->Location = System::Drawing::Point(2, 229);
			this->button_log_out->Margin = System::Windows::Forms::Padding(0);
			this->button_log_out->Name = L"button_log_out";
			this->button_log_out->Size = System::Drawing::Size(265, 38);
			this->button_log_out->TabIndex = 9;
			this->button_log_out->Text = L"Log out";
			this->button_log_out->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button_log_out->UseVisualStyleBackColor = false;
			this->button_log_out->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// edge22
			// 
			this->edge22->Location = System::Drawing::Point(14, 208);
			this->edge22->Margin = System::Windows::Forms::Padding(0);
			this->edge22->Name = L"edge22";
			this->edge22->Size = System::Drawing::Size(171, 1);
			this->edge22->Text = L"kryptonBorderEdge5";
			// 
			// edge33
			// 
			this->edge33->Location = System::Drawing::Point(12, 95);
			this->edge33->Margin = System::Windows::Forms::Padding(0);
			this->edge33->Name = L"edge33";
			this->edge33->Size = System::Drawing::Size(171, 1);
			this->edge33->Text = L"kryptonBorderEdge1_";
			// 
			// Link1
			// 
			this->Link1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Link1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13, System::Drawing::FontStyle::Bold));
			this->Link1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Link1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Link1.Image")));
			this->Link1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Link1->Location = System::Drawing::Point(0, 112);
			this->Link1->Margin = System::Windows::Forms::Padding(0);
			this->Link1->Name = L"Link1";
			this->Link1->Padding = System::Windows::Forms::Padding(8, 0, 0, 0);
			this->Link1->Size = System::Drawing::Size(268, 38);
			this->Link1->TabIndex = 8;
			this->Link1->Text = L"Personal details";
			this->Link1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Link1->Click += gcnew System::EventHandler(this, &MyForm::Link_click);
			// 
			// Link2
			// 
			this->Link2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Link2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13, System::Drawing::FontStyle::Bold));
			this->Link2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Link2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Link2.Image")));
			this->Link2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Link2->Location = System::Drawing::Point(1, 165);
			this->Link2->Margin = System::Windows::Forms::Padding(0);
			this->Link2->Name = L"Link2";
			this->Link2->Padding = System::Windows::Forms::Padding(8, 0, 0, 0);
			this->Link2->Size = System::Drawing::Size(266, 38);
			this->Link2->TabIndex = 6;
			this->Link2->Text = L"My Reservations";
			this->Link2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Link2->Click += gcnew System::EventHandler(this, &MyForm::Link_click);
			// 
			// Link
			// 
			this->Link->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Link->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13, System::Drawing::FontStyle::Bold));
			this->Link->ForeColor = System::Drawing::Color::DodgerBlue;
			this->Link->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Link.Image")));
			this->Link->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Link->Location = System::Drawing::Point(0, 52);
			this->Link->Margin = System::Windows::Forms::Padding(0);
			this->Link->Name = L"Link";
			this->Link->Padding = System::Windows::Forms::Padding(8, 0, 0, 0);
			this->Link->Size = System::Drawing::Size(268, 38);
			this->Link->TabIndex = 5;
			this->Link->Text = L"Account overview";
			this->Link->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Link->Click += gcnew System::EventHandler(this, &MyForm::Link_click);
			// 
			// kryptonBorderEdge_downname_
			// 
			this->kryptonBorderEdge_downname_->Location = System::Drawing::Point(498, 158);
			this->kryptonBorderEdge_downname_->Margin = System::Windows::Forms::Padding(0);
			this->kryptonBorderEdge_downname_->Name = L"kryptonBorderEdge_downname_";
			this->kryptonBorderEdge_downname_->Size = System::Drawing::Size(394, 1);
			this->kryptonBorderEdge_downname_->Text = L"kryptonBorderEdge6";
			// 
			// pictureBox_profile_photo_
			// 
			this->pictureBox_profile_photo_->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox_profile_photo_->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_profile_photo_.Image")));
			this->pictureBox_profile_photo_->Location = System::Drawing::Point(514, 59);
			this->pictureBox_profile_photo_->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox_profile_photo_->Name = L"pictureBox_profile_photo_";
			this->pictureBox_profile_photo_->Size = System::Drawing::Size(92, 88);
			this->pictureBox_profile_photo_->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_profile_photo_->TabIndex = 8;
			this->pictureBox_profile_photo_->TabStop = false;
			// 
			// label_email
			// 
			this->label_email->BackColor = System::Drawing::Color::Transparent;
			this->label_email->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_email->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label_email->Location = System::Drawing::Point(618, 112);
			this->label_email->Margin = System::Windows::Forms::Padding(0);
			this->label_email->Name = L"label_email";
			this->label_email->Size = System::Drawing::Size(189, 38);
			this->label_email->TabIndex = 2;
			this->label_email->Text = L"MoAwad@gmail.com";
			// 
			// label_name
			// 
			this->label_name->BackColor = System::Drawing::Color::Transparent;
			this->label_name->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label_name->Location = System::Drawing::Point(610, 59);
			this->label_name->Margin = System::Windows::Forms::Padding(0);
			this->label_name->Name = L"label_name";
			this->label_name->Size = System::Drawing::Size(360, 90);
			this->label_name->TabIndex = 0;
			this->label_name->Text = L"MoAwad";
			// 
			// panel3_Edit_
			// 
			this->panel3_Edit_->BackColor = System::Drawing::Color::White;
			this->panel3_Edit_->Controls->Add(this->password_PD_show);
			this->panel3_Edit_->Controls->Add(this->password_PD_hide);
			this->panel3_Edit_->Controls->Add(this->kryptonButton38);
			this->panel3_Edit_->Controls->Add(this->label_Emaill);
			this->panel3_Edit_->Controls->Add(this->kryptonButton24);
			this->panel3_Edit_->Controls->Add(this->textBox_username_);
			this->panel3_Edit_->Controls->Add(this->kryptonButton22);
			this->panel3_Edit_->Controls->Add(this->textBox_password_);
			this->panel3_Edit_->Controls->Add(this->kryptonButton_password_);
			this->panel3_Edit_->Controls->Add(this->label_after_save);
			this->panel3_Edit_->Controls->Add(this->label_header_);
			this->panel3_Edit_->Location = System::Drawing::Point(1072, 849);
			this->panel3_Edit_->Margin = System::Windows::Forms::Padding(0);
			this->panel3_Edit_->Name = L"panel3_Edit_";
			this->panel3_Edit_->Size = System::Drawing::Size(549, 488);
			this->panel3_Edit_->TabIndex = 8;
			// 
			// password_PD_show
			// 
			this->password_PD_show->BackColor = System::Drawing::Color::White;
			this->password_PD_show->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->password_PD_show->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"password_PD_show.Image")));
			this->password_PD_show->Location = System::Drawing::Point(417, 272);
			this->password_PD_show->Margin = System::Windows::Forms::Padding(0);
			this->password_PD_show->Name = L"password_PD_show";
			this->password_PD_show->Size = System::Drawing::Size(32, 32);
			this->password_PD_show->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->password_PD_show->TabIndex = 49;
			this->password_PD_show->TabStop = false;
			this->password_PD_show->Click += gcnew System::EventHandler(this, &MyForm::password_PD_show_Click);
			// 
			// password_PD_hide
			// 
			this->password_PD_hide->BackColor = System::Drawing::Color::White;
			this->password_PD_hide->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->password_PD_hide->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"password_PD_hide.Image")));
			this->password_PD_hide->Location = System::Drawing::Point(417, 272);
			this->password_PD_hide->Margin = System::Windows::Forms::Padding(0);
			this->password_PD_hide->Name = L"password_PD_hide";
			this->password_PD_hide->Size = System::Drawing::Size(32, 32);
			this->password_PD_hide->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->password_PD_hide->TabIndex = 50;
			this->password_PD_hide->TabStop = false;
			this->password_PD_hide->Click += gcnew System::EventHandler(this, &MyForm::password_PD_hide_Click);
			// 
			// kryptonButton38
			// 
			this->kryptonButton38->Cursor = System::Windows::Forms::Cursors::Hand;
			this->kryptonButton38->Location = System::Drawing::Point(90, 341);
			this->kryptonButton38->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton38->Name = L"kryptonButton38";
			this->kryptonButton38->OverrideDefault->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton38->OverrideDefault->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton38->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton38->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton38->OverrideDefault->Border->Rounding = 15;
			this->kryptonButton38->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton38->OverrideFocus->Border->Rounding = 15;
			this->kryptonButton38->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->kryptonButton38->Size = System::Drawing::Size(371, 54);
			this->kryptonButton38->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton38->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton38->StateCommon->Border->Rounding = 15;
			this->kryptonButton38->StateDisabled->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton38->StateDisabled->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton38->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton38->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton38->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton38->StateDisabled->Border->Rounding = 15;
			this->kryptonButton38->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton38->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton38->StateNormal->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton38->StateNormal->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton38->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->kryptonButton38->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton38->StateNormal->Border->Rounding = 15;
			this->kryptonButton38->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton38->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton38->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton38->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton38->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->kryptonButton38->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton38->StatePressed->Border->Rounding = 15;
			this->kryptonButton38->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton38->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton38->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton38->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton38->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton38->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->kryptonButton38->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->kryptonButton38->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton38->StateTracking->Border->Rounding = 15;
			this->kryptonButton38->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton38->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->kryptonButton38->TabIndex = 41;
			this->kryptonButton38->Values->Text = L"Save";
			this->kryptonButton38->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton38_Click_1);
			// 
			// label_Emaill
			// 
			this->label_Emaill->Cursor = System::Windows::Forms::Cursors::No;
			this->label_Emaill->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F));
			this->label_Emaill->ForeColor = System::Drawing::Color::Silver;
			this->label_Emaill->Location = System::Drawing::Point(100, 142);
			this->label_Emaill->Margin = System::Windows::Forms::Padding(0);
			this->label_Emaill->Name = L"label_Emaill";
			this->label_Emaill->Size = System::Drawing::Size(326, 38);
			this->label_Emaill->TabIndex = 15;
			this->label_Emaill->Text = L"MoAwad@gmail.com";
			// 
			// kryptonButton24
			// 
			this->kryptonButton24->Enabled = false;
			this->kryptonButton24->Location = System::Drawing::Point(90, 134);
			this->kryptonButton24->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton24->Name = L"kryptonButton24";
			this->kryptonButton24->Size = System::Drawing::Size(371, 54);
			this->kryptonButton24->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton24->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton24->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton24->StateCommon->Border->Rounding = 8;
			this->kryptonButton24->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton24->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton24->TabIndex = 19;
			this->kryptonButton24->Values->Text = L"";
			// 
			// textBox_username_
			// 
			this->textBox_username_->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_username_->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_username_->Location = System::Drawing::Point(104, 206);
			this->textBox_username_->Margin = System::Windows::Forms::Padding(0);
			this->textBox_username_->Name = L"textBox_username_";
			this->textBox_username_->Size = System::Drawing::Size(345, 32);
			this->textBox_username_->TabIndex = 10;
			this->textBox_username_->Text = L"Username";
			this->textBox_username_->Click += gcnew System::EventHandler(this, &MyForm::textBox_Click);
			// 
			// kryptonButton22
			// 
			this->kryptonButton22->Enabled = false;
			this->kryptonButton22->Location = System::Drawing::Point(90, 198);
			this->kryptonButton22->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton22->Name = L"kryptonButton22";
			this->kryptonButton22->Size = System::Drawing::Size(371, 54);
			this->kryptonButton22->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton22->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton22->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton22->StateCommon->Border->Rounding = 8;
			this->kryptonButton22->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton22->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton22->TabIndex = 18;
			this->kryptonButton22->Values->Text = L"";
			// 
			// textBox_password_
			// 
			this->textBox_password_->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox_password_->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_password_->Location = System::Drawing::Point(108, 272);
			this->textBox_password_->Margin = System::Windows::Forms::Padding(0);
			this->textBox_password_->Name = L"textBox_password_";
			this->textBox_password_->Size = System::Drawing::Size(338, 32);
			this->textBox_password_->TabIndex = 14;
			this->textBox_password_->Text = L"password";
			this->textBox_password_->UseSystemPasswordChar = true;
			this->textBox_password_->Click += gcnew System::EventHandler(this, &MyForm::textBox_Click);
			// 
			// kryptonButton_password_
			// 
			this->kryptonButton_password_->Enabled = false;
			this->kryptonButton_password_->Location = System::Drawing::Point(90, 262);
			this->kryptonButton_password_->Margin = System::Windows::Forms::Padding(0);
			this->kryptonButton_password_->Name = L"kryptonButton_password_";
			this->kryptonButton_password_->Size = System::Drawing::Size(371, 54);
			this->kryptonButton_password_->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton_password_->StateCommon->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton_password_->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton_password_->StateCommon->Border->Rounding = 8;
			this->kryptonButton_password_->StateDisabled->Back->Color1 = System::Drawing::Color::White;
			this->kryptonButton_password_->StateDisabled->Back->Color2 = System::Drawing::Color::White;
			this->kryptonButton_password_->TabIndex = 13;
			this->kryptonButton_password_->Values->Text = L"";
			// 
			// label_after_save
			// 
			this->label_after_save->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_after_save->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label_after_save->Location = System::Drawing::Point(106, 418);
			this->label_after_save->Margin = System::Windows::Forms::Padding(0);
			this->label_after_save->Name = L"label_after_save";
			this->label_after_save->Size = System::Drawing::Size(355, 30);
			this->label_after_save->TabIndex = 8;
			this->label_after_save->Text = L"Your information changed successfully ";
			this->label_after_save->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_header_
			// 
			this->label_header_->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_header_->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label_header_->Location = System::Drawing::Point(105, 42);
			this->label_header_->Margin = System::Windows::Forms::Padding(0);
			this->label_header_->Name = L"label_header_";
			this->label_header_->Size = System::Drawing::Size(326, 60);
			this->label_header_->TabIndex = 0;
			this->label_header_->Text = L"Personal Details";
			this->label_header_->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel_win1_
			// 
			this->panel_win1_->BackColor = System::Drawing::Color::White;
			this->panel_win1_->Controls->Add(this->pictureBox_pic3);
			this->panel_win1_->Controls->Add(this->edge1);
			this->panel_win1_->Controls->Add(this->edge2);
			this->panel_win1_->Controls->Add(this->edge3);
			this->panel_win1_->Controls->Add(this->label_pic3);
			this->panel_win1_->Controls->Add(this->label_pic2);
			this->panel_win1_->Controls->Add(this->label_pic1);
			this->panel_win1_->Controls->Add(this->label_welcome);
			this->panel_win1_->Controls->Add(this->pictureBox_pic2);
			this->panel_win1_->Controls->Add(this->pictureBox_pic1);
			this->panel_win1_->Controls->Add(this->label_down_welcome);
			this->panel_win1_->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel_win1_->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->panel_win1_->Location = System::Drawing::Point(790, 232);
			this->panel_win1_->Margin = System::Windows::Forms::Padding(0);
			this->panel_win1_->Name = L"panel_win1_";
			this->panel_win1_->Size = System::Drawing::Size(788, 556);
			this->panel_win1_->TabIndex = 7;
			// 
			// pictureBox_pic3
			// 
			this->pictureBox_pic3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_pic3.Image")));
			this->pictureBox_pic3->Location = System::Drawing::Point(522, 302);
			this->pictureBox_pic3->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox_pic3->Name = L"pictureBox_pic3";
			this->pictureBox_pic3->Size = System::Drawing::Size(189, 135);
			this->pictureBox_pic3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_pic3->TabIndex = 4;
			this->pictureBox_pic3->TabStop = false;
			// 
			// edge1
			// 
			this->edge1->Location = System::Drawing::Point(145, 235);
			this->edge1->Margin = System::Windows::Forms::Padding(0);
			this->edge1->Name = L"edge1";
			this->edge1->Size = System::Drawing::Size(498, 1);
			this->edge1->Text = L"kryptonBorderEdge4";
			// 
			// edge2
			// 
			this->edge2->Location = System::Drawing::Point(505, 302);
			this->edge2->Margin = System::Windows::Forms::Padding(0);
			this->edge2->Name = L"edge2";
			this->edge2->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->edge2->Size = System::Drawing::Size(1, 150);
			this->edge2->Text = L"kryptonBorderEdge3";
			// 
			// edge3
			// 
			this->edge3->Location = System::Drawing::Point(282, 300);
			this->edge3->Margin = System::Windows::Forms::Padding(0);
			this->edge3->Name = L"edge3";
			this->edge3->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->edge3->Size = System::Drawing::Size(1, 150);
			this->edge3->Text = L"kryptonBorderEdge2_";
			// 
			// label_pic3
			// 
			this->label_pic3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_pic3->Location = System::Drawing::Point(528, 432);
			this->label_pic3->Margin = System::Windows::Forms::Padding(0);
			this->label_pic3->Name = L"label_pic3";
			this->label_pic3->Size = System::Drawing::Size(189, 91);
			this->label_pic3->TabIndex = 7;
			this->label_pic3->Text = L"And much more to come soon…\r\n";
			this->label_pic3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_pic2
			// 
			this->label_pic2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_pic2->Location = System::Drawing::Point(300, 442);
			this->label_pic2->Margin = System::Windows::Forms::Padding(0);
			this->label_pic2->Name = L"label_pic2";
			this->label_pic2->Size = System::Drawing::Size(189, 91);
			this->label_pic2->TabIndex = 6;
			this->label_pic2->Text = L"Update your details and change your password\r\n";
			this->label_pic2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_pic1
			// 
			this->label_pic1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_pic1->Location = System::Drawing::Point(81, 442);
			this->label_pic1->Margin = System::Windows::Forms::Padding(0);
			this->label_pic1->Name = L"label_pic1";
			this->label_pic1->Size = System::Drawing::Size(189, 91);
			this->label_pic1->TabIndex = 5;
			this->label_pic1->Text = L"Save passengers for speedy bookings";
			this->label_pic1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_welcome
			// 
			this->label_welcome->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_welcome->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label_welcome->Location = System::Drawing::Point(138, 19);
			this->label_welcome->Margin = System::Windows::Forms::Padding(0);
			this->label_welcome->Name = L"label_welcome";
			this->label_welcome->Size = System::Drawing::Size(508, 68);
			this->label_welcome->TabIndex = 0;
			this->label_welcome->Text = L"Welcome to your account";
			this->label_welcome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox_pic2
			// 
			this->pictureBox_pic2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_pic2.Image")));
			this->pictureBox_pic2->Location = System::Drawing::Point(299, 300);
			this->pictureBox_pic2->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox_pic2->Name = L"pictureBox_pic2";
			this->pictureBox_pic2->Size = System::Drawing::Size(189, 135);
			this->pictureBox_pic2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_pic2->TabIndex = 3;
			this->pictureBox_pic2->TabStop = false;
			// 
			// pictureBox_pic1
			// 
			this->pictureBox_pic1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_pic1.Image")));
			this->pictureBox_pic1->Location = System::Drawing::Point(81, 302);
			this->pictureBox_pic1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox_pic1->Name = L"pictureBox_pic1";
			this->pictureBox_pic1->Size = System::Drawing::Size(189, 135);
			this->pictureBox_pic1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_pic1->TabIndex = 2;
			this->pictureBox_pic1->TabStop = false;
			// 
			// label_down_welcome
			// 
			this->label_down_welcome->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_down_welcome->Location = System::Drawing::Point(172, 71);
			this->label_down_welcome->Margin = System::Windows::Forms::Padding(0);
			this->label_down_welcome->Name = L"label_down_welcome";
			this->label_down_welcome->Size = System::Drawing::Size(429, 135);
			this->label_down_welcome->TabIndex = 1;
			this->label_down_welcome->Text = L"We are making improvements and introducing new features into the My Account exper"
				L"ience.\r\n\r\nIt is now much easier to...\r\n";
			this->label_down_welcome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel_header_
			// 
			this->panel_header_->BackColor = System::Drawing::Color::White;
			this->panel_header_->Controls->Add(this->pictureBox_logo_);
			this->panel_header_->Location = System::Drawing::Point(0, 0);
			this->panel_header_->Margin = System::Windows::Forms::Padding(0);
			this->panel_header_->Name = L"panel_header_";
			this->panel_header_->Size = System::Drawing::Size(1371, 60);
			this->panel_header_->TabIndex = 9;
			// 
			// pictureBox_logo_
			// 
			this->pictureBox_logo_->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox_logo_->Location = System::Drawing::Point(0, 0);
			this->pictureBox_logo_->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox_logo_->Name = L"pictureBox_logo_";
			this->pictureBox_logo_->Size = System::Drawing::Size(102, 60);
			this->pictureBox_logo_->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox_logo_->TabIndex = 0;
			this->pictureBox_logo_->TabStop = false;
			// 
			// panel_end
			// 
			this->panel_end->BackColor = System::Drawing::Color::White;
			this->panel_end->Controls->Add(this->pictureBox9_backend);
			this->panel_end->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_end->Location = System::Drawing::Point(0, 0);
			this->panel_end->Margin = System::Windows::Forms::Padding(0);
			this->panel_end->Name = L"panel_end";
			this->panel_end->Size = System::Drawing::Size(1913, 1055);
			this->panel_end->TabIndex = 10;
			// 
			// pictureBox9_backend
			// 
			this->pictureBox9_backend->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9_backend->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9_backend.Image")));
			this->pictureBox9_backend->Location = System::Drawing::Point(542, 166);
			this->pictureBox9_backend->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox9_backend->Name = L"pictureBox9_backend";
			this->pictureBox9_backend->Size = System::Drawing::Size(825, 668);
			this->pictureBox9_backend->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9_backend->TabIndex = 0;
			this->pictureBox9_backend->TabStop = false;
			// 
			// edit_train_btn
			// 
			this->edit_train_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->edit_train_btn->Enabled = false;
			this->edit_train_btn->Location = System::Drawing::Point(1560, 900);
			this->edit_train_btn->Margin = System::Windows::Forms::Padding(0);
			this->edit_train_btn->Name = L"edit_train_btn";
			this->edit_train_btn->OverrideDefault->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->edit_train_btn->OverrideDefault->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->edit_train_btn->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->edit_train_btn->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->edit_train_btn->OverrideDefault->Border->Rounding = 15;
			this->edit_train_btn->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->edit_train_btn->OverrideFocus->Border->Rounding = 15;
			this->edit_train_btn->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->edit_train_btn->Size = System::Drawing::Size(154, 60);
			this->edit_train_btn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->edit_train_btn->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->edit_train_btn->StateCommon->Border->Rounding = 15;
			this->edit_train_btn->StateDisabled->Back->Color1 = System::Drawing::Color::Silver;
			this->edit_train_btn->StateDisabled->Back->Color2 = System::Drawing::Color::Silver;
			this->edit_train_btn->StateDisabled->Border->Color1 = System::Drawing::Color::Silver;
			this->edit_train_btn->StateDisabled->Border->Color2 = System::Drawing::Color::Silver;
			this->edit_train_btn->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->edit_train_btn->StateDisabled->Border->Rounding = 15;
			this->edit_train_btn->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::Black;
			this->edit_train_btn->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->edit_train_btn->StateNormal->Back->Color1 = System::Drawing::Color::DodgerBlue;
			this->edit_train_btn->StateNormal->Back->Color2 = System::Drawing::Color::DodgerBlue;
			this->edit_train_btn->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
			this->edit_train_btn->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->edit_train_btn->StateNormal->Border->Rounding = 15;
			this->edit_train_btn->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->edit_train_btn->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->edit_train_btn->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->edit_train_btn->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->edit_train_btn->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(130)));
			this->edit_train_btn->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->edit_train_btn->StatePressed->Border->Rounding = 15;
			this->edit_train_btn->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->edit_train_btn->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->edit_train_btn->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->edit_train_btn->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->edit_train_btn->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->edit_train_btn->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->edit_train_btn->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->edit_train_btn->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->edit_train_btn->StateTracking->Border->Rounding = 15;
			this->edit_train_btn->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->edit_train_btn->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->edit_train_btn->TabIndex = 37;
			this->edit_train_btn->Values->Text = L"Edit";
			this->edit_train_btn->Click += gcnew System::EventHandler(this, &MyForm::edit_train_btn_Click);
			// 
			// delete_train_btn
			// 
			this->delete_train_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->delete_train_btn->Enabled = false;
			this->delete_train_btn->Location = System::Drawing::Point(1720, 900);
			this->delete_train_btn->Margin = System::Windows::Forms::Padding(0);
			this->delete_train_btn->Name = L"delete_train_btn";
			this->delete_train_btn->OverrideDefault->Back->Color1 = System::Drawing::Color::Red;
			this->delete_train_btn->OverrideDefault->Back->Color2 = System::Drawing::Color::Red;
			this->delete_train_btn->OverrideDefault->Border->Color1 = System::Drawing::Color::Red;
			this->delete_train_btn->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->delete_train_btn->OverrideDefault->Border->Rounding = 15;
			this->delete_train_btn->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->delete_train_btn->OverrideFocus->Border->Rounding = 15;
			this->delete_train_btn->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->delete_train_btn->Size = System::Drawing::Size(154, 60);
			this->delete_train_btn->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->delete_train_btn->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->delete_train_btn->StateCommon->Border->Rounding = 15;
			this->delete_train_btn->StateDisabled->Back->Color1 = System::Drawing::Color::Silver;
			this->delete_train_btn->StateDisabled->Back->Color2 = System::Drawing::Color::Silver;
			this->delete_train_btn->StateDisabled->Border->Color1 = System::Drawing::Color::Silver;
			this->delete_train_btn->StateDisabled->Border->Color2 = System::Drawing::Color::Silver;
			this->delete_train_btn->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->delete_train_btn->StateDisabled->Border->Rounding = 15;
			this->delete_train_btn->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::Black;
			this->delete_train_btn->StateDisabled->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->delete_train_btn->StateNormal->Back->Color1 = System::Drawing::Color::Red;
			this->delete_train_btn->StateNormal->Back->Color2 = System::Drawing::Color::Red;
			this->delete_train_btn->StateNormal->Border->Color1 = System::Drawing::Color::Red;
			this->delete_train_btn->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->delete_train_btn->StateNormal->Border->Rounding = 15;
			this->delete_train_btn->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->delete_train_btn->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->delete_train_btn->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delete_train_btn->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delete_train_btn->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delete_train_btn->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->delete_train_btn->StatePressed->Border->Rounding = 15;
			this->delete_train_btn->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->delete_train_btn->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->delete_train_btn->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delete_train_btn->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delete_train_btn->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delete_train_btn->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delete_train_btn->StateTracking->Border->Draw = ComponentFactory::Krypton::Toolkit::InheritBool::True;
			this->delete_train_btn->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->delete_train_btn->StateTracking->Border->Rounding = 15;
			this->delete_train_btn->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->delete_train_btn->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
			this->delete_train_btn->TabIndex = 38;
			this->delete_train_btn->Values->Text = L"Delete";
			this->delete_train_btn->Click += gcnew System::EventHandler(this, &MyForm::delete_train_btn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(120, 120);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1913, 1055);
			this->Controls->Add(this->admin_page);
			this->Controls->Add(this->panel_logo);
			this->Controls->Add(this->panel_con_Login);
			this->Controls->Add(this->home_layout);
			this->Controls->Add(this->page2_container);
			this->Controls->Add(this->flowLayoutPanel_container_);
			this->Controls->Add(this->panel_con_register);
			this->Controls->Add(this->edit_train_btn);
			this->Controls->Add(this->delete_train_btn);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->edit_trip_btn);
			this->Controls->Add(this->delete_trip_btn);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel_end);
			this->Controls->Add(this->panel_header_);
			this->Margin = System::Windows::Forms::Padding(0);
			this->Name = L"MyForm";
			this->Palette = this->kryptonPalette1;
			this->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Custom;
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Trainko";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->home_layout->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonPanel2))->EndInit();
			this->kryptonPanel2->ResumeLayout(false);
			this->kryptonPanel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->page2_container->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->admin_page->ResumeLayout(false);
			this->flowLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel3->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->edit_train_wind->ResumeLayout(false);
			this->edit_train_wind->PerformLayout();
			this->Trains_management_panel->ResumeLayout(false);
			this->Trains_management_panel->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->Trips_management_panel->ResumeLayout(false);
			this->Trips_management_panel->PerformLayout();
			this->edit_trip_wind->ResumeLayout(false);
			this->edit_trip_wind->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel_con_Login->ResumeLayout(false);
			this->panel_login->ResumeLayout(false);
			this->panel_login->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->password_show))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->password_hide))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4_icon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3_icon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2_avatar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_back_login))->EndInit();
			this->panel_con_register->ResumeLayout(false);
			this->panel_reg->ResumeLayout(false);
			this->panel_reg->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->password_reg_show))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->password_reg_hide))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7_icon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6_icon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5_icon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8_avatar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_reg_back))->EndInit();
			this->panel_logo->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2_logo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1_spin))->EndInit();
			this->flowLayoutPanel_container_->ResumeLayout(false);
			this->flowLayoutPanel_container_->PerformLayout();
			this->panel_main_->ResumeLayout(false);
			this->panel_main_->PerformLayout();
			this->panel_delete->ResumeLayout(false);
			this->panel1_res->ResumeLayout(false);
			this->panel1_res->PerformLayout();
			this->panel_con->ResumeLayout(false);
			this->panel_con->PerformLayout();
			this->panel_edit_res->ResumeLayout(false);
			this->panel_edit_res->PerformLayout();
			this->panel_chooses->ResumeLayout(false);
			this->panel_chooses->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_profile_photo_))->EndInit();
			this->panel3_Edit_->ResumeLayout(false);
			this->panel3_Edit_->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->password_PD_show))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->password_PD_hide))->EndInit();
			this->panel_win1_->ResumeLayout(false);
			this->panel_win1_->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_pic3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_pic2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_pic1))->EndInit();
			this->panel_header_->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_logo_))->EndInit();
			this->panel_end->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9_backend))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// my comp
		// variable
		int selected_trips=0;
		Timer^ timer_logo = gcnew Timer();
		// functions
		void display_all_trips() {
				// DATABASE TASK
				// get all trips of TRIPS table
				// create vector
				// in loop 
				//       create object of type Trip and pass parameters to it, then push it to the vector
				// REPLACE ALL trip_vec2 with your vector name.

				panel14->Controls->Clear();
				label46->Text = gcnew String(to_string(trip_vec2.size()).c_str()) + " Available trips";
				if (trip_vec2.empty()) {
					Label^ l = gcnew Label();
					PictureBox^ notfound = gcnew PictureBox();
					l->AutoSize = true;
					l->Location = System::Drawing::Point(187, 20);
					l->Text = "Sorry, no trips found!";
					l->Name = "NoTrips";
					l->ForeColor = Color::Gray;
					l->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					l->Padding = System::Windows::Forms::Padding(10);
					l->Cursor = System::Windows::Forms::Cursors::Hand;
					//notFound_img->Location = System::Drawing::Point(166, 132);
					//panel14->Controls->Add(notFound_img);
					panel14->Controls->Add(l);
				}
				else {
					label46->Visible = true;
					//cout << "disp vec: " << trip_vec2.size() << endl;
					for (int i = 0; i < trip_vec2.size(); i++) {
						// trip creation			
						Panel^ trip = gcnew Panel();
						trip->Size = System::Drawing::Size(628, 100);
						trip->Name = "trip_panel";
						trip->BackColor = Color::White;
						trip->Cursor = System::Windows::Forms::Cursors::Hand;
						// set the location of trip

						trip->Location = System::Drawing::Point(2, 2 + i * 105);

						trip->Click += gcnew System::EventHandler(this, &MyForm::trip_click_admin);

						panel14->Controls->Add(trip);

						// daparture time creation
						Label^ dep_time = gcnew Label();
						dep_time->Name = "dep_time";
						dep_time->BackColor = Color::Transparent;
						dep_time->ForeColor = System::Drawing::Color::Black;
						dep_time->AutoSize = true;
						dep_time->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							static_cast<System::Byte>(0)));
						dep_time->Location = System::Drawing::Point(30, 22);
						dep_time->Size = System::Drawing::Size(74, 31);
						dep_time->TabIndex = 0;
						// set dep_time value
						String^ dep_t = gcnew String(trip_vec2[i].departure_time.c_str());
						dep_time->Text = dep_t;
						dep_time->Click += gcnew System::EventHandler(this, &MyForm::trip_click_admin);
						trip->Controls->Add(dep_time);


						// arrow bet. departure time and arrive time
						Label^ arrow = gcnew Label();
						arrow->Name = "arrow";
						arrow->BackColor = Color::Transparent;
						arrow->ForeColor = System::Drawing::Color::DimGray;
						arrow->AutoSize = true;
						arrow->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 16.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							static_cast<System::Byte>(0)));
						arrow->Location = System::Drawing::Point(90, 18);
						arrow->Size = System::Drawing::Size(41, 37);
						arrow->Text = L"⇒";
						arrow->Click += gcnew System::EventHandler(this, &MyForm::trip_click_admin);
						trip->Controls->Add(arrow);

						// arrive time creation
						Label^ arv_time = gcnew Label();
						arv_time->Name = "arv_time";
						arv_time->BackColor = Color::Transparent;
						arv_time->ForeColor = System::Drawing::Color::Black;
						arv_time->AutoSize = true;
						arv_time->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							static_cast<System::Byte>(0)));
						arv_time->Location = System::Drawing::Point(120, 22);
						arv_time->Size = System::Drawing::Size(74, 31);
						arv_time->TabIndex = 0;
						arv_time->Click += gcnew System::EventHandler(this, &MyForm::trip_click_admin);
						// set dep_time value
						String^ arv_t = gcnew String(trip_vec2[i].arrive_time.c_str());
						arv_time->Text = arv_t;
						trip->Controls->Add(arv_time);

						// date creation
						Label^ date = gcnew Label();
						date->Name = "date";
						date->BackColor = Color::Transparent;
						date->ForeColor = System::Drawing::Color::Black;
						date->AutoSize = true;
						date->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							static_cast<System::Byte>(0)));
						date->Location = System::Drawing::Point(64, 53);
						date->Size = System::Drawing::Size(94, 23);
						date->TabIndex = 0;
						date->Click += gcnew System::EventHandler(this, &MyForm::trip_click_admin);
						// set dep_time value
						String^ date_t = gcnew String(trip_vec2[i].date_of_travel.c_str());
						date->Text = date_t;
						trip->Controls->Add(date);


						// Available seats creation
						Label^ avl_seats = gcnew Label();
						avl_seats->Name = "avl_seats";
						avl_seats->BackColor = Color::Transparent;
						avl_seats->ForeColor = System::Drawing::Color::DodgerBlue;
						avl_seats->AutoSize = true;
						avl_seats->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							static_cast<System::Byte>(0)));
						avl_seats->Location = System::Drawing::Point(470, 53);
						avl_seats->Size = System::Drawing::Size(94, 23);
						avl_seats->TabIndex = 0;
						avl_seats->Click += gcnew System::EventHandler(this, &MyForm::trip_click_admin);
						string seats = to_string(trip_vec2[i].available_seats) + " Available seats";
						String^ avl_seats_t = gcnew String(seats.c_str());
						avl_seats->Text = avl_seats_t;
						trip->Controls->Add(avl_seats);

						// horizontal line 
						KryptonBorderEdge^ hl = gcnew KryptonBorderEdge();
						hl->Size = System::Drawing::Size(400, 1);
						hl->Location = System::Drawing::Point(110, 98);
						trip->Controls->Add(hl);

						// trip fare
						Label^ fare = gcnew Label();
						fare->Anchor = System::Windows::Forms::AnchorStyles::Right;
						fare->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							static_cast<System::Byte>(0)));
						fare->Location = System::Drawing::Point(450, 22);
						fare->MinimumSize = System::Drawing::Size(150, 31);
						fare->Name = L"trip_fare";
						fare->Size = System::Drawing::Size(150, 31);
						fare->TabIndex = 4;
						fare->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
						fare->Click += gcnew System::EventHandler(this, &MyForm::trip_click_admin);
						string fare_string = to_string(trip_vec2[i].fare);
						int index = fare_string.find('.');
						string rounded_fare = fare_string.substr(0, index + 3) + " L.E";
						String^ price_t = gcnew String(rounded_fare.c_str());
						fare->Text = price_t;
						trip->Controls->Add(fare);


						// boarding and dest
						Label^ fromto = gcnew Label();
						fromto->Name = "fromto";
						fromto->BackColor = Color::Transparent;
						fromto->ForeColor = System::Drawing::Color::Black;
						fromto->AutoSize = true;
						fromto->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
							static_cast<System::Byte>(0)));
						fromto->Location = System::Drawing::Point(230, 0);
						fromto->Size = System::Drawing::Size(200, 100);
						fromto->TabIndex = 0;
						fromto->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
						fromto->AutoSize = false;
						fromto->Click += gcnew System::EventHandler(this, &MyForm::trip_click_admin);
						// set dep_time value
						String^ boarding = gcnew String(trip_vec2[i].boarding_point.c_str());
						String^ destination = gcnew String(trip_vec2[i].destination_point.c_str());
						fromto->Text = boarding + L"\n⇓\n" + destination;
						trip->Controls->Add(fromto);

						Label^ dest = gcnew Label();
						dest->Name = "dest";
						dest->Hide();
						dest->Text = destination;
						Label^ board = gcnew Label();
						board->Name = "board";
						board->Hide();
						board->Text = boarding;

						trip->Controls->Add(dest);
						trip->Controls->Add(board);


					}
				}
			}
		void enable_edit(int selected) {
			if (selected > 1) {
				edit_trip_btn->Enabled = false;
			}
			else if (selected == 0) {
				delete_trip_btn->Enabled = false;
				edit_trip_btn->Enabled = false;
			}
			else {
				delete_trip_btn->Enabled = true;
				edit_trip_btn->Enabled = true;
			}
		}
		void del_trip(vector<Trip>& trip_vec2) {
			system("CLS");
			for each (Control ^ c in panel14->Controls)
			{
				if (c->GetType() == Panel::typeid && c->BackColor == Color::AliceBlue) {
					string boardAndDest;
					MarshalString(c->Controls["fromto"]->Text, boardAndDest);
					std::istringstream f(boardAndDest);
					std::string line;
					vector<string>t;
					while (std::getline(f, line)) {
						if (line != "⇓") {
							t.push_back(line);
						}
					}
					string boarding = t[0];
					string destination = t[1];
					string dep_time;
					MarshalString(c->Controls["dep_time"]->Text, dep_time);
					string arrive_time;
					MarshalString(c->Controls["arv_time"]->Text, arrive_time);
					string date;
					MarshalString(c->Controls["date"]->Text, date);
					bool found = false;

					int del_indx = -1;
					for (int i = 0; i < trip_vec2.size(); i++) {
						if (trip_vec2[i].boarding_point == boarding && trip_vec2[i].destination_point == destination
							&& trip_vec2[i].departure_time == dep_time && trip_vec2[i].arrive_time == arrive_time 
							&& trip_vec2[i].date_of_travel == date) {
							del_indx = i;
							found = true;
							break;
						}
					}

					if (found) {
						trip_vec2.erase(trip_vec2.begin() + del_indx);
						c->Hide();
					}
					else cout << "not found" << endl;
					c->BackColor = Color::Red;
					selected_trips = 0;
					enable_edit(selected_trips);
					panel14->Controls->Clear();
				}else cout << "not alice" << endl;
			}
			display_all_trips();
		}
		void display_all_trains() {

			// DATABASE TASK
			// get all trains of TRAINS table
			// create vector
			// in loop 
			//       create object of type Train and pass parameters to it, then push it to the vector
			// REPLACE ALL Train::train_vec with your vector name.

			label46->Text = gcnew String(to_string(Train::train_vec.size()).c_str()) + " Available trips";
			if (Train::train_vec.empty()) {
				Label^ l = gcnew Label();
				//PictureBox^ notfound = gcnew PictureBox();
				l->AutoSize = true;
				l->Location = System::Drawing::Point(187, 20);
				l->Text = "Sorry, no trains found!";
				l->Name = "NoTrains";
				l->ForeColor = Color::Gray;
				l->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				l->Padding = System::Windows::Forms::Padding(10);
				l->Cursor = System::Windows::Forms::Cursors::Hand;
				//notFound_img->Location = System::Drawing::Point(166, 132);
				//panel20->Controls->Add(notFound_img);
				panel18->Controls->Add(l);
			}
			else {
				//label46->Visible = true;
				for (int i = 0; i < Train::train_vec.size(); i++) {
					// trip creation			
					Panel^ train = gcnew Panel();
					train->Size = System::Drawing::Size(610, 100);
					train->Name = "train_panel";
					train->BackColor = Color::White;
					train->Cursor = System::Windows::Forms::Cursors::Hand;
					// set the location of trip
					train->Location = System::Drawing::Point(2, 2 + i * 100);
					train->Click += gcnew System::EventHandler(this, &MyForm::train_click_admin);
					panel18->Controls->Add(train);

					// daparture time creation
					Label^ train_name = gcnew Label();
					train_name->Name = "train_name";
					train_name->BackColor = Color::Transparent;
					train_name->ForeColor = System::Drawing::Color::Black;
					train_name->AutoSize = true;
					train_name->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					train_name->Location = System::Drawing::Point(20, 42);
					train_name->Size = System::Drawing::Size(74, 31);
					train_name->TabIndex = 0;
					train_name->Text = "Train name:";
					// set dep_time value
					//train_name->Text = gcnew String(Train::train_vec[i].name.c_str());
					//dep_time->Click += gcnew System::EventHandler(this, &MyForm::trip_click_admin);
					train_name->Click += gcnew System::EventHandler(this, &MyForm::train_click_admin);
					train->Controls->Add(train_name);


					// daparture time creation
					Label^ train_name_v = gcnew Label();
					train_name_v->Name = "train_name_v";
					train_name_v->BackColor = Color::Transparent;
					train_name_v->ForeColor = System::Drawing::Color::Black;
					train_name_v->AutoSize = true;
					train_name_v->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					train_name_v->Location = System::Drawing::Point(110, 42);
					train_name_v->Size = System::Drawing::Size(74, 31);
					train_name_v->TabIndex = 0;
					// set dep_time value
					train_name_v->Text = gcnew String(Train::train_vec[i].name.c_str());
					//dep_time->Click += gcnew System::EventHandler(this, &MyForm::trip_click_admin);
					train_name_v->Click += gcnew System::EventHandler(this, &MyForm::train_click_admin);
					train->Controls->Add(train_name_v);

					// daparture time creation
					Label^ train_number = gcnew Label();
					train_number->Name = "train_number";
					train_number->BackColor = Color::Transparent;
					train_number->ForeColor = System::Drawing::Color::Black;
					train_number->AutoSize = true;
					train_number->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					train_number->Location = System::Drawing::Point(250, 42);
					train_number->Size = System::Drawing::Size(74, 31);
					train_number->TabIndex = 0;
					train_number->Text = "Train number:";
					// set dep_time value
					//train_name->Text = gcnew String(Train::train_vec[i].name.c_str());
					//dep_time->Click += gcnew System::EventHandler(this, &MyForm::trip_click_admin);
					train_number->Click += gcnew System::EventHandler(this, &MyForm::train_click_admin);
					train->Controls->Add(train_number);

					// daparture time creation
					Label^ train_number_v = gcnew Label();
					train_number_v->Name = "train_number_v";
					train_number_v->BackColor = Color::Transparent;
					train_number_v->ForeColor = System::Drawing::Color::Black;
					train_number_v->AutoSize = true;
					train_number_v->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					train_number_v->Location = System::Drawing::Point(355, 42);
					train_number_v->Size = System::Drawing::Size(74, 31);
					train_number_v->TabIndex = 0;
					// set dep_time value
					string train_number_str = to_string(Train::train_vec[i].number);
					train_number_v->Text = gcnew String(train_number_str.c_str());
					//dep_time->Click += gcnew System::EventHandler(this, &MyForm::trip_click_admin);
					train_number_v->Click += gcnew System::EventHandler(this, &MyForm::train_click_admin);
					train->Controls->Add(train_number_v);


					// daparture time creation
					Label^ train_capacity = gcnew Label();
					train_capacity->Name = "train_capacity";
					train_capacity->BackColor = Color::Transparent;
					train_capacity->ForeColor = System::Drawing::Color::Black;
					train_capacity->AutoSize = true;
					train_capacity->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					train_capacity->Location = System::Drawing::Point(430, 42);
					train_capacity->Size = System::Drawing::Size(74, 31);
					train_capacity->TabIndex = 0;
					// set dep_time value
					train_capacity->Text = "Train capacity:";
					//dep_time->Click += gcnew System::EventHandler(this, &MyForm::trip_click_admin);
					train_capacity->Click += gcnew System::EventHandler(this, &MyForm::train_click_admin);
					train->Controls->Add(train_capacity);


					// daparture time creation
					Label^ train_capacity_v = gcnew Label();
					train_capacity_v->Name = "train_capacity_v";
					train_capacity_v->BackColor = Color::Transparent;
					train_capacity_v->ForeColor = System::Drawing::Color::Black;
					train_capacity_v->AutoSize = true;
					train_capacity_v->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(0)));
					train_capacity_v->Location = System::Drawing::Point(540, 42);
					train_capacity_v->Size = System::Drawing::Size(74, 31);
					train_capacity_v->TabIndex = 0;
					// set dep_time value
					string train_cap_str = to_string(Train::train_vec[i].numofseats);
					train_capacity_v->Text = gcnew String(train_cap_str.c_str());
					//dep_time->Click += gcnew System::EventHandler(this, &MyForm::trip_click_admin);
					train_capacity_v->Click += gcnew System::EventHandler(this, &MyForm::train_click_admin);
					train->Controls->Add(train_capacity_v);

					// horizontal line 
					KryptonBorderEdge^ hl = gcnew KryptonBorderEdge();
					hl->Size = System::Drawing::Size(350, 1);
					hl->Location = System::Drawing::Point(120, 98);
					train->Controls->Add(hl);
				}
			}
		}
		void switch_page(FlowLayoutPanel^ flp) {
			for each (Control ^ c in this->Controls)
			{
			   // c->SendToBack();
				c->Hide();
			}
			//flp->BringToFront();
			flp->Show();
			for each (Control ^ c in flp->Controls)
			{
				// c->SendToBack();
				c->Show();
			}
		}
		void switch_page(Panel^ panel) {
			for each (Control ^ c in this->Controls)
			{
			   // c->SendToBack();
				c->Hide();
			}
			//panel->BringToFront();
			panel->Show();
			for each (Control ^ c in panel->Controls)
			{
				// c->SendToBack();
				c->Show();
			}
		}
		void management_btn_active(KryptonButton^ btn) {
			for each (Control ^ c in panel9->Controls) {
				if (c->GetType() == KryptonButton::typeid) {
					KryptonButton^ Kc = safe_cast<KryptonButton^>(c);
					Kc->StateNormal->Back->Color1 = System::Drawing::Color::White;
					Kc->StateNormal->Back->Color2 = System::Drawing::Color::White;
					Kc->StateNormal->Border->Color1 = System::Drawing::Color::White;
				}
			}
			btn->StateNormal->Back->Color1 = System::Drawing::Color::AliceBlue;
			btn->StateNormal->Back->Color2 = System::Drawing::Color::AliceBlue;
			btn->StateNormal->Border->Color1 = System::Drawing::Color::AliceBlue;
			btn->OverrideFocus->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			btn->OverrideFocus->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(215)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			btn->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
		}
		// events
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			// login comp
			
			timer_logo->Interval = 4000;//two seconds
			timer_logo->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			timer_logo->Start();
			panel_login->Parent = pictureBox_back_login;
			panel_login->BackColor = Color::FromArgb(240, 0, 0, 0);
			panel_reg->Parent = pictureBox_reg_back;
			panel_reg->BackColor = Color::FromArgb(240, 0, 0, 0);

			// my comp
			page2_container->Hide();
			panel8->Hide();
			panel6->Hide();
			delete_trip_btn->Enabled = false;
			edit_trip_btn->Enabled = false;
			Trips_management_panel->Show();
			Trains_management_panel->Hide();
			panel1->Hide();
			this->Manage_trips_btn->OverrideFocus->Back->Color1 = System::Drawing::Color::AliceBlue;
			this->Manage_trips_btn->OverrideFocus->Back->Color2 = System::Drawing::Color::AliceBlue;
			this->Manage_trips_btn->OverrideFocus->Border->Color1 = System::Drawing::Color::AliceBlue;
			this->Manage_trips_btn->OverrideFocus->Content->ShortText->Color1 = System::Drawing::Color::DodgerBlue;
			//notFound_picBox->Hide();


			// my profile
			panel3_Edit_->Hide();
			panel1_res->Hide();
			panel_delete->Hide();
			label_after_save->Hide();
			panel_edit_res->Hide();
			label2_down_save_button->Hide();
			panel_end->Hide();
			panel_win1_->Show();


			edit_trip_wind->Hide();
			edit_train_wind->Hide();
		}
		private: System::Void textBox_Click(System::Object^ sender, System::EventArgs^ e) {
			TextBox^ tb = safe_cast<TextBox^>(sender);
			if (tb->Text == "Enter number of tickets:" || 
				tb->Text == "Username" ||
				tb->Text == "password" ||
				tb->Text == "Email" || 
				tb->Text == "Number of new tickets" ||
				tb->Text == "DD:MM:YYYY" || 
				tb->Text == "Enter train number" ||
				tb->Text == "Enter price of ticket" ||
				tb->Text == "HH:MM" ||
				tb->Text == "Train capacity" ||
				tb->Text == "Date" ||
				tb->Text == "Departure time" ||
				tb->Text == "Arrive time" ||
				tb->Text == "Enter train number" ||
				tb->Text == "Enter train name" ||
				tb->Text == "Enter train capacity") {

				tb->Text = "";
				tb->ForeColor = Color::Black;
			}
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			cout << to_string(this->ClientSize.Width) << endl;
		}
		private: System::Void Invalid_input(string message) {
			comboBox1->Text == "Enter Boarding place:";
			comboBox2->Text == "Enter Destination place:";
			textBox1->Text == "Enter number of tickets:";
			label13->Text = gcnew String(message.c_str());
		}
		private: System::Void kryptonButton6_Click(System::Object^ sender, System::EventArgs^ e) {
			string tb1; bool num = true; 
			MarshalString(textBox1->Text, tb1);
			for (int i = 0; i < tb1.size(); i++) {
				if (!isdigit(tb1[i])) {
					num=false;
					break;
				}
			}
			if (num) {
				// sring to int
				int n = stoi(tb1);
				if (!(comboBox1->SelectedIndex == -1 || comboBox2->SelectedIndex == -1 || n <= 0)) {
					if (comboBox1->Text == comboBox2->Text) {
						Invalid_input("Boarding and Destination places can not be equal!");
					}
					else {
						//// show trips page
						//page2_container->BringToFront();
						//page2_container->Show();
						//// hide home page
						//home_layout->Hide();


						switch_page(page2_container);
						pages.push("page2_container");
						kryptonButton52->Enabled = true;
						panel1->Show();

						flowLayoutPanel1->AutoScroll = true;
						Book_btn->Enabled = false;
						label23->Text = "0 L.E";
						for each (Control ^ c in panel10->Controls)
						{
							if (c->Name->Contains("trip_panel")) {
								c->BackColor = Color::White;
								c->Name = "trip_panel";
							}
						}

						kryptonButton16->Text = comboBox1->Text;
						kryptonButton15->Text = comboBox2->Text;
						label15->Text = textBox1->Text + " Tickets";
						reserved_tickets = textBox1->Text;
						label13->Text = "";

						label23->Text = "0 L.E";


						// code of dispalying trips

						string boarding;
						MarshalString(comboBox1->Text, boarding);
						string dest;
						MarshalString(comboBox2->Text, dest);
						string tick;
						MarshalString(textBox1->Text, tick);
						int tickets = stoi(tick);

						panel10->Controls->Clear();

						vector<Trip>avl = Trip::getAvailableTrips(tickets, boarding, dest);

						label22->Text = gcnew String(to_string(avl.size()).c_str()) + " Available trips";

						if (avl.empty()) {
							Label^ l = gcnew Label();
							PictureBox^ notfound = gcnew PictureBox();

							l->AutoSize = true;
							l->Location = System::Drawing::Point(140, 20);
							//l->Size = System::Drawing::Size(50, 15);

							l->Text = "Sorry, no trips found!";
							l->Name = "NoTrips";
							//l->BackColor = System::Drawing::Color::Red;
							l->ForeColor = Color::Gray;
							l->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
								static_cast<System::Byte>(0)));
							l->Padding = System::Windows::Forms::Padding(10);
							l->Cursor = System::Windows::Forms::Cursors::Hand;
							//this->Controls->Add(l);
							//notFound_picBox->Show();
							//panel10->Controls->Add(notFound_img);
							panel10->Controls->Add(l);                  
						}
						else {
							for (int i = 0; i < avl.size(); i++) {
								// trip creation			
								Panel^ trip = gcnew Panel();
								trip->Size = System::Drawing::Size(514, 100);
								trip->Name = "trip_panel";
								trip->BackColor = Color::White;
								trip->Cursor = System::Windows::Forms::Cursors::Hand;
								// set the location of trip
								trip->Location = System::Drawing::Point(2, 2 + i * 99);

								trip->Click += gcnew System::EventHandler(this, &MyForm::trip_click);
						
								panel10->Controls->Add(trip);

								// daparture time creation
								Label^ dep_time = gcnew Label();
								dep_time->Name = "dep_time";
								dep_time->BackColor = Color::Transparent;
								dep_time->ForeColor = System::Drawing::Color::Black;
								dep_time->AutoSize = true;
								dep_time->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
									static_cast<System::Byte>(0)));
								dep_time->Location = System::Drawing::Point(30, 22);
								dep_time->Size = System::Drawing::Size(74, 31);
								dep_time->TabIndex = 0;
								// set dep_time value
								String^ dep_t = gcnew String(avl[i].departure_time.c_str());
								dep_time->Text = dep_t;
								dep_time->Click += gcnew System::EventHandler(this, &MyForm::trip_click);
								trip->Controls->Add(dep_time);


								// arrow bet. departure time and arrive time
								Label^ arrow = gcnew Label();
								arrow->Name = "arrow";
								arrow->BackColor = Color::Transparent;
								arrow->ForeColor = System::Drawing::Color::DimGray;
								arrow->AutoSize = true;
								arrow->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 16.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
									static_cast<System::Byte>(0)));
								arrow->Location = System::Drawing::Point(90, 18);
								arrow->Size = System::Drawing::Size(41, 37);
								arrow->Text = L"⇒";
								arrow->Click += gcnew System::EventHandler(this, &MyForm::trip_click);
								trip->Controls->Add(arrow);

								// arrive time creation
								Label^ arv_time = gcnew Label();
								arv_time->Name = "arv_time";
								arv_time->BackColor = Color::Transparent;
								arv_time->ForeColor = System::Drawing::Color::Black;
								arv_time->AutoSize = true;
								arv_time->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
									static_cast<System::Byte>(0)));
								arv_time->Location = System::Drawing::Point(120, 22);
								arv_time->Size = System::Drawing::Size(74, 31);
								arv_time->TabIndex = 0;
								arv_time->Click += gcnew System::EventHandler(this, &MyForm::trip_click);
								// set dep_time value
								String^ arv_t = gcnew String(avl[i].arrive_time.c_str());
								arv_time->Text = arv_t;
								trip->Controls->Add(arv_time);

								// date creation
								Label^ date = gcnew Label();
								date->Name = "date";
								date->BackColor = Color::Transparent;
								date->ForeColor = System::Drawing::Color::Black;
								date->AutoSize = true;
								date->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
									static_cast<System::Byte>(0)));
								date->Location = System::Drawing::Point(64, 53);
								date->Size = System::Drawing::Size(94, 23);
								date->TabIndex = 0;
								date->Click += gcnew System::EventHandler(this, &MyForm::trip_click);
								// set dep_time value
								String^ date_t = gcnew String(avl[i].date_of_travel.c_str());
								date->Text = date_t;
								trip->Controls->Add(date);


								// Available seats creation
								Label^ avl_seats = gcnew Label();
								avl_seats->Name = "avl_seats";
								avl_seats->BackColor = Color::Transparent;
								avl_seats->ForeColor = System::Drawing::Color::DodgerBlue;
								avl_seats->AutoSize = true;
								avl_seats->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
									static_cast<System::Byte>(0)));
								avl_seats->Location = System::Drawing::Point(210, 42);
								avl_seats->Size = System::Drawing::Size(94, 23);
								avl_seats->TabIndex = 0;
								avl_seats->Click += gcnew System::EventHandler(this, &MyForm::trip_click);
								string seats = to_string(avl[i].available_seats) + " Available seats";
								String^ avl_seats_t = gcnew String(seats.c_str());
								avl_seats->Text = avl_seats_t;
								trip->Controls->Add(avl_seats);

								// horizontal line 
								KryptonBorderEdge^ hl = gcnew KryptonBorderEdge();
								hl->Size = System::Drawing::Size(300, 1);
								hl->Location = System::Drawing::Point(100, 98);
								trip->Controls->Add(hl);

								// trip fare
								Label^ fare = gcnew Label();
								fare->Anchor = System::Windows::Forms::AnchorStyles::Right;
								fare->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
									static_cast<System::Byte>(0)));
								fare->Location = System::Drawing::Point(320, 35);
								fare->MinimumSize = System::Drawing::Size(150, 31);
								fare->Name = L"trip_fare";
								fare->Size = System::Drawing::Size(150, 31);
								fare->TabIndex = 4;
								fare->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
								fare->Click += gcnew System::EventHandler(this, &MyForm::trip_click);
								string fare_string = to_string(avl[i].fare);
								int index = fare_string.find('.');
								string rounded_fare = fare_string.substr(0, index + 3) + " L.E";          
								String^ price_t = gcnew String(rounded_fare.c_str());
								fare->Text = price_t;
								trip->Controls->Add(fare);

							}
						}
					}
				}
				else {
					Invalid_input("Please, Enter valid inputs!");
				}
			}
			else {
				Invalid_input("Please, Enter valid inputs!");
			}
		}
		private: System::Void trip_click(System::Object^ sender, System::EventArgs^ e) {
			Book_btn->Enabled = true;
			Panel^ trip;
			if (sender->GetType() != Panel::typeid) {
				Label^ trip_child = safe_cast<Label^>(sender);
				Control^ trip_control = trip_child->Parent;
				trip = safe_cast<Panel^>(trip_control);
			}
			else trip = safe_cast<Panel^>(sender);

			active_trip = trip;
			//string c;
			//MarshalString(active_trip->Controls["date"]->Text, c);
			//cout << c << endl;
			string trip_fare;
			MarshalString(trip->Controls["trip_fare"]->Text, trip_fare);
			float Trip_price = stof(trip_fare);
			string tickets;
			MarshalString(textBox1->Text, tickets);
			int tickets_no = stoi(tickets);
			float total_fare = tickets_no * Trip_price;
			string total_fare_s = to_string(total_fare);

			int index = total_fare_s.find('.');
			string rounded_total_fare = total_fare_s.substr(0, index + 3);
		
			if (trip->Name == "trip_panel_Active") {
				trip->BackColor = Color::White;
				trip->Name = "trip_panel";
				Book_btn->Enabled = false;
				label23->Text = "0 L.E";
			}
			else {
				for each (Control ^ c in panel10->Controls)
				{
					if (c->Name == "trip_panel_Active") {
						c->BackColor = Color::White;
						c->Name = "trip_panel";
					}
				}
				trip->BackColor = Color::AliceBlue;
				trip->Name += "_Active";
				label23->Text = gcnew String(rounded_total_fare.c_str()) + " L.E";
			}
		}
		private: System::Void kryptonButton18_Click(System::Object^ sender, System::EventArgs^ e) {
			
			panel8->Show();
			panel6->Show();
			panel6->BringToFront();
			flowLayoutPanel1->AutoScroll = false;
			Book_btn->Enabled = false;

			label26->Text = kryptonButton16->Text;
			label28->Text = kryptonButton15->Text;
			label30->Text = "Date: " + active_trip->Controls["date"]->Text;
			label33->Text = "Time: " + active_trip->Controls["dep_time"]->Text + L" ⇒ " + active_trip->Controls["arv_time"]->Text;
			label31->Text = "Reserved tickets: " + reserved_tickets;
			label32->Text = "Total fare: " + label23->Text;

			// DATABASE TASK : NOTE: check following sql code if correct or wrong, Modify it if needed.

			//int user_id, trip_id;
			//con->Open();
			//OracleCommand^ cmd = gcnew OracleCommand(
			//    "SELECT * FROM TRIP WHERE BOARDING_POINT='"+ label26->Text +"' AND DESTINATION_POINT='"+ label28->Text +"' AND TRIP_TIME='"+ active_trip->Controls["dep_time"]->Text +"' AND DATE_OF_TRAVEL='"+ active_trip->Controls["date"]->Text +"'", con);
			//cout << "after cmd" << endl;
			//OracleDataReader^ reader = cmd->ExecuteReader();
			//cout << "after reader" << endl;
			//if (reader->HasRows)
			//{
			//    while (reader->Read())
			//    {
			//        cout << "trip" << endl;
			//        trip_id = reader->GetInt32(0);
			//        cout << "trip id: " << reader->GetInt32(0) << endl;
			//    }
			//}
			//else
			//{
			//    cout << "No rows found." << endl;
			//}
			//reader->Close();
			//cmd = gcnew OracleCommand(
			//    "SELECT * FROM USERS WHERE PASSENGER_EMAIL='Awad@gmail.com'", con);
			//reader = cmd->ExecuteReader();
			//if (reader->HasRows)
			//{
			//    while (reader->Read())
			//    {
			//        cout << "user" << endl;
			//        user_id = reader->GetInt32(3);
			//        cout << "user id: " << reader->GetInt32(3) << endl;
			//    }
			//}
			//else
			//{
			//    cout << "No rows found." << endl;
			//}
			//reader->Close();
			//string tickets;
			//MarshalString(reserved_tickets, tickets);
			//int tickets_no = stoi(tickets);
			//OracleCommand^ ins_cmd = gcnew OracleCommand("INSERT INTO RESERVATION VALUES("+ tickets_no + " , "+trip_id+", "+user_id+")", con);
			//ins_cmd->ExecuteNonQuery();
			//con->Close();
		}
		private: System::Void kryptonButton21_Click(System::Object^ sender, System::EventArgs^ e) {
			panel8->Hide();
			panel6->Hide();
			flowLayoutPanel1->AutoScroll = true;
			Book_btn->Enabled = false;
			label23->Text = "0 L.E";
			for each (Control ^ c in panel10->Controls)
			{
				if (c->Name->Contains("trip_panel")) {
					c->BackColor = Color::White;
					c->Name = "trip_panel";
				}
			}
		}
		private: System::Void Reserve_new_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			switch_page(home_layout);
			pages.push("home_layout");

			flowLayoutPanel1->AutoScroll = true;
			Book_btn->Enabled = false;
			label23->Text = "0 L.E";
			for each (Control ^ c in panel10->Controls)
			{
				if (c->Name->Contains("trip_panel")) {
					c->BackColor = Color::White;
					c->Name = "trip_panel";
				}
			}

			panel8->Hide();
			panel6->Hide();
			panel1->Show();
		}
		// --- manage -> trips_btn ---
		private: System::Void kryptonButton20_Click(System::Object^ sender, System::EventArgs^ e) {
			edit_trip_wind->Hide();
			edit_train_wind->Hide();
			selected_trips = 0;
			Trains_management_panel->Hide();
			Trips_management_panel->BringToFront();
			Trips_management_panel->Show();
			KryptonButton^ btn = safe_cast<KryptonButton^>(sender);
			management_btn_active(btn);
			edit_trip_btn->Show();
			delete_trip_btn->Show();
			edit_trip_btn->BringToFront();
			delete_trip_btn->BringToFront();

			edit_train_btn->Hide();
			delete_train_btn->Hide();
			edit_train_btn->SendToBack();
			delete_train_btn->SendToBack();
			display_all_trips();
		}
		private: System::Void trip_click_admin(System::Object^ sender, System::EventArgs^ e) {

			if (sender->GetType() == Panel::typeid) {
				Panel^ trip_panel = safe_cast<Panel^>(sender);
				
				if (trip_panel->BackColor == Color::AliceBlue) {
					trip_panel->BackColor = Color::White;
					trip_panel->Name = L"trip_panel";
					selected_trips--;
					enable_edit(selected_trips);
				}
				else {
					trip_panel->BackColor = Color::AliceBlue;
					trip_panel->Name += L"_Active";
					selected_trips++;
					enable_edit(selected_trips);
				}
			}
			else {
				Label^ trip_panel_child = safe_cast<Label^>(sender);
				Control^ trip_panel = trip_panel_child->Parent;
				if (trip_panel->BackColor == Color::AliceBlue) {
					trip_panel->BackColor = Color::White;
					trip_panel->Name = L"trip_panel";
					selected_trips--;
					enable_edit(selected_trips);
				}
				else {
					trip_panel->BackColor = Color::AliceBlue;
					trip_panel->Name += L"_Active";
					selected_trips++;
					enable_edit(selected_trips);
				}
			}
		}
		private: System::Void delete_trip_click(System::Object^ sender, System::EventArgs^ e) {
			for each (Control ^ c in panel14->Controls) {
				if (c->Name->Contains("_Active")) {
					String^ boarding_sys = c->Controls["board"]->Text;
					String^ dest_sys = c->Controls["dest"]->Text;
					String^ dep_time_sys = c->Controls["dep_time"]->Text;
					String^ arrv_time_sys = c->Controls["arv_time"]->Text;
					String^ trip_date_sys = c->Controls["date"]->Text;

					// converting variables from System to std to be ready for database. 
					string boarding, destination, departure_time, arrive_time, trip_date;
					MarshalString(boarding_sys, boarding);
					MarshalString(dest_sys, destination);
					MarshalString(dep_time_sys, departure_time);
					MarshalString(arrv_time_sys, arrive_time);
					MarshalString(trip_date_sys, trip_date);


					long long current_time = Global::current_time();
					long long trip_time = Global::convert_date(trip_date) + Global::convert_time(departure_time);
					if (!(trip_time - current_time >= 1440)) {
						MessageBox::Show("You cannot delete reservation 24 hours or less before the start of the trip!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						return;
					}


					// DATABASE TASK
					// get TRIP_ID from trip table using boarding, destination, departure_time, arrive_time, trip_date.
					// delete all reservations that has this TRIP_ID
					// delete trip from TRIPS table
				}
			}
			display_all_trips();
			MessageBox::Show("All selected trips has been deleted successfully", "Deleted successfully!", MessageBoxButtons::OK);
		}
		private: System::Void Manage_trains_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			edit_trip_wind->Hide();
			edit_train_wind->Hide();
			Trips_management_panel->Hide();
			Trains_management_panel->BringToFront();
			Trains_management_panel->Show();
			KryptonButton^ btn = safe_cast<KryptonButton^>(sender);
			management_btn_active(btn);
			edit_trip_btn->Hide();
			delete_trip_btn->Hide();
			edit_trip_btn->SendToBack();
			delete_trip_btn->SendToBack();

			edit_train_btn->Show();
			delete_train_btn->Show();
			edit_train_btn->BringToFront();
			delete_train_btn->BringToFront();

			display_all_trains();
		}



	// login comp
		private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
		{         
			panel_logo->Visible = false;
			switch_page(panel_con_Login);
			timer_logo->Stop();
			
			//MyForm::Close();
		}
		private: System::Void kryptonButton_register_Click(System::Object^ sender, System::EventArgs^ e) {
			//panel_con_Login->Hide();
			panel_con_register->BringToFront();
			panel_con_register->Show();
		}
		private: System::Void kryptonButton2_Click(System::Object^ sender, System::EventArgs^ e) {
			//panel_con_register->Hide();
			panel_con_Login->BringToFront();
			panel_con_Login->Show();
		}
		private: System::Void kryptonButton22_reg_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			// validate username
			String^ username = textBox2_username->Text;
			// Check if username is empty
			if (username == "") {
				MessageBox::Show("Please enter a username.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Check if username contains any whitespace characters
			if (username->Contains(" ")) {
				MessageBox::Show("Username cannot contain any whitespace characters.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Check if username is too short
			if (username->Length < 4) {
				MessageBox::Show("Username must be at least 4 characters long.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Check if username is too long
			if (username->Length > 20) {
				MessageBox::Show("Username cannot be more than 20 characters long.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Check if username contains any invalid characters
			System::Text::RegularExpressions::Regex^ regex = gcnew System::Text::RegularExpressions::Regex("[^a-zA-Z0-9_]");
			if (regex->IsMatch(username)) {
				MessageBox::Show("Username contains invalid characters. Only letters, numbers, and underscores are allowed.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// validate email
			String^ email = textBox3_email->Text;
			// Check if email is empty
			if (email == "") {
				MessageBox::Show("Please enter an email address.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Check if email contains an "@" symbol
			if (!email->Contains("@")) {
				MessageBox::Show("Email address must contain an \"@\" symbol.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			int atIndex = email->IndexOf("@");
			// Check if domain is "gmail.com"
			System::String^ domain = email->Substring(atIndex + 1);
			if (domain != "gmail.com") {
				MessageBox::Show("Email must be a gmail.com address.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}


			//validate password
			String^ password = textBox1_password->Text;
			// Check if password is empty
			if (password == "") {
				MessageBox::Show("Please enter a password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Check if password is too short
			if (password->Length < 8) {
				MessageBox::Show("Password must be at least 8 characters long.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Check if password is too long
			if (password->Length > 20) {
				MessageBox::Show("Password cannot be more than 20 characters long.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Check if password contains at least one uppercase letter, one lowercase letter, and one digit
			bool hasUppercase = false;
			bool hasLowercase = false;
			bool hasDigit = false;
			for each (wchar_t c in password) {
				if (Char::IsUpper(c)) {
					hasUppercase = true;
				}
				else if (Char::IsLower(c)) {
					hasLowercase = true;
				}
				else if (Char::IsDigit(c)) {
					hasDigit = true;
				}
			}
			if (!hasUppercase || !hasLowercase || !hasDigit) {
				MessageBox::Show("Password must contain at least one uppercase letter, one lowercase letter, and one digit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}


			// converting variables from System to std to be ready for database. 
			string User_name, User_email, User_password;
			MarshalString(username, User_name);
			MarshalString(email, User_email);
			MarshalString(password, User_password);

			// DATABASE TASK
			// use User_name, User_email, User_password variables above to register of user in DB
			// 1- Check if (User_email) is already in database or not
			//    if Exist DO: 
			//              MessageBox::Show("This email is already token!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			//              return;
			//    else Insert his data into database and DO: MessageBox::Show("You have successfully registered");

		}
		// login
		private: System::Void kryptonButton38_Click(System::Object^ sender, System::EventArgs^ e) {

			switch_page(home_layout);
			pages.push("home_layout");
			stack<string>copy = pages;
			cout << "-----------------" << endl;
			while (!copy.empty()) {
				cout << copy.top() << endl;
				copy.pop();
			}
			panel1->Show();

			// taking data from user
			String^ email = textBox_email->Text;
			String^ password = textBox_password->Text;

			// converting variables from System to std to be ready for database. 
			string  User_email, User_password;
			MarshalString(email, User_email);
			MarshalString(password, User_password);

			// DATABASE TASK
			// use User_email, User_password variables above.
			// 1- Check if (User_email) is already registered in database or not
			//    if YES:
			//         - check if his password is correct or not
			//         if (Correct) 
			//              DO: - session_email = User_email;
			//                  - get username of catched row and assign it to session_username variable
			// 
			//              - if (admin column in users table) equals 0
			//                   switch_page(home_layout);
			//                   pages.push("home_layout");
			//                   kryptonButton52->Enabled = false;
			//                   panel1->Show();
			//                   label_Emaill->Text = email;
			//                   
			//                else
			//                   switch_page(admin_page);
			//                   pages.push("admin_page");
			//                   kryptonButton52->Enabled = true;
			//                   panel9->Show();
			//                   panel9->BringToFront();
			//                   panel1->Show();
			//                   label_Emaill->Text = email;
			//                
			//         if (Wrong) DO: 
			//                  MessageBox::Show("Wrong password!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			//                  return;
			//    if NO (else):
			//         DO: 
			//          MessageBox::Show("You should register first!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			//          return;
			// 
			header_acc->Text = gcnew String(session_username.c_str());
			label_name->Text = gcnew String(session_username.c_str());
			label_email->Text = gcnew String(session_email.c_str());
		}

	// my profile
		// variable
		Control^ temp, ^ Active_Reservation_panel;
		Timer^ timer1 = gcnew Timer();

		void Display_my_reservations() {
			for (unsigned int i = 0; i < Reservation::reservations.size(); i++)
			{
				Panel^ reservation = gcnew Panel();
				reservation->Size = System::Drawing::Size(594, 221);
				reservation->BackColor = Color::White;
				reservation->Location = System::Drawing::Point(2, 120 + i * 250);
				reservation->Name = L"reservation_panel";
				//reservation->Click += gcnew System::EventHandler(this, &MyForm::textBox_Click);
				panel1_res->Controls->Add(reservation);
				///*****************************************************************

				// labels dest and boarding
				Label^ l = gcnew Label();

				l->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				l->ForeColor = System::Drawing::Color::Black;
				l->BackColor = System::Drawing::Color::White;
				l->BringToFront();
				l->Location = System::Drawing::Point(180, 15);
				l->Name = L"label111";
				l->Size = System::Drawing::Size(235, 37);
				l->TabIndex = 13;
				//l->Text = L"Cairo   ⇒  Alex";
				l->Text = gcnew String(Reservation::reservations[i].BoardingPoint.c_str()) + L"  ⇒  " + gcnew String(Reservation::reservations[i].DestinationPoint.c_str());
				l->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				reservation->Controls->Add(l);

				// label date
				Label^ date = gcnew Label();
				date->BackColor = System::Drawing::Color::Transparent;
				date->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold));
				date->ForeColor = System::Drawing::SystemColors::Desktop;
				date->Location = System::Drawing::Point(36, 59);
				date->Name = L"label9";
				date->Size = System::Drawing::Size(423, 26);
				date->TabIndex = 17;
				date->Text = "Date : " + gcnew String(Reservation::reservations[i].Date_of_Travel.c_str());
				reservation->Controls->Add(date);
				// label time
				Label^ time = gcnew Label();
				time->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold));
				time->Location = System::Drawing::Point(36, 85);
				time->Size = System::Drawing::Size(423, 26);
				time->TabIndex = 18;
				time->Name = L"Reservation_trip_time";
				time->Text = "Time : " + gcnew String(Reservation::reservations[i].departure_time.c_str()) + L"  ⇒  " + gcnew String(Reservation::reservations[i].arrive_time.c_str());
				reservation->Controls->Add(time);
				// label train no
				Label^ train = gcnew Label();
				train->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold));
				train->Location = System::Drawing::Point(36, 111);
				train->Size = System::Drawing::Size(423, 26);
				train->TabIndex = 19;
				train->Name = L"Reservation_train_no";
				string train_no = to_string(Reservation::reservations[i].train_no);
				train->Text = "Train Number : " + gcnew String(train_no.c_str());
				reservation->Controls->Add(train);
				// label reserved tickets
				Label^ reserved = gcnew Label();
				reserved->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold));
				reserved->Location = System::Drawing::Point(36, 138);
				reserved->Size = System::Drawing::Size(134, 19);
				reserved->TabIndex = 20;
				reserved->Text = "Reserved Tickets :";
				reservation->Controls->Add(reserved);

				// label no of tickets
				Label^ number = gcnew Label();
				number->Name = "Reservation_tickets_number";
				number->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.25F, System::Drawing::FontStyle::Bold));
				number->Location = System::Drawing::Point(165, 139);
				number->Size = System::Drawing::Size(125, 25);
				number->TabIndex = 22;
				string tickets = to_string(Reservation::reservations[i].ReservedTickets);
				number->Text = gcnew String(tickets.c_str());
				reservation->Controls->Add(number);
				// label total fare
				Label^ fare = gcnew Label();
				fare->Font = (gcnew System::Drawing::Font(L"Segoe UI bold", 11.25F, System::Drawing::FontStyle::Bold));
				fare->ForeColor = System::Drawing::Color::MediumBlue;
				fare->Location = System::Drawing::Point(36, 165);
				fare->Size = System::Drawing::Size(253, 19);
				fare->TabIndex = 21;
				string n_fare = to_string(Reservation::reservations[i].TotalFare);
				fare->Text = "Total Fare : " + gcnew String(n_fare.c_str()) + " L.E";
				reservation->Controls->Add(fare);
				//button Edit
				KryptonButton^ Button1_edit = gcnew KryptonButton();
				Button1_edit->Cursor = System::Windows::Forms::Cursors::Hand;
				Button1_edit->Location = System::Drawing::Point(407, 145);
				Button1_edit->Name = L"Button1_edit";
				Button1_edit->OverrideDefault->Back->Color1 = System::Drawing::Color::White;
				Button1_edit->OverrideDefault->Back->Color2 = System::Drawing::Color::White;
				Button1_edit->OverrideDefault->Border->Color1 = System::Drawing::Color::DodgerBlue;
				Button1_edit->OverrideDefault->Border->Color2 = System::Drawing::Color::DodgerBlue;
				Button1_edit->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
				Button1_edit->OverrideDefault->Content->ShortText->Color1 = System::Drawing::Color::DodgerBlue;
				Button1_edit->OverrideDefault->Content->ShortText->Color2 = System::Drawing::Color::DodgerBlue;
				Button1_edit->OverrideFocus->Back->Color1 = System::Drawing::Color::RoyalBlue;
				Button1_edit->OverrideFocus->Back->Color2 = System::Drawing::Color::RoyalBlue;
				Button1_edit->OverrideFocus->Border->Color1 = System::Drawing::Color::Blue;
				Button1_edit->OverrideFocus->Border->Color2 = System::Drawing::Color::Blue;
				Button1_edit->OverrideFocus->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
				Button1_edit->OverrideFocus->Border->Rounding = 15;
				Button1_edit->OverrideFocus->Content->ShortText->Color1 = System::Drawing::Color::White;
				Button1_edit->OverrideFocus->Content->ShortText->Color2 = System::Drawing::Color::White;
				Button1_edit->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
				Button1_edit->Size = System::Drawing::Size(157, 48);
				Button1_edit->StateDisabled->Back->Color1 = System::Drawing::Color::White;
				Button1_edit->StateDisabled->Back->Color2 = System::Drawing::Color::White;
				Button1_edit->StateDisabled->Border->Color1 = System::Drawing::Color::Blue;
				Button1_edit->StateDisabled->Border->Color2 = System::Drawing::Color::Blue;
				Button1_edit->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
				Button1_edit->StateDisabled->Border->Rounding = 15;
				Button1_edit->StateNormal->Back->Color1 = System::Drawing::Color::White;
				Button1_edit->StateNormal->Back->Color2 = System::Drawing::Color::White;
				Button1_edit->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
				Button1_edit->StateNormal->Border->Color2 = System::Drawing::Color::DodgerBlue;
				Button1_edit->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
				Button1_edit->StateNormal->Border->Rounding = 15;
				Button1_edit->StateNormal->Content->ShortText->Color1 = System::Drawing::Color::DodgerBlue;
				Button1_edit->StateNormal->Content->ShortText->Color2 = System::Drawing::Color::DodgerBlue;
				Button1_edit->StateNormal->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Bold,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				Button1_edit->StatePressed->Back->Color1 = System::Drawing::Color::DarkBlue;
				Button1_edit->StatePressed->Back->Color2 = System::Drawing::Color::DarkBlue;
				Button1_edit->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
				Button1_edit->StatePressed->Border->Rounding = 15;
				Button1_edit->StatePressed->Content->ShortText->Color1 = System::Drawing::Color::White;
				Button1_edit->StatePressed->Content->ShortText->Color2 = System::Drawing::Color::White;
				Button1_edit->StatePressed->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Bold));
				Button1_edit->StateTracking->Back->Color1 = System::Drawing::Color::RoyalBlue;
				Button1_edit->StateTracking->Back->Color2 = System::Drawing::Color::RoyalBlue;
				Button1_edit->StateTracking->Border->Color1 = System::Drawing::Color::White;
				Button1_edit->StateTracking->Border->Color2 = System::Drawing::Color::White;
				Button1_edit->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
				Button1_edit->StateTracking->Border->Rounding = 15;
				Button1_edit->StateTracking->Content->ShortText->Color1 = System::Drawing::Color::White;
				Button1_edit->StateTracking->Content->ShortText->Color2 = System::Drawing::Color::White;
				Button1_edit->StateTracking->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold));
				Button1_edit->TabIndex = 20;
				Button1_edit->Values->Text = L"Edit";
				Button1_edit->Click += gcnew System::EventHandler(this, &MyForm::Button1_edit_Click);
				reservation->Controls->Add(Button1_edit);
				// checkbox 
				CheckBox^ check = gcnew CheckBox();
				check->AutoEllipsis = true;
				check->Cursor = System::Windows::Forms::Cursors::Hand;
				check->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				check->Location = System::Drawing::Point(515, 12);
				check->Name = L"checkBox1_check";
				check->Size = System::Drawing::Size(64, 23);
				check->TabIndex = 16;
				check->Text = L"Select";
				check->UseVisualStyleBackColor = true;
				check->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_check_CheckedChanged);
				reservation->Controls->Add(check);
				// edge 1
				KryptonBorderEdge^ edge = gcnew KryptonBorderEdge();
				edge->Location = System::Drawing::Point(201, 55);
				edge->Name = L"kryptonBorderEdge1_";
				edge->Size = System::Drawing::Size(200, 1);
				edge->Text = L"kryptonBorderEdge1_";
				reservation->Controls->Add(edge);
				// edge 2
				KryptonBorderEdge^ edge2 = gcnew KryptonBorderEdge();
				edge2->Location = System::Drawing::Point(127, 216);
				edge2->Name = L"kryptonBorderEdge2_";
				edge2->Size = System::Drawing::Size(350, 1);
				edge2->Text = L"kryptonBorderEdge2_";
				reservation->Controls->Add(edge2);
				// button container
				KryptonButton^ btn = gcnew KryptonButton();
				btn->Enabled = false;
				btn->Location = System::Drawing::Point(4, 2);
				btn->Name = "button_container";
				btn->Size = System::Drawing::Size(585, 216);
				btn->StateDisabled->Back->Color1 = System::Drawing::Color::White;
				btn->StateDisabled->Back->Color2 = System::Drawing::Color::White;
				btn->StateDisabled->Border->Color1 = System::Drawing::Color::DodgerBlue;
				btn->StateDisabled->Border->Color2 = System::Drawing::Color::DodgerBlue;
				btn->StateDisabled->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
				btn->StateDisabled->Border->Rounding = 15;
				btn->StateNormal->Back->Color1 = System::Drawing::Color::White;
				btn->StateNormal->Back->Color2 = System::Drawing::Color::White;
				btn->StateNormal->Border->Color1 = System::Drawing::Color::DodgerBlue;
				btn->StateNormal->Border->Color2 = System::Drawing::Color::DodgerBlue;
				btn->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
					| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
				btn->StateNormal->Border->Rounding = 15;
				btn->TabIndex = 2;
				btn->Values->Text = L"";
				btn->SendToBack();
				reservation->Controls->Add(btn);

			}
		}
		// events
		private: System::Void Link_click(System::Object^ sender, System::EventArgs^ e)
			{
				Label^ p = safe_cast<Label^>(sender);
				for each (Control ^ c in panel_chooses->Controls)
				{
					string name;
					MarshalString(c->Name, name);
					if (name.find("Link") != string::npos) {
						c->ForeColor = System::Drawing::Color::FromArgb(225, 64, 64, 64);
					}
				}
				p->ForeColor = Color::DodgerBlue;
				if (p->Text == Link->Text)
				{
					panel3_Edit_->Hide();
					label_after_save->Hide();
					panel1_res->Hide();
					panel_delete->Hide();
					label2_down_save_button->Hide();
					panel_edit_res->Hide();
					panel_win1_->Show();
				}
				else if (p->Text == Link1->Text)
				{
					panel_win1_->Hide();
					panel1_res->Hide();
					panel_delete->Hide();
					label2_down_save_button->Hide();
					panel_edit_res->Hide();
					panel3_Edit_->Show();
					panel3_Edit_->Location = System::Drawing::Point(650, 215);
				}
				else if (p->Text == Link2->Text)
				{
					panel_win1_->Hide();
					panel3_Edit_->Hide();
					label2_down_save_button->Hide();
					panel_edit_res->Hide();
					panel_con->Hide();
					panel_delete->Show();
					panel1_res->Show();
					panel1_res->Location = System::Drawing::Point(650, 215);
				}
				Display_my_reservations();
			}
		private: System::Void Log_out_Click(System::Object^ sender, System::EventArgs^ e) {
			MyForm::Close();
		}
		private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
			//Link->ForeColor = Color::DodgerBlue;
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		   /* panel_end->BringToFront();
			panel_end->Show();*/
			switch_page(panel_end);
			stack<string>copy = pages;
			cout << "-----------------" << endl;
			while (!copy.empty()) {
				cout << copy.top() << endl;
				copy.pop();
			}
			timer1->Interval = 2000;//two seconds
			timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			timer1->Start();
			
		}
		private: System::Void kryptonButton_sign_in_Click(System::Object^ sender, System::EventArgs^ e) {

			/*string name;
			MarshalString(textBox_username_->Text, name);
			string password;
			MarshalString(textBox_password_->Text, password);*/
			label_after_save->Show();
		}

		int active_reservation = 0;
		private: System::Void checkBox1_check_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			CheckBox^ Check = safe_cast<CheckBox^>(sender);
			Control^ check_parent = Check->Parent;
			//btn_parent->Controls["label5_no_of_tickets"]->Text;
			Control^ active = check_parent->Controls["button_container"];
			KryptonButton^ Checked_res = safe_cast<KryptonButton^>(active);
			if (Check->Checked == true)
			{
				Checked_res->StateDisabled->Back->Color1 = System::Drawing::Color::AliceBlue;
				Checked_res->StateDisabled->Back->Color2 = System::Drawing::Color::AliceBlue;
				check_parent->Name += "_Active";
				for each (Control ^ c in check_parent->Controls)
				{
					if (c->GetType() == Label::typeid || c->GetType() == CheckBox::typeid) {
						c->BackColor = Color::AliceBlue;
					}
				}
				active_reservation++;
			}
			else
			{
				Checked_res->StateDisabled->Back->Color1 = System::Drawing::Color::White;
				Checked_res->StateDisabled->Back->Color2 = System::Drawing::Color::White;
				check_parent->Name = L"reservation_panel";
				for each (Control ^ c in check_parent->Controls)
				{
					if (c->GetType() == Label::typeid || c->GetType() == CheckBox::typeid) {
						c->BackColor = Color::White;
					}
				}
				active_reservation--;
			}
			disable_delete_reservation(active_reservation);
		}
		private: System::Void kryptonButton_edit_Click(System::Object^ sender, System::EventArgs^ e) {
			label2_down_save_button->Show();
		}
		private: System::Void edit_Click(System::Object^ sender, System::EventArgs^ e) {
			panel_edit_res->Location = System::Drawing::Point(550, 150);
			panel_edit_res->BringToFront();
			panel_edit_res->Show();
		}
		private: System::Void Button1_edit_Click(System::Object^ sender, System::EventArgs^ e) {
			KryptonButton^ btn = safe_cast<KryptonButton^>(sender);
			Control^ btn_parent = btn->Parent;
			Active_Reservation_panel = btn_parent;
			temp = btn_parent->Controls["reservation_tickets_number"];
			textBox1_number->Text = "Number of new tickets";
			panel_edit_res->Location = System::Drawing::Point(750, 200);
			flowLayoutPanel_container_->AutoScroll = false;
			panel_edit_res->BringToFront();
			panel_edit_res->Show();
		}
		private: System::Void kryptonButton45_Click(System::Object^ sender, System::EventArgs^ e) {
			Reservation::reservations.clear();
			// validate input from user is digit and greater than 0

			System::String^ input = textBox1_number->Text;

			// Check if input is empty
			if (input == "") {
				MessageBox::Show("Please enter a number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Check if input is a digit
			int number;
			if (!Int32::TryParse(input, number)) {
				MessageBox::Show("Input must be a number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Check if input is greater than 0
			if (number <= 0) {
				MessageBox::Show("Input must be greater than 0.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			temp->Text = textBox1_number->Text;
			string numberofTickets;
			MarshalString(textBox1_number->Text, numberofTickets);
			int numberoftickets = stoi(numberofTickets);


			// converting variables from System to std to be ready for database. 
			String^ date = Active_Reservation_panel->Controls["label9"]->Text;
			string trip_date;
			MarshalString(date, trip_date); 
			trip_date = trip_date.substr(7, 10);

			String ^ boardingAndDest = Active_Reservation_panel->Controls["label111"]->Text; 
			string boarding_dest;
			string boarding, destination;
			MarshalString(boardingAndDest, boarding_dest);
			for (int i = 0; i < boarding_dest.size(); i++) {
				if (boarding_dest[i] == ' ') {
					boarding = boarding_dest.substr(0, i);
					break;
				}
			}
			reverse(boarding_dest.begin(), boarding_dest.end());
			for (int i = 0; i < boarding_dest.size(); i++) {
				if (boarding_dest[i] == ' ') {
					destination = boarding_dest.substr(0, i);
					reverse(destination.begin(), destination.end());
					break;
				}
			}

			String ^ dep_arrv_time = Active_Reservation_panel->Controls["Reservation_trip_time"]->Text;
			string dep_arrv_time_std;
			MarshalString(dep_arrv_time, dep_arrv_time_std);
			dep_arrv_time_std = dep_arrv_time_std.substr(7, dep_arrv_time_std.length() - 7);
			string departure_time, arrive_time;
			for (int i = 0; i < dep_arrv_time_std.size(); i++) {
				if (dep_arrv_time_std[i] == ' ') {
					departure_time = dep_arrv_time_std.substr(0, i);
					break;
				}
			}
			reverse(dep_arrv_time_std.begin(), dep_arrv_time_std.end());
			for (int i = 0; i < dep_arrv_time_std.size(); i++) {
				if (dep_arrv_time_std[i] == ' ') {
					arrive_time = dep_arrv_time_std.substr(0, i);
					reverse(arrive_time.begin(), arrive_time.end());
					break;
				}
			}

			String^ train_no = Active_Reservation_panel->Controls["Reservation_train_no"]->Text;
			string train_no_std;
			MarshalString(train_no, train_no_std);
			string train_number;
			reverse(train_no_std.begin(), train_no_std.end());
			for (int i = 0; i < train_no_std.size(); i++) {
				if (train_no_std[i] == ' ') {
					train_number = train_no_std.substr(0, i);
					reverse(train_number.begin(), train_number.end());
					break;
				}
			}

			String^ tickets =  Active_Reservation_panel->Controls["Reservation_tickets_number"]->Text;
			string tickets_std;
			MarshalString(tickets, tickets_std);
			int reserved_tickets = stoi(tickets_std);

			long long current_time = Global::current_time();
			long long trip_time = Global::convert_date(trip_date) + Global::convert_time(departure_time);
			if (!(trip_time - current_time >= 1440)) {
				MessageBox::Show("You cannot modify the reservation 24 hours or less before the start of the trip!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			String^ new_tickets_no = textBox1_number->Text;
			string new_tickets_no_std;
			MarshalString(new_tickets_no, new_tickets_no_std);
			int new_number_of_tickets = stoi(new_tickets_no_std);


			string user_email;
			MarshalString(label_Emaill->Text, user_email);

			cout << boarding << endl << destination << endl << departure_time << endl << arrive_time << 
				endl << trip_date << endl << train_number << endl << new_number_of_tickets << endl << user_email << endl;

			// DATABASE TASK
			// 1- use boarding, destination,  departure_time, arrive_time, trip_date variables and search for this trip in trips table
			// 2- after catching its row, get AVAILABLE_SEATS value and add to it reserved_tickets , and save TRIP_ID in variable for future use in (*) line.
			// 3- check if new_number_of_tickets less than or equal (result of previous addition in step 2)
			//    if YES -> subtract new_number_of_tickets from (result of previous addition in step 2) and set AVAILABLE_SEATS of catched row equal (result of subtraction)
			//              use user_email variable and search in USERS table by it, Save the PASSENGER_ID of catched row value in variable to use in (*) line.
			//              (*) take variables (TRIP_ID ; PASSENGER_ID) and search in RESERAVTION table by them and set RESERVED_TICKETS = new_number_of_tickets.
			//              DO: label2_down_save_button->Show();
			//              
			//              // displaying reservations
			//              - catch rows of this user in RESERVATIONS table by its PASSENGER_ID
			//                 in each row: 
			//                      - get RESERVED_TICKETS in variable
			//                      - take the TRIP_ID and catch its row in TRIPS table, get from it (BOARDING_POINT, DESTINATION_POINT, DEP_TIME, ARRV_TIME, DATE_OF_TRAVEL, FARE_PER_TICKET, TRAIN_NUMBER) in variables.
			// 
			//                      Make an object of RESERVATION class and pass all variables to it; 
			//                      NOTE: in total_fare parameter pass (RESERVED_TICKETS * FARE_PER_TICKET).
			//                      
			//                      DO: Reservation::reservations.push(YOUR OBJECT);
			//              
			//              (After loop) DO: Display_my_reservations();
			// 
			//    if NO -> DO: MessageBox::Show("There is no enough available seats!, reduce number of new tickets.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);


			
			
		}
		private: System::Void kryptonButton40_Click(System::Object^ sender, System::EventArgs^ e) {
			flowLayoutPanel_container_->AutoScroll = true;
			panel_edit_res->Hide();
			label2_down_save_button->Hide();
		}


	// end page
		private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e)
		{
			switch_page(panel_con_Login);
			timer1->Stop();
		}
		private: System::Void header_acc_Click(System::Object^ sender, System::EventArgs^ e) {
			switch_page(flowLayoutPanel_container_);
			pages.push("flowLayoutPanel_container_");
			stack<string>copy = pages;
			cout << "-----------------" << endl;
			while (!copy.empty()) {
				cout << copy.top() << endl;
				copy.pop();
			}
			kryptonButton52->Enabled = true;
			panel1->Show();
		}
		private: System::Void kryptonButton38_Click_1(System::Object^ sender, System::EventArgs^ e) {
			// validate username
			String^ username = textBox_username_->Text;
			// Check if username is empty
			if (username == "") {
				MessageBox::Show("Please enter a username.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Check if username contains any whitespace characters
			if (username->Contains(" ")) {
				MessageBox::Show("Username cannot contain any whitespace characters.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Check if username is too short
			if (username->Length < 4) {
				MessageBox::Show("Username must be at least 4 characters long.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Check if username is too long
			if (username->Length > 20) {
				MessageBox::Show("Username cannot be more than 20 characters long.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Check if username contains any invalid characters
			System::Text::RegularExpressions::Regex^ regex = gcnew System::Text::RegularExpressions::Regex("[^a-zA-Z0-9_]");
			if (regex->IsMatch(username)) {
				MessageBox::Show("Username contains invalid characters. Only letters, numbers, and underscores are allowed.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}


			//validate password
			String^ password = textBox_password_->Text;
			// Check if password is empty
			if (password == "") {
				MessageBox::Show("Please enter a password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Check if password is too short
			if (password->Length < 8) {
				MessageBox::Show("Password must be at least 8 characters long.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Check if password is too long
			if (password->Length > 20) {
				MessageBox::Show("Password cannot be more than 20 characters long.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Check if password contains at least one uppercase letter, one lowercase letter, and one digit
			bool hasUppercase = false;
			bool hasLowercase = false;
			bool hasDigit = false;
			for each (wchar_t c in password) {
				if (Char::IsUpper(c)) {
					hasUppercase = true;
				}
				else if (Char::IsLower(c)) {
					hasLowercase = true;
				}
				else if (Char::IsDigit(c)) {
					hasDigit = true;
				}
			}
			if (!hasUppercase || !hasLowercase || !hasDigit) {
				MessageBox::Show("Password must contain at least one uppercase letter, one lowercase letter, and one digit.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}


			// converting variables from System to std to be ready for database. 
			string User_name, User_email, User_password;
			MarshalString(username, User_name);
			MarshalString(label_Emaill->Text, User_email);
			MarshalString(password, User_password);

			// DATABASE TASK
			// 1- search in user table in DB by (User_email), And set his name = User_name and his password = User_password.
			//    After editing his data DO: label_after_save->Show();
		}
		private: System::Void kryptonButton20_Click_1(System::Object^ sender, System::EventArgs^ e) {
			switch_page(admin_page);
			pages.push("admin_page");
			kryptonButton52->Enabled = true;
			panel9->Show();
			panel9->BringToFront();
			panel1->Show();
		}
		private: System::Void kryptonButton32_Click(System::Object^ sender, System::EventArgs^ e) {
			//validate from
			if (comboBox5->SelectedIndex == -1) {
				MessageBox::Show("Please select a valid option in \"From\" field!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				comboBox5->Focus();
				return;
			}

			//validate to
			if (comboBox4->SelectedIndex == -1) {
				MessageBox::Show("Please select a valid option in \"To\" field!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				comboBox4->Focus();
				return;
			}

			//validate if boarding equals destination
			if (comboBox5->Text == comboBox4->Text) {
				MessageBox::Show("Boarding point and Destination point shouldn't be the same!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			//validate trip date
			String^ date = textBox4->Text;
			DateTime validDate;

			if (DateTime::TryParseExact(date, "dd/MM/yyyy", System::Globalization::CultureInfo::InvariantCulture, Globalization::DateTimeStyles::None, validDate)) {
				if (validDate.Year >= 1900 && validDate.Year <= 2100) {
			
				}
				else {
					MessageBox::Show("Please enter a valid date between 1900 and 2100", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					textBox4->Focus();
					return;
				}
			}
			else {
				MessageBox::Show("Please enter a valid date in the format dd/MM/yyyy", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBox4->Focus();
				return;
			}

			// validate if date of trip is coming.
			string dateOfTrip;
			MarshalString(date, dateOfTrip);
			if (!(Global::convert_date(dateOfTrip) - Global::current_time() >= 1440)) {
				MessageBox::Show("The trip date must be a day or so away from now.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
	
			//validate departure time
			String^ dep_time = textBox2->Text;
			DateTime validTime;

			if (DateTime::TryParseExact(dep_time, "HH:mm", System::Globalization::CultureInfo::InvariantCulture, Globalization::DateTimeStyles::None, validTime)) {
				if (validTime.TimeOfDay >= TimeSpan(0, 0, 0) && validTime.TimeOfDay <= TimeSpan(23, 59, 59)) {
					// Time is valid, do something here
				}
				else {
					MessageBox::Show("Please enter a valid time between 00:00 and 23:59 in departure time field!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					textBox2->Focus();
					return;
				}
			}
			else {
				MessageBox::Show("Please enter a valid time in the format HH:mm in departure time field!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBox2->Focus();
				return;
			}


			//validate arrive time
			String^ arrv_time = textBox3->Text;

			if (DateTime::TryParseExact(arrv_time, "HH:mm", System::Globalization::CultureInfo::InvariantCulture, Globalization::DateTimeStyles::None, validTime)) {
				if (validTime.TimeOfDay >= TimeSpan(0, 0, 0) && validTime.TimeOfDay <= TimeSpan(23, 59, 59)) {
					// Time is valid, do something here
				}
				else {
					MessageBox::Show("Please enter a valid time between 00:00 and 23:59 in arrive time field!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					textBox1->Focus();
					return;
				}
			}
			else {
				MessageBox::Show("Please enter a valid time in the format HH:mm in arrive time field!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBox1->Focus();
				return;
			}
	
			// validate if arrive time is after departure time.
			string departure_time, arrive_time;
			MarshalString(dep_time, departure_time);
			MarshalString(arrv_time, arrive_time);
			if (!(Global::convert_time(arrive_time) - Global::convert_time(departure_time) >= 15)) {
				MessageBox::Show("Arrive time has to be after Departure time by 15 minutes or more.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			//validate fare
			String^ fare = textBox5->Text;

			// Check if fare is empty
			if (fare == "") {
				MessageBox::Show("Please enter a number in fare field.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Check if fare is a digit
			int number;
			if (!Int32::TryParse(fare, number)) {
				MessageBox::Show("Fare must be a number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Check if fare is greater than 0
			if (number <= 0) {
				MessageBox::Show("Fare must be greater than 0.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			//validate train no
			String^ train_no = textBox6->Text;
			string train_no_std;
			MarshalString(train_no, train_no_std);
			int train_number = stoi(train_no_std);
			// Check if train number is empty
			if (train_no == "") {
				MessageBox::Show("Please enter a number in train number field.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Check if train number is a digit
			if (!Int32::TryParse(train_no, number)) {
				MessageBox::Show("Train number must be a number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Check if train number is greater than 0
			if (number <= 0) {
				MessageBox::Show("Train number must be greater than 0.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}


			// converting variables from System to std to be ready for database. 
			String^ boarding_sys = comboBox5->Text;
			String^ dest_sys = comboBox4->Text;
			string boarding_point_std, destination_point_std;
			MarshalString(boarding_sys, boarding_point_std);
			MarshalString(dest_sys, destination_point_std);



			// DATABASE TASK
			// use boarding_point_std, destination_point_std, departure_time, arrive_time, dateOfTrip to check if this trip is already exist or not
			//     if YES: 
			//          DO:  
			//            MessageBox::Show("This trip is already exists!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			//     if NO:
			//          - check if train is exist in TRAIN table by train_number
			//          if YES: 
			//              insert trip data in TRIPS table
			//              NOTE: set AVAILABLE_SEATS equals capacity of train.
			//              DO: MessageBox::Show("Trip added successfully!", "Successfully added", MessageBoxButtons::OK);
			//          if NO:
			//              DO: MessageBox::Show("Train assigned for this trip not found, Enter existing train number!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			//              


			//if (this->controls["home_layout"]->gettype() == panel::typeid) {
			//    panel^ page = safe_cast<panel^>(this->controls["home_layout"]);
			//    switch_page(page);
			//}
			//else if (this->controls["home_layout"]->gettype() == flowlayoutpanel::typeid) {
			//    flowlayoutpanel^ page = safe_cast<flowlayoutpanel^>(this->controls["home_layout"]);
			//    switch_page(page);
			//}

		}
		// back 
		private: System::Void kryptonButton52_Click(System::Object^ sender, System::EventArgs^ e) {
			if (pages.size()>1) {
				pages.pop();
				string previous_page = pages.top();
				String^ prev = gcnew String(previous_page.c_str());
				if (this->Controls[prev]->GetType() == Panel::typeid) {
					Panel^ page = safe_cast<Panel^>(this->Controls[prev]);
					switch_page(page);
				}
				else if (this->Controls["home_layout"]->GetType() == FlowLayoutPanel::typeid) {
					FlowLayoutPanel^ page = safe_cast<FlowLayoutPanel^>(this->Controls[prev]);
					switch_page(page);
				}
				
				if (previous_page == "admin_page") panel9->Show();
				panel1->Show();
				if (pages.size() == 1) kryptonButton52->Enabled = false;
			}
		}
		private: System::Void kryptonButton46_Click(System::Object^ sender, System::EventArgs^ e) {
			switch_page(home_layout);
			pages.push("home_layout");
			panel1->Show();
		}
		private: System::Void kryptonButton33_Click(System::Object^ sender, System::EventArgs^ e) {
			// validate train number 
			String^ train_no = textBox9->Text;
			// Check if input is empty
			if (train_no == "") {
				MessageBox::Show("Please enter a train number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Check if input is a digit
			int train_number;
			if (!Int32::TryParse(train_no, train_number)) {
				MessageBox::Show("Train number must be a number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Check if input is greater than 0
			if (train_number <= 0) {
				MessageBox::Show("Train number must be greater than 0.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}


			// validate train name
			String^ train_name = textBox7->Text;
			// Check if train_name is empty
			if (train_name == "") {
				MessageBox::Show("Please enter a train name.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Check if train_name contains any whitespace characters
			//if (username->Contains(" ")) {
			//    MessageBox::Show("Username cannot contain any whitespace characters.");
			//    return;
			//}

			// Check if train_name is too short
			if (train_name->Length < 2) {
				MessageBox::Show("Train name must be at least 2 characters long.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Check if train_name is too long
			if (train_name->Length > 20) {
				MessageBox::Show("Train name cannot be more than 20 characters long.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Check if train_name contains any invalid characters
			System::Text::RegularExpressions::Regex^ regex = gcnew System::Text::RegularExpressions::Regex("[^a-zA-Z0-9_]");
			if (regex->IsMatch(train_name)) {
				MessageBox::Show("Train name contains invalid characters. Only letters, numbers, and underscores are allowed.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// valiate train capacity
			String^ train_capacity = textBox8->Text;
			// Check if input is empty
			if (train_capacity == "") {
				MessageBox::Show("Please enter a train capacity.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Check if input is a digit
			int train_cap;
			if (!Int32::TryParse(train_capacity, train_cap)) {
				MessageBox::Show("Train capacity must be a number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Check if input is greater than 0
			if (train_cap <= 0) {
				MessageBox::Show("Train capacity must be greater than 0.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// converting variables from System to std to be ready for database. 
			string trainName;
			MarshalString(train_name, trainName);

			// DATABASE TASK
			// use train_cap, train_number, trainName to check if train is already exists in trains table or not
			//     if YES: 
			//          DO:  MessageBox::Show("This train is already exists!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			//     if NO: 
			//          ADD it to trains table.
			//          DO: MessageBox::Show("Train added successfully!", "Successfully added");
		}
		private: System::Void kryptonButton41_Click(System::Object^ sender, System::EventArgs^ e) {
			Reservation::reservations.clear();
			for each (Control ^ c in panel1_res->Controls) {
				if (c->Name->Contains("Active")) {

					// converting variables from System to std to be ready for database. 
					String^ date = c->Controls["label9"]->Text;
					string trip_date;
					MarshalString(date, trip_date);
					trip_date = trip_date.substr(7, 10);

					String^ boardingAndDest = c->Controls["label111"]->Text;
					string boarding_dest;
					string boarding, destination;
					MarshalString(boardingAndDest, boarding_dest);
					for (int i = 0; i < boarding_dest.size(); i++) {
						if (boarding_dest[i] == ' ') {
							boarding = boarding_dest.substr(0, i);
							break;
						}
					}
					reverse(boarding_dest.begin(), boarding_dest.end());
					for (int i = 0; i < boarding_dest.size(); i++) {
						if (boarding_dest[i] == ' ') {
							destination = boarding_dest.substr(0, i);
							reverse(destination.begin(), destination.end());
							break;
						}
					}

					String^ dep_arrv_time = c->Controls["Reservation_trip_time"]->Text;
					string dep_arrv_time_std;
					MarshalString(dep_arrv_time, dep_arrv_time_std);
					dep_arrv_time_std = dep_arrv_time_std.substr(7, dep_arrv_time_std.length() - 7);
					string departure_time, arrive_time;
					for (int i = 0; i < dep_arrv_time_std.size(); i++) {
						if (dep_arrv_time_std[i] == ' ') {
							departure_time = dep_arrv_time_std.substr(0, i);
							break;
						}
					}
					reverse(dep_arrv_time_std.begin(), dep_arrv_time_std.end());
					for (int i = 0; i < dep_arrv_time_std.size(); i++) {
						if (dep_arrv_time_std[i] == ' ') {
							arrive_time = dep_arrv_time_std.substr(0, i);
							reverse(arrive_time.begin(), arrive_time.end());
							break;
						}
					}

					String^ tickets = c->Controls["Reservation_tickets_number"]->Text;
					string tickets_std;
					MarshalString(tickets, tickets_std);
					int reserved_tickets = stoi(tickets_std);
					long long current_time = Global::current_time();
					long long trip_time = Global::convert_date(trip_date) + Global::convert_time(departure_time);
					if (!(trip_time - current_time >= 1440)) {
						MessageBox::Show("You cannot modify the reservation 24 hours or less before the start of the trip!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						return;
					}

					string user_email;
					MarshalString(label_Emaill->Text, user_email);

					// DATABASE TASK
					// use boarding, destination, departure_time, arrive_time, trip_date to know TRIP_ID
					// use user_email to know PASSENGER_ID
					// Delete this reservation from RESERVATIONS table, do not miss returning tickets to available seats of trip back.
					//             // displaying reservations
					//              - catch rows of this user in RESERVATIONS table by its PASSENGER_ID
					//                 in each row: 
					//                      - get RESERVED_TICKETS in variable
					//                      - take the TRIP_ID and catch its row in TRIPS table, get from it (BOARDING_POINT, DESTINATION_POINT, DEP_TIME, ARRV_TIME, DATE_OF_TRAVEL, FARE_PER_TICKET, TRAIN_NUMBER) in variables.
					// 
					//                      Make an object of RESERVATION class and pass all variables to it; 
					//                      NOTE: in total_fare parameter pass (RESERVED_TICKETS * FARE_PER_TICKET).
					//                      
					//                      DO: Reservation::reservations.push(YOUR OBJECT);
					//              

					Display_my_reservations();
				}
			}
		}
		private: System::Void delete_train_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			for each (Control ^ c in panel18->Controls) {
				if (c->Name->Contains("_Active")) {

					String^ train_no_sys = c->Controls["train_number_v"]->Text;
					string train_no_std;
					MarshalString(train_no_sys, train_no_std);
					int train_number = stoi(train_no_std);


					// DATABASE TASK
					// Get all trips that has this train number, from row get trip_id.
					// Go to reservations and delete all reservation that has this trip_id.
					// Go to trips and delete trip that has this trip_id.
				}
			}
			MessageBox::Show("All trips and reservations related to this train have been removed successfully!", "Successfully added");
		}
			   int active_train = 0;
		private: System::Void train_click_admin(System::Object^ sender, System::EventArgs^ e) {
			
			if (sender->GetType() == Panel::typeid) {
				Panel^ train_panel = safe_cast<Panel^>(sender);
				if (train_panel->BackColor == Color::AliceBlue) {
					train_panel->BackColor = Color::White;
					train_panel->Name = L"train_panel";
					active_train--;
				}
				else {
					train_panel->BackColor = Color::AliceBlue;
					train_panel->Name += L"_Active";
					active_train++;
				}
			}
			else {
				Label^ train_panel_child = safe_cast<Label^>(sender);
				Control^ train_panel = train_panel_child->Parent;
				if (train_panel->BackColor == Color::AliceBlue) {
					train_panel->BackColor = Color::White;
					train_panel->Name = L"train_panel";
					active_train--;
				}
				else {
					train_panel->BackColor = Color::AliceBlue;
					train_panel->Name += L"_Active";
					active_train++;
				}
			}
			disable_edit_train(active_train);
			disable_delete_train(active_train);
		}
		String^ boarding_point_edited, ^dest_point_edited,^ trip_date_edited, ^dep_time_edited, ^arrv_time_edited;
		private: System::Void edit_trip_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			for each (Control ^ c in panel14->Controls)
			{
				if (c->Name->Contains("_Active")) {
					boarding_point_edited = c->Controls["board"]->Text;
					dest_point_edited = c->Controls["dest"]->Text;
					trip_date_edited = c->Controls["date"]->Text;
					dep_time_edited = c->Controls["dep_time"]->Text;
					arrv_time_edited = c->Controls["arv_time"]->Text;

					break;
				}
			}

			edit_trip_wind->Show();
			flowLayoutPanel3->AutoScroll = false;
			edited_trip_saved->Hide();

		}
		// save_edited_trip
		private: System::Void kryptonButton53_Click(System::Object^ sender, System::EventArgs^ e) {
			//validate trip date
			String^ date = textBox12->Text;
			DateTime validDate;

			if (DateTime::TryParseExact(date, "dd/MM/yyyy", System::Globalization::CultureInfo::InvariantCulture, Globalization::DateTimeStyles::None, validDate)) {
				if (validDate.Year >= 1900 && validDate.Year <= 2100) {

				}
				else {
					MessageBox::Show("Please enter a valid date between 1900 and 2100", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					textBox4->Focus();
					return;
				}
			}
			else {
				MessageBox::Show("Please enter a valid date in the format dd/MM/yyyy", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBox4->Focus();
				return;
			}

			// validate if date of trip is coming.
			string dateOfTrip;
			MarshalString(date, dateOfTrip);
			if (!(Global::convert_date(dateOfTrip) - Global::current_time() >= 1440)) {
				MessageBox::Show("The trip date must be a day or so away from now.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			//validate departure time
			String^ dep_time = textBox10->Text;
			DateTime validTime;

			if (DateTime::TryParseExact(dep_time, "HH:mm", System::Globalization::CultureInfo::InvariantCulture, Globalization::DateTimeStyles::None, validTime)) {
				if (validTime.TimeOfDay >= TimeSpan(0, 0, 0) && validTime.TimeOfDay <= TimeSpan(23, 59, 59)) {
					// Time is valid, do something here
				}
				else {
					MessageBox::Show("Please enter a valid time between 00:00 and 23:59 in departure time field!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					textBox2->Focus();
					return;
				}
			}
			else {
				MessageBox::Show("Please enter a valid time in the format HH:mm in departure time field!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBox2->Focus();
				return;
			}


			//validate arrive time
			String^ arrv_time = textBox11->Text;

			if (DateTime::TryParseExact(arrv_time, "HH:mm", System::Globalization::CultureInfo::InvariantCulture, Globalization::DateTimeStyles::None, validTime)) {
				if (validTime.TimeOfDay >= TimeSpan(0, 0, 0) && validTime.TimeOfDay <= TimeSpan(23, 59, 59)) {
					// Time is valid, do something here
				}
				else {
					MessageBox::Show("Please enter a valid time between 00:00 and 23:59 in arrive time field!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					textBox1->Focus();
					return;
				}
			}
			else {
				MessageBox::Show("Please enter a valid time in the format HH:mm in arrive time field!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				textBox1->Focus();
				return;
			}

			// validate if arrive time is after departure time.
			string departure_time, arrive_time;
			MarshalString(dep_time, departure_time);
			MarshalString(arrv_time, arrive_time);
			if (!(Global::convert_time(arrive_time) - Global::convert_time(departure_time) >= 15)) {
				MessageBox::Show("Arrive time has to be after Departure time by 15 minutes or more.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// converting variables from System to std to be ready for database. 
			string boarding_point,  dest_point,  trip_date,  deprt_time,  arv_time;
			MarshalString(boarding_point_edited, boarding_point);
			MarshalString(dest_point_edited, dest_point);
			MarshalString(trip_date_edited, trip_date);
			MarshalString(dep_time_edited, deprt_time);
			MarshalString(arrv_time_edited, arv_time);

			// DATABASE TASK
			// using (boarding_point,  dest_point,  trip_date,  deprt_time,  arv_time) to search for this trip 
			// after catching row:
			//              set DATE_OF_TRAVEL = dateOfTrip , DEP_TIME = departure_time, ARRV_TIME = arrive_time
			

			edited_trip_saved->Show();
			flowLayoutPanel3->AutoScroll = true;
			display_all_trips();
		}
		private: System::Void kryptonButton53_Click_1(System::Object^ sender, System::EventArgs^ e) {
			edit_trip_wind->Hide();
			flowLayoutPanel3->AutoScroll = true;
		}
		private: System::Void kryptonButton57_Click(System::Object^ sender, System::EventArgs^ e) {
			edit_train_wind->Hide();
			flowLayoutPanel3->AutoScroll = true;
		}
		String^ active_train_capacity, ^ active_train_number; int train_capacity_org = 5000;
		// save edited train data
		private: System::Void kryptonButton58_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ train_capacity_sys = textBox14->Text;
			string train_capacity_std;
			MarshalString(train_capacity_sys, train_capacity_std);

			// valiate train capacity
			// Check if input is empty
			if (train_capacity_sys == "") {
				MessageBox::Show("Please enter a train capacity.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Check if input is a digit
			int train_cap;
			if (!Int32::TryParse(train_capacity_sys, train_cap)) {
				MessageBox::Show("Train capacity must be a number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			// Check if input is greater than 0
			if (train_cap <= 0) {
				MessageBox::Show("Train capacity must be greater than 0.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			int train_capacity = stoi(train_capacity_std);
			if (!(train_capacity > train_capacity_org)) {
				MessageBox::Show("You can only increase train capacity!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// DATABASE TASK
			// use active_train_number to catch train row 
			// set TRAIN_CAPACITY = train_capacity

			edited_train_saved->Show();
			display_all_trains();
		}
		void disable_edit_train(int active_trains) {
			if(active_trains==1) edit_train_btn->Enabled = true;
			else edit_train_btn->Enabled = false;
		}
		void disable_delete_train(int active_trains) {
			if (active_trains >0) delete_train_btn->Enabled = true;
			else delete_train_btn->Enabled = false; 
		}

		void disable_delete_reservation(int active_reservation) {
			if (active_reservation > 0) kryptonButton41->Enabled = true;
			else kryptonButton41->Enabled = false;
		}

		// edit train btn
		private: System::Void edit_train_btn_Click(System::Object^ sender, System::EventArgs^ e) {
			

			for each (Control ^ c in panel18->Controls)
			{
				if (c->Name->Contains("_Active")) {
					active_train_capacity  = c->Controls["train_capacity_v"]->Text;
					active_train_number = c->Controls["train_number_v"]->Text;
					string train_capacity_std;
					MarshalString(active_train_capacity, train_capacity_std);
					train_capacity_org = stoi(train_capacity_std);
					break;
				}
			}
			edit_train_wind->Show();
			flowLayoutPanel3->AutoScroll = false;
			edited_train_saved->Hide();
		}

		private: System::Void password_hide_Click(System::Object^ sender, System::EventArgs^ e) {
			password_show->BringToFront();
			password_show->Show();
			textBox_password->UseSystemPasswordChar = true;
		}
		private: System::Void password_show_Click(System::Object^ sender, System::EventArgs^ e) {
			password_hide->BringToFront();
			password_hide->Show();
			textBox_password->UseSystemPasswordChar = false;
		}

		private: System::Void password_reg_hide_Click(System::Object^ sender, System::EventArgs^ e) {
			password_reg_show->BringToFront();
			password_reg_show->Show();
			textBox1_password->UseSystemPasswordChar = true;
		}
		private: System::Void password_reg_show_Click(System::Object^ sender, System::EventArgs^ e) {
			password_reg_hide->BringToFront();
			password_reg_hide->Show();
			textBox1_password->UseSystemPasswordChar = false;
		}

		private: System::Void password_PD_show_Click(System::Object^ sender, System::EventArgs^ e) {
			password_PD_hide->BringToFront();
			password_PD_hide->Show();
			textBox_password_->UseSystemPasswordChar = false;
		}
		private: System::Void password_PD_hide_Click(System::Object^ sender, System::EventArgs^ e) {
			password_PD_show->BringToFront();
			password_PD_show->Show();
			textBox_password_->UseSystemPasswordChar = true;
		}

};
}
