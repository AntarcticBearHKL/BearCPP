#include <iostream>
#include <fstream>
#include <boost/thread.hpp> 
#include <boost/filesystem.hpp> 
#include <boost/filesystem/fstream.hpp>

int main(int argc, char** argv){
	boost::filesystem::path p("F:\\Github/FileBear/Python/Windows/PlaygroundAlpha.bat");
	boost::filesystem::file_status s = boost::filesystem::status(p);
	std::cout << boost::filesystem::is_regular_file(s) << std::endl;
}