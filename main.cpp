#include "Windows.h"
#include <iostream>
#include "string.h"

using namespace std;


int main() {
    MCIERROR err1, err2, err3, err4, err5, err6;

    LPTSTR errStr1 = new TCHAR[128];
    LPTSTR errStr2 = new TCHAR[128];
    LPTSTR errStr3 = new TCHAR[128];
    LPTSTR errStr4 = new TCHAR[128];
    LPTSTR errStr5 = new TCHAR[128];
    LPTSTR errStr6 = new TCHAR[128];
    std::string szCommand1 = "open C:\\Users\\vya\\CLionProjects\\WindowsProject1\\temperature.wav type waveaudio alias temperature";
    std::string szCommand2 = "open C:\\Users\\vya\\CLionProjects\\WindowsProject1\\thirty.wav type waveaudio alias thirty";
    std::string szCommand3 = "open C:\\Users\\vya\\CLionProjects\\WindowsProject1\\three.wav type waveaudio alias three";
    // temperature
    err1 = mciSendString(szCommand1.c_str(), NULL, 0, 0);
    mciGetErrorString(err1, errStr1, 128);
    if (err1 != 0) {
        cout << errStr1 << endl;
    }

    // thirty
    err2 = mciSendString(szCommand2.c_str(), NULL, 0, 0);
    mciGetErrorString(err2, errStr2, 128);
    if (err2 != 0) {
        cout << errStr2 << endl;
    }
// three
    err3 = mciSendString(szCommand3.c_str(), NULL, 0, 0);
    mciGetErrorString(err3, errStr3, 128);
    if (err3 != 0) {
        cout << errStr3 << endl;
    }

    string szCommand4 = "play temperature from 0 wait";
    err4 = mciSendString(szCommand4.c_str(), NULL, 0, 0);
    if (err4 != 0) {
        cout << errStr4 << endl;
    }

    string szCommand5 = "play thirty from 0 wait";
    err5 = mciSendString(szCommand5.c_str(), NULL, 0, 0);
    if (err5 != 0) {
        cout << errStr5 << endl;
    }

    string szCommand6 = "play three from 0 wait";
    err6 = mciSendString(szCommand6.c_str(), NULL, 0, 0);
    if (err6 != 0) {
        cout << errStr6 << endl;
    }
    cout << "end" << endl;
    return 0;
}