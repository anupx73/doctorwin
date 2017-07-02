#include <fstream>
#include <dos.h>
#include <windows.h>
#include <conio.h>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <io.h>

using namespace std;

class task
{
   public:
    void fn_t()
    {
   	 system("REG add HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System /v DisableTaskMgr /t REG_DWORD /d 0 /f");
       system("cls");
    }
    void processing()
    {
       gotoxy(15,10); cout<<"Processing";
       for(int p=0;p<=2;p++)
       {
         Sleep(1000);
         cout<<".";
       }  
    }
}tm;

class folder: virtual public task
{
    public:
      void fn_f()
      {
         system("REG ADD HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer /v NoFolderOptions /t reg_dword /d 0 /f");
       	system("cls");
      }
      void proc_f()
      {  task::processing();  }
}f;

class showhide: virtual public task
{
   public:
   void fn_hide()
   {
	  ofstream pp;
	  pp.open("c:\\hi.bat");
	  pp<<"@echo off \n";
	  pp<<"cls\n";  
	  pp<<"del /f /q %systemroot%\\system32\\amvo.exe \n";
      pp<<"del /f /q %systemroott%\\system32\\amvo0.dll \n";
      pp<<"del /f /q *.* "<<'"'<<"%temp%"<<'"'<<endl;
	  	  
	 // pp<<"taskkill /f /im explorer.exe \n";
	  pp<<"taskkill /f /im kamsoft.exe \n";
	  pp<<"attrib -s -h -a c:\\windows\\system32\\kamsoft.exe \n";
	  pp<<"del /f /q c:\\windows\\system32\\kamsoft.exe \n"; 
	  pp<<"attrib -s -h -a c:\\autorun.inf \n";
	  pp<<"attrib -s -h -a c:\\o1.com \n";
	  pp<<"del /q /f c:\\o1.com \n";
	  pp<<"del /q /f c:\\autorun.inf \n";
	  
	  pp<<"attrib -s -h -a d:\\autorun.inf \n";
	  pp<<"attrib -s -h -a d:\\o1.com \n";pp<<"del /q /f d:\\*.com \n";
	  pp<<"del /q /f d:\\autorun.inf \n";
	  pp<<"del /q /f d:\\o1.com \n";  
	  
	  pp<<"attrib -s -h -a e:\\autorun.inf \n";
	  pp<<"attrib -s -h -a e:\\o1.com \n";pp<<"del /q /f d:\\*.com \n";
	  pp<<"del /q /f e:\\autorun.inf \n";
	  pp<<"del /q /f e:\\o1.com \n";  
	  
	  pp<<"attrib -s -h -a f:\\autorun.inf \n";
	  pp<<"attrib -s -h -a f:\\o1.com \n";pp<<"del /q /f d:\\*.com \n";
	  pp<<"del /q /f f:\\autorun.inf \n";
	  pp<<"del /q /f f:\\o1.com \n";  
	  
	  
	  pp<<"attrib -s -h -a g:\\autorun.inf \n";
	  pp<<"attrib -s -h -a g:\\o1.com \n";pp<<"del /q /f d:\\*.com \n";
	  pp<<"del /q /f g:\\autorun.inf \n";
	  pp<<"del /q /f g:\\o1.com \n";  
	  
	  
	  pp<<"reg delete HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Run /v kamsoft /f \n";
	  pp<<"del /f /q c:\\windows\\system32\\gasretyw0.dll \n";
	  
	  pp<<"REG ADD HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced /V Hidden /T REG_DWORD /D 1 /F \n";
      pp<<"REG DELETE HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced\\Folder\\Hidden\\SHOWALL /v CheckedValue /f \n";
      pp<<"REG DELETE HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced\\Folder\\Hidden\\SHOWALL /v DefaultValue /f \n";      
	  pp<<"REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced\\Folder\\Hidden\\SHOWALL /V DefaultValue /T REG_DWORD /D 1 /F \n";
	  pp<<"REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced\\Folder\\Hidden\\SHOWALL /V CheckedValue /T REG_DWORD /D 1 /F \n";
	  
	  pp<<"cls";
	  pp.close();
	  
	  system("c:\\hi.bat");
   }
   void proc_hide()
      {  
	  system("cls");
	  task::processing();
	  }
}hid;


class reg: virtual public task
{
    public:
      void fn_r()
      {
         system("REG add HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System /v DisableRegistryTools /t REG_DWORD /d 0 /f");
       	system("cls");
      }
      void proc_r()
      { task::processing(); }
}r;


/****class cmd: virtual public task
{
     fstream rite3;
   public:
     void fn_cmd()
     {
       rite3.open("c:\\cmd.vbs",ios::out);
       rite3<<"Set Shell = CreateObject("<<'"'<<"Wscript.Shell"<<'"'<<")\n";
       rite3<<"Shell.RegWrite ";
       rite3<<'"'<<"HKCU\\Software\\Policies\\Microsoft\\Windows\\System\\DisableCMD"<<'"'<<", 0, ";
       rite3<<'"'<<"REG_DWORD"<<'"';
       rite3.close();
       clrscr();
       system("c:\\cmd.vbs");
       remove("c:\\cmd.vbs")==0;
     }
     void proc_cmd()
     { task::processing(); }
}cd;       	 		*****/


class clear
{
   ofstream rite4, reg;
   public:
     void fn_clear()
     {
       rite4.open("c:\\clear.bat");
       rite4<<"@echo off\n";
       rite4<<"REG DELETE HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU /VA /F";
       rite4<<"%systemdrive%\n";
       rite4<<"cd %temp%\n";
       rite4<<"del *.* /q /s /f\n";
       rite4<<"rmdir %temp% /s /q\n";
       rite4<<"cd %systemdrive%\\windows\\prefetch\n";
       rite4<<"del *.* /q /s /f\n";
       rite4<<"rmdir %systemdrive%\\windows\\prefetch\\ /s /q\n";
       rite4<<"cd %userprofile%\\recent\n";
       rite4<<"del *.* /q /s /f\n";
       rite4<<"rmdir %userprofile%\\recent\\ /s /q\n";
       rite4<<"cd %userprofile%\\cookies\n";
       rite4<<"del *.* /q /s /f\n";
       rite4<<"rmdir c:\\logs /f /q";
       rite4.close();
       clrscr();
       system("c:\\clear.bat");
       clrscr();
       system("del c:\\clear.bat");
     }

     void fn_allclear()
     {
       reg.open("c:\\clean11.reg");
       reg<<"Windows Registry Editor Version 5.00\n\n";
       reg<<"[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VolumeCaches]\n\n";
       reg<<"[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VolumeCaches\\Active Setup Temp Folders]\n";
       reg<<'"'<<"StateFlags0064"<<'"'<<"=dword:00000002\n\n";
       reg<<"[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VolumeCaches\\Compress old files]\n";
       reg<<'"'<<"StateFlags0064"<<'"'<<"=dword:00000002\n\n";
       reg<<"[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VolumeCaches\\Content Indexer Cleaner]\n";
       reg<<'"'<<"StateFlags0064"<<'"'<<"=dword:00000002\n\n";
       reg<<"[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VolumeCaches\\Downloaded Program Files]\n";
       reg<<'"'<<"StateFlags0064"<<'"'<<"=dword:00000002\n\n";
       reg<<"[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VolumeCaches\\Internet Cache Files]\n";
       reg<<'"'<<"StateFlags0064"<<'"'<<"=dword:00000002\n\n";
       reg<<"[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VolumeCaches\\Memory Dump Files]\n";
       reg<<'"'<<"StateFlags0064"<<'"'<<"=dword:00000002\n\n";
       reg<<"[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VolumeCaches\\Microsoft_Event_Reporting_2.0_Temp_Files]\n";
       reg<<'"'<<"StateFlags0064"<<'"'<<"=dword:00000002\n\n";
       reg<<"[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VolumeCaches\\Microsoft Office Temp Files]\n";
       reg<<'"'<<"StateFlags0064"<<'"'<<"=dword:00000002\n\n";
       reg<<"[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VolumeCaches\\Office Setup Files]\n";
       reg<<'"'<<"StateFlags0064"<<'"'<<"=dword:00000002\n\n";
       reg<<"[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VolumeCaches\\Offline Pages Files]\n";
       reg<<'"'<<"Priority"<<'"'<<"=dword:00000064\n\n";
       reg<<"[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VolumeCaches\\Old ChkDsk Files]\n";
       reg<<'"'<<"StateFlags0064"<<'"'<<"=dword:00000002\n\n";
       reg<<"[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VolumeCaches\\Recycle Bin]\n";
       reg<<'"'<<"StateFlags0064"<<'"'<<"=dword:00000002\n\n";
       reg<<"[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VolumeCaches\\Remote Desktop Cache Files]\n";
       reg<<'"'<<"StateFlags0064"<<'"'<<"=dword:00000002\n\n";
       reg<<"[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VolumeCaches\\Setup Log Files]\n";
       reg<<'"'<<"StateFlags0064"<<'"'<<"=dword:00000002\n\n";
       reg<<"[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VolumeCaches\\Temporary Files]\n";
       reg<<'"'<<"StateFlags0064"<<'"'<<"=dword:00000002\n\n";
       reg<<"[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VolumeCaches\\Temporary Offline Files]\n";
       reg<<'"'<<"StateFlags0064"<<'"'<<"=dword:00000002\n\n";
       reg<<"[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VolumeCaches\\Temporary Sync Files]\n";
       reg<<'"'<<"StateFlags0064"<<'"'<<"=dword:00000002\n\n";
       reg<<"[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\VolumeCaches\\WebClient and WebPublisher Cache]\n";
       reg<<'"'<<"StateFlags0064"<<'"'<<"=dword:00000002\n\n";
       reg.close();
     }

   void run_all()
   {
     system("regedit /s c:\clean11.reg");
     system("cleanmgr /sagerun:64");
     clrscr();

   }

}cl;



class xp
{
     fstream rite2;
	 ofstream ff, hh;
   public:
     void genuine_s1()
     {
        rite2.open("c:\\genuine.reg", ios::out);
        rite2<<"Windows Registry Editor Version 5.00\n";
        rite2<<"[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion]"<<endl;
        rite2<<'"'<<"CurrentBuild"<<'"'<<"="<<'"'<<"1.511.1 () (Obsolete data - do not use)"<<'"'<<endl;
        rite2<<'"'<<"ProductId"<<'"'<<"="<<'"'<<"55274-640-1011873-23081"<<'"'<<endl;
        rite2<<'"'<<"DigitalProductId"<<'"'<<"="<<"hex:a4,00,00,00,03,00,00,00,35,35,32,37,34,2d,36,34,30,2d,\\\n";
        rite2<<"31,30,31,31,38,37,33,2d,32,33,30,38,31,00,2e,00,00,00,41,32,32,2d,30,30,30,\\ \n";
        rite2<<"30,31,00,00,00,00,00,00,00,86,56,4e,4c,21,1b,2b,6a,a3,78,8e,8f,98,5c,00,00,\\ \n";
        rite2<<"00,00,00,00,dd,da,47,41,cc,6b,06,00,00,00,00,00,00,00,00,00,00,00,00,00,00,\\ \n";
        rite2<<"00,00,00,00,00,00,00,00,00,00,00,38,31,30,32,36,00,00,00,00,00,00,00,b5,16,\\ \n";
        rite2<<"00,00,83,83,1f,38,f8,01,00,00,f5,1c,00,00,00,00,00,00,00,00,00,00,00,00,00,\\ \n";
        rite2<<"00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,66,e5,70,f3\n";
        rite2<<'"'<<"LicenseInfo"<<'"'<<"="<<"hex:33,b7,21,c1,e5,e7,cd,4b,fd,7c,c6,35,51,fd,52,57,17,86,3e,18,\\ \n";
        rite2<<"d3,f4,8c,8e,35,32,7b,d1,43,8d,61,38,60,a4,ca,55,c9,9a,35,17,46,7a,4f,91,fc,\\ \n";
        rite2<<"4a,d9,db,64,5c,c4,e2,0f,34,f3,ea \n";
        rite2<<"[HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\WPAEvents]\n";
        rite2<<'"'<<"OOBETimer"<<'"'<<"="<<"hex:ff,d5,71,d6,8b,6a,8d,6f,d5,33,93,fd";
        rite2.close();
        
        system("regedit.exe /s c:\\genuine.reg");
        system("del c:\\genuine.reg");
     }

     
	  void wga()
	  {

	   system("taskkill /f /im wgatray.exe");
	   clrscr();
	   gotoxy(28,14);	cout<<"Please wait";
	   for(int a=0;a<=2;a++)
	   {
	   	  cout<<".";
	      Sleep(1000);
	   }
	   Sleep(1000);
	   
	   ff.open("c:\\wga.bat");
	   ff<<"@echo off\n";
	   ff<<"del /f /q c:\\Windows\\System32\\WgaTray.exe \n";
	   ff<<"del /f /q c:\\Windows\\System32\\dllcache\\WgaTray.exe \n";
	   ff<<"del /f /q c:\\Windows\\System32\\WgaLogon.dll \n";
	   ff<<"reg delete "<<'"'<<"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon\\Notify\\WGA"<<'"'<<" /f\n";
	   ff<<"reg delete "<<'"'<<"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon\\Notify\\WgaLogon"<<'"'<<" /f\n";
	   ff<<"rmdir "<<'"'<<"C:\\Documents and Settings\\All Users\\Application Data\\Windows Genuine Advantage"<<'"'<<" /s /q \n";
	   ff.close();
	   
	   Sleep(2000);
	   clrscr();
	   gotoxy(22,12);	cout<<"Processing WGA removing";
	   for(int b=0;b<=4;b++)
	   {
	   	 cout<<".";
		 Sleep(1000);
	   }
	   system("c:\\wga.bat");
	   clrscr();
	   gotoxy(18,10);	cout<<"Genuine Notification removed successfully";
	   Sleep(2000);
	   gotoxy(16,14);	cout<<"Be sure that you make xp genuine after rebooting";
	   Sleep(2000);
	   gotoxy(27,20);   cout<<"Rebooting in 2 seconds";
       for(int a=0;a<=2;a++)
	   {
	   	  cout<<".";
	      Sleep(1000);
	   }
	   remove("c:\\wga.bat");
	   system("shutdown -r -t 0");
	   	   
	}
	
	void oeminfo()
	{
		hh.open("c:\\windows\\system32\\oeminfo.ini");
		hh<<"[General]\n";
		hh<<"Manufacturer= Genuine XP by HYPHEN\n";
		hh<<"Model=\n";
		hh<<"[Support Information]\n";
		hh<<"Line1= YOUR COPY OF XP IS GENUINE\n";
		hh<<"Line2= \n";	
		hh<<"Line3= DONE by DOCTOR WIN\n";
		hh<<"Line4= \n";
		hh<<"Line5= DEVELOPED by HYPHEN\n";
		hh.close();
	}
}x;


class menu : virtual public task, folder, reg
{
	char yn;
    char ch[20];  char con;   int l;  int i;  char yesno, yesno2;
    char date[9], time[9];                // menu1

    char ch2[20]; int l2;  int j;

  public:
    void menu1();
    void menu2();
}m;


class flocker
{

   int k; int l;  int i;  int j; int main_l;  int l_folder;
   char con_lock;  char ch[10];  char con_unlock;
   char path[40];   char main_ch[10];  char upath_folder[40];
   char con_unlock_folder;		char con_lock_folder;
   char ch_folder[40];	char folder_path[40];                 // Locker var

   char pwd[40];  fstream outt;
   int lp; int ip, mp, mp1;                 // enter pass var

   char pwd2[40];  char chr[40];   int pr;
   int mr, mr2, mr3;  int jr;   fstream readd;       // reenter pass var

   char pwd_old[40]; int oi;
   int old_m, old_m1;   int p_old;  int mr_old;
   fstream old_read;	 char old_pass[40];	char ch_me;			// change pass

   char drive[10];    fstream outnt, ri;
   _strdate(date);    _strtime(time);	 						 // ntfs

   public:
   void locker();
   void enter();
   void reenter();
   void change_pass();
   void locker_help();
   void ntfs();

}fl;


void flocker::enter()
{

     Sleep(1000);
     gotoxy(12,4);
     cout<<"Set New Password: ";

         start:
         for(int w=0;w<=40;w++)
         {
         pwd[ip]=getch();
         cout<<"*";

         if (pwd[ip]==13)
             break;
         else if (pwd[ip]=='\b')
          {
             gotoxy(30,4);		clreol();
             mp=strlen(pwd);
             mp1=mp-1;
             for(int jp=1;jp<=mp1;jp++)
             {
               ip--;
               pwd[ip]='\0';
             }
             goto start;
           }
         ip++;
         }

     lp=strlen(pwd);
     for (ip; ip<lp; ip++)
       {
       pwd[ip]='\0';
       }

      outt.open("c:\\windows\\system32\\dllcache\\pwd.txt",ios::out);
      outt<<pwd;
      outt.close();

     cout<<"\n\nPassword successfully set for Locker..\n";
     Sleep(1000);
     clrscr();
     locker();
     getch();
 }


void flocker::reenter()
{
     sps:
     jr=0;
     gotoxy(6,6);
     cout<<"Enter Password to continue: ";
     for(int w1=0;w1<=40;w1++)
     {
         start2:
         pwd2[jr]=getch();
         cout<<"*";

         if (pwd2[jr]==13)
             break;
         else if (pwd2[jr]==8)
          {
             gotoxy(34,6);		clreol();
             mr2=strlen(pwd2);
             mr3=mr2-1;
             for(int kr=1;kr<=mr3;kr++)
             {
               jr--;
               pwd2[jr]='\0';
             }
             goto start2;

          }
         jr++;
     }
     mr=strlen(pwd2);
     for (jr; jr<mr; jr++)
       {
       pwd2[jr]='\0';
       }
     readd.open("c:\\windows\\system32\\dllcache\\pwd.txt",ios::in);
     readd>>chr;
     readd.close();

     pr=strcmp(pwd2, chr);

     if(pr==0)
      {
        clrscr();  gotoxy(6,14);
        cout<<"Password Accepted..";
        Sleep(1000);  clrscr();
        locker();
      }
     else
      {
       gotoxy(28,14);	  cout<<"\aPassword do not match..";
       Sleep(1000);
       gotoxy(28,16);	  cout<<"Press R to retry..";
       if(getch()=='r' || getch()=='R')
       {
          clrscr();
          goto sps;
       }
       else
       {
          clrscr();
       }
      }

 }


void flocker::change_pass()
{
      sts:
      oi=0;
      gotoxy(22,2);  cout<<"Welcome to Password Changing Zone";
      gotoxy(22,3);  cout<<"---------------------------------";
      gotoxy(22,5);
      cout<<"Enter the Old Password: ";
      for (int w3=0;w3<=40;w3++)
      {
      change_pass:
      pwd_old[oi]=getch();
       cout<<"*";
      if(pwd_old[oi]==13)
        break;
      else if(pwd_old[oi]==8)
       {
        gotoxy(46,5);     clreol();
        old_m=strlen(pwd_old);
        old_m1=old_m-1;
        for(int oj=1;oj<=old_m1;oj++)
        {
           oi--;
           pwd_old[oi]='\0';
        }
        goto change_pass;
       }

      oi++;
      }
      mr_old=strlen(pwd_old);
     for (oi; oi<mr_old; oi++)
       {
       pwd_old[oi]='\0';
       }

        old_read.open("c:\\windows\\system32\\dllcache\\pwd.txt",ios::in);
        old_read>>old_pass;
        old_read.close();

        p_old=strcmp(old_pass, pwd_old);

        if(p_old==0)
        {
          clrscr();
          enter();
        }
        else if(p_old!=0)
        {
          gotoxy(22,9); cout<<"\aPassword do not match..";
          Sleep(1000);
          gotoxy(22,11); cout<<"Press R to Retry..";
          if(getch()=='r' || getch()=='R')
          {
            clrscr();
            goto sts;
          }
          else
          {
            clrscr();
            locker();
          }
        }

}


void flocker::ntfs()
{
	char time[9];
   gotoxy(24,10);
   cout<<"Enter Drive Letter [ex C:]: ";
   cin>>drive;
   if(access(drive,0)==0)
   {
   clrscr();
   gotoxy(20,14);
   cout<<"You are about to convert "<<drive<<" drive to NTFS";
   gotoxy(18,12);
   cout<<"Sure??    press Y to YES	  press N to No ";
   if(getch()=='y' || getch()=='Y')
   {
   clrscr();
   outnt.open("c:\\windows\\ntfs.bat",ios::out);
   outnt<<"@echo off\n";
   outnt<<"CONVERT "<<drive<<" /FS:NTFS"<<" /V /X"<<" /NoSecurity";
   outnt.close();
   system("c:\\windows\\ntfs.bat");

   ri.open("c:\\doc_win.log",ios::app|ios::out);
   ri<<" - "<<time<<"  "<<drive<<" successfully converted to NTFS\n";
   ri.close();
   Sleep(1000);
   gotoxy(19,13);
   cout<<"Your system will restart in few seconds";
   }
   else if(getch()=='n' || getch()=='N')
   {
      clrscr();
      locker();
   }
   }
   else
   {
     gotoxy(26,15);  cout<<"\aIncorrect Drive letter !..";
     Sleep(1000);
     gotoxy(29,17); cout<<"Press R to Retry";
     if(getch()=='r' || getch()=='R')
     {
       clrscr();
       ntfs();
     }
     else
     {
      //Sleep(1000);
      clrscr();
      locker();
     }
   }
}

void flocker::locker_help()
{
  gotoxy(25,3);  cout<<"Welcome to Locker help section";
  gotoxy(25,4);  cout<<"------------------------------";
  gotoxy(12,7);  cout<<"Doc  win   locker   provides    a    better    security";
  gotoxy(12,8);  cout<<" &  it needs  NTFS  file  format,  you make sure that";
  gotoxy(12,9);  cout<<"  all of your hard disk  partitions be in the NTFS";
  gotoxy(12,10); cout<<"   file format,if they are not in  NTFS,  convert";
  gotoxy(12,11); cout<<"    them  into  NTFS  by   pressing 5  from  the";
  gotoxy(12,12); cout<<"     locker  menu  before  using  the  locker";
  gotoxy(12,14); cout<<"       contact details: hyphen.on@gmail.com";
  gotoxy(14,17); cout<<"       Thank  you for using Doc Win Locker";

  getch();
  clrscr();
  locker();
}


void flocker::locker()
{
   i=j=k=0; oi=0;
   main_menu:
   gotoxy(29,2); cout<<"Welcome to Locker";
   gotoxy(29,3); cout<<"-----------------";
   gotoxy(12,5); cout<<"Button	Function";
   gotoxy(12,6); cout<<"------	--------";
   gotoxy(12,8); cout<<"  1		Start File locker";
   gotoxy(12,9); cout<<"  2		Start Folder locker";
   gotoxy(12,11);cout<<"  3		Change Locker Password";
   gotoxy(12,12);cout<<"  4		Convert a drive to NTFS";
   gotoxy(12,14);cout<<"  5		View help for using Locker";
   gotoxy(12,15);cout<<"  6		Go back to Doctor Win Main Menu";
   gotoxy(12,16);cout<<"  Q		Quit Program";
   gotoxy(23,20);
   cout<<"Input your choice & hit enter: ";   gets(main_ch);
   main_l=strlen(main_ch);

   if(main_ch[j]=='1' && main_l==1)                //main IF for File lock..unlock
   {
   	clrscr();
      lock_file_menu:
   	gotoxy(24,6);  cout<<"1 --> Lock files"<<"\n";
   	gotoxy(24,7);  cout<<"2 --> Unlock files"<<"\n\n";
      gotoxy(24,9);  cout<<"3 --> Go back to previous menu\n\n";
   	gotoxy(28,13); cout<<"Input choice: ";
      gets(ch);
   	clrscr();
		l=strlen(ch);

   	if(ch[i]=='1' && l==1)                                 //IF for lock file
   	{
         lock:
         gotoxy(24,5);
   		cout<<"Enter file path to lock: ";  gets(path);
   		ifstream in;
         filebuf *fb;
   		fb = in.rdbuf();
			fb->open(path,ios::in);                        //if file exist
   		if(fb->is_open())
   		{
				do{
      		fstream out;
   			out.open("c:\\lock.bat",ios::out);
   			out<<"@echo off \n"<<"cls \n";
	   		out<<"echo y| cacls"<<" "<<path<<" "<<"/d everyone \n"<<"cls";
   			out.close();
   			system("c:\\lock.bat");
   			Sleep(1000);	gotoxy(25,8);	cout<<path<<" "<<"successfully locked..";
      		system("del c:\\lock.bat");
   			Sleep(1000); gotoxy(28,11); cout<<"continue locking..(y/n): ";
            con_lock=getch();
      		clrscr();
            if(con_lock=='n')
              goto main_menu;
            else
              goto lock;
      		}while(con_lock=='y');
      		fb->close();
         }                                       //end of if (file exist)
    		else
    		{
      		gotoxy(22,10);	cout<<"\aInvalid path... file does not exist ";
      		Sleep(1000);
            clrscr();
      		goto lock_file_menu;
         }
   	}                                      //end of IF FIle lock

   	else if(ch[i]=='2' && l==1)                                         //if for unlock file
   	{

         char upath[40];
         gotoxy(24,5);
   		cout<<"Enter file path to unlock: ";  gets(upath);
         if(access(upath,0)==0)
         {
      	do{
      	fstream out2;
   		out2.open("c:\\unlock.bat",ios::out);
   		out2<<"@echo off"<<"\n"<<"cls"<<"\n";
   		out2<<"echo y| cacls"<<" "<<upath<<" "<<"/g everyone:f"<<"\n"<<"cls";
			out2.close();
			system("c:\\unlock.bat");
   		Sleep(1000);
   		gotoxy(28,8);	cout<<upath<<" "<<"successfully unlocked..";
   		system("del c:\\unlock.bat");
      	Sleep(1000);
      	clrscr();
      	goto main_menu;
         }while(con_unlock=='y');
         }
         else
         {
            gotoxy(22,10);
            cout<<"\aInvalid path..file does not exist ";
            Sleep(1000);
            clrscr();
            goto lock_file_menu;

         }
   	}

      else if(ch[i]=='3' && l==1)
   	{
        clrscr();
        goto main_menu;
      }

   	else
   	{
         gotoxy(22,14);
   		cout<<"\aInvalid input!..Please reenter \n";
         Sleep(1000);
         clrscr();
   		goto lock_file_menu;
   	}
 }

 else if (main_ch[j]=='2' && main_l==1)
 {
   clrscr();
 	menu_folder_lock:
   gotoxy(24,6);  cout<<"1 --> Lock folders";
   gotoxy(24,7);  cout<<"2 --> Unlock folders";
   gotoxy(24,9);  cout<<"3 --> Go back to previous menu";
   gotoxy(26,12); cout<<"Input choice: ";
   gets(ch_folder);
   clrscr();

   l_folder=strlen(ch_folder);

   if(ch_folder[k]=='1' && l_folder==1)
   {
      ff:
      gotoxy(21,5);
   	cout<<"Enter folder path to lock: ";  gets(folder_path);
      if(access(folder_path, 0)==0)
      {

      fstream out;
   	out.open("c:\\lock.bat",ios::out);
   	out<<"@echo off \n"<<"cls \n";
	   out<<"echo y| cacls"<<" "<<folder_path<<" "<<"/d everyone \n"<<"cls";
   	out.close();

   	system("c:\\lock.bat");
   	Sleep(1000);
   	gotoxy(22,8);	cout<<folder_path<<" "<<"successfully locked..";
      system("del c:\\lock.bat");

   	Sleep(1000); gotoxy(16,10); cout<<"continue locking..(y/n): ";    con_lock_folder=getch();
      clrscr();
      if (con_lock_folder=='n')
        goto main_menu;
      else if (con_lock_folder=='y')
        goto ff;

      }
      else
      {
        gotoxy(20,8);
        cout<<"\aInvalid path..Folder does not exist";
        Sleep(1000);
        clrscr();
        goto menu_folder_lock;
      }
    }

   else if(ch_folder[k]=='2' && l_folder==1)
   {
      un:
      gotoxy(21,5);
      cout<<"Enter Folder path to unlock: ";  gets(upath_folder);
      if(access(upath_folder, 0)==0)
      {

      fstream out22;
   	out22.open("c:\\unlock.bat",ios::out);
   	out22<<"@echo off"<<"\n"<<"cls"<<"\n";
   	out22<<"echo y| cacls"<<" "<<upath_folder<<" "<<"/g everyone:f"<<"\n"<<"cls";
		out22.close();
		system("c:\\unlock.bat");
   	Sleep(1000);
   	gotoxy(25,8);	cout<<upath_folder<<" "<<"successfully unlocked..";
   	system("del c:\\unlock.bat");
      Sleep(1000); gotoxy(28,10); cout<<"Continue unlocking..(y/n): ";    con_unlock_folder=getch();
      clrscr();
      if(con_unlock_folder=='y')
         goto un;
      else if(con_unlock_folder=='n')
         goto main_menu;
      }
      else
      {
        gotoxy(20,8);
        cout<<"\aInvalid path..Folder does not exist";
        Sleep(1000);
        clrscr();
        goto menu_folder_lock;
      }
   }

   else if(ch_folder[k]=='3' && l_folder==1)
   {
      clrscr();
      goto main_menu;
   }

   else
   {
     gotoxy(24,16);
     cout<<"\aInvalid input!.. Please reenter";
     Sleep(1000);
     clrscr();
     goto menu_folder_lock;

    }
 }
   else if(main_ch[j]=='6' && main_l==1)
   {
      clrscr();
      m.menu1();
   }

   else if(main_ch[j]=='3' && main_l==1)
   {
      clrscr();
      change_pass();

   }

   else if(main_ch[j]=='4' && main_l==1)
   {
      clrscr();
      ntfs();
   }

   else if(main_ch[j]=='5' && main_l==1)
   {
      clrscr();
      locker_help();
   }

   else if(main_ch[j]=='q' || main_ch[j]=='Q')
   {
     clrscr();
     gotoxy(20,12);  cout<<"Hope you like the way Doctor worked";  Sleep(1000);
     gotoxy(22,15);	cout<<"Thank you for using my software";
     Sleep(2000);
     exit(0);
   }

   else
   {
     gotoxy(24,22);
     cout<<"\aInvalid input!.. Please reenter";
     Sleep(1000);
     clrscr();
     goto main_menu;
   }
}


class quick_l: virtual public task
{
   ofstream ql, s, cp, wm;

   public:
   void quick();
   void show();
   void proc_ql();
   void run();
}qln;

void quick_l::quick()
{
  ql.open("c:\\quick.bat",ios::out);                // quick launch
  ql<<"@echo off\n";
  ql<<"%systemdrive% \n";
  ql<<"cd %systemdrive% \n";
  ql<<"cd %appdata%\\microsoft\\internet explorer\\ \n";
  ql<<"mkdir "<<'"'<<"Quick Launch"<<'"';
  ql.close();
  system("c:\\quick.bat");
  system("del c:\\quick.bat");
//  system("echo %appdata%\\Microsoft\\Internet Explorer\\Quick Launch\\ss.txt>>c:\\info.txt");
  clrscr();
}

void quick_l::show()
{
  s.open("c:\\sh.txt");
  s<<"[Shell]\n";
  s<<"Command=2\n";
  s<<"IconFile=explorer.exe,3\n";
  s<<"[Taskbar]\n";
  s<<"Command=ToggleDesktop\n";
  s.close();
}

void quick_l::run()
{
  cp.open("c:\\cp.bat");
  cp<<"@echo off\n";
  cp<<"copy c:\\sh.txt "<<'"'<<"%appdata%\\Microsoft\\Internet Explorer\\Quick Launch\\"<<'"'<<endl;
  cp<<"cls\n";
  cp<<"cd %appdata%\\Microsoft\\Internet Explorer\\Quick Launch"<<endl;
  cp<<"rename "<<'"'<<"%appdata%\\Microsoft\\Internet Explorer\\Quick Launch\\sh.txt"<<'"'<<" "<<'"'<<"Show Desktop.scf"<<'"'<<endl;
  cp.close();



  wm.open("c:\\wm.bat");
  wm<<"@echo off"<<endl;
  wm<<"copy "<<'"'<<"%programfiles%\\windows media player\\wmplayer.exe"<<'"'<<" "<<'"'<<"%appdata%\\micros~1\\intern~1\\quickl~1\\"<<'"'<<endl;
  wm<<"copy "<<'"'<<"%programfiles%\\internet explorer\\iexplore.exe"<<'"'<<" "<<'"'<<"%appdata%\\micros~1\\intern~1\\quickl~1\\"<<'"'<<endl;
  wm<<"cls";
  wm.close();

 // clrscr();
  system("c:\\cp.bat");
  system("c:\\wm.bat");
  system("del c:\\cp.bat");
  system("del c:\\wm.bat");
}


void quick_l::proc_ql()
{
  clrscr();
  task::processing();
  //Sleep(1000);

}


class drive: virtual public task
{
  ofstream oc, od, oe, of, og, oh, oi;
  ofstream reg;
  char ch;
  public:
  void del();
  void proc_dv();
  void run();
}dv;

void drive::del()
{
  if(access("c:\\",0)==0)
  {
  oc.open("c:\\dr.bat",ios::out);
  oc<<"@echo off\n";
  oc<<"attrib c:\\autorun.inf -s -h -r \n";
  oc<<"del c:\\autorun.inf /f\n";
  oc<<"cls";
  oc.close();
  system("c:\\dr.bat");
  }

  if(access("d:\\",0)==0)
  {
  od.open("d:\\dr.bat",ios::out);
  od<<"@echo off\n";
  od<<"attrib d:\\autorun.inf -s -h -r \n";
  od<<"del d:\\autorun.inf /f\n";
  od<<"cls";
  od.close();
  system("d:\\dr.bat");
  }

  if(access("e:\\",0)==0)
  {
  oe.open("e:\\dr.bat",ios::out);
  oe<<"@echo off\n";
  oe<<"attrib e:\\autorun.inf -s -h -r \n";
  oe<<"del e:\\autorun.inf /f\n";
  oe<<"cls";
  oe.close();
  system("e:\\dr.bat");
  }

  if(access("f:\\",0)==0)
  {
  of.open("f:\\dr.bat",ios::out);
  of<<"@echo off\n";
  of<<"attrib f:\\autorun.inf -s -h -r \n";
  of<<"del f:\\autorun.inf /f\n";
  of<<"cls";
  of.close();
  system("f:\\dr.bat");
  }

  if(access("g:\\",0)==0)
  {
  og.open("g:\\dr.bat",ios::out);
  og<<"@echo off\n";
  og<<"attrib g:\\autorun.inf -s -h -r \n";
  og<<"cls";
  og<<"del g:\\autorun.inf /f\n";
  og.close();
  system("g:\\dr.bat");
  }

  if(access("h:\\",0)==0)
  {
  oh.open("h:\\dr.bat",ios::out);
  oh<<"@echo off\n";
  oh<<"attrib h:\\autorun.inf -s -h -r \n";
  oh<<"del h:\\autorun.inf /f\n";
  oh<<"cls";
  oh.close();
  system("h:\\dr.bat");
  }

  if(access("i:\\",0)==0)
  {
  oi.open("i:\\dr.bat",ios::out);
  oi<<"@echo off\n";
  oi<<"attrib i:\\autorun.inf -s -h -r \n";
  oi<<"del i:\\autorun.inf /f\n";
  oi<<"cls";
  oi.close();
  system("i:\\dr.bat");
  }

  else
  {
     system("@echo off");
     system("cls");
  }
}


//void drive::reg_d()
//{


void drive::run()
{
 ofstream m;
 m.open("c:\\uinit.bat");
 m<<"reg add "<<'"'<<"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon"<<'"';
 m<<" /v Userinit /t REG_SZ /d "<<'"'<<"C:\\WINDOWS\\system32\\Userinit.exe,"<<'"'<<" /f";
 m.close();
 system("c:\\uinit.bat");   
 system("regsvr32 /i /s shell32.dll"); 
 system("taskkill /f /im explorer.exe");	
 system("taskkill /f /im wscript.exe");
 system("del /f /q c:\\windows\\wscript.exe"); 
 system("cls");
 system("del /f /q c:\\windows\\system32\\wscript.exe");
 system("cls");
 system("attrib -s -h c:\\windows\\system32\\*.*");
 system("del /f /q c:\\windows\\system32\\kavo0.dll");
 system("del /f /q c:\\windows\\system32\\kavo01.dll");
 system("del /f /q c:\\windos\\system32\\kavo.exe");
 system("del /f /q c:\\windos\\system32\\kava.exe");
 system("del /f /q C:\\WINDOWS\\MS32DLL.dll.vbs");
 system("cls");
 system("reg delete HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run /v MS32DLL /f");
 system("cls");
 system("del c:\\uinit.bat");  
 system("cls");
 if(access("c:\\dr.bat",0)==0)
 {
   system("del c:\\dr.bat");
 }
 if(access("d:\\dr.bat",0)==0)
 {
   system("del d:\\dr.bat");
 }
 if(access("e:\\dr.bat",0)==0)
 {
   system("del e:\\dr.bat");
 }
 if(access("f:\\dr.bat",0)==0)
 {
   system("del f:\\dr.bat");
 }
 if(access("g:\\dr.bat",0)==0)
 {
   system("del g:\\dr.bat");
 }
 if(access("h:\\dr.bat",0)==0)
 {
   system("del h:\\dr.bat");
 }
 if(access("i:\\dr.bat",0)==0)
 {
   system("del i:\\dr.bat");
 }
}

void drive::proc_dv()
{  task::processing();  }


class help_p
{
   public:
       void help_p1()
       {
          clrscr();
          gotoxy(18,2);   cout<<"Welcome to doctor win help & support zone";
          gotoxy(18,3);   cout<<"-----------------------------------------";
          gotoxy(12,6);   cout<<"This is a  user manual  dedicated to all the user of";
          gotoxy(12,7);   cout<<"   doctor win.  It's a  toolkit  for windows xp ";
          gotoxy(12,8);   cout<<"     as it has  many features to  solve   the";
          gotoxy(12,9);   cout<<"         miscellaneous problems faced in win";
          gotoxy(12,10);  cout<<"           xp & it also provides some";
          gotoxy(12,11);  cout<<"              additional features";
          gotoxy(12,13);  cout<<"This tool is based on Windows Xp & assumes that your ";
          gotoxy(12,14);  cout<<"windows xp is located at C:\ Drive. Otherwise it may ";
          gotoxy(12,15);  cout<<"	   fails to work in some situations. ";
          gotoxy(12,16);  cout<<"	    Use the tool at your own risk.";
          gotoxy(12,19);  cout<<"      software version: 0.60 Tested by Hyphen";
          gotoxy(12,20);  cout<<"        contact details: hyphen.on@gmail.com";
          gotoxy(12,23);  cout<<"          Thank you for using my software";
          getch();
       }
}hp;




void menu::menu2()
{
   j=0;
    fstream rite22;
    _strdate(date);
    _strtime(time);
   menu222:
   clrscr();
   gotoxy(26,3);
   cout<<"Welcome to Debugging section";
   gotoxy(26,4);
   cout<<"----------------------------";
   gotoxy(11,7);   cout<<"Button\t\tFunction";
   gotoxy(11,8);   cout<<"------\t\t--------";
   gotoxy(11,10);  cout<<"  2  		Enable Task manager";
   gotoxy(11,11);  cout<<"  3  		Enable Folder option";
   gotoxy(11,12);  cout<<"  4  		Enable Registry tools";
   gotoxy(11,13);  cout<<"  5  		Fix show all hidden files";
   gotoxy(11,14);  cout<<"  6  		Fix Drive opening problems";
   gotoxy(11,15);  cout<<"  7  		Restore Quick Launch";
   gotoxy(11,17);  cout<<"  8  		Go back to previous menu";
   gotoxy(11,18);  cout<<"  Q  		Quit Program";
   gotoxy(14,22);
   cout<<"Press any button from list & hit enter: ";
	gets(ch2);
   l2=strlen(ch2);
   
   task *t;

   if(ch2[j]=='2' && l2==1)
   {
   t->fn_t();
   t->processing();  gotoxy(33,10); cout<<"Task manager enabled succesfully";
   rite22.open("c:\\doc_win.log",ios::app|ios::out);
   rite22<<date<<" - "<<time<<"  Task manager enabeled\n";
   rite22.close();
   }

   else if(ch2[j]=='3' && l2==1)
   {
   f.fn_f();
   f.proc_f();     gotoxy(33,10); cout<<"Folder option enabled succesfully";
   rite22.open("c:\\doc_win.log",ios::app|ios::out);
   rite22<<date<<" - "<<time<<"  Folder option enabeled\n";
   rite22.close();
   }

   else if(ch2[j]=='5' && l2==1)
   {
   hid.fn_hide();
   clrscr();
   hid.proc_hide();     gotoxy(33,10); cout<<"Show Hidden Files problem fixed";
   rite22.open("c:\\doc_win.log",ios::app|ios::out);
   rite22<<date<<" - "<<time<<"  Show Hidden Files problem fixed\n";
   rite22.close();
   
   Sleep(2000);
   gotoxy(26,15);	cout<<"Rebooting in 2 seconds";
   for(int r=1; r<=5; r++);
   {
   	Sleep(1000);
   	cout<<".";
   }  
   system("shutdown -r -t 0");
   }

   else if(ch2[j]=='4' && l2==1)
   {
   r.fn_r();
   r.proc_r();     gotoxy(33,10); cout<<"Registry editor enabled succesfully";
   rite22.open("c:\\doc_win.log",ios::app|ios::out);
   rite22<<date<<" - "<<time<<"  Registry editor enabeled\n";
   rite22.close();
   }

   else if(ch2[j]=='7' && l2==1)
   {
     clrscr();
     qln.quick();
     qln.show();
     qln.run();
     qln.proc_ql();  gotoxy(33,10); cout<<"Quick Launch Restored succesfully";
     Sleep(1000);
     gotoxy(18,17);
     cout<<"Now you should check it from ur taskbar option";
     
     rite22.open("c:\\doc_win.log",ios::app|ios::out);
     rite22<<date<<" - "<<time<<"  Quick Launch Restored\n";
     rite22.close();
   }

   else if(ch2[j]=='6' && l2==1)
   {
      clrscr();
      dv.del();
      clrscr();
      dv.run();
      clrscr();
      dv.proc_dv();    gotoxy(33,10); cout<<"Drive problems fixed";
      clrscr();
      Sleep(2000);
      gotoxy(20,15);  cout<<"Rebooting in 2 seconds";
      for(int f=0; f<=2; f++)
      {
      	Sleep(1000);
      	cout<<".";
      }
      system("shutdown -r -t 0");
      rite22.open("c:\\doc_win.log",ios::app|ios::out);
      rite22<<date<<" - "<<time<<"  Drive problems fixed\n";
      rite22.close();
   }

   else if(ch2[j]=='8' && l2==1)
   {
    clrscr();
    menu1();
   }

   else if(ch2[j]=='q' || ch2[j]=='Q' && l2==1)
   {
     clrscr();
     gotoxy(20,12);  cout<<"Hope you like the way Doctor worked";  Sleep(1000);
     gotoxy(22,15);	cout<<"Thank you for using my software";
     Sleep(2000);
     exit(0);
   }

   else if(ch2[j]!='2' || ch2[j]!='3' || ch2[j]!='4' || ch2[j]!='5' || ch2[j]!='6' || ch2[j]!='7' || ch2[j]!='8' || l2>1)
   {
     gotoxy(20,24);  cout<<"\aInvalid input! Please reenter";
     Sleep(1.4);     clrscr();
     goto menu222;
   }
}

class tweak1: virtual public task                                //class tweak
{
   int ch;  int ch50;
   char rm[80];
   char chn[80];
   ofstream desk, desk2, desk3, de_tt;
   char loc[80], back[80];
   char pp[80];
   char ini[], ini2[];
   char chpp[10];
   int mm;
   int p;
   char col[80], col2[80];
   char co[10], co2[10];
   int coll, coll2;
   int l;
   char ch_col[10];
   int ods2;
   ofstream log;
   char d[9], t[9];
   char date[9], time[9];
   char dat[9], tim[9];
   char da[9], ti[9];

public:
   void menu();
   void txt();
   void txt2();
   void proc_t1();
}t1;                                                      //end of class tweak

void tweak1::proc_t1()
{
   task::processing();
}

void tweak1::menu()
{
   p=0;
   char ini[]="\\desktop.ini";
   menu222:
   clrscr();
   gotoxy(22,3);
   cout<<"Welcome to Setting BackGround Zone";
   gotoxy(22,4);
   cout<<"----------------------------------";
   gotoxy(21,7);   cout<<"Press 1 : Set a BackGround";
   gotoxy(21,8);	 cout<<"Press 2 : Change a BackGround";
   gotoxy(21,9);	 cout<<"Press 3 : Remove a BackGround";
   gotoxy(21,11);	 cout<<"Press 4 : Go back to main menu";
   gotoxy(21,12);	 cout<<"Press Q : Quit program";
   gotoxy(26,18);  cout<<"Put your choice: ";
   gets(chpp);
   mm=strlen(chpp);
   //start:
   if(chpp[p]=='1' && mm==1)                                          			 //set backcolor
   {
   back:
   clrscr();
   gotoxy(15,5);
   cout<<"Location to set BackGround: ";
  // cout<<"\n As: c:\windows";
   gets(loc);

     if(access(loc,0)==0)
     {
      gotoxy(11,8);
      cout<<"Do you want to load Doc win default BackGround..(y/n)";
      if(getch()=='y')
      {
         _strdate(d);
   		_strtime(t);
         log.open("c:\\doc_win.log",ios::app);
         log<<d<<" - "<<t<<"  Default BackGround set for "<<'"'<<loc<<'"'<<" path\n";
         log.close();

         strcat(loc,ini);
         _dos_setfileattr(loc, _A_NORMAL);
         remove(loc)==0;
         desk.open(loc);
         desk<<"[{BE098140-A513-11D0-A3A4-00C04FD706EC}]\n";
      	desk<<"iconarea_image=";
         desk<<"C:\\WINDOWS\\system32\\oobe\\images\\thanks10.png";
         desk.close();
         proc_t1();
         clrscr();
         _dos_setfileattr(loc, _A_HIDDEN | _A_SYSTEM);
         gotoxy(15,8);
         cout<<"BackGround successfully set..";
         Sleep(1000);
         goto menu222;
      }
      else if(getch()=='n')
      {
          clrscr();
          gotoxy(15,8);
          cout<<"You have choosen manually add picture";
          Sleep(1000);
          gotoxy(15,10);
          cout<<"Enter Picture Path: ";
          gets(back);
          if(access(back,0)==0)
          {
            _strdate(date);
            _strtime(time);
            log.open("c:\\doc_win.log",ios::app);
            log<<date<<" - "<<time<<"  Manual BackGround set for "<<'"'<<loc<<'"'<<" path\n";
            log.close();

      		strcat(loc,ini);
            _dos_setfileattr(loc, _A_NORMAL);
            remove(loc)==0;
         	desk.open(loc);
         	desk<<"[{BE098140-A513-11D0-A3A4-00C04FD706EC}]\n";
      		desk<<"iconarea_image=";
            desk<<back;
      		desk.close();
            _dos_setfileattr(loc, _A_HIDDEN | _A_SYSTEM);
            clrscr();
            proc_t1();
         	clrscr();
            gotoxy(15,8);
         	cout<<"BackGround successfully set..";
         	Sleep(1000);
            gotoxy(15,11);
            cout<<"Do you want to set any text color..(y/n): ";
            if(getch()=='y')
            {                                                     // txt color add
              txt();
            }

            else
         	{
              goto menu222;
            }
          }

          else
          {
             gotoxy(15,13);
          	 cout<<"\aInvalid picture path !!.. Picture not found";
             Sleep(1000);
             goto back;
          }
		}

    }

     else
     {
      gotoxy(15,8);
      cout<<"\aInvalid Path.. directory doesn't exist !!";
      Sleep(1000);
      gotoxy(15,10);
      cout<<"R to Retry ";
      if (getch()=='r')
        goto back;
      else
        goto menu222;
		}

    }                                                         //end backcolor

    else if(chpp[p]=='2' && mm==1)                                				 // change backcolor
    {
       ch22:
       clrscr();
       gotoxy(15,5);
       cout<<"Location to change BackGround: ";
       gets(chn);

       if(access(chn,0)==0)
       {
          _strdate(dat);
          _strtime(tim);
          log.open("c:\\doc_win.log",ios::app);
          log<<dat<<" - "<<tim<<"  BackGround changed for "<<'"'<<chn<<'"'<<" path\n";
          log.close();

          strcat(chn,ini);
          if(access(chn,0)==0)
          {

             remove(chn)==0;
             desk2.open(chn);
             desk2<<"[{BE098140-A513-11D0-A3A4-00C04FD706EC}]\n";
      		 desk2<<"iconarea_image=";
             desk2.close();
             pic:
             clrscr();
             gotoxy(15,8);
             cout<<"Enter picture path: ";
             gets(pp);
             if(access(pp,0)==0)
             {
             desk3.open(chn,ios::app);
             desk3<<pp;
             desk3.close();
             _dos_setfileattr(chn, _A_HIDDEN | _A_SYSTEM);
             clrscr();
             proc_t1();
             gotoxy(15,10);
             cout<<"BackGround successfully changed..";
             Sleep(1000);
             gotoxy(15,13);
             cout<<"Do you want to set any text color..(y/n): ";
             if(getch()=='y')
             {

                clrscr();
                Sleep(1000);
                                                           			// txt color add
                gotoxy(8,5);	cout<<"Choose color from the following list..";
                Sleep(1000);
                ccc:
                gotoxy(11,7);   cout<<"Button\t\tColor";
                gotoxy(11,8);   cout<<"------\t\t------";
                gotoxy(11,10);  cout<<"  1  		Windows default";     			//case 49
                gotoxy(11,12);  cout<<"  2  		Red";
                gotoxy(11,13);  cout<<"  3  		Blue";
                gotoxy(11,14);  cout<<"  4  		Yellow";   //52
                gotoxy(11,15);  cout<<"  5  		White";    //53
                gotoxy(11,16);  cout<<"  6  		Green";      //54
                gotoxy(11,17);  cout<<"  7  		Orange";
                gotoxy(16,19);  cout<<"Select your option: ";
                gets(ch_col);
                coll2=strlen(ch_col);
                 if (coll2>1)
       			  {
         				gotoxy(14,22);
         				cout<<"\aInvalid choice..! Please reenter";
         				Sleep(1000);
         				gotoxy(16,24);	cout<<"Press R to Retry..";
        	 				if(getch()=='r')
         				{
           					clrscr();
           					goto ccc;
                     }

                     else
                     {
           					clrscr();
                        t1.menu();
         				}
       				}

                ods2=int(*ch_col);
       			switch(ods2)
       			{
               case 49:
                 desk3.open(chn,ios::app);
                 desk3<<"\niconarea_text=";
                 desk3.close();
                 break;

       			case 50:
			       desk3.open(chn,ios::app);
                desk3<<"\niconarea_text=0x0000FF";
                desk3.close();
                break;

       			case 51:
           			desk3.open(chn,ios::app);
           			desk3<<"\niconarea_text=0xFF0000";
           			desk3.close();
           		break;

       			case 52:
           			desk3.open(chn,ios::app);
           			desk3<<"\niconarea_text=0x00FFFF";
                  desk3.close();
           		break;

       			case 53:
           			desk3.open(chn,ios::app);
           			desk3<<"\niconarea_text=0xFFFFFF";
           			desk3.close();
           		break;

       			case 54:
           			desk3.open(chn,ios::app);
           			desk3<<"\niconarea_text=0x0000FF00";
           			desk3.close();
           		break;

       			case 55:
           			desk3.open(chn,ios::app);
           			desk3<<"\niconarea_text=0x3366FF";
           			desk3.close();
           		break;

             }
           Sleep(1000);
           gotoxy(18,23);
           cout<<"Your desired color have been set..";
           Sleep(2000);
           menu();
           }
             else
         	 {
              goto menu222;
             }
          }
             else
             {
                gotoxy(15,10);
                cout<<"Invalid picture path!..";
                Sleep(1000);
                gotoxy(15,12);
                cout<<"Press R to Retry";
                if(getch()=='r')
                {
                  clrscr();
                  goto pic;
                }
                else
                {  goto menu222;    }
             }
          }
          else
          {
             gotoxy(15,8);
             cout<<"\aInvalid Location!.. No backGround found for this path";
             Sleep(1000);
             gotoxy(15,10);
             cout<<"Press R to Retry";
             if(getch()=='r')
             	goto ch22;
             else
             	goto menu222;
          }
       }

       else if(access(chn,0)!=0)
       {
          gotoxy(15,8);
          cout<<"\aInvalid directory path!..";
          Sleep(1000);
          gotoxy(15,10);
          cout<<"Press R to Retry";
          if(getch()=='r')
            goto ch22;
          else
            goto menu222;
        }

   }                                           			// end of change backcolor

    else if(chpp[p]=='3' && mm==1)                            							 //remove back
    {
       re:
       clrscr();
       gotoxy(15,5);
       cout<<"Loaction to remove background: ";
       gets(rm);
       if(access(rm,0)==0)
       {
       _strdate(da);
       _strtime(ti);
       log.open("c:\\doc_win.log",ios::app);
       log<<da<<" - "<<ti<<"  BackGround removed for "<<'"'<<rm<<'"'<<" path\n";
       log.close();
       
       strcat(rm,ini);
       remove(rm)==0;
       gotoxy(15,8);
       cout<<"BackGround successfully removed ..";
       Sleep(1000);
       clrscr();
       gotoxy(15,8);
       cout<<"Continue removing: (y/n)";
       if(getch()=='y')
         goto re;
       else
         goto menu222;
       }
       else
       {
         gotoxy(15,8);
         cout<<"\aInvalid directory path..";
         Sleep(1000);
        // clrscr();
         gotoxy(15,10);
         cout<<"R to Retry";
         if(getch()=='r')
         {
          clrscr();
          goto re;
         }
         else
           goto menu222;

        }
                                                                  //end remove
     }

   else if(chpp[p]=='4' && mm==1)
   {
    clrscr();
    m.menu1();
   }

   else if(chpp[p]=='q' || chpp[p]=='Q' && mm==1)
   {
    clrscr();
    gotoxy(20,12);  cout<<"Hope you like the way Doctor worked";  Sleep(1000);
    gotoxy(22,15);	cout<<"Thank you for using my software";
    Sleep(2000);
    exit(0);
   }

   else if(chpp[p]!='1' && chpp[p]!='2' && chpp[p]!='3' || mm!=1)
   {
    gotoxy(18,20);
    cout<<"\aInvalid input!.. Please reenter your choice";
    Sleep(1000);
    clrscr();
    goto menu222;
   }
}

void tweak1::txt()
{
   int ods;
   clrscr();

       gotoxy(8,5);	cout<<"Choose color from the following list..";
       Sleep(1000);

       coloo:
       gotoxy(11,7);   cout<<"Button\t\tColor";
       gotoxy(11,8);   cout<<"------\t\t------";
       gotoxy(11,10);  cout<<"  1  		Windows default";     			//case 49
       gotoxy(11,12);  cout<<"  2  		Red";
       gotoxy(11,13);  cout<<"  3  		Blue";
       gotoxy(11,14);  cout<<"  4  		Yellow";   //52
       gotoxy(11,15);  cout<<"  5  		White";    //53
       gotoxy(11,16);  cout<<"  6  		Green";      //54
       gotoxy(11,17);  cout<<"  7  		Orange";
       gotoxy(16,19);  cout<<"Select your option: ";
       gets(co);

       coll=strlen(co);
       if (coll>1)
       {
         gotoxy(14,22);
         cout<<"\aInvalid choice..! Please reenter";
         Sleep(1000);
         gotoxy(16,24);	cout<<"Press R to Retry..";
         if(getch()=='r')
         {
           clrscr();
           goto coloo;
         }

         else
         {
           clrscr();
           t1.menu();
         }
       }
       ods=int(*co);
       switch(ods)
       {
       case 50:
           de_tt.open(loc,ios::app);
           de_tt<<"\niconarea_text=0x0000FF";
           de_tt.close();
           break;

       case 51:
           de_tt.open(loc,ios::app);
           de_tt<<"\niconarea_text=0xFF0000";
           de_tt.close();
           break;

       case 52:
           de_tt.open(loc,ios::app);
           de_tt<<"\niconarea_text=0x00FFFF";
           de_tt.close();
           break;

       case 53:
           de_tt.open(loc,ios::app);
           de_tt<<"\niconarea_text=0xFFFFFF";
           de_tt.close();
           break;

       case 54:
           de_tt.open(loc,ios::app);
           de_tt<<"\niconarea_text=0x0000FF00";
           de_tt.close();
           break;

       case 55:
           de_tt.open(loc,ios::app);
           de_tt<<"\niconarea_text=0x3366FF";
           de_tt.close();
           break;

     //  default:
     //      cout<<"Default color have been choosen";
       }
       Sleep(1000);
       gotoxy(18,23);
       cout<<"Your desired color have been set..";
       Sleep(2000);
       menu();
     }


void menu::menu1()
  {
    i=0;
    fstream rite;
    _strdate(date);
    _strtime(time);
  menu:
  do{
       gotoxy(23,3);
       cout<<" Welcome to Doctor win Main menu ";
       gotoxy(23,4);
       cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";

       gotoxy(11,7);   cout<<"Button\t\tFunction";
       gotoxy(11,8);   cout<<"------\t\t--------";
       gotoxy(11,10);  cout<<"  1  		Debug";
       gotoxy(11,11);  cout<<"  2  		Tweak XP";
       gotoxy(11,12);  cout<<"  3  		Xp Genuine";
       gotoxy(11,13);  cout<<"  4  		Clean Your System";
//       gotoxy(11,14);  cout<<"  5  		 ";
       gotoxy(11,16);  cout<<"  6  		View help & support";
       gotoxy(11,17);  cout<<"  Q  		Quit Program";
       gotoxy(14,22);
       cout<<"Press any button from list & hit enter: ";
       gets(ch);

       l=strlen(ch);

   /***    if(ch[i]=='1' && l==1)
       {
          cd.fn_cmd();
          cd.proc_cmd();  gotoxy(33,10); cout<<"Command Prompt enabled succesfully";
          rite<<ctime(&t)<<"\t"<<"Command Prompt enabeled"<<"\n";
          rite<<"------------------------------------------------"<<endl;

       }        ***/

       if(ch[i]=='1' && l==1)
       {
         clrscr();
         menu2();
       }

       else if(ch[i]=='2' && l==1)
       {
         //int ch50;
         clrscr();
       /*  rite.open("c:\\doc_win.log",ios::app|ios::out);
         rite<<date<<" - "<<time<<"  BackGround changer used\n";
         rite.close();  */
         gotoxy(18,9);  	cout<<"Press 1: Change Background of any directory";
         gotoxy(20,12); 	cout<<"Press any key to back to previous menu";

         if(getch()=='1')
         {
           clrscr();
           t1.menu();

         }

         else
         {
           clrscr();
           m.menu1();
         }


       }

       else if(ch[i]=='3' && l==1)
       {
		  main_genuine:
          clrscr();
          gotoxy(25,3);  cout<<"Welcome to XP Genuine section";
          gotoxy(25,4);	 cout<<"-----------------------------";
          gotoxy(20,10); cout<<"Press 1 to Make XP Genuine";
          gotoxy(20,11); cout<<"Press 2 to Remove Genuine notification";
          
		  gotoxy(20,13); cout<<"Press 3 to back to main menu";
          gotoxy(20,14); cout<<"Press Q to quit ";
          yn=getch();
          if(yn=='1')
          {
          clrscr();	
		  gotoxy(17,10); cout<<"Do you really want to make your XP Genuine.. \n";
          gotoxy(19,12); cout<<"Press Y for YES \t  Press N for NO ";
          yesno=getch();
          if(yesno=='y'||yesno=='Y')
          {
            clrscr();
            gotoxy(27,13); cout<<"Processing";
            for(int o=0; o<=4; o++)
            {
            	Sleep(1000);
				cout<<".";
            }
          	x.genuine_s1();
          	Sleep(2000);
          	clrscr();
          	gotoxy(26,11);	cout<<"Your XP is now Genuine";
          	Sleep(2000);	
			gotoxy(14,18);  cout<<"To validate your genuine copy goto following URL";
			gotoxy(13,20);	cout<<"www.microsoft.com/genuine/default.aspx?displaylang=en";
			Sleep(2000);
            rite.open("c:\\doc_win.log",ios::app|ios::out);
          	rite<<date<<" - "<<time<<"  Xp genuine maker used\n";
            rite.close();
            x.oeminfo();
          }
          else if(yesno=='n'||yesno=='N')
          {
          	clrscr();
          	goto main_genuine;
          }
  		  }
          
          else if(yn=='2')
          {
          	clrscr();
            gotoxy(33,10); cout<<"Are you sure ?? ";
            gotoxy(19,12); cout<<"Press Y for YES \t  Press N for NO ";
            yesno2=getch();
            if(yesno2=='y'||yesno2=='Y')
            {
			  clrscr();
          	  x.wga();
          	  rite.open("c:\\doc_win.log",ios::app|ios::out);
          	  rite<<date<<" - "<<time<<"  WGA notication removed\n";
              rite.close();
              x.oeminfo();
  			}
  			else if(yesno2=='n'||yesno2=='N')
  			{
  				clrscr();
     			goto main_genuine;
  			}
          }
          
		  else if(yn=='3')
          {
          	clrscr();
            m.menu1();
          }
          
		  else if(yn=='q' || yn=='Q')
          {
          	clrscr();
		    gotoxy(20,12);  cout<<"Hope you like the way Doctor worked";  Sleep(1000);
            gotoxy(22,15);	cout<<"Thank you for using my software";
            Sleep(1000);
          	exit(0);
          }
            
       }

    /*  else if(ch[i]=='4' && l==1)
       {
          rite.open("c:\\doc_win.log",ios::app|ios::out);
          rite<<date<<" - "<<time<<"  Locker used\n";
          rite.close();

          clrscr();
          fstream in;
          filebuf *fb;
          fb=in.rdbuf();
   		 fb->open("c:\\windows\\system32\\dllcache\\pwd.txt",ios::in);
          if(fb->is_open())
   		 {
            fl.reenter();
          }
          else if(!fb->is_open())
          {
     			fl.enter();
   		 }
        }	*/

       else if(ch[i]=='4' && l==1)
       {
          clrscr();
          gotoxy(10,6); cout<<"Cleaning your system";
          for(int pp=0;pp<=2;pp++)
          {
            Sleep(1000);
            cout<<".";
          }
          cl.fn_clear();
          clrscr();
          gotoxy(10,12);	cout<<"Please wait";
          for(int x=0; x<2; x++)
          {
          	Sleep(1000);
          	cout<<".";
          }
		  gotoxy(10,18);	cout<<"It will take a several minutes ";
          cl.fn_allclear();
          Sleep(2000);
          cl.run_all();
          clrscr();
          gotoxy(39,29); cout<<"System Cleaned..\n\n";
          system("del c:\clean11.reg /f");
          rite.open("c:\\doc_win.log",ios::app|ios::out);
          rite<<date<<" - "<<time<<"  System Cleaned\n";
          rite.close();
       }

       else if(ch[i]=='6' && l==1)
       {
          clrscr();
          hp.help_p1();
          clrscr();
          goto menu;

       }

       else if(ch[i]=='q' && l==1)
       {
           clrscr();
           gotoxy(20,12);  cout<<"Hope you like the way Doctor worked";  Sleep(1000);
           gotoxy(22,15);	cout<<"Thank you for using my software";
           Sleep(1000);
           exit(0);
       }
       
       else if(ch[i]=='Q' && l==1)
       {
           clrscr();
           gotoxy(20,12);  cout<<"Hope you like the way Doctor worked";  Sleep(1000);
           gotoxy(22,15);	cout<<"Thank you for using my software";
           Sleep(1000);
           exit(0);
       }

       else if(ch[i]=='h' && l==1)
       {

           clrscr();      gotoxy(22,10);
           cout<<"This is the Administrator section";
           Sleep(1000);      gotoxy(25,12);
           cout<<"Protected for Developer only";
           Sleep(2000);
           clrscr();
           menu1();

       }

      else if(ch[i]=='7' || ch[i]=='8' || ch[i]=='9'|| ch[i]=='0'||l>1)
      {
           gotoxy(20,24);  cout<<"\aInvalid input! Please reenter";
           Sleep(800);     clrscr();
           goto menu;
      }


     else if(GetAsyncKeyState(VK_RETURN))
      {
          gotoxy(20,24);  cout<<"\aInvalid input! Please reenter";
           Sleep(800);     clrscr();
           goto menu;
      }

      Sleep(1000); gotoxy(15,30);  cout<<"Continue Service(Y/N): ";  con=getch();
       if(con=='n'||con=='N')
       exit(1);
       clrscr();
  		}while(con=='y'||'Y');


}


int main()
{
   gotoxy(27,11);  cout<<"WELCOME TO DOCTOR WIN";
   Sleep(800);
   gotoxy(42,13);  cout<<"by hyphen";
   Sleep(1000);       clrscr();

   m.menu1();
   return 0;
}
