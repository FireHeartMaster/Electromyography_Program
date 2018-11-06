#pragma once
#using <System.dll>
#include <string>

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::IO::Ports;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::IO::Ports::SerialPort^  serialPort;
	private: System::Windows::Forms::Button^  updatePortsListButton;


	private: System::Windows::Forms::ListBox^  portsListBox;
	private: System::Windows::Forms::Button^  connectButton;
	private: System::Windows::Forms::Label^  serialPortsListLabel;
	private: System::Windows::Forms::Label^  baudRateLabel;
	private: System::Windows::Forms::ListBox^  baudRateListBox;
	private: System::Windows::Forms::Label^  logLabel;
	private: System::Windows::Forms::ListBox^  logListBox;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  startDataAcquisitionButton;
	private: bool startDataAcquisitionPressed = false;
	private: System::Windows::Forms::Timer^  timer;
	private: System::Windows::Forms::Label^  testLabel;
	private: array<String^>^ data = gcnew array<String^>(5);
	private: array<Double>^ chartTime = gcnew array<Double>(50);
	private: array<Double>^ chartDataA = gcnew array<Double>(50);
	private: array<Double>^ chartDataB = gcnew array<Double>(50);
	//private: array<Double>^ chartTimeB = gcnew array<Double>(50);
	private: array<Double>^ chartDataC = gcnew array<Double>(50);
	//private: array<Double>^ chartTimeC = gcnew array<Double>(50);
	private: array<Double>^ recordTime = gcnew array<Double>(5 * 60 * 1000);
	private: array<Double>^ recordDataA = gcnew array<Double>(5 * 60 * 1000);
	private: array<Double>^ recordDataB = gcnew array<Double>(5 * 60 * 1000);
	private: array<Double>^ recordDataC = gcnew array<Double>(5 * 60 * 1000);
	private: bool record = false;
	private: int positionInRecordArrays = 0;
	private: System::Windows::Forms::Timer^  chartUpdateTimer;
	private: System::Windows::Forms::Button^  playStopRecordButton;
	private: System::Windows::Forms::Button^  saveToFileButton;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Button^  testButton;
	private: System::Windows::Forms::Timer^  testTimer;
	private: System::Windows::Forms::Label^  testLabel2;
	private: int testVariable = 0;






	protected:



	protected:

	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->serialPort = (gcnew System::IO::Ports::SerialPort(this->components));
			this->updatePortsListButton = (gcnew System::Windows::Forms::Button());
			this->portsListBox = (gcnew System::Windows::Forms::ListBox());
			this->connectButton = (gcnew System::Windows::Forms::Button());
			this->serialPortsListLabel = (gcnew System::Windows::Forms::Label());
			this->baudRateLabel = (gcnew System::Windows::Forms::Label());
			this->baudRateListBox = (gcnew System::Windows::Forms::ListBox());
			this->logLabel = (gcnew System::Windows::Forms::Label());
			this->logListBox = (gcnew System::Windows::Forms::ListBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->startDataAcquisitionButton = (gcnew System::Windows::Forms::Button());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->testLabel = (gcnew System::Windows::Forms::Label());
			this->chartUpdateTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->playStopRecordButton = (gcnew System::Windows::Forms::Button());
			this->saveToFileButton = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->testButton = (gcnew System::Windows::Forms::Button());
			this->testTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->testLabel2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// updatePortsListButton
			// 
			this->updatePortsListButton->Location = System::Drawing::Point(175, 35);
			this->updatePortsListButton->Name = L"updatePortsListButton";
			this->updatePortsListButton->Size = System::Drawing::Size(75, 23);
			this->updatePortsListButton->TabIndex = 0;
			this->updatePortsListButton->Text = L"Update";
			this->updatePortsListButton->UseVisualStyleBackColor = true;
			this->updatePortsListButton->Click += gcnew System::EventHandler(this, &Form1::connectButton_Click);
			// 
			// portsListBox
			// 
			this->portsListBox->FormattingEnabled = true;
			this->portsListBox->Location = System::Drawing::Point(28, 35);
			this->portsListBox->Name = L"portsListBox";
			this->portsListBox->Size = System::Drawing::Size(120, 108);
			this->portsListBox->TabIndex = 1;
			// 
			// connectButton
			// 
			this->connectButton->Location = System::Drawing::Point(175, 65);
			this->connectButton->Name = L"connectButton";
			this->connectButton->Size = System::Drawing::Size(75, 23);
			this->connectButton->TabIndex = 2;
			this->connectButton->Text = L"Connect";
			this->connectButton->UseVisualStyleBackColor = true;
			this->connectButton->Click += gcnew System::EventHandler(this, &Form1::connectButton_Click_1);
			// 
			// serialPortsListLabel
			// 
			this->serialPortsListLabel->AutoSize = true;
			this->serialPortsListLabel->Location = System::Drawing::Point(28, 13);
			this->serialPortsListLabel->Name = L"serialPortsListLabel";
			this->serialPortsListLabel->Size = System::Drawing::Size(121, 13);
			this->serialPortsListLabel->TabIndex = 3;
			this->serialPortsListLabel->Text = L"Serial Ports Connected: ";
			// 
			// baudRateLabel
			// 
			this->baudRateLabel->AutoSize = true;
			this->baudRateLabel->Location = System::Drawing::Point(28, 165);
			this->baudRateLabel->Name = L"baudRateLabel";
			this->baudRateLabel->Size = System::Drawing::Size(64, 13);
			this->baudRateLabel->TabIndex = 4;
			this->baudRateLabel->Text = L"Baud-Rate: ";
			// 
			// baudRateListBox
			// 
			this->baudRateListBox->FormattingEnabled = true;
			this->baudRateListBox->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"300", L"1200", L"2400", L"4800", L"9600",
					L"14400", L"19200", L"28800", L"38400", L"57600", L"115200", L"500000"
			});
			this->baudRateListBox->Location = System::Drawing::Point(28, 182);
			this->baudRateListBox->Name = L"baudRateListBox";
			this->baudRateListBox->Size = System::Drawing::Size(120, 108);
			this->baudRateListBox->TabIndex = 5;
			// 
			// logLabel
			// 
			this->logLabel->AutoSize = true;
			this->logLabel->Location = System::Drawing::Point(25, 649);
			this->logLabel->Name = L"logLabel";
			this->logLabel->Size = System::Drawing::Size(31, 13);
			this->logLabel->TabIndex = 6;
			this->logLabel->Text = L"Log: ";
			// 
			// logListBox
			// 
			this->logListBox->FormattingEnabled = true;
			this->logListBox->Location = System::Drawing::Point(28, 665);
			this->logListBox->Name = L"logListBox";
			this->logListBox->Size = System::Drawing::Size(933, 121);
			this->logListBox->TabIndex = 7;
			// 
			// chart1
			// 
			chartArea1->AlignmentOrientation = System::Windows::Forms::DataVisualization::Charting::AreaAlignmentOrientations::Horizontal;
			chartArea1->Name = L"ChartArea1";
			chartArea2->Name = L"ChartArea2";
			chartArea3->Name = L"ChartArea3";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->ChartAreas->Add(chartArea2);
			this->chart1->ChartAreas->Add(chartArea3);
			legend1->DockedToChartArea = L"ChartArea1";
			legend1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Left;
			legend1->Name = L"Legend1";
			legend2->DockedToChartArea = L"ChartArea2";
			legend2->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Left;
			legend2->Name = L"Legend2";
			legend3->DockedToChartArea = L"ChartArea3";
			legend3->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Left;
			legend3->Name = L"Legend3";
			this->chart1->Legends->Add(legend1);
			this->chart1->Legends->Add(legend2);
			this->chart1->Legends->Add(legend3);
			this->chart1->Location = System::Drawing::Point(269, 13);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Series 1";
			series1->YValuesPerPoint = 2;
			series2->ChartArea = L"ChartArea2";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Legend2";
			series2->Name = L"Series 2";
			series3->ChartArea = L"ChartArea3";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend3";
			series3->Name = L"Series 3";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(1409, 627);
			this->chart1->TabIndex = 8;
			this->chart1->Text = L"chart1";
			title1->Name = L"Title1";
			title1->Text = L"Signals";
			this->chart1->Titles->Add(title1);
			// 
			// startDataAcquisitionButton
			// 
			this->startDataAcquisitionButton->Location = System::Drawing::Point(1698, 48);
			this->startDataAcquisitionButton->Name = L"startDataAcquisitionButton";
			this->startDataAcquisitionButton->Size = System::Drawing::Size(134, 23);
			this->startDataAcquisitionButton->TabIndex = 9;
			this->startDataAcquisitionButton->Text = L"Start data acquisition";
			this->startDataAcquisitionButton->UseVisualStyleBackColor = true;
			this->startDataAcquisitionButton->Click += gcnew System::EventHandler(this, &Form1::startDataAcquisitionButton_Click);
			// 
			// timer
			// 
			this->timer->Interval = 20;
			this->timer->Tick += gcnew System::EventHandler(this, &Form1::timer_Tick);
			// 
			// testLabel
			// 
			this->testLabel->AutoSize = true;
			this->testLabel->Enabled = false;
			this->testLabel->Location = System::Drawing::Point(1754, 232);
			this->testLabel->Name = L"testLabel";
			this->testLabel->Size = System::Drawing::Size(31, 13);
			this->testLabel->TabIndex = 10;
			this->testLabel->Text = L"none";
			this->testLabel->Visible = false;
			// 
			// chartUpdateTimer
			// 
			this->chartUpdateTimer->Tick += gcnew System::EventHandler(this, &Form1::chartUpdateTimer_Tick);
			// 
			// playStopRecordButton
			// 
			this->playStopRecordButton->Location = System::Drawing::Point(1698, 102);
			this->playStopRecordButton->Name = L"playStopRecordButton";
			this->playStopRecordButton->Size = System::Drawing::Size(134, 23);
			this->playStopRecordButton->TabIndex = 11;
			this->playStopRecordButton->Text = L"Record";
			this->playStopRecordButton->UseVisualStyleBackColor = true;
			this->playStopRecordButton->Click += gcnew System::EventHandler(this, &Form1::playStopRecordButton_Click);
			// 
			// saveToFileButton
			// 
			this->saveToFileButton->Location = System::Drawing::Point(1698, 155);
			this->saveToFileButton->Name = L"saveToFileButton";
			this->saveToFileButton->Size = System::Drawing::Size(134, 23);
			this->saveToFileButton->TabIndex = 12;
			this->saveToFileButton->Text = L"Save data to file";
			this->saveToFileButton->UseVisualStyleBackColor = true;
			this->saveToFileButton->Click += gcnew System::EventHandler(this, &Form1::saveToFileButton_Click);
			// 
			// testButton
			// 
			this->testButton->Location = System::Drawing::Point(1094, 682);
			this->testButton->Name = L"testButton";
			this->testButton->Size = System::Drawing::Size(75, 23);
			this->testButton->TabIndex = 13;
			this->testButton->Text = L"testButton";
			this->testButton->UseVisualStyleBackColor = true;
			this->testButton->Click += gcnew System::EventHandler(this, &Form1::testButton_Click);
			// 
			// testTimer
			// 
			this->testTimer->Interval = 1;
			this->testTimer->Tick += gcnew System::EventHandler(this, &Form1::testTimer_Tick);
			// 
			// testLabel2
			// 
			this->testLabel2->AutoSize = true;
			this->testLabel2->Location = System::Drawing::Point(982, 709);
			this->testLabel2->Name = L"testLabel2";
			this->testLabel2->Size = System::Drawing::Size(0, 13);
			this->testLabel2->TabIndex = 14;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1844, 810);
			this->Controls->Add(this->testLabel2);
			this->Controls->Add(this->testButton);
			this->Controls->Add(this->saveToFileButton);
			this->Controls->Add(this->playStopRecordButton);
			this->Controls->Add(this->testLabel);
			this->Controls->Add(this->startDataAcquisitionButton);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->logListBox);
			this->Controls->Add(this->logLabel);
			this->Controls->Add(this->baudRateListBox);
			this->Controls->Add(this->baudRateLabel);
			this->Controls->Add(this->serialPortsListLabel);
			this->Controls->Add(this->connectButton);
			this->Controls->Add(this->portsListBox);
			this->Controls->Add(this->updatePortsListButton);
			this->Name = L"Form1";
			this->Text = L"Serial Connection";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void connectButton_Click(System::Object^  sender, System::EventArgs^  e) {
		array<String^>^ serialPortsList = nullptr;
		serialPortsList = SerialPort::GetPortNames();
		
		if (serialPortsList != nullptr) {
			portsListBox->Items->Clear();
			//portsListBox->Items->Add(portsListBox->Items->Count);
			for each(String^ serialPortName in serialPortsList){
				portsListBox->Items->Add(serialPortName);
			}
		}
		//portsListBox->Items->Add(portsListBox->Items->Count);
		/*
		this->serialPort->PortName = "COM3";
		this->serialPort->Open();
		this->serialPort->Write("!");
		this->serialPort->Close();
		*/
		
	}
	private: System::Void connectButton_Click_1(System::Object^  sender, System::EventArgs^  e) {
		//portsListBox->Items->Add(baudRateListBox->SelectedIndex);
		

		if (portsListBox->SelectedIndex >= 0 && !serialPort->IsOpen) {
			if (baudRateListBox->SelectedIndex < 0) {
				if (baudRateListBox->FindString("9600") > 0) {
					baudRateListBox->SelectedItem = baudRateListBox->Items[baudRateListBox->FindString("9600")];
				}
			}
			try {
				//portsListBox->Items->Add(baudRateListBox->SelectedItem);
				serialPort->BaudRate = System::Int32::Parse(baudRateListBox->SelectedItem->ToString());
				serialPort->PortName = portsListBox->SelectedItem->ToString();


				//portsListBox->Items->Add(serialPort->BaudRate);
				serialPort->Open();
			}
			catch (UnauthorizedAccessException ^) {
				logListBox->Items->Add("Access is denied to the port.");
			}
			catch (ArgumentOutOfRangeException ^) {
				logListBox->Items->Add("One or more of the properties for this instance are invalid.");
			}
			catch (ArgumentException ^) {
				logListBox->Items->Add("The port name does not begin with 'COM'.-or-The file type of the port is not supported.");
			}
			catch (IO::IOException ^) {
				logListBox->Items->Add("The port is in an invalid state.-or-An attempt to set the state of the underlying port failed.");
			}
			catch (InvalidOperationException ^) {
				logListBox->Items->Add("The specified port on the current instance of the SerialPort is already open.");
			}
			catch (TimeoutException ^) {
				logListBox->Items->Add("TimeoutException");
			}

			if (serialPort->IsOpen) {
				connectButton->Text = "Disconnect";
				logListBox->Items->Add("Connected!");
			}
		}
		else if (portsListBox->SelectedIndex >= 0 && serialPort->IsOpen) {
			try {
				serialPort->Close();
			}
			catch (IO::IOException ^) {
				logListBox->Items->Add("The port is in an invalid state.-or-An attempt to set the state of the underlying port failed.");
			}

			if (!serialPort->IsOpen) {
				connectButton->Text = "Connect";
				logListBox->Items->Add("Disconnected!");
			}
		}
		else {
			logListBox->Items->Add("Select a serial port");
		}

	}

	private: System::Void startDataAcquisitionButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (serialPort->IsOpen) {
			if (!startDataAcquisitionPressed) {
				startDataAcquisitionPressed = true;
				startDataAcquisitionButton->Text = "Stop data acquisition";
				timer->Enabled = true;
				chartUpdateTimer->Enabled = true;
			}
			else {
				startDataAcquisitionPressed = false;
				startDataAcquisitionButton->Text = "Start data acquisition";
				timer->Enabled = false;
				chartUpdateTimer->Enabled = false;
			}
		}
		else {
			logListBox->Items->Add("The specified port is not open.");
		}
		

	}

	
	private: System::Void timer_Tick(System::Object^  sender, System::EventArgs^  e) {
		int numberOfData = 9;
		//array<String^>^ data = gcnew array<String^>(5);
		array<String^>^ separator = gcnew array<String^>(1);
		separator[0] = "|";
		String^ source = "";
		String^ time = "";
		String^ valueA = "";
		String^ valueB = "";
		String^ valueC = "";

		try {
			serialPort->ReadTimeout = 10;
			String^ message = serialPort->ReadLine();
			//std::string[] separators = { ",", ".", "!", "?", ";", ":", " " };
			if (message->Substring(0, 1) == "{" && message->Substring(message->Length - 2, 1) == "}") {
				//testLabel->Text = "Foi";

				message = message->Substring(1, message->Length - 3);
				data = message->Split(separator, StringSplitOptions::RemoveEmptyEntries);
				if (data->Length == numberOfData) {	//the data is supposed to be valid
					//testLabel->Text = data[4];
					source = data[0];
					time = data[2];
					valueA = data[4];
					valueB = data[6];
					valueC = data[8];

					
					//Array::Copy(data, 1, data, 0, data->Length - 1);
					//testLabel->Text = data[4];
					Array::Copy(chartDataA, 1, chartDataA, 0, chartDataA->Length - 1);
					Array::Copy(chartDataB, 1, chartDataB, 0, chartDataB->Length - 1);
					Array::Copy(chartDataC, 1, chartDataC, 0, chartDataC->Length - 1);
					Array::Copy(chartTime, 1, chartTime, 0, chartTime->Length - 1);
					chartDataA[chartDataA->Length - 1] = Convert::ToDouble(valueA);
					chartDataB[chartDataB->Length - 1] = Convert::ToDouble(valueB);
					chartDataC[chartDataC->Length - 1] = Convert::ToDouble(valueC);
					chartTime[chartTime->Length - 1] = Convert::ToDouble(data[2]);

					if (record) {
						recordDataA[positionInRecordArrays] = Convert::ToDouble(valueA);
						recordDataB[positionInRecordArrays] = Convert::ToDouble(valueB);
						recordDataC[positionInRecordArrays] = Convert::ToDouble(valueC);
						recordTime[positionInRecordArrays] = Convert::ToDouble(data[2]);

						positionInRecordArrays++;
					}
					
				}
				
			}
			else {
				testLabel->Text = "Não foi";
			}

			
		}
		catch (InvalidOperationException^) {
			logListBox->Items->Add("The specified port is not open.");
		}
		catch (TimeoutException^) {
			//logListBox->Items->Add("TimeoutException");
		}
		catch(System::ArgumentOutOfRangeException^){
			logListBox->Items->Add("ArgumentOutOfRangeException");
		}

		

	}


	

	private: System::Void chartUpdateTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
		chart1->Series["Series 1"]->Points->Clear();

		chart1->Series["Series 2"]->Points->Clear();
		chart1->Series["Series 3"]->Points->Clear();
		
		for (int i = 0; i < chartDataA->Length; ++i)
		{
			//chart1->Series["Series 1"]->Points->Add(chartDataA[i]);
			chart1->Series["Series 1"]->Points->AddXY(chartTime[i] / 1000.0, chartDataA[i]);
			chart1->Series["Series 2"]->Points->AddXY(chartTime[i] / 1000.0, chartDataB[i]);
			chart1->Series["Series 3"]->Points->AddXY(chartTime[i] / 1000.0, chartDataC[i]);
		}
	}

	private: System::Void playStopRecordButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (serialPort->IsOpen && startDataAcquisitionPressed) {
			record = !record;
			if (record) {
				positionInRecordArrays = 0;
				playStopRecordButton->Text = "Stop";
			}
			else {
				playStopRecordButton->Text = "Record";
			}
		}
		else {
			if (!serialPort->IsOpen) {
				logListBox->Items->Add("The specified port is not open.");
			}
			else {
				logListBox->Items->Add("You didn't start data acquisition yet.");
			}
		}
	}
	
	private: System::Void saveToFileButton_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ stringToSave = "";

		if (positionInRecordArrays != 0 && !record) {
			//saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			saveFileDialog1->Filter = "csv files (*.csv)|*.csv|All files (*.*)|*.*";
			saveFileDialog1->FilterIndex = 1;
			saveFileDialog1->RestoreDirectory = true;
			
			//saveFileDialog1->ShowDialog();

			stringToSave = "";

			stringToSave += Convert::ToString(positionInRecordArrays);
			stringToSave += ",,,;\n";

			for (int i = 0; i < positionInRecordArrays; i++) {
				stringToSave += Convert::ToString(recordTime[i]) + "," + 
					Convert::ToString(recordDataA[i]) + "," + 
					Convert::ToString(recordDataB[i]) + "," + 
					Convert::ToString(recordDataC[i]) + ";\n";
			}

			if (saveFileDialog1->ShowDialog() == ::System::Windows::Forms::DialogResult::OK) {
				System::IO::File::WriteAllText(saveFileDialog1->FileName, stringToSave);
			}
			
			/*
			if (saveFileDialog1->ShowDialog() == ::DialogResult::OK)
			{
				System::IO::File::WriteAllText(saveFileDialog1->FileName, stringToSave);
			}*/


		}
		else if (record) {
			logListBox->Items->Add("Stop data acquisition.");
		}
		else {
			logListBox->Items->Add("First you need to perform some data acquisition.");
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	
	private:  String^ testMessage = "";
	private: System::Void testButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (testTimer->Enabled) {
			testLabel2->Text = Convert::ToString(testVariable);
			testTimer->Enabled = false;
			testLabel2->Text += testMessage;
		}
		else {
			testVariable = 0;
			testTimer->Enabled = true;
			//String^ message = serialPort->ReadLine();
			//testLabel2->Text = testMessage;
		}
	}
	
	private: System::Void testTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
		for (int i = 0; i < 1000; i++) {
			testVariable++;
			//testLabel2->Text = Convert::ToString(testVariable);
		}
		try {
			serialPort->ReadTimeout = 1;
			testMessage = serialPort->ReadLine();
		}
		catch (TimeoutException^) {
			//logListBox->Items->Add("TimeoutException");
		}
	}
};
}
