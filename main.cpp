#include <cstdlib>
#include <ctime>
#include <iostream>
#include <sapi.h>
#include <stdio.h>
#include <string.h>
#include <Windows.h>


using namespace std;







int main()
{



    system("color 0C");
   
     





    string phrase5 = "system rebooting";
    string command5 = "espeak \"" + phrase5 + "\"";
    const char* charCommand = command5.c_str();
    system(charCommand);



    //loding animation




    system("cls");


    int bar1 = 177, bar2 = 178;
    cout << "\n\n\n\n\t\t\t\t\t\t loading T1 MATRIX...";
    cout << "\n\n\n\n\t\t\t\t\t\t";

    for (int i = 0; i < 25; i++)


        cout << (char)bar1;
    std::cout << "\r";
    cout << "\t\t\t\t\t\t";
    for (int i = 0; i < 25; i++) {
        cout << (char)bar2;
        Sleep(40);



    }


    system("cls");



    //loding animation end


    //user name


    string name;
    cout << "\nenter user name\t";
    cin >> name;

    system("cls");












    std::cout << "\t\t---------------------------------------WELCOME---------------------------------------->" << endl;
    std::cout << "\t\t--------------------------i am your private virtual assistant------------------------->" << endl;
    std::cout << "\t\t-----------------------------------I AM T1 MATRIX------------------------------------->" << endl;









    string phrase = "hello" + name + "welcome";
    string command = "espeak \"" + phrase + "\"";
    const char* charCommand1 = command.c_str();
    system(charCommand1);












    //password area.






    std::string passwd;
    std::string text;





    cout << "Enter password" << endl;

    string phrase1 = "enter password";
    string command1 = "espeak \"" + phrase1 + "\"";
    const char* charCommand2 = command1.c_str();
    system(charCommand2);



    do {
        cin >> passwd;









        if (passwd == "9198181") {



            cout << "--------------------------------------------------------------------\n\n";

            system("cls"); //clear the garbage..


            //list of commands



















            cout << "accessed\n\n";
            system("cls");
            string phrase = "hi my name is T1 MATRIX  how can i help you today";
            string command = "espeak \"" + phrase + "\"";
            const char* charCommand3 = command.c_str();
            system(charCommand3);





            

            



 



            do {



                cout << "T1-MTX"<<char(221)<<char(198);
                cin >> text;



                if (text == "1") {


                    cout << "opening notepad" << endl;

                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start notepad.exe ");



                }



                else  if (text == "2") {


                    cout << "" << endl;

                    string phrase = "opening wordpad";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start  wordpad.exe");


                }



                else  if (text == "3") {


                    cout << "" << endl;

                    string phrase = "opening paint application";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start  mspaint.exe");


                }











                else  if (text == "4") {


                    cout << "opening chrome" << endl;

                    string phrase = "opening chrome";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand5 = command.c_str();
                    system(charCommand5);

                    system("start chrome.exe ");



                }















                else  if (text == "7") {



                    system("start time");



                }





                else  if (text == "yourself" || text == "tell aboute yourself") {


                    string phrase = "Hello my name is T1 MATRIX created on 3rd december 2024 by shahid";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand75 = command.c_str();
                    system(charCommand75);


                }






                else  if (text == "kali" || text == "Kali") {


                    cout << "opening kali" << endl;

                    string phrase = "opening kali linux please wait";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand6 = command.c_str();
                    system(charCommand6);

                    system("start kali");



                }





                else  if (text == "notepad++" || text == "Notepad++") {


                    cout << "opening Notepad++" << endl;

                    system("start notepad++.exe ");



                }



                else  if (text == "5") {


                    cout << "opening Regedit" << endl;

                    system("start regedit");



                }



                else  if (text == "6") {


                    cout << "--opening calculator" << endl;

                    string phrase = "opening calculator";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand67 = command.c_str();
                    system(charCommand67);

                    system("start calc.exe");



                }


                else  if (text == "raftare" || text == "raftare music") {


                    cout << "playing raftare" << endl;

                    string phrase = "palying raftare music";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand7 = command.c_str();
                    system(charCommand7);


                    system("start C:\\Users\\av\\Music\\music\\raftare.mp3");



                }










                else  if (text == "music" || text == "bgmusic") {




                    string phrase = "playing";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand7 = command.c_str();
                    system(charCommand7);


                    system("start C:\\Users\\av\\Music\\final-desert.mp3");



                }













                //exe apps list....












                else  if (text == "8") {


                    cout << "" << endl;

                    string phrase = "smss service";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start  smss.exe");



                }



                else  if (text == "9") {


                    cout << "" << endl;

                    string phrase = "diving";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start  csrss.exe");



                }



                else  if (text == "10") {


                    cout << "" << endl;

                    string phrase = "diving";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start  wininit.exe");



                }





                else  if (text == "11") {


                    cout << "" << endl;

                    string phrase = "opening";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start mdsched.exe");



                }







                else  if (text == "12") {


                    cout << "" << endl;

                    string phrase = "opening";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start msconfig.exe");



                }




                else  if (text == "13") {


                    cout << "" << endl;

                    string phrase = "opening";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start taskschd.msc");



                }






                else  if (text == "14") {


                    cout << "" << endl;

                    string phrase = "opening";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start eventvwr.msc");



                }



                //administartive tools


                else  if (text == "15") {


                    cout << "" << endl;

                    string phrase = "opening";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start diskmgmt.msc");



                }




                else  if (text == "16") {


                    cout << "" << endl;

                    string phrase = "opening";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start devmgmt.msc");



                }




                else  if (text == "17") {


                    cout << "" << endl;

                    string phrase = "opening";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start services.msc");



                }



                else  if (text == "18") {


                    cout << "" << endl;

                    string phrase = "opening";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start msinfo32.exe");



                }




                else  if (text == "19") {


                    cout << "" << endl;

                    string phrase = "opening";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start sysdm.cpl");



                }


                else  if (text == "20") {


                    cout << "" << endl;

                    string phrase = "opening";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start powershell.exe");



                }





                else  if (text == "21") {


                    cout << "" << endl;

                    string phrase = "opening";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start narrator.exe");



                }



                else  if (text == "22") {


                    cout << "" << endl;

                    string phrase = "opening";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start magnify.exe");



                }




                else  if (text == "23") {


                    cout << "" << endl;

                    string phrase = "opening";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start osk.exe");



                }



                else  if (text == "24") {


                    cout << "" << endl;

                    string phrase = "opening";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start taskmgr.exe");



                }




                else  if (text == "25") {


                    cout << "" << endl;

                    string phrase = "opening";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start resmon.exe");



                }



                else  if (text == "26") {


                    cout << "" << endl;

                    string phrase = "opening";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start sysedit.exe");



                }



                else  if (text == "27") {


                    cout << "" << endl;
                    
                    string phrase = "opening";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("start charmap.exe");



                }



                else  if (text == "777") {


                    cout << "" << endl;

                    string phrase = "opening INSTAGRAM PLEASE WAIT";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand4 = command.c_str();
                    system(charCommand4);

                    system("https://www.instagram.com/");



                    }



                 








                //service list...



                else  if (text == "list") {


                    cout << "opening service list" << endl;

                    string phrase = "opening service list";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand5 = command.c_str();
                    system(charCommand5);

                    cout << "1.notepad\n2.wordpad\n3.mspaint\n4.chrome browser\n5.regestri editor\n6.calculator\n7.time\n8.smss service\n9.csrss service\n10.wininit service\n11.mdsched\n12.mscofig\n13.taskschd\n14.event viewer\n15.disk manegment\n...more between 27\n";



                }












































                else  if (text == "tell me about your owner" || text == "who is your owner" || text == "owner") {




                    string phrase2 = "i was devloped by shahid";
                    string command2 = "espeak \"" + phrase2 + "\"";
                    const char* charCommand8 = command2.c_str();
                    system(charCommand8);





                }







                else if (text == "cat") {

                    string cattext;
                    cout << "OK enter some text" << endl;


                    cin >> cattext;

                    string phrase2 = cattext;
                    string command2 = "espeak \"" + phrase2 + "\"";
                    const char* charCommand8 = command2.c_str();
                    system(charCommand8);





                }






                else {
                    cout << "no data found" << text << endl;

                    string phrase = "no data found";
                    string command = "espeak \"" + phrase + "\"";
                    const char* charCommand9 = command.c_str();
                    system(charCommand9);

                }
            } while (1);





        }









        else {
            cout << "wrong password please try again" << endl << endl << endl;
            system("cls");
            cout << "--";





            string phrase = "wrong password access denite";
            string command = "espeak \"" + phrase + "\"";
            const char* charCommand10 = command.c_str();
            system(charCommand10);
        }









    }while (true);



    //password area end...
}
