/*
* Copyright 2012 Alexander Chemeris <Alexander.Chemeris@gmail.com>
*
* This software is distributed under the terms of the GNU Affero Public License.
* See the COPYING file in the main directory for details.
*
* This use of this software may be subject to additional restrictions.
* See the LEGAL file in the main directory for details.

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU Affero General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU Affero General Public License for more details.

	You should have received a copy of the GNU Affero General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/



#include <Configuration.h>
#include <TMSITable.h>
#include <iostream>
//#include <string>

using namespace std;

ConfigurationTable gConfig("testOpenBTS.db");
Control::TMSITable gTMSITable;

// Set up the performance reporter.
#include <Reporting.h>
ReportingTable gReports("testOpenBTSStats.db");


int main(int argc, char *argv[])
{
	gTMSITable.open("testTMSItable.db");
	gTMSITable.clear();
	gTMSITable.dump(cout);
	const char *IMSI="234100223456161";
	unsigned newTMSI = gTMSITable.assign(IMSI);
//	unsigned newTMSI = gTMSITable.assign(IMSI,lur);
	gTMSITable.dump(cout);
//	char *TMSI = gTMSITable.TMSI(dd);
//	free(TMSI);
//	char *IMSI = gTMSITable.IMSI(TMSI);
//	free(IMSI);
//	gTMSITable.IMEI(IMSI,new_imei.c_str())
//	gTMSITable.classmark(IMSI,classmark)
	
}
