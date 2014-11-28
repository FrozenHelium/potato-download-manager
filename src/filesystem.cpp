#include<iostream>
#include<string>
#include"filesystem/Directory.h"
#include"filesystem/File.h"
#include"common/helper.h"

int main() try {
    File b(".temporary");
    b.write("My name is\b",Node::FORCE);
    b.append(" hari.\b");
    b.append("\nI live\b in Nepal.");
    if (b.exists()){
        b.move("ok",Node::FORCE);
        std::cout << b.size() << std::endl;
        b.remove();
    }

    /*
    // Some Helper functions
    std::cout << formatTime(23823992)<<std::endl;
    std::cout << formatByte(1024*1024+343234)<<std::endl;
    std::cout << round(1243.234222343,3) << std::endl;
    std::cout << randomString()<<std::endl;
    */

 }
 catch (fs::filesystem_error& e){
    std::cout << e.what() << std::endl;
} catch (std::exception& e){
    std::cout << e.what() <<std::endl;
}
