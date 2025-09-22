/*
===============================================================================
                        EXPENSE TRACKER APPLICATION
                              OPEN SOURCE PROJECT
===============================================================================
* Program Name: Expense Tracker
* Version: V1.0
* Developer: SA3DWY
* Language: C++
* License: MIT License (Open Source)
* Description: A comprehensive expense tracking application that helps users
*              monitor their monthly income and expenses with detailed reporting
*
* Features:
* - Monthly income tracking
* - Expense categorization (Food, Transport, Shopping, Custom)
* - Real-time expense monitoring
* - Automated report generation
* - File export functionality
*
* 🌟 OPEN SOURCE PROJECT 🌟
* This software is released under the MIT License.
* You are free to use, modify, distribute, and contribute!
* 
* Repository: https://github.com/[username]/Expense-Tracker
* Issues: https://github.com/[username]/Expense-Tracker/issues
* Contributions Welcome!
*
* Copyright (c) 2025 SA3DWY
* Licensed under MIT License - see COPYRIGHT.txt for details
===============================================================================
*/

#include <iostream>     // For input/output operations / للعمليات الإدخال والإخراج
#include <algorithm>    // For algorithm functions / للدوال الخوارزمية
#include <string>       // For string operations / لعمليات النصوص
#include <vector>       // For dynamic arrays / للمصفوفات الديناميكية
#include <fstream>      // For file operations / لعمليات الملفات
#include <filesystem>   // For file system operations / لعمليات نظام الملفات

using namespace std;
namespace fs = filesystem;


/**
 * Function: data
 * Purpose: Displays all expense categories and their corresponding amounts
 * Parameters: 
 *   - categorys: vector containing expense category names
 *   - expenses: vector containing expense amounts
 * الغرض: عرض جميع فئات المصروفات والمبالغ المقابلة لها
 */
void data(vector<string> &categorys, vector<double> &expenses)
{
	// Loop through all expenses and display category with amount
	// التكرار عبر جميع المصروفات وعرض الفئة مع المبلغ
	for (int i = 0; i < expenses.size(); ++i)
	{
		cout<< categorys.at(i) << " : " << expenses.at(i) << " L.E." << endl;
	}
}
/**
 * Function: sum
 * Purpose: Calculates the total sum of all expenses
 * Parameters: 
 *   - total: vector containing all expense amounts
 * Returns: Total sum of all expenses as double
 * الغرض: حساب المجموع الكلي لجميع المصروفات
 */
double sum(vector<double> &total)
{
	double Total_expenses = 0;  // Initialize total expenses counter
	
	// Iterate through all expenses and add to total
	// التكرار عبر جميع المصروفات وإضافتها للمجموع
	for (double v : total)
	{
		Total_expenses += v;
	}
	return Total_expenses;
}
/**
 * Function: saveFile
 * Purpose: Generates and saves a comprehensive expense report to a text file
 * Parameters:
 *   - categorys: vector of expense categories
 *   - expenses: vector of expense amounts
 *   - stay_monthly: monthly income amount
 *   - Total_expenses: total calculated expenses
 *   - Remaining: remaining money after expenses
 *   - index: index of the largest expense
 * الغرض: إنشاء وحفظ تقرير شامل للمصروفات في ملف نصي
 */
void saveFile(vector<string>& categorys, vector<double>& expenses,double stay_monthly, double Total_expenses,double Remaining, int index)
{
	string filename = "Report.txt";  // Report file name / اسم ملف التقرير
	ofstream file(filename);         // Create output file stream / إنشاء تدفق ملف الإخراج
	
	// Write report header / كتابة رأس التقرير
	file << "\n================ Expense Report ================\n";
	file << "Income: " << stay_monthly << "L.E." << endl;
	file << "Total expenses: " << Total_expenses << "L.E." << endl;
	
	// Check if remaining amount is positive or negative
	// فحص ما إذا كان المبلغ المتبقي موجب أم سالب
	if (Remaining > 0) 
		file << "Remaining: " << Remaining << "L.E." << endl;
	else 
		file << "Remaining: " << Remaining << " Your expenses exceeded your income. You need this amount to cover the gap" << endl;
	
	file << "\n\n";
	file << "Expenses List: " << endl;

	// Write detailed expense list / كتابة قائمة المصروفات التفصيلية
	for (int i = 0; i < expenses.size(); ++i)
	{
		file << categorys.at(i) << " : " << expenses.at(i) << " L.E." << endl;
	}

	file << "\n";
	file << "Biggest Expense: " << categorys.at(index) << endl;
	
	// Add warning if expenses exceed income / إضافة تحذير إذا تجاوزت المصروفات الدخل
	if (Remaining < 0) 
		file << "Warning: Your expenses exceeded your monthly income!" << endl;
	
	file << "==================================================" << endl;
	file << "\nSaved at: " << fs::current_path() / filename << endl;
	file.close();

	// Automatically open the report file / فتح ملف التقرير تلقائياً
	system(("start " + filename).c_str());
}

void ads()
{
	system("start chrome https://linktr.ee/sa3dwy?utm_source=linktree_profile_share&ltsid=b9a40c8c-c1a2-402b-a09a-58dd0120efc7");
}


/**
 * Function: main
 * Purpose: Main application entry point - handles user interaction and program flow
 * الغرض: نقطة دخول التطبيق الرئيسية - تتعامل مع تفاعل المستخدم وتدفق البرنامج
 */
int main()
{
	// Variable declarations / إعلان المتغيرات
	double stay_monthly, your_expenses, Total_expenses=0;  // Income and expense variables
	string category = "";                                   // Current expense category
	
	// Get user's monthly income / الحصول على الدخل الشهري للمستخدم
	cout << "=== EXPENSE TRACKER V1.0 by SA3DWY ===" << endl;
	cout << "Please enter your monthly income" << endl;
	cout << ": ";
	cin >> stay_monthly;
	system("cls");  // Clear screen for better UX / مسح الشاشة لتحسين تجربة المستخدم
	
	// Initialize data structures / تهيئة هياكل البيانات
	vector<string> categorys;  // Store expense categories / تخزين فئات المصروفات
	vector<double> expenses;   // Store expense amounts / تخزين مبالغ المصروفات

    double total = 0;  // Running total of expenses / المجموع الجاري للمصروفات
    
    // Main expense input loop / حلقة إدخال المصروفات الرئيسية
	while (true)
	{ 
		// Display current financial status / عرض الحالة المالية الحالية
		cout << "Income: " << stay_monthly << endl;
		cout << "Your expenses: " << total << endl;
		cout << "\nChoose category [1-Food, 2-Transport, 3-Shopping, 4-Other, 0-Exit]: ";
		
		int pick;
		cin >> pick;

		if (pick == 0) break;  // Exit condition / شرط الخروج
		
		// Category selection logic / منطق اختيار الفئة
		if (pick == 1) category = "Food";
		else if (pick == 2) category = "Transport";
		else if (pick == 3) category = "Shopping";
		else if (pick == 4)
		{
		   cout << "Enter custom category name: " << endl;
		   cin >> category;
		}

		categorys.push_back(category);  // Add category to list / إضافة الفئة للقائمة

		// Get expense amount / الحصول على مبلغ المصروف
		cout << "Enter the expense: " << endl;
		cin >> your_expenses;
		expenses.push_back(your_expenses);  // Add expense to list / إضافة المصروف للقائمة
		
		total = sum(expenses);  // Recalculate total / إعادة حساب المجموع
		system("cls");
		
		// Warn if expenses exceed income / التحذير إذا تجاوزت المصروفات الدخل
		if (total > stay_monthly)
		{
			cout << "Your expenses exceed your monthly income" << endl;
		}
	}
	
	// Calculate final totals / حساب المجاميع النهائية
	Total_expenses = sum(expenses);
	
	// Find the largest expense / العثور على أكبر مصروف
	double max = expenses.at(0);
	int index = 0;
	for (int i = 0; i < expenses.size(); ++i)
	{
		if (expenses.at(i) > max)
		{
			max = expenses.at(i);
			index = i;
		}
	}
	
	system("cls");
	double Remaining = stay_monthly - Total_expenses;  // Calculate remaining money / حساب المبلغ المتبقي
	
	// Display final report / عرض التقرير النهائي
	cout << "\n================ Expense Report ================\n";
	cout << "Income: " << stay_monthly << "L.E." << endl;
	cout << "Total expenses: " << Total_expenses << "L.E." << endl;
	
	if (Remaining > 0) 
		cout << "Remaining: " << Remaining << "L.E." << endl;
	else 
		cout << "Remaining: " << Remaining << " Your expenses exceeded your income. You need this amount to cover the gap" << endl;
	
	cout << "\n\n";
	cout << "Expenses List: " << endl;
	data(categorys, expenses);  // Display detailed expense list / عرض قائمة المصروفات التفصيلية

	cout << "\n";
	cout << "Biggest Expense: "<< categorys.at(index) << endl;
	if (Remaining < 0) 
		cout << "Warning: Your expenses exceeded your monthly income!" << endl;
	cout << "==================================================" << endl;
	
	// Ask user if they want to save report to file / سؤال المستخدم إذا كان يريد حفظ التقرير في ملف
	char ch;
	cout << "\n Do you want to save as a file (y/n)?" << endl;
	cout << ": ";
	cin >> ch;
	if (ch == 'y') 
		saveFile(categorys, expenses, stay_monthly, Total_expenses, Remaining, index);

		ads();
	system("pause");  // Wait for user input before closing / انتظار إدخال المستخدم قبل الإغلاق
	return 0;
}