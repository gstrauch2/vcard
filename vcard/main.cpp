/*
 * George Strauch
 * vcard file maker
 * feb 15 2018
 * */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string strFileName = "address.vcf";
	ofstream fileAddress;
	string strFirst = "Natalie";
	string strLast = "Salavar";

    string strOrganization = "NVC";
    string strTitle = "professor";
    string strEmail = "nsalavar@alamo.edu";
    string strAddressWork = "3535 N Ellison DR";
    string strPhoneNum = "(210) 486-4000";
    
	//cout << "Please enter a filename: ";
	//cin >> strFileName;
	fileAddress.open(strFileName);
	fileAddress << "BEGIN:VCARD" << endl;
	fileAddress << "VERSION:2.1" << endl;
	fileAddress << "N:" << strLast << ";" << strFirst << ";;" << endl;
	fileAddress << "FN:" << strFirst << " " << strLast << endl;

    // my 5 additions
    fileAddress << "ORG:" << strOrganization << endl;
    fileAddress << "TITLE:" << strTitle << endl;
    fileAddress << "EMAIL:" << strEmail << endl;
    fileAddress << "ADR;Work:" << strAddressWork << endl;
    fileAddress << "TEL:" << strPhoneNum << endl;

    fileAddress << "END:VCARD" << endl;



    fileAddress.close();
	cout << "Wrote " << strFileName << endl;
    return 0;
}

