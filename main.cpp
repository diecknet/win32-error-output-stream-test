// this program just outputs one message to the Error Output Stream
// and one message to the Standard Output Stream
// I created it to test how PowerShell handles the Error Stream of
// native applications
#include <iostream>

int main()
{
    // \x1B[31m ... \x1B[0m are escape sequences to set the text color to red
    std::cerr << "\x1B[31m[Error] This is written to the error output stream...\x1B[0m" << std::endl;
    std::cout << "[Standard] This is written to the standard output stream..." << std::endl;
    return 0;
}
