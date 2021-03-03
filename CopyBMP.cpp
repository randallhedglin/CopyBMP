// CopyBMP.cpp : Defines the entry point for the console application.
//

#include"stdafx.h"
#include"windows.h"
#include"stdio.h"
#include"direct.h"

int main(int argc, char* argv[])
{
	for(int c1=0;c1<2;c1++)
		for(int c2=0;c2<10;c2++)
			//for(int c3=0;c3<10;c3++)
			{
				char p1[_MAX_PATH];
				char p2[_MAX_PATH];
				//sprintf(p1,"C:\\Documents and Settings\\Randy\\Desktop\\GMonkey\\BMP\\%c%d",c1?'e':'p',c2);
				//mkdir(p1);
				sprintf(p1,"C:\\Documents and Settings\\Randy\\Desktop\\GMonkey\\BMP\\Copy (2) of %c%d.BMP",c1?'e':'p',c2);
				//sprintf(p2,"C:\\Documents and Settings\\Randy\\Desktop\\GMonkey\\BMP\\%c%d\\%c%d_000%d.BMP",c1?'e':'p',c2,c1?'e':'p',c2,c3);
				sprintf(p2,"C:\\Documents and Settings\\Randy\\Desktop\\GMonkey\\BMP\\%c%d.BMP",c1?'e':'p',c2);
				CopyFile(p1,p2,FALSE);
			}
	return 0;
}
