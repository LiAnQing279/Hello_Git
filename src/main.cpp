#include <iostream>
#include <string>

// 函数声明
bool findSubstring(const std::string& mainStr, const std::string& subStr);

int main() {
    std::string mainString = "Hello, world!";
    std::string substringToFind = "world";

    // 测试findSubstring函数
    if (findSubstring(mainString, substringToFind)) {
        std::cout << "子串 \"" << substringToFind << "\" 在主字符串中找到了。" << std::endl;
    } else {
        std::cout << "子串 \"" << substringToFind << "\" 在主字符串中未找到。" << std::endl;
    }

    return 0;
}

// 函数定义
bool findSubstring(const std::string& mainStr, const std::string& subStr) {
    // 如果子串长度大于主字符串长度，则不可能找到子串
    if (subStr.length() > mainStr.length()) {
        return false;
    }

    // 遍历主字符串
    for (size_t i = 0; i <= mainStr.length() - subStr.length(); ++i) {
        // 检查当前子串是否匹配
        bool match = true;
        for (size_t j = 0; j < subStr.length(); ++j) {
            if (mainStr[i + j] != subStr[j]) {
                match = false;
                break;
            }
        }

        // 如果找到匹配的子串，返回true
        if (match) {
            return true;
        }
    }

    // 如果遍历结束仍未找到匹配的子串，返回false
    return false;
}

