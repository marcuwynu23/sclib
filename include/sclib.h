#ifndef __DLLEXPORT_H__
#define __DLLEXPORT_H__
#ifdef __cplusplus

extern "C"{
#endif

#ifdef BUILD_DLL
    #define DLL_IMPORT __declspec(dllexport)
#else
    #define DLL_IMPORT __declspec(dllimport)
#endif

void println(std::string str);
void print(std::string str);
std::string read(std::string str);
int readint(std::string str);
std::string readline(std::string str);

#ifdef __cplusplus
}
#endif
#endif 

 
