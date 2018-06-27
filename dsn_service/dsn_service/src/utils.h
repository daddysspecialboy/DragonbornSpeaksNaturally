/*
* 工具函数
*/
#ifndef __DSN_UTILS_H__
#define __DSN_UTILS_H__

// copied from https://www.cnblogs.com/gakusei/articles/1585211.html
std::wstring ANSIToUnicode(const std::string& str);
std::string UnicodeToANSI(const std::wstring& str);
std::wstring UTF8ToUnicode(const std::string& str);
std::string UnicodeToUTF8(const std::wstring& str);

#endif